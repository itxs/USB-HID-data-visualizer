#ifndef CHARTVIEW_H
#define CHARTVIEW_H

#include <QObject>
#include <QWidget>
#include <QGraphicsView>

class ChartView : public QGraphicsView
{
    //Q_OBJECT
public:
    ChartView(QWidget *parent);
    void SetPointsData(QVector<QVector<QPoint>>* *pointsdata);
private:
    //QVector<QVector<QPoint>>* points;
private slots:
    void paintEvent(QPaintEvent *event);
};

#endif // CHARTVIEW_H
