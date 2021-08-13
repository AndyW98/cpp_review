#ifndef POPUPWINDOW_H
#define POPUPWINDOW_H

#include <QDialog>
#include <QLabel>
#include <QHBoxLayout>
#include <string>

namespace Ui {
class popupwindow;
}

class popupwindow : public QDialog
{
    Q_OBJECT

public:
    explicit popupwindow(QWidget *parent = nullptr);
    ~popupwindow();
    void set_text(std::string);

private:
    Ui::popupwindow *ui;
    std::string text_display;
};

#endif // POPUPWINDOW_H
