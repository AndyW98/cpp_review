#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Main Window");

    QWidget *wdg = new QWidget(this);
    QPushButton *button = new QPushButton(wdg);
    button->setText(tr("This is my test widget"));
    setCentralWidget(wdg);

    popupwindow *p = new popupwindow();

    QObject::connect(button,
                     SIGNAL(clicked()),
                     p,
                     SLOT(show()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

