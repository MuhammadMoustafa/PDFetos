#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QFileDialog>
#include <QStringListModel>
#include <QPrinter>
#include <QMessageBox>
#include <QInputDialog>
#include <QDesktopServices>
#include <QKeyEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void on_start();

private slots:
    void on_btn_addImage_clicked();

    void on_btn_convert2pdf_clicked();

    void on_btn_removeall_clicked();

    void on_btn_imageup_clicked();

    void on_btn_imagedown_clicked();

    void on_btn_removeimage_clicked();

    void on_actionExit_triggered();

    void on_actionAbout_triggered();

protected:
     bool eventFilter(QObject *obj, QEvent *event);

private:
    Ui::MainWindow *ui;
    QStringList imagesPaths;
    QStringListModel *model;
    QString outputFilePath;

};

#endif // MAINWINDOW_H
