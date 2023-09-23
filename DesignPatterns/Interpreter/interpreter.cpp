#include "interpreter.h"

QString PlayContext::getText()
{
    return m_text;
}

void PlayContext::setText(QString text)
{
    m_text = text;
}

void Expression::Interpret(PlayContext *context)
{
    if(context->getText().length() == 0)
        return;
    else
    {
        QString playKey = context->getText().mid(0, 1);
        context->setText(context->getText().mid(2));
        double playValue = context->getText().mid(0, context->getText().indexOf(" ")).toDouble();
        context->setText(context->getText().mid(context->getText().indexOf(" ") + 1));
        Excute(playKey, playValue);
    }
}

void Note::Excute(QString key, double value)
{
    QString note = "";
    if(key == "C")
        note = "1";
    else if(key == "D")
        note = "2";
    else if(key == "E")
        note = "3";
    else if(key == "F")
        note = "4";
    else if(key == "G")
        note = "5";
    else if(key == "A")
        note = "6";
    else if(key == "B")
        note = "7";
    qDebug()<<note;
}

void Scale::Excute(QString key, double value)
{
    QString scale = "";
    switch((int)value)
    {
    case 1:
        scale = "低音";
        break;
    case 2:
        scale = "中音";
        break;
    case 3:
        scale = "高音";
        break;
    }
    qDebug()<<scale;
}

void Speed::Excute(QString key, double value)
{
    QString speed;
    if(value < 500)
        speed = "快速";
    else if(value >= 1000)
        speed = "慢速";
    else
        speed = "中速";
    qDebug()<<speed;
}
