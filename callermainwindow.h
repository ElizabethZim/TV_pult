
#ifndef UNTITLED5_CALLERMAINWINDOW_H
#define UNTITLED5_CALLERMAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <exception>
#include <QRegExp>

class CallerMainWindow : public QMainWindow {
Q_OBJECT
public:
    QLineEdit *lineEdit = nullptr;
    int Volume = 0;
    int Canal = 0;

    CallerMainWindow(QWidget *parent = nullptr) : QMainWindow(parent) {}

public slots:
    void slot1() {Canal = 1; DataUpdate();};
    void slot2() {Canal = 2; DataUpdate();};
    void slot3() {Canal = 3; DataUpdate();};
    void slot4() {Canal = 4; DataUpdate();};
    void slot5() {Canal = 5; DataUpdate();};
    void slot6() {Canal = 6; DataUpdate();};
    void slot7() {Canal = 7; DataUpdate();};
    void slot8() {Canal = 8; DataUpdate();};
    void slot9() {Canal = 9; DataUpdate();};
    void slot0() {Canal = 0; DataUpdate();};

    void slotPlus() {
        if(Volume < 100) {
            Volume += 10;
            DataUpdate();
        }
    };
    void slotMinus() {
        if(Volume != 0) {
            Volume -= 10;
            DataUpdate();
        }
    };

    void slotLeft() {
        if (Canal > 0)
            Canal -= 1;
        else
            Canal = 9;
        DataUpdate();
    };
    void slotRight() {
        if (Canal < 9)
            ++Canal;
        else
            Canal = 0;
        DataUpdate();
    };
    void DataUpdate(){
        lineEdit->setText("Canal: " + QString::number(Canal) + " Volume: " + QString::number(Volume) + " % ");
    };

};

#endif //UNTITLED5_CALLERMAINWINDOW_H
