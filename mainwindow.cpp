#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->centralwidget->setMinimumSize(1024, 768);
    //запретить пользователю растягивать
    ui->tableCntMt->verticalHeader()->setDefaultSectionSize(50);
    ui->tableCntMt->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableCntMt->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    QStringList list = {"file1", "file2", "file3", "file4", "file5", "file6", "file7"};
    ui->listWidget->addItems(list);



    //запретить пользователю растягивать
    ui->tableCoefs->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableCoefs->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //ui->aboutProgramMenu
}

MainWindow::~MainWindow()
{
    delete ui;
}

//#include "mainwindow.h"
//#include <QMenuBar>
//#include <QAction>
//#include <QVBoxLayout>
//#include <QLabel>

//MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
//{
//    // Создаем стек виджетов и два виджета для него
//    stackedWidget = new QStackedWidget(this);
//    QWidget *page1 = new QWidget();
//    QWidget *page2 = new QWidget();

//    // Добавляем виджеты в стек
//    stackedWidget->addWidget(page1);
//    stackedWidget->addWidget(page2);

//    // Добавляем метки на страницы для идентификации
//    QVBoxLayout *layout1 = new QVBoxLayout(page1);
//    QLabel *label1 = new QLabel("This is Page 1");
//    layout1->addWidget(label1);

//    QVBoxLayout *layout2 = new QVBoxLayout(page2);
//    QLabel *label2 = new QLabel("This is Page 2");
//    layout2->addWidget(label2);

//    // Создаем меню для переключения между страницами
//    QMenuBar *menuBar = new QMenuBar(this);
//    QAction *action1 = new QAction("Switch to Page 1", this);
//    QAction *action2 = new QAction("Switch to Page 2", this);
//    menuBar->addAction(action1);
//    menuBar->addAction(action2);
//    setMenuBar(menuBar);

//    // Подключаем действия к слоту switchPage
//    connect(action1, &QAction::triggered, [this](){stackedWidget->setCurrentIndex(0);});
//    connect(action2, &QAction::triggered, [this](){stackedWidget->setCurrentIndex(1);});

//    // Делаем стек виджетов центральным виджетом главного окна
//    setCentralWidget(stackedWidget);
//}

//MainWindow::~MainWindow()
//{
//}

