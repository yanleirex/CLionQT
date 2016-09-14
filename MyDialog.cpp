//
// Created by yanlei on 16-9-14.
//

#include "MyDialog.h"

#include <QLabel>
#include <QHBoxLayout>
#include <QtWidgets/QMessageBox>

MyDialog::MyDialog(QWidget *parent) : QDialog(parent)
{
    QLabel *findLabel = new QLabel(tr("Enter contacts's name"));
    lineEdit = new QLineEdit;
    findButton = new QPushButton(tr("&Find"));
    findText = "";

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(findLabel);
    layout->addWidget(lineEdit);
    layout->addWidget(findButton);

    setLayout(layout);
    setWindowTitle(tr("Find Contact"));

    connect(findButton, SIGNAL(clicked()), this, SLOT(findClicked()));
    connect(findButton, SIGNAL(clicked()), this, SLOT(accept()));

}

void MyDialog::findClicked()
{
    QString text = lineEdit->text();
    if(text.isEmpty())
    {
        QMessageBox::information(this, tr("Empty Field"), tr("Please enter a name"));
        return;
    }
    else
    {
        findText = text;
        lineEdit->clear();
    }
}

QString MyDialog::getFindText()
{
    return findText;
}