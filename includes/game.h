#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class Game;
}

class Game : public QWidget
{
	Q_OBJECT
signals:
	void but_back_clicked();

public:
	explicit Game(QWidget *parent = nullptr);
	~Game();

private:
	QPushButton *back;
	Ui::Game *ui;
};

#endif // GAME_H
