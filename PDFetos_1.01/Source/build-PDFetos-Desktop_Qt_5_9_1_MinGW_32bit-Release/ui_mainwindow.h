/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionExit;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QListView *listview_images;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_addImage;
    QPushButton *btn_imageup;
    QPushButton *btn_imagedown;
    QPushButton *btn_removeimage;
    QPushButton *btn_removeall;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *lbl_width;
    QDoubleSpinBox *dspnbox_width;
    QVBoxLayout *verticalLayout_3;
    QLabel *lbl_height;
    QDoubleSpinBox *dspnbox_height;
    QPushButton *btn_convert2pdf;
    QMenuBar *menuBar;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(836, 610);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_3 = new QHBoxLayout(centralWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        listview_images = new QListView(centralWidget);
        listview_images->setObjectName(QStringLiteral("listview_images"));

        horizontalLayout_2->addWidget(listview_images);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btn_addImage = new QPushButton(centralWidget);
        btn_addImage->setObjectName(QStringLiteral("btn_addImage"));

        verticalLayout->addWidget(btn_addImage);

        btn_imageup = new QPushButton(centralWidget);
        btn_imageup->setObjectName(QStringLiteral("btn_imageup"));

        verticalLayout->addWidget(btn_imageup);

        btn_imagedown = new QPushButton(centralWidget);
        btn_imagedown->setObjectName(QStringLiteral("btn_imagedown"));

        verticalLayout->addWidget(btn_imagedown);

        btn_removeimage = new QPushButton(centralWidget);
        btn_removeimage->setObjectName(QStringLiteral("btn_removeimage"));

        verticalLayout->addWidget(btn_removeimage);

        btn_removeall = new QPushButton(centralWidget);
        btn_removeall->setObjectName(QStringLiteral("btn_removeall"));

        verticalLayout->addWidget(btn_removeall);


        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        verticalLayout_2->addWidget(label_5);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label_4);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label_3);


        verticalLayout_5->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        lbl_width = new QLabel(centralWidget);
        lbl_width->setObjectName(QStringLiteral("lbl_width"));
        sizePolicy.setHeightForWidth(lbl_width->sizePolicy().hasHeightForWidth());
        lbl_width->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(lbl_width);

        dspnbox_width = new QDoubleSpinBox(centralWidget);
        dspnbox_width->setObjectName(QStringLiteral("dspnbox_width"));
        dspnbox_width->setMaximum(4);
        dspnbox_width->setValue(3.85);

        verticalLayout_4->addWidget(dspnbox_width);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lbl_height = new QLabel(centralWidget);
        lbl_height->setObjectName(QStringLiteral("lbl_height"));
        sizePolicy.setHeightForWidth(lbl_height->sizePolicy().hasHeightForWidth());
        lbl_height->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(lbl_height);

        dspnbox_height = new QDoubleSpinBox(centralWidget);
        dspnbox_height->setObjectName(QStringLiteral("dspnbox_height"));
        dspnbox_height->setAccelerated(false);
        dspnbox_height->setProperty("showGroupSeparator", QVariant(false));
        dspnbox_height->setMaximum(4);
        dspnbox_height->setValue(3.95);

        verticalLayout_3->addWidget(dspnbox_height);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout);

        btn_convert2pdf = new QPushButton(centralWidget);
        btn_convert2pdf->setObjectName(QStringLiteral("btn_convert2pdf"));

        verticalLayout_5->addWidget(btn_convert2pdf);


        horizontalLayout_2->addLayout(verticalLayout_5);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 836, 21));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setUnderline(true);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        font1.setKerning(false);
        statusBar->setFont(font1);
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuAbout->menuAction());
        menuAbout->addAction(actionAbout);
        menuAbout->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionAbout->setShortcut(QApplication::translate("MainWindow", "F1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("MainWindow", "F12", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        btn_addImage->setText(QApplication::translate("MainWindow", "Add Images", Q_NULLPTR));
        btn_imageup->setText(QApplication::translate("MainWindow", "Image Up (Shift)", Q_NULLPTR));
        btn_imagedown->setText(QApplication::translate("MainWindow", "Image Down (Ctrl)", Q_NULLPTR));
        btn_removeimage->setText(QApplication::translate("MainWindow", "Remove Image (backspace)", Q_NULLPTR));
        btn_removeall->setText(QApplication::translate("MainWindow", "Remove All (delete)", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Paper Properties", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Please choose  a value from 0 to 4", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "We Recommend:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "For a Full Screen Page .... width=3.85 Height = 3.95", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "For a High Resolution Page .... width=3 Height = 3", Q_NULLPTR));
        lbl_width->setText(QApplication::translate("MainWindow", "Width", Q_NULLPTR));
        lbl_height->setText(QApplication::translate("MainWindow", "Height", Q_NULLPTR));
        btn_convert2pdf->setText(QApplication::translate("MainWindow", "Convert to Pdf", Q_NULLPTR));
        menuAbout->setTitle(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
