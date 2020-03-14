#include "includes/mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	stack = new QStackedLayout();
	menu = new Menu(this);

	stack->addWidget(menu);

	connect(menu, SIGNAL(but_exit_clicked()), this, SLOT(exit()));
	connect(menu, SIGNAL(but_start_clicked()), this, SLOT(start()));
	setGeometry(x(), y(), 800, 600);
}

MainWindow::~MainWindow()
{
	delete menu;
	delete stack;
}

void MainWindow::exit()
{
	close();
}

void MainWindow::start()
{
	game = new Game(this);
	connect(game, SIGNAL(but_back_clicked()), this, SLOT(back()));
	stack->addWidget(game);
	stack->setCurrentIndex(1);
}

void MainWindow::back()
{
	stack->setCurrentIndex(0);
	delete game;
}

