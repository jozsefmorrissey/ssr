#include <QObject>
#include <QTimer>
#include <QCoreApplication>
#include <iostream>
#include <QThread>

class Terminator : public QObject {
public slots:
    void threadFunc();
    void timerFunc();

public:
    QCoreApplication* a;
    int seconds;

    Terminator(QCoreApplication* a, int _seconds);
    void terminate();
};
