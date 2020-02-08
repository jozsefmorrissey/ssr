#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <pthread.h>
#include <PageRecord.h>
#include <QCoreApplication>

class CTerminator {

    private:
        int seconds;
        PageRecord * page_record;

        static void * Terminate(void * cterminator) {
            CTerminator * cterm = ((CTerminator*)cterminator);
            std::cout << "This program will exit in " << cterm->seconds << " seconds\n";
            sleep(cterm->seconds);
            cterm->page_record->StopPage(true);
            QCoreApplication::exit(0);
        }


    public:
        CTerminator(int _seconds, PageRecord * _page_record) {
            seconds = _seconds;
            page_record = _page_record;
            pthread_t pth;
            int i = 0;

            pthread_create(&pth, NULL, Terminate, &this);
        }
};
