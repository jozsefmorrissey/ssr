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
    int seconds;
    Terminator(int _seconds, PageRecord * _page_record);

private:
    void terminate();
};
