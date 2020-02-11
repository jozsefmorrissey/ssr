#include <Terminator.h>

Terminator::Terminator(int _seconds, PageRecord * _page_record) {
  termData = (TermData*)malloc(sizeof(TermData));
  termData->seconds = _seconds;
  termData->page_record = _page_record;
  pthread_t pth;

  std::cout << termData->seconds << "\n";
  pthread_create(&pth, NULL, Terminate, termData);
}

void * Terminator::Terminate(void * _termData) {
    TermData * termData = ((TermData*)_termData);
    std::cout << "This program will exit in " << termData->seconds << " seconds\n";
    sleep(termData->seconds);
    termData->page_record->StopPage(true);
    free(termData);
    QCoreApplication::exit(0);
    return NULL;
}
