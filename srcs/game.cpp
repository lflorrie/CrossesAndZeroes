#include "includes/game.h"
#include "ui_game.h"

Game::Game(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::Game)
{
	ui->setupUi(this);
	back = new QPushButton("Main menu",this);
	connect(back, SIGNAL(clicked()), this, SIGNAL(but_back_clicked()));
}

Game::~Game()
{
	delete ui;
}
