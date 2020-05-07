#ifndef SLIDER_H
#define SLIDER_H

#pragma once

#include <QWidget>
#include <QSlider>
#include <QLabel>

class Slider : public QWidget
{
    Q_OBJECT

public:
    Slider(QWidget *parent = nullptr);
    ~Slider();

private:
    QSlider *slider;
    QLabel *label;
};
#endif // SLIDER_H
