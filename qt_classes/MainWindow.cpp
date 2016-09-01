#include "MainWindow.h"

using namespace std;

MainWindow::MainWindow() {
    CreateMainLayout();
}

void MainWindow::CreateMainLayout() {
    setMenuBar(&qmMenuBar);

    qvbLayout.addWidget(&qtToolbar);
    qvbLayout.addWidget(&ggsGraph->view);

    qwCentralWidget.setLayout(&qvbLayout);
    setCentralWidget(&qwCentralWidget);
}

GraphGraphicsScene* MainWindow::getGraph() {
    return ggsGraph;
}