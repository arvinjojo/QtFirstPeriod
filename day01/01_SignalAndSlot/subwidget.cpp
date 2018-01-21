#include "subwidget.h"

SubWidget::SubWidget(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("small one");
    b.setParent(this);
    b.setText("return");
    connect(&b, &QPushButton::clicked, this, &SubWidget::sendSlot);
    resize(400, 300);
}

void SubWidget::sendSlot()
{
    emit mySignal();
    emit mySignal(250, "一带一路");
}
