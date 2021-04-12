#include "NuevoDialog.h"
#include "ui_NuevoDialog.h"

NuevoDialog::NuevoDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::NuevoDialog)
{
    ui->setupUi(this);
    configureSpinBox(ui->numeroDeColumnasSpinBox, 0, INT_MAX);
    configureSpinBox(ui->numeroDeFilasSpinBox, 0, INT_MAX);
}

NuevoDialog::~NuevoDialog()
{
    delete ui;
}

int NuevoDialog::getNumeroDeFilas() const
{
    return ui->numeroDeFilasSpinBox->value();
}

int NuevoDialog::getNumeroDeColumnas() const
{
    return ui->numeroDeColumnasSpinBox->value();
}

void NuevoDialog::on_buttonBox_accepted()
{
    accept();
}

void NuevoDialog::on_buttonBox_rejected()
{
    reject();
}

void NuevoDialog::configureSpinBox(QSpinBox *spinBox, int min, int max) const
{
    spinBox->setMinimum(min);
    spinBox->setMaximum(max);
}
