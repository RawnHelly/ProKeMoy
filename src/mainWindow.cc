#include "mainWindow.h"

#include <QDebug>
#include <iostream>

void MainWindow::PrintName() {
    qDebug() << "This is a debug message";
}

void MainWindow::SetName(const std::string& name) {
    m_name = name;
}
