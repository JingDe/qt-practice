#ifndef SIGNAL_SLOT_H
#define SIGNAL_SLOT_H

#include <QMainWindow>

namespace Ui {
class signal_slot;
}

class signal_slot : public QMainWindow
{
    Q_OBJECT

public:
    explicit signal_slot(QWidget *parent = 0);
    ~signal_slot();

private:
    Ui::signal_slot *ui;
};

#endif // SIGNAL_SLOT_H
