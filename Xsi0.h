#pragma once

#include <QtWidgets/QWidget>
#include "ui_Xsi0.h"

class Xsi0 : public QWidget
{
    Q_OBJECT

public:
    Xsi0(QWidget *parent = Q_NULLPTR);

private:
    Ui::Xsi0Class ui;
};
