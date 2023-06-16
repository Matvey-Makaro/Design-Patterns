#include "mainwindow.h"
#include "DrawingEditor.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    DrawingEditor drawingEditor;
    drawingEditor.DrawAll();

    w.show();
    return a.exec();
}
