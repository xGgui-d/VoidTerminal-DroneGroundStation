/********************************************************************************
** Form generated from reading UI file 'note.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTE_H
#define UI_NOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Note
{
public:
    QAction *act_doc;
    QAction *act_edit;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Note)
    {
        if (Note->objectName().isEmpty())
            Note->setObjectName(QString::fromUtf8("Note"));
        Note->resize(800, 600);
        act_doc = new QAction(Note);
        act_doc->setObjectName(QString::fromUtf8("act_doc"));
        act_edit = new QAction(Note);
        act_edit->setObjectName(QString::fromUtf8("act_edit"));
        centralwidget = new QWidget(Note);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Note->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Note);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Note->setMenuBar(menubar);
        statusbar = new QStatusBar(Note);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Note->setStatusBar(statusbar);

        retranslateUi(Note);

        QMetaObject::connectSlotsByName(Note);
    } // setupUi

    void retranslateUi(QMainWindow *Note)
    {
        Note->setWindowTitle(QCoreApplication::translate("Note", "MainWindow", nullptr));
        act_doc->setText(QCoreApplication::translate("Note", "\346\226\207\344\273\266", nullptr));
        act_edit->setText(QCoreApplication::translate("Note", "\347\274\226\350\276\221", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Note: public Ui_Note {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTE_H
