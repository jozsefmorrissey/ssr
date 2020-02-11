#include <Terminator.h>

Terminator::Terminator(int _seconds, PageRecord * _page_record) {
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
    timer->start(seconds * 1000);
}

void Terminator::timerFunc() {
    std::cout << "timerFunc\n";
    QCoreApplication::exit(0);
}
