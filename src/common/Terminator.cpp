#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <pthread.h>
#include <PageRecord.h>
#include <QCoreApplication>

class Terminator {

    private:
      struct TermData {
        int seconds;
        int minutes;
        PageRecord * page_record;
      };

      TermData * termData;

      static void * Terminate(void * _termData) {
          TermData * termData = ((TermData*)_termData);
          std::cout << "This program will exit in " << termData->seconds << " seconds\n";
          sleep(termData->seconds);
          termData->page_record->StopPage(true);
          free(termData);
          QCoreApplication::exit(0);
          return NULL;
      }


    public:
        Terminator(int _seconds, PageRecord * _page_record) {
            termData = (TermData*)malloc(sizeof(TermData));
            termData->seconds = _seconds;
            termData->page_record = _page_record;
            pthread_t pth;

            std::cout << termData->seconds << "\n";
            pthread_create(&pth, NULL, Terminate, termData);
      }
};
