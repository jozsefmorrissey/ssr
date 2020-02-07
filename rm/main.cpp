#include <QCoreApplication>
#include <iostream>
#include <terminator.cpp>
#include <pthread.h>


int main(int argc, char *argv[])
{
    std::cout << "Hello, World!\n";
    QCoreApplication a(argc, argv);

    Terminator term(&a, 20);
//    CTerminator term(20);

    std::cout << "Goodbye, World!\n";

    while(true){
//        std::cout << "loop";
    }

    return 0;
 //   return a.exec();
}

