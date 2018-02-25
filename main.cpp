
#include <QApplication>
#include <QLabel>

#include "notepad.h"

using namespace std;

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Notepad win;
    win.show();

    return app.exec();
}


/*
#include <QCoreApplication>
#include <QFileInfo>
#include <QFile>
#include "Utils.h"
#include <iostream>

int main()
{

    char m_str[10] = "123456789";
    QFileInfo info("/home/syys/CLionProjects/qttest/CMakeLists.txt");
    std::cout << info.fileName().toStdString();
    auto info = c2finfo("/home/syys/CLionProjects/qttest/CMakeLists.txt");
    std::cout << info.fileName().toStdString();
}
*/