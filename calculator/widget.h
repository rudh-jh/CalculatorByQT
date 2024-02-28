#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QStack>
#include <math.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pb1_clicked();
    void on_pb2_clicked();
    void on_pb3_clicked();
    void on_pb4_clicked();
    void on_pb5_clicked();
    void on_pb6_clicked();
    void on_pb7_clicked();
    void on_pb8_clicked();
    void on_pb9_clicked();
    void on_pb0_clicked();
    void on_pbleft_clicked();
    void on_pbright_clicked();
    void on_pbadd_clicked();
    void on_pbsub_clicked();
    void on_pbmult_clicked();
    void on_pbdivis_clicked();
    void on_pbC_clicked();
    void on_pbdel_clicked();
    void on_pbequal_clicked();

private:
    Ui::Widget *ui;
    QString expression;
    QStack<int> num;
    QStack<QChar> character;
};
#endif // WIDGET_H
