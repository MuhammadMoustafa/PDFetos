#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusBar->setStyleSheet("color: red");
    model = new QStringListModel(this);
    ui->btn_convert2pdf->setDisabled(true);
    ui->btn_imagedown->setDisabled(true);
    ui->btn_imageup->setDisabled(true);
    ui->btn_removeimage->setDisabled(true);
    ui->btn_removeall->setDisabled(true);
    ui->dspnbox_height->setDisabled(true);
    ui->dspnbox_width->setDisabled(true);
    qApp->installEventFilter(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event){
    if(obj == ui->centralWidget && event->type() == QEvent::KeyPress)
    {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        switch(keyEvent->key()){
           case Qt::Key_Shift:
                on_btn_imageup_clicked();
                break;
            case Qt::Key_Control:
                on_btn_imagedown_clicked();
                break;
            case Qt::Key_Backspace:
                on_btn_removeimage_clicked();
                break;
            case Qt::Key_Delete:
                on_btn_removeall_clicked();
                break;
            default:
                break;
        }
    }
    return false;
}


void MainWindow::on_btn_addImage_clicked()
{

    QStringList paths = QFileDialog::getOpenFileNames(this,tr("Browse for Images"), "", tr("Image Files (*.png *.jpg *.bmp)"));

    if(!paths.isEmpty()){

        imagesPaths.append(paths);
        imagesPaths.sort();
        model->setStringList(imagesPaths);
        ui->listview_images->setModel(model);

        if (!imagesPaths.isEmpty()){
            ui->btn_convert2pdf->setEnabled(true);
            ui->btn_imagedown->setEnabled(true);
            ui->btn_imageup->setEnabled(true);
            ui->btn_removeimage->setEnabled(true);
            ui->btn_removeall->setEnabled(true);
            ui->dspnbox_height->setEnabled(true);
            ui->dspnbox_width->setEnabled(true);
        }

        ui->statusBar->showMessage("Images Added", 5000);
    }
}

void MainWindow::on_btn_convert2pdf_clicked()
{

    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), fileName, tr("pdf files (*.pdf)"));

    if (!fileName.isEmpty()){
        QPrinter printer(QPrinter::HighResolution);

        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setOutputFileName(fileName);
        QPainter painter;
        painter.begin(&printer);

        for (int i=0; i< imagesPaths.length(); i++){

            QPixmap pixmap(imagesPaths[i]);

            float start_point_x = 2480* (3.85 - ui->dspnbox_width->value()) / 2.0;
            float start_point_y = 3508* (3.95 - ui->dspnbox_height->value()) / 2.0;

            painter.drawPixmap(QRect(start_point_x, start_point_y, ui->dspnbox_width->value()*2480, ui->dspnbox_height->value()*3508), pixmap);

            ui->statusBar->showMessage("Pdf File Created Successfully", 5000);

            if(i < imagesPaths.length() - 1){
                if (! printer.newPage()) {
                    ui->statusBar->showMessage("failed in flushing page to disk, disk full?");
                }
            }
        }

        painter.end();

        QMessageBox msgBox;
        msgBox.setWindowTitle("Converting To PDF");
        msgBox.setText("Your Pdf file has been created succefully.");
        msgBox.setInformativeText("Do you want to open the file?");
        msgBox.setStandardButtons(QMessageBox::Open | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Open);
        int ret = msgBox.exec();

        if(ret == QMessageBox::Open){
            QDesktopServices::openUrl(QUrl(fileName, QUrl::TolerantMode));
        }
    }
}

void MainWindow::on_btn_removeall_clicked()
{
    ui->btn_convert2pdf->setDisabled(true);
    ui->btn_imagedown->setDisabled(true);
    ui->btn_imageup->setDisabled(true);
    ui->btn_removeimage->setDisabled(true);
    ui->btn_removeall->setDisabled(true);
    ui->dspnbox_height->setDisabled(true);
    ui->dspnbox_width->setDisabled(true);
    imagesPaths.clear();

    model->setStringList(imagesPaths);
    ui->listview_images->setModel(model);

    ui->statusBar->showMessage("Images Removed", 2000);

}

void MainWindow::on_btn_imageup_clicked()
{
    int index = ui->listview_images->currentIndex().row();

    if(index > 0){
        QString temp = imagesPaths.at(index - 1);
        imagesPaths.replace(index -1 , imagesPaths.at(index));
        imagesPaths.replace(index, temp);
        model->setStringList(imagesPaths);
        ui->listview_images->setModel(model);
    }
    else if(index == -1){
        ui->statusBar->showMessage("please select an image first", 1000);
    }
}

void MainWindow::on_btn_imagedown_clicked()
{
    int index = ui->listview_images->currentIndex().row();

    if(index > -1 && index < imagesPaths.length() -1){
        QString temp = imagesPaths.at(index + 1);
        imagesPaths.replace(index +1 , imagesPaths.at(index));
        imagesPaths.replace(index, temp);
        model->setStringList(imagesPaths);
        ui->listview_images->setModel(model);

    }
    else if(index == -1){
        ui->statusBar->showMessage("please select an image first", 1000);
    }
}

void MainWindow::on_btn_removeimage_clicked()
{
    int index = ui->listview_images->currentIndex().row();

    ui->statusBar->showMessage("Image Removed", 1000);

    if(index > -1 && index < imagesPaths.length() ){
        imagesPaths.removeAt(index);
        model->setStringList(imagesPaths);
        ui->listview_images->setModel(model);

        if(imagesPaths.length() == 0 ){
            ui->btn_convert2pdf->setDisabled(true);
            ui->btn_imagedown->setDisabled(true);
            ui->btn_imageup->setDisabled(true);
            ui->btn_removeimage->setDisabled(true);
            ui->btn_removeall->setDisabled(true);
        }
    }
    else if(index == -1){
        ui->statusBar->showMessage("please select an image first", 1000);
    }
}

void MainWindow::on_actionExit_triggered()
{
   this->~MainWindow();
}

void MainWindow::on_actionAbout_triggered()
{
    on_start();
}

void MainWindow::on_start()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("About");
    msgBox.setTextFormat(Qt::RichText);   //this is what makes the links clickable
    msgBox.setText("The program is a free program based on qt/c++ opensource library<br><br>"
                   "Created and Tested By:<br>"
                   "Omar Gamal<br>"
                   "Muhammad Moustafa<br><br>"
                   "For Suggestions and Error Reporting Plz Conatct us:<br>"
                   "<a href='mailto:c.omargamal@gamil.com'>c.omargamal@gamil.com</a><br>"
                   "<a href='mailto:muhammadmoustafa22@gmail.com'>muhammadmoustafa22@gmail.com</a><br><br>"
                   "If you want to have fun you may visit<br>"
                   "<a href='https://www.facebook.com/Cartera11/?ref=br_rs'>https://www.facebook.com/Cartera11/?ref=br_rs</a><br><br><br>"
                   "For more updates please visit <a href='https://github.com/MuhammadMoustafa/PDFetos'>https://github.com/MuhammadMoustafa/PDFetos</a><br><br><br>"
                   "Your Current Verion is 1.01 .... Released On Novemver 1st,2017");
    msgBox.exec();
}
