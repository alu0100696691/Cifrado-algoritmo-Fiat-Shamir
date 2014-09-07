/********************************************************************************
** Form generated from reading UI file 'fiatshamir.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIATSHAMIR_H
#define UI_FIATSHAMIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FiatShamir
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *pw;
    QLabel *label_4;
    QLineEdit *qw;
    QLabel *label_5;
    QLineEdit *sw;
    QLineEdit *iw;
    QLabel *label_6;
    QLabel *iteracionw;
    QLabel *label_8;
    QLineEdit *xw;
    QLineEdit *ew;
    QLabel *label_9;
    QPushButton *guardar;
    QLabel *label_7;
    QTextEdit *resultadosw;
    QPushButton *salir;
    QPushButton *ejecutar;
    QLabel *label_10;
    QLineEdit *nw;
    QLabel *label_11;
    QLineEdit *vw;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FiatShamir)
    {
        if (FiatShamir->objectName().isEmpty())
            FiatShamir->setObjectName(QStringLiteral("FiatShamir"));
        FiatShamir->resize(963, 493);
        centralWidget = new QWidget(FiatShamir);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 20, 341, 71));
        QFont font;
        font.setPointSize(49);
        label->setFont(font);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(30, 110, 371, 301));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(1);
        frame->setMidLineWidth(1);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 10, 351, 281));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 0, 161, 17));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 30, 16, 17));
        pw = new QLineEdit(frame_2);
        pw->setObjectName(QStringLiteral("pw"));
        pw->setGeometry(QRect(50, 30, 113, 27));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 30, 16, 17));
        qw = new QLineEdit(frame_2);
        qw->setObjectName(QStringLiteral("qw"));
        qw->setGeometry(QRect(190, 30, 113, 27));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 70, 16, 17));
        sw = new QLineEdit(frame_2);
        sw->setObjectName(QStringLiteral("sw"));
        sw->setGeometry(QRect(50, 70, 113, 27));
        iw = new QLineEdit(frame_2);
        iw->setObjectName(QStringLiteral("iw"));
        iw->setGeometry(QRect(190, 70, 113, 27));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(170, 70, 16, 17));
        iteracionw = new QLabel(frame_2);
        iteracionw->setObjectName(QStringLiteral("iteracionw"));
        iteracionw->setGeometry(QRect(30, 130, 91, 17));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 160, 16, 17));
        xw = new QLineEdit(frame_2);
        xw->setObjectName(QStringLiteral("xw"));
        xw->setGeometry(QRect(50, 160, 113, 27));
        ew = new QLineEdit(frame_2);
        ew->setObjectName(QStringLiteral("ew"));
        ew->setGeometry(QRect(190, 160, 113, 27));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(170, 160, 16, 17));
        guardar = new QPushButton(frame_2);
        guardar->setObjectName(QStringLiteral("guardar"));
        guardar->setGeometry(QRect(130, 210, 99, 27));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(430, 110, 151, 21));
        QFont font1;
        font1.setPointSize(18);
        label_7->setFont(font1);
        resultadosw = new QTextEdit(centralWidget);
        resultadosw->setObjectName(QStringLiteral("resultadosw"));
        resultadosw->setGeometry(QRect(430, 140, 501, 191));
        salir = new QPushButton(centralWidget);
        salir->setObjectName(QStringLiteral("salir"));
        salir->setGeometry(QRect(830, 370, 99, 27));
        ejecutar = new QPushButton(centralWidget);
        ejecutar->setObjectName(QStringLiteral("ejecutar"));
        ejecutar->setGeometry(QRect(690, 370, 99, 27));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(630, 110, 21, 17));
        nw = new QLineEdit(centralWidget);
        nw->setObjectName(QStringLiteral("nw"));
        nw->setEnabled(false);
        nw->setGeometry(QRect(660, 110, 113, 27));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(790, 110, 21, 17));
        vw = new QLineEdit(centralWidget);
        vw->setObjectName(QStringLiteral("vw"));
        vw->setEnabled(false);
        vw->setGeometry(QRect(820, 110, 113, 27));
        FiatShamir->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FiatShamir);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 963, 25));
        FiatShamir->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FiatShamir);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FiatShamir->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FiatShamir);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FiatShamir->setStatusBar(statusBar);

        retranslateUi(FiatShamir);

        QMetaObject::connectSlotsByName(FiatShamir);
    } // setupUi

    void retranslateUi(QMainWindow *FiatShamir)
    {
        FiatShamir->setWindowTitle(QApplication::translate("FiatShamir", "FiatShamir", 0));
        label->setText(QApplication::translate("FiatShamir", "Fiat-Shamir", 0));
        label_2->setText(QApplication::translate("FiatShamir", "ENTRADA DE DATOS:", 0));
        label_3->setText(QApplication::translate("FiatShamir", "p:", 0));
        pw->setText(QApplication::translate("FiatShamir", "7", 0));
        label_4->setText(QApplication::translate("FiatShamir", "q:", 0));
        qw->setText(QApplication::translate("FiatShamir", "5", 0));
        label_5->setText(QApplication::translate("FiatShamir", "s:", 0));
        sw->setText(QApplication::translate("FiatShamir", "3", 0));
        iw->setText(QApplication::translate("FiatShamir", "2", 0));
        label_6->setText(QApplication::translate("FiatShamir", "i:", 0));
        iteracionw->setText(QApplication::translate("FiatShamir", "iteracion:", 0));
        label_8->setText(QApplication::translate("FiatShamir", "x:", 0));
        xw->setText(QApplication::translate("FiatShamir", "16", 0));
        ew->setText(QApplication::translate("FiatShamir", "0", 0));
        label_9->setText(QApplication::translate("FiatShamir", "e:", 0));
        guardar->setText(QApplication::translate("FiatShamir", "GUARDAR", 0));
        label_7->setText(QApplication::translate("FiatShamir", "RESULTADOS:", 0));
        salir->setText(QApplication::translate("FiatShamir", "SALIR", 0));
        ejecutar->setText(QApplication::translate("FiatShamir", "EJECUTAR", 0));
        label_10->setText(QApplication::translate("FiatShamir", "N:", 0));
        label_11->setText(QApplication::translate("FiatShamir", "V:", 0));
    } // retranslateUi

};

namespace Ui {
    class FiatShamir: public Ui_FiatShamir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIATSHAMIR_H
