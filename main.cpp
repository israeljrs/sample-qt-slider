#include "slider.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Slider w;
    w.setWindowTitle("Sample QSlider");
    w.show();

    return a.exec();
}
