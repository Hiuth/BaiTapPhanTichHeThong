#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_BaiTap.h"

class BaiTap : public QMainWindow
{
    Q_OBJECT

public:
    BaiTap(QWidget *parent = nullptr);
    ~BaiTap();

private:
    Ui::BaiTapClass ui;
};
