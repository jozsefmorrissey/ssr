#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <pthread.h>
#include <QCoreApplication>

class CTerminator {

    private:
        int seconds;
        PageRecord * page_record;

        static void *terminate(void * cterminator) {
            std::cout << "This program will exit in " << ((CTerminator*)cterminator)->seconds << " seconds\n";
            sleep(((CTerminator*)cterminator->seconds));
            page_record.StopPage();
            QCoreApplication::exit(0);
        }


    public:
        CTerminator(int _seconds, PageRecord * _page_record) {
            seconds = _seconds;
            page_record = _page_record;
            pthread_t pth;
            int i = 0;

            pthread_create(&pth, NULL, terminate, this);
        }
};
