#ifndef SEAFIGHTQT_H
#define SEAFIGHTQT_H

#include <QWidget>

namespace Ui {
class seaFightQt;
}

class seaFightQt : public QWidget
{
    Q_OBJECT

public:
    explicit seaFightQt(QWidget *parent = 0);
    ~seaFightQt();

private:
    Ui::seaFightQt *ui;
};

#endif // SEAFIGHTQT_H
