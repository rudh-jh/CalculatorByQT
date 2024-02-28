#include "widget.h"
#include "./ui_widget.h"
#include <iostream>
using namespace std;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("计算器");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pb1_clicked()
{
    expression += "1";
    ui->lineEdit->setText(expression);
}


void Widget::on_pb2_clicked()
{
    expression += "2";
    ui->lineEdit->setText(expression);
}

void Widget::on_pb3_clicked()
{
    expression += "3";
    ui->lineEdit->setText(expression);
}

void Widget::on_pb4_clicked()
{
    expression += "4";
    ui->lineEdit->setText(expression);
}

void Widget::on_pb5_clicked()
{
    expression += "5";
    ui->lineEdit->setText(expression);
}

void Widget::on_pb6_clicked()
{
    expression += "6";
    ui->lineEdit->setText(expression);
}

void Widget::on_pb7_clicked()
{
    expression += "7";
    ui->lineEdit->setText(expression);
}

void Widget::on_pb8_clicked()
{
    expression += "8";
    ui->lineEdit->setText(expression);
}

void Widget::on_pb9_clicked()
{
    expression += "9";
    ui->lineEdit->setText(expression);
}

void Widget::on_pb0_clicked()
{
    expression += "0";
    ui->lineEdit->setText(expression);
}

void Widget::on_pbleft_clicked()
{
    expression += "(";
    ui->lineEdit->setText(expression);
}

void Widget::on_pbright_clicked()
{
    expression += ")";
    ui->lineEdit->setText(expression);
}

void Widget::on_pbadd_clicked()
{
    expression += "+";
    ui->lineEdit->setText(expression);
}

void Widget::on_pbsub_clicked()
{
    expression += "-";
    ui->lineEdit->setText(expression);
}

void Widget::on_pbdivis_clicked()
{
    expression += "/";
    ui->lineEdit->setText(expression);
}

void Widget::on_pbmult_clicked()
{
    expression += "*";
    ui->lineEdit->setText(expression);
}

void Widget::on_pbC_clicked()
{
    expression.clear();
    num.clear();
    character.clear();
    ui->lineEdit->clear();
}

void Widget::on_pbdel_clicked()
{
    expression.chop(1);
    ui->lineEdit->setText(expression);
}

void string_to_int(const QString &expression,
                   QStack<int> &num,
                   QStack<QChar> &character)
{
    //分割数字
    QString pend_pro_num;
    pend_pro_num.clear();
    //左操作数
    int left_num;
    //右操作数
    int right_num;
    for (int i = 0;i<expression.length();i++)
    {
        //当前数据是数字
        if (expression[i]<='9'&&expression[i]>='0')
        {
            pend_pro_num += expression[i];
        }
        //是符号，则开始处理前面的数字
        else
        {
            //首先要处理前面待处理的数字，如果放到后面处理，会导致操作数不正确
            //如果待处理的数字数据不为空，入栈
            if (pend_pro_num.length()!=0)
            {
                //记录处理好的数字
                int n = 0;
                n = pend_pro_num.toInt();
                //将数字进栈
                num.push(n);
                //清空待处理数字字符串
                pend_pro_num.clear();
            }
            //如果字符栈内不为空，则要考虑优先级问题
            if(character.length()!=0)
            {
                //记录当前待处理的字符，switch只能使用int或char类型
                char switch_symbol = expression[i].toLatin1();
                switch (switch_symbol)
                {
                case '+':
                {
                    if (character.top() == '*'|| character.top() == '/')
                    {
                        right_num = num.pop();
                        left_num = num.pop();
                        int ret;
                        if(character.top() == '*')
                            ret = left_num * right_num;
                        else
                            ret = left_num / right_num;
                        //结果入栈
                        num.push(ret);
                        //乘除号计算完毕，出栈
                        character.pop();
                    }
                    break;
                }
                case '-':
                {
                    if (character.top() == '*'|| character.top() == '/')
                    {
                        right_num = num.pop();
                        left_num = num.pop();
                        int ret;
                        if(character.top() == '*')
                            ret = left_num * right_num;
                        else
                            ret = left_num / right_num;
                        //结果入栈
                        num.push(ret);
                    }
                    break;
                }
                case '*':
                {
                    break;
                }
                case '/':
                {
                    break;
                }
                case '(':
                {
                    break;
                }
                case ')':
                {
                    bool flag = true;
                    while(flag)
                    {
                        QChar symbol = character.pop();
                        char sym = symbol.toLatin1();
                        if(sym!='(')
                        {
                            right_num = num.pop();
                            left_num = num.pop();
                            switch (sym)
                            {
                            case '+':
                            {
                                int ret = left_num + right_num;
                                num.push(ret);
                                break;
                            }
                            case '-':
                            {
                                int ret = left_num - right_num;
                                num.push(ret);
                                break;
                            }
                            case '*':
                            {
                                int ret = left_num * right_num;
                                num.push(ret);
                                break;
                            }
                            case '/':
                            {
                                int ret = left_num / right_num;
                                num.push(ret);
                                break;
                            }
                            }
                        }
                        else
                        {
                            flag = false;
                        }
                    }
                }
                }
            }
            //")"不需要入栈，其他符号需要入栈
            if(expression[i]!=')'){
                //符号入栈
                character.push(expression[i]);
            }
        }
    }
    //当字符串最后一个为数字时，检查待处理数字是否处理完毕，未处理则处理入栈
    if(pend_pro_num.length()!=0)
    {
        //将最后面的数字入栈
        //记录处理好的数字
        int n = 0;
        n = pend_pro_num.toInt();
        //将数字进栈
        num.push(n);
    }
    //全部入栈完成，待处理数据处理完毕后，检查栈内是否为空，如果不空，继续运算
    QChar symbol;
    while(num.size()>1&&character.size()>0)
    {
        symbol = character.pop();
        char sym = symbol.toLatin1();
        right_num = num.pop();
        left_num = num.pop();
        switch (sym)
        {
        case '+':
        {
            int ret = left_num + right_num;
            num.push(ret);
            break;
        }
        case '-':
        {
            int ret = left_num - right_num;
            num.push(ret);
            break;
        }
        case '*':
        {
            int ret = left_num * right_num;
            num.push(ret);
            break;
        }
        case '/':
        {
            int ret = left_num / right_num;
            num.push(ret);
            break;
        }
        }
    }
}
//展示分割数字结果
void showStack(QStack<int> &num,QStack<QChar> &character,Ui::Widget *ui){
    QString exp ;
    if(num.size()!=1&&character.size()!=0){
        for (int i=0;i<num.size();i++){
            exp += QString::number(num.at(i));
            exp += ",";
        }
        exp += " | ";
        for(int i=0;i<character.size();i++){
            exp += character.at(i);
            exp += ",";
        }
    }else{
        exp = QString::number(num.top());
    }
    ui->lineEdit->setText(exp);
}
void Widget::on_pbequal_clicked()
{
    //处理算式，从字符串转为int,并进行计算
    string_to_int(expression,num,character);
    //显示分割数字的结果或计算结果
    showStack(num,character,ui);
}
