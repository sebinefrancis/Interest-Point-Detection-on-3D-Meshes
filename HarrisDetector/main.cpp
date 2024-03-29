#include <QApplication>
#include <QDesktopWidget>

#include "window.h"
#include <iostream>
#include "mesh.h"
#include "harrisoperator.h"
#include <string>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Window window;

    window.resize(window.sizeHint());

    int desktopArea = QApplication::desktop()->width() *
                     QApplication::desktop()->height();
    int widgetArea = window.width() * window.height();

    window.setWindowTitle("3D Harris Interest Points Detector");

    if (((float)widgetArea / (float)desktopArea) < 0.75f)
        window.show();
    else
        window.showMaximized();




    return app.exec();
}
