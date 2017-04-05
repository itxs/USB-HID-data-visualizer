#include "chartview.h"

ChartView::ChartView(QWidget* parent)
{
}

void ChartView::SetPointsData(QVector<QVector<QPoint> > **pointsdata)
{
    //points = pointsdata;
}

void ChartView::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);/*
    foreach(QPoint point, points)
    {
        painter.drawPolyline(point);
    }*/
}
