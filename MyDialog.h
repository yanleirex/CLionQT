//
// Created by yanlei on 16-9-14.
//

#ifndef CLIONQT_MYDIALOG_H
#define CLIONQT_MYDIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QLineEdit>
#include <QString>

class MyDialog : public QDialog{
    Q_OBJECT
public:
    MyDialog(QWidget *parent=0);
    QString getFindText();

public slots:
    void findClicked();

private:
    QPushButton *findButton;
    QLineEdit *lineEdit;
    QString findText;
};


#endif //CLIONQT_MYDIALOG_H
