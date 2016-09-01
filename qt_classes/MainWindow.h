#ifndef GRAPHDRAWINGTESTS_MAINWINDOW_H
#define GRAPHDRAWINGTESTS_MAINWINDOW_H

#include "GraphGraphicsScene.h"

#include <QtCore>
#include <QtGui>
#include <QMainWindow>
#include <QHBoxLayout>
#include <QMenuBar>
#include <QToolBar>
#include <QPushButton>

using namespace std;

class MainWindow : public QMainWindow {

Q_OBJECT

public:
    MainWindow();
    GraphGraphicsScene* getGraph();

private:
    void CreateMainLayout();

    QVBoxLayout qvbLayout;
    QHBoxLayout qhbZoomButtons;
    QWidget qwCentralWidget;
    QToolBar qtToolbar;
    QMenuBar qmMenuBar;
    GraphGraphicsScene *ggsGraph = new GraphGraphicsScene(500, 500);
};


#endif //GRAPHDRAWINGTESTS_MAINWINDOW_H