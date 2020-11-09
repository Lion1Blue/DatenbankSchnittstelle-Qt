#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createConnection();
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::createConnection(){


    //QSqlDatabase db = QSqlDatabase::addDatabase("QPQSL");
    //db.setHostName("127.0.0.1");
    //db.setDatabaseName("myDataBase");
    //db.setUserName("lion");
    //db.setPassword("123456789");
    //
    //if (!db.open()){
    //    QMessageBox::critical(0, QObject::tr("Database Error"), db.lastError().text());
    //    return false;
    //}

    return true;
}
