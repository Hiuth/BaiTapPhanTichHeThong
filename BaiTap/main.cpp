#include "BaiTap.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BaiTap w;
    w.show();
    return a.exec();
}
