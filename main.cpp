#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>

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
};

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // 创建主窗口
    MainWindow window;
    window.resize(250, 150);
    window.show();

    return app.exec();
}


#include "main.moc"  // 添加这一行
