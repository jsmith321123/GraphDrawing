//default libraries
#include <iostream>

//Qt libraries
#include <QtCore>
#include <QApplication>

//Custom headers
#include "qt_classes/MainWindow.h"

using namespace std;

int main(int argc, char **argv) {
	QApplication app (argc, argv);
    MainWindow mw;
    mw.show();
    app.exec();

    cout << "test" << endl;

    return 0;
}