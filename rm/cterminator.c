#include <stdio.h>
#include <stdlib.h>
#include <thread>
#include <unistd.h>
#include <iostream>
#include <pthread.h>

class CTerminator {

//    QCoreApplication* a;
    private:
        int seconds;

        static void *terminate(void * arg) {
            std::cout << "This program will exit in " << *((int*)arg) << " seconds\n";
            sleep(*((int*)arg));
            std::cout << "sHUT DOWN!\n";
     //       a.quit();
        }


    public:
        CTerminator(int _seconds) {
            seconds = _seconds;
            pthread_t pth;
            int i = 0;

            pthread_create(&pth, NULL, terminate, &seconds);
        }
};
