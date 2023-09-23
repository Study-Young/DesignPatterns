#ifndef INTERPRETER_H
#define INTERPRETER_H

#include <QString>
#include <QDebug>

class PlayContext
{
public:
    QString getText();
    void setText(QString text);

private:
    QString m_text;
};

class Expression
{
public:
    void Interpret(PlayContext *context);
    virtual void Excute(QString key, double value) = 0;
};

class Note : public Expression
{
public:
    void Excute(QString key, double value);
};

class Scale : public Expression
{
    void Excute(QString key, double value);
};

class Speed : public Expression
{
    void Excute(QString key, double value);
};

#endif // INTERPRETER_H
