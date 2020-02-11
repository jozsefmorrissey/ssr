#include <QObject>
#include <QTimer>
#include <QCoreApplication>
#include <iostream>
#include <QThread>

class Terminator : public QObject {
  public:
    Terminator(int _seconds, PageRecord * _page_record);
};
