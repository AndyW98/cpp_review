#include "popupwindow.h"
#include "ui_popupwindow.h"

popupwindow::popupwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popupwindow)
{
    ui->setupUi(this);
    setWindowTitle("Popup Window");

    // Create label and layout objects
    QLabel *label = new QLabel(this);
    QHBoxLayout *layout = new QHBoxLayout();

    // Set the label text and add to the layout
    this->set_text("Hello World!");
    label->setText(text_display.c_str());
    layout->addWidget(label, 0, Qt::AlignCenter);

    // Display layout on window
    setLayout(layout);
}

popupwindow::~popupwindow()
{
    delete ui;
}

void popupwindow::set_text(std::string new_text){
    text_display = new_text;
}
