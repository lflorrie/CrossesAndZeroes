#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedLayout>
#include <includes/game.h>
#include <includes/menu.h>

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = nullptr);
	~MainWindow();
private slots:
	void exit();
	void start();
	void back();
private:
	Game			*game;
	Menu			*menu;
	QStackedLayout *stack;
};
#endif // MAINWINDOW_H
