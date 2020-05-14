#ifndef EEGLAB_H
#define EEGLAB_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class EEGLAB; }
QT_END_NAMESPACE

class EEGLAB : public QMainWindow
{
    Q_OBJECT

public:
    EEGLAB(QWidget *parent = nullptr);
    ~EEGLAB();

private:
    Ui::EEGLAB *ui;
};
#endif // EEGLAB_H
