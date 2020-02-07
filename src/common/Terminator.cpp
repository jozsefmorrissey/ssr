#ifndef TERMINATOR
#define TERMINATOR

#include <terminator.h>

Terminator::Terminator(QCoreApplication* _a, int _seconds) {
    a = _a;
    std::cout << "constructor\n";
    terminate();
}

int counter=0;
void Terminator::terminate() {
    if (counter == 0) {
        std::cout << "terminate";
        QThread t;
        this->connect(&t, SIGNAL(finished()), this, SLOT(threadFunc()));
        t.start();

    }
}

void Terminator::threadFunc() {
    std::cout << "threadFunc\n";
    QTimer *timer = new QTimer(this);
    timer->singleShot(3000, this, SLOT(timerFunc()));
    timer->start(1000);
}

void Terminator::timerFunc() {
    std::cout << "timerFunc\n";
    a->quit();
}

#endif // TERMINATOR
