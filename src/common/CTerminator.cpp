#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <pthread.h>
#include <PageRecord.h>
#include <QCoreApplication>

class CTerminator {

    private:
      struct TermData {
        int seconds;
        PageRecord * page_record;
      } TermData;

        TermData termData;

        static void * Terminate(void * _termData) {
            TermData * termData = ((CTerminator*)_termData);
            std::cout << "This program will exit in " << termData->seconds << " seconds\n";
            sleep(termData->seconds);
            termData->page_record->StopPage(true);
            QCoreApplication::exit(0);
        }


    public:
        CTerminator(int _seconds, PageRecord * _page_record) {
            termData.seconds = 20;
            termData.page_record = _page_record;
            pthread_t pth;
            int i = 0;

            pthread_create(&pth, NULL, Terminate, &termData);
        }
};
