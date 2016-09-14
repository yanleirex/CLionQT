//#include <iostream>
#include <QtWidgets/QApplication>
#include "MyDialog.h"

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);
    //std::cout << "Hello, World!" << std::endl;
    MyDialog dialog;
    dialog.show();
    //dialog.setWindowTitle("FindDialog");
    //dialog.show();
    return a.exec();
}