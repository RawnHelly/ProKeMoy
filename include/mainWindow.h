// mainwindow.h

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <iostream>

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr) : QWidget(parent)
    {
        // 创建按钮和标签
        QPushButton *button = new QPushButton("Click me!", this);
        QLabel *label = new QLabel("Hello, Qt!", this);

        // 创建布局管理器
        QVBoxLayout *layout = new QVBoxLayout(this);
        layout->addWidget(button);
        layout->addWidget(label);

        // 连接按钮点击事件
        connect(button, &QPushButton::clicked, [label]() {
            label->setText("Button clicked!");
        });

        // 设置窗口属性
        setLayout(layout);
        setWindowTitle("Qt5 Example");
    }

    void PrintName();
    void SetName(const std::string& name);

private:
    std::string m_name;
};
