#ifndef CONDITIONNEUR_H
#define CONDITIONNEUR_H

#include <QWidget>
#include <QTimer>
#include "../include/uldaq.h"
#include "../include/UlDaqDeviceManager.h"
#include "../include/UlException.h"
#include "../include/DioDevice.h"
#include "../include/AoDevice.h"
#include "../include/AiDevice.h"
#include "../include/CtrDevice.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Conditionneur; }
QT_END_NAMESPACE

class Conditionneur : public QWidget
{
    Q_OBJECT

public:
    Conditionneur(QWidget *parent = nullptr);
    ~Conditionneur();

private slots:
    void on_pushButton_quitter_clicked();
    void on_pushButton_lancerMesure_clicked();

private:
    Ui::Conditionneur *ui;
    QTimer timer;
};
#endif // CONDITIONNEUR_H
