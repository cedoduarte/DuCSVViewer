#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui
{
class MainWindow;
}

class QStandardItemModel;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_actionAbrir_triggered();
    void on_actionGuardar_triggered();
    void on_actionQuitar_aplicaci_n_triggered();
    void on_actionNuevo_triggered();
private:
    QString getValueAt(int ix, int jx) const;
    void setValueAt(int ix, int jx, const QString &value);

    Ui::MainWindow *ui;
    QStandardItemModel *mModel;
};

#endif // MAINWINDOW_H
