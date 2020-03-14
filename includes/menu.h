#ifndef MENU_H
#define MENU_H

#include <QWidget>

namespace Ui {
class Menu;
}

class Menu : public QWidget
{
	Q_OBJECT

public:
	explicit Menu(QWidget *parent = nullptr);
	~Menu();

signals:
	void but_exit_clicked();
	void but_start_clicked();

private slots:
	void on_but_exit_clicked();

	void on_but_start_clicked();

private:
	Ui::Menu *ui;
};

#endif // MENU_H
