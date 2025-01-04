#include "mainWindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow window;
    window.PrintName();
    window.show();

    return app.exec();
}