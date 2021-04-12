#ifndef NUEVODIALOG_H
#define NUEVODIALOG_H

#include <QDialog>

namespace Ui
{
class NuevoDialog;
}

class QSpinBox;

class NuevoDialog : public QDialog
{
    Q_OBJECT
public:
    explicit NuevoDialog(QWidget *parent = nullptr);
    ~NuevoDialog();
    int getNumeroDeFilas() const;
    int getNumeroDeColumnas() const;
private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
private:
    void configureSpinBox(QSpinBox *spinBox, int min, int max) const;

    Ui::NuevoDialog *ui;
};

#endif // NUEVODIALOG_H
