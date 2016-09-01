#ifndef GRAPHDRAWINGTESTS_GRAPHGRAPHICSSCENE_H
#define GRAPHDRAWINGTESTS_GRAPHGRAPHICSSCENE_H

#include <iostream>
#include <QGraphicsView>
#include <QGraphicsLineItem>
#include <QGraphicsTextItem>
#include <QTimer>

using namespace std;


class GraphGraphicsScene : public QGraphicsScene {
    Q_OBJECT

public:
    GraphGraphicsScene(int w, int h);
    void DrawGraph();

    int iScale_ = 20;


    QGraphicsView view;

public slots:
    long tick();

private:
    int iCurrentTick = 0;

    void DrawAxis();
    void DrawGrid(int scale); //this is only called when it's needed i.e. not every tick only when the scale or the scene position has moved.
    void MoveScene(int newX, int newY); //moves the top left hand corner of the scene to the specified position.
    void DrawLabels();

    vector<QGraphicsLineItem *> GridLines_;
    vector<QGraphicsTextItem *> Labels_;

    int iLinesToStore_ = 200; //Dictates the amount of lines that will be stored in the GridLines_ vector
    int iTextItemsToStore_ = 200;

    int iMinY_;
    int iMinX_;
    int iMaxY_;
    int iMaxX_;

    int width_;
    int height_;

    int xOffset_ = 0;
    int yOffset_ = 0;

    QPen AxisPen_;
    QPen GridPen_;

    QGraphicsLineItem yAxis_;
    QGraphicsLineItem xAxis_;

    QTimer *timer_ = new QTimer();
};


#endif //GRAPHDRAWINGTESTS_GRAPHGRAPHICSSCENE_H