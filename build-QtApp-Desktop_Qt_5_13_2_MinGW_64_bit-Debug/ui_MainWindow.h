/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actImport_epoch_info;
    QAction *actImport_event_info;
    QAction *actOpen;
    QAction *actSave;
    QAction *actSave_As;
    QAction *actQuit;
    QAction *actExport;
    QAction *actSelect_Data;
    QAction *actSelect_epochs_events;
    QAction *actChanging_sampling_rate;
    QAction *actFilter_the_data;
    QAction *actRun_ICA;
    QAction *actData_statistics;
    QAction *actTime_frequency_transforms;
    QAction *actAbout_ComplexityLAB;
    QAction *actContact_us;
    QAction *actEuro_EDF_file;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuImport_data;
    QMenu *menuEdit;
    QMenu *menuTools;
    QMenu *menuPlot;
    QMenu *menuDatasets;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(532, 443);
        actImport_epoch_info = new QAction(MainWindow);
        actImport_epoch_info->setObjectName(QString::fromUtf8("actImport_epoch_info"));
        actImport_event_info = new QAction(MainWindow);
        actImport_event_info->setObjectName(QString::fromUtf8("actImport_event_info"));
        actOpen = new QAction(MainWindow);
        actOpen->setObjectName(QString::fromUtf8("actOpen"));
        actSave = new QAction(MainWindow);
        actSave->setObjectName(QString::fromUtf8("actSave"));
        actSave_As = new QAction(MainWindow);
        actSave_As->setObjectName(QString::fromUtf8("actSave_As"));
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        actExport = new QAction(MainWindow);
        actExport->setObjectName(QString::fromUtf8("actExport"));
        actSelect_Data = new QAction(MainWindow);
        actSelect_Data->setObjectName(QString::fromUtf8("actSelect_Data"));
        actSelect_epochs_events = new QAction(MainWindow);
        actSelect_epochs_events->setObjectName(QString::fromUtf8("actSelect_epochs_events"));
        actChanging_sampling_rate = new QAction(MainWindow);
        actChanging_sampling_rate->setObjectName(QString::fromUtf8("actChanging_sampling_rate"));
        actFilter_the_data = new QAction(MainWindow);
        actFilter_the_data->setObjectName(QString::fromUtf8("actFilter_the_data"));
        actRun_ICA = new QAction(MainWindow);
        actRun_ICA->setObjectName(QString::fromUtf8("actRun_ICA"));
        actData_statistics = new QAction(MainWindow);
        actData_statistics->setObjectName(QString::fromUtf8("actData_statistics"));
        actTime_frequency_transforms = new QAction(MainWindow);
        actTime_frequency_transforms->setObjectName(QString::fromUtf8("actTime_frequency_transforms"));
        actAbout_ComplexityLAB = new QAction(MainWindow);
        actAbout_ComplexityLAB->setObjectName(QString::fromUtf8("actAbout_ComplexityLAB"));
        actContact_us = new QAction(MainWindow);
        actContact_us->setObjectName(QString::fromUtf8("actContact_us"));
        actEuro_EDF_file = new QAction(MainWindow);
        actEuro_EDF_file->setObjectName(QString::fromUtf8("actEuro_EDF_file"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 532, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuImport_data = new QMenu(menuFile);
        menuImport_data->setObjectName(QString::fromUtf8("menuImport_data"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuPlot = new QMenu(menuBar);
        menuPlot->setObjectName(QString::fromUtf8("menuPlot"));
        menuDatasets = new QMenu(menuBar);
        menuDatasets->setObjectName(QString::fromUtf8("menuDatasets"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuPlot->menuAction());
        menuBar->addAction(menuDatasets->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(menuImport_data->menuAction());
        menuFile->addAction(actImport_epoch_info);
        menuFile->addAction(actImport_event_info);
        menuFile->addAction(actExport);
        menuFile->addSeparator();
        menuFile->addAction(actOpen);
        menuFile->addSeparator();
        menuFile->addAction(actSave);
        menuFile->addAction(actSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actQuit);
        menuImport_data->addAction(actEuro_EDF_file);
        menuEdit->addAction(actSelect_Data);
        menuEdit->addAction(actSelect_epochs_events);
        menuTools->addAction(actChanging_sampling_rate);
        menuTools->addAction(actFilter_the_data);
        menuTools->addAction(actRun_ICA);
        menuPlot->addAction(actData_statistics);
        menuPlot->addAction(actTime_frequency_transforms);
        menuHelp->addAction(actAbout_ComplexityLAB);
        menuHelp->addAction(actContact_us);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow Application", nullptr));
        actImport_epoch_info->setText(QCoreApplication::translate("MainWindow", "Import epoch info", nullptr));
        actImport_event_info->setText(QCoreApplication::translate("MainWindow", "Import event info", nullptr));
        actOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actSave_As->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        actQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actExport->setText(QCoreApplication::translate("MainWindow", "Export", nullptr));
        actSelect_Data->setText(QCoreApplication::translate("MainWindow", "Select Data", nullptr));
        actSelect_epochs_events->setText(QCoreApplication::translate("MainWindow", "Select epochs/events", nullptr));
        actChanging_sampling_rate->setText(QCoreApplication::translate("MainWindow", "Changing sampling rate", nullptr));
        actFilter_the_data->setText(QCoreApplication::translate("MainWindow", "Filter the data", nullptr));
        actRun_ICA->setText(QCoreApplication::translate("MainWindow", "Run ICA", nullptr));
        actData_statistics->setText(QCoreApplication::translate("MainWindow", "Data statistics", nullptr));
        actTime_frequency_transforms->setText(QCoreApplication::translate("MainWindow", "Time-frequency transforms", nullptr));
        actAbout_ComplexityLAB->setText(QCoreApplication::translate("MainWindow", "About ComplexityLAB", nullptr));
        actContact_us->setText(QCoreApplication::translate("MainWindow", "Contact us", nullptr));
        actEuro_EDF_file->setText(QCoreApplication::translate("MainWindow", "From European Data Format.EDF file", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuImport_data->setTitle(QCoreApplication::translate("MainWindow", "Import data", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuPlot->setTitle(QCoreApplication::translate("MainWindow", "Plot", nullptr));
        menuDatasets->setTitle(QCoreApplication::translate("MainWindow", "Datasets", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
