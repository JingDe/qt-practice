#ifndef NEWSPAPER_H
#define NEWSPAPER_H

#include<QObject>

class Newspaper: public QObject{//只有继承了QObject类的类，才具有信号槽的能力。
    Q_OBJECT//凡是QObject类（不管是直接子类还是间接子类），都应该在第一行代码写上Q_OBJECT。
public:
    Newspaper(const QString& name):m_name(name){}

    void send()
    {
        emit newPaper(m_name);//发出newPaper()信号
    }

signals:
    void newPaper(const QString &name) const;

private:
    QString m_name;
};

#endif // NEWSPAPER_H
