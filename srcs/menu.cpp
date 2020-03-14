#include "includes/menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::Menu)
{
	ui->setupUi(this);

}

Menu::~Menu()
{
	delete ui;
}

void Menu::on_but_exit_clicked()
{
	emit but_exit_clicked();
}

void Menu::on_but_start_clicked()
{
	emit but_start_clicked();
}
