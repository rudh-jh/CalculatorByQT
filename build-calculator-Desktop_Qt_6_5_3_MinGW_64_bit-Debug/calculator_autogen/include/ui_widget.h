/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pbmult;
    QPushButton *pb8;
    QPushButton *pb6;
    QPushButton *pbdel;
    QPushButton *pb5;
    QPushButton *pbsub;
    QPushButton *pb4;
    QPushButton *pb3;
    QPushButton *pbC;
    QPushButton *pbright;
    QPushButton *pb9;
    QPushButton *pbleft;
    QPushButton *pb7;
    QPushButton *pbadd;
    QPushButton *pb1;
    QPushButton *pbdivis;
    QPushButton *pb0;
    QPushButton *pb2;
    QPushButton *pbequal;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(410, 508);
        QFont font;
        font.setPointSize(12);
        Widget->setFont(font);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 10, 391, 101));
        QFont font1;
        font1.setPointSize(24);
        lineEdit->setFont(font1);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 130, 401, 371));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pbmult = new QPushButton(widget);
        pbmult->setObjectName("pbmult");
        pbmult->setMinimumSize(QSize(60, 60));
        pbmult->setMaximumSize(QSize(60, 60));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(11);
        pbmult->setFont(font2);

        gridLayout->addWidget(pbmult, 1, 3, 1, 1);

        pb8 = new QPushButton(widget);
        pb8->setObjectName("pb8");
        pb8->setMinimumSize(QSize(60, 60));
        pb8->setMaximumSize(QSize(60, 60));
        pb8->setFont(font2);

        gridLayout->addWidget(pb8, 1, 1, 1, 1);

        pb6 = new QPushButton(widget);
        pb6->setObjectName("pb6");
        pb6->setMinimumSize(QSize(60, 60));
        pb6->setMaximumSize(QSize(60, 60));
        pb6->setFont(font2);

        gridLayout->addWidget(pb6, 2, 2, 1, 1);

        pbdel = new QPushButton(widget);
        pbdel->setObjectName("pbdel");
        pbdel->setMinimumSize(QSize(60, 60));
        pbdel->setMaximumSize(QSize(60, 60));
        pbdel->setFont(font2);

        gridLayout->addWidget(pbdel, 0, 3, 1, 1);

        pb5 = new QPushButton(widget);
        pb5->setObjectName("pb5");
        pb5->setMinimumSize(QSize(60, 60));
        pb5->setMaximumSize(QSize(60, 60));
        pb5->setFont(font2);

        gridLayout->addWidget(pb5, 2, 1, 1, 1);

        pbsub = new QPushButton(widget);
        pbsub->setObjectName("pbsub");
        pbsub->setMinimumSize(QSize(60, 60));
        pbsub->setMaximumSize(QSize(60, 60));
        pbsub->setFont(font2);

        gridLayout->addWidget(pbsub, 0, 2, 1, 1);

        pb4 = new QPushButton(widget);
        pb4->setObjectName("pb4");
        pb4->setMinimumSize(QSize(60, 60));
        pb4->setMaximumSize(QSize(60, 60));
        pb4->setFont(font2);

        gridLayout->addWidget(pb4, 2, 0, 1, 1);

        pb3 = new QPushButton(widget);
        pb3->setObjectName("pb3");
        pb3->setMinimumSize(QSize(60, 60));
        pb3->setMaximumSize(QSize(60, 60));
        pb3->setFont(font2);

        gridLayout->addWidget(pb3, 3, 2, 1, 1);

        pbC = new QPushButton(widget);
        pbC->setObjectName("pbC");
        pbC->setMinimumSize(QSize(60, 60));
        pbC->setMaximumSize(QSize(60, 60));
        pbC->setFont(font2);

        gridLayout->addWidget(pbC, 0, 0, 1, 1);

        pbright = new QPushButton(widget);
        pbright->setObjectName("pbright");
        pbright->setMinimumSize(QSize(60, 60));
        pbright->setMaximumSize(QSize(60, 60));
        pbright->setFont(font2);

        gridLayout->addWidget(pbright, 4, 2, 1, 1);

        pb9 = new QPushButton(widget);
        pb9->setObjectName("pb9");
        pb9->setMinimumSize(QSize(60, 60));
        pb9->setMaximumSize(QSize(60, 60));
        pb9->setFont(font2);

        gridLayout->addWidget(pb9, 1, 2, 1, 1);

        pbleft = new QPushButton(widget);
        pbleft->setObjectName("pbleft");
        pbleft->setMinimumSize(QSize(60, 60));
        pbleft->setMaximumSize(QSize(60, 60));
        pbleft->setFont(font2);

        gridLayout->addWidget(pbleft, 4, 0, 1, 1);

        pb7 = new QPushButton(widget);
        pb7->setObjectName("pb7");
        pb7->setMinimumSize(QSize(60, 60));
        pb7->setMaximumSize(QSize(60, 60));
        pb7->setFont(font2);

        gridLayout->addWidget(pb7, 1, 0, 1, 1);

        pbadd = new QPushButton(widget);
        pbadd->setObjectName("pbadd");
        pbadd->setMinimumSize(QSize(60, 60));
        pbadd->setMaximumSize(QSize(60, 60));
        pbadd->setFont(font2);

        gridLayout->addWidget(pbadd, 0, 1, 1, 1);

        pb1 = new QPushButton(widget);
        pb1->setObjectName("pb1");
        pb1->setMinimumSize(QSize(60, 60));
        pb1->setMaximumSize(QSize(60, 60));
        pb1->setFont(font2);

        gridLayout->addWidget(pb1, 3, 0, 1, 1);

        pbdivis = new QPushButton(widget);
        pbdivis->setObjectName("pbdivis");
        pbdivis->setMinimumSize(QSize(60, 60));
        pbdivis->setMaximumSize(QSize(60, 60));
        pbdivis->setFont(font2);

        gridLayout->addWidget(pbdivis, 2, 3, 1, 1);

        pb0 = new QPushButton(widget);
        pb0->setObjectName("pb0");
        pb0->setMinimumSize(QSize(60, 60));
        pb0->setMaximumSize(QSize(60, 60));
        pb0->setFont(font2);

        gridLayout->addWidget(pb0, 4, 1, 1, 1);

        pb2 = new QPushButton(widget);
        pb2->setObjectName("pb2");
        pb2->setMinimumSize(QSize(60, 60));
        pb2->setMaximumSize(QSize(60, 60));
        pb2->setFont(font2);

        gridLayout->addWidget(pb2, 3, 1, 1, 1);

        pbequal = new QPushButton(widget);
        pbequal->setObjectName("pbequal");
        pbequal->setMinimumSize(QSize(60, 60));
        pbequal->setMaximumSize(QSize(60, 120));
        pbequal->setFont(font2);

        gridLayout->addWidget(pbequal, 3, 3, 2, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pbmult->setText(QCoreApplication::translate("Widget", "*", nullptr));
        pb8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        pb6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        pbdel->setText(QCoreApplication::translate("Widget", "\342\206\220", nullptr));
        pb5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        pbsub->setText(QCoreApplication::translate("Widget", "-", nullptr));
        pb4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        pb3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        pbC->setText(QCoreApplication::translate("Widget", "C", nullptr));
        pbright->setText(QCoreApplication::translate("Widget", ")", nullptr));
        pb9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        pbleft->setText(QCoreApplication::translate("Widget", "(", nullptr));
        pb7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        pbadd->setText(QCoreApplication::translate("Widget", "+", nullptr));
        pb1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        pbdivis->setText(QCoreApplication::translate("Widget", "/", nullptr));
        pb0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        pb2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        pbequal->setText(QCoreApplication::translate("Widget", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
