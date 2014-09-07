#include "fiatshamir.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FiatShamir w;
    w.show();
    
    return a.exec();
}
