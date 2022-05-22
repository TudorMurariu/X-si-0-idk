#pragma once
#include <qwidget.h>
#include <qboxlayout.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include "Service.h"
#include <qmessagebox.h>

class gui : public QWidget {

	QPushButton* btns[3][3];
	Service& srv;

public:

	gui(Service& s) : srv(s){}
	void build_UI();
	void conect_signals();

};


void gui::build_UI()
{
	// coloram background-ul
	QPalette pal = QPalette();
	QFont font("Times", 12, QFont::Bold);
	pal.setColor(QPalette::Window, "#008080");
	pal.setColor(QPalette::WindowText, "#000080");
	this->setAutoFillBackground(true);
	this->setPalette(pal);
	this->setFont(font);



	QVBoxLayout* mainly = new QVBoxLayout;

	QHBoxLayout* hly = new QHBoxLayout;
	QWidget* row1 = new QWidget;
	row1->setLayout(hly);

	btns[0][0] = new QPushButton("");
	btns[0][1] = new QPushButton("");
	btns[0][2] = new QPushButton("");

	hly->addWidget(btns[0][0]);
	hly->addWidget(btns[0][1]);
	hly->addWidget(btns[0][2]);
	
	QHBoxLayout* hly2 = new QHBoxLayout;
	QWidget* row2 = new QWidget;
	row2->setLayout(hly2);

	btns[1][0] = new QPushButton(" ");
	btns[1][1] = new QPushButton(" ");
	btns[1][2] = new QPushButton(" ");

	hly2->addWidget(btns[1][0]);
	hly2->addWidget(btns[1][1]);
	hly2->addWidget(btns[1][2]);

	QHBoxLayout* hly3 = new QHBoxLayout;
	QWidget* row3 = new QWidget;
	row3->setLayout(hly3);

	btns[2][0] = new QPushButton(" ");
	btns[2][1] = new QPushButton(" ");
	btns[2][2] = new QPushButton(" ");

	hly3->addWidget(btns[2][0]);
	hly3->addWidget(btns[2][1]);
	hly3->addWidget(btns[2][2]);

	mainly->addWidget(row1);
	mainly->addWidget(row2);
	mainly->addWidget(row3);

	this->setLayout(mainly);
}

void gui::conect_signals()
{
	QObject::connect(btns[0][0], &QPushButton::pressed, [&]() {
		string raspuns = srv.pressed(0, 0);

		char r = raspuns[0];

		switch (r)
		{
		case 'r':
			QMessageBox::warning(this, "Remiza", "Nimeni nu a castigat");
			this->close();
			break;

		case 'X':

			if (raspuns.length() != 1)
			{
				QMessageBox::warning(this, "WIN!", "X a castigat");
				this->close();
			}
			
			btns[0][0]->setText("X");
			break;
		default: // case 0
			if (raspuns.length() != 1)
			{
				QMessageBox::warning(this, "WIN!", "0 a castigat");
				this->close();
			}

			btns[0][0]->setText("0");
			break;
		}
		});

	QObject::connect(btns[0][1], &QPushButton::pressed, [&]() {
		string raspuns = srv.pressed(0, 1);

		char r = raspuns[0];

		switch (r)
		{
		case 'r':
			QMessageBox::warning(this, "Remiza", "Nimeni nu a castigat");
			this->close();
			break;

		case 'X':

			if (raspuns.length() != 1)
			{
				QMessageBox::warning(this, "WIN!", "X a castigat");
				this->close();
			}

			btns[0][1]->setText("X");
			break;
		default: // case 0
			if (raspuns.length() != 1)
			{
				QMessageBox::warning(this, "WIN!", "0 a castigat");
				this->close();
			}

			btns[0][1]->setText("0");
			break;
		}
		});


	QObject::connect(btns[0][2], &QPushButton::pressed, [&]() {
		string raspuns = srv.pressed(0, 2);

		char r = raspuns[0];

		switch (r)
		{
		case 'r':
			QMessageBox::warning(this, "Remiza", "Nimeni nu a castigat");
			this->close();
			break;

		case 'X':

			if (raspuns.length() != 1)
			{
				QMessageBox::warning(this, "WIN!", "X a castigat");
				this->close();
			}

			btns[0][2]->setText("X");
			break;
		default: // case 0
			if (raspuns.length() != 1)
			{
				QMessageBox::warning(this, "WIN!", "0 a castigat");
				this->close();
			}

			btns[0][2]->setText("0");
			break;
		}
		});


	QObject::connect(btns[1][0], &QPushButton::pressed, [&]() {
		string raspuns = srv.pressed(1, 0);

		char r = raspuns[0];

		switch (r)
		{
		case 'r':
			QMessageBox::warning(this, "Remiza", "Nimeni nu a castigat");
			this->close();
			break;

		case 'X':

			if (raspuns.length() != 1)
			{
				QMessageBox::warning(this, "WIN!", "X a castigat");
				this->close();
			}

			btns[1][0]->setText("X");
			break;
		default: // case 0
			if (raspuns.length() != 1)
			{
				QMessageBox::warning(this, "WIN!", "0 a castigat");
				this->close();
			}

			btns[1][0]->setText("0");
			break;
		}
		});


	QObject::connect(btns[1][1], &QPushButton::pressed, [&]() {
		string raspuns = srv.pressed(1, 1);

		char r = raspuns[0];

		switch (r)
		{
		case 'r':
			QMessageBox::warning(this, "Remiza", "Nimeni nu a castigat");
			this->close();
			break;

		case 'X':

			if (raspuns.length() != 1)
			{
				QMessageBox::warning(this, "WIN!", "X a castigat");
				this->close();
			}

			btns[1][1]->setText("X");
			break;
		default: // case 0
			if (raspuns.length() != 1)
			{
				QMessageBox::warning(this, "WIN!", "0 a castigat");
				this->close();
			}

			btns[1][1]->setText("0");
			break;
		}
		});


	QObject::connect(btns[1][2], &QPushButton::pressed, [&]() {
		string raspuns = srv.pressed(1, 2);

		char r = raspuns[0];

		switch (r)
		{
		case 'r':
			QMessageBox::warning(this, "Remiza", "Nimeni nu a castigat");
			this->close();
			break;

		case 'X':

			if (raspuns.length() != 1)
			{
				QMessageBox::warning(this, "WIN!", "X a castigat");
				this->close();
			}

			btns[1][2]->setText("X");
			break;
		default: // case 0
			if (raspuns.length() != 1)
			{
				QMessageBox::warning(this, "WIN!", "0 a castigat");
				this->close();
			}

			btns[1][2]->setText("0");
			break;
		}
		});


	QObject::connect(btns[2][0], &QPushButton::pressed, [&]() {
		string raspuns = srv.pressed(2, 0);

		char r = raspuns[0];

		switch (r)
		{
		case 'r':
			QMessageBox::warning(this, "Remiza", "Nimeni nu a castigat");
			this->close();
			break;

		case 'X':

			if (raspuns.length() != 1)
			{
				QMessageBox::warning(this, "WIN!", "X a castigat");
				this->close();
			}

			btns[2][0]->setText("X");
			break;
		default: // case 0
			if (raspuns.length() != 1)
			{
				QMessageBox::warning(this, "WIN!", "0 a castigat");
				this->close();
			}

			btns[2][0]->setText("0");
			break;
		}
		});


	QObject::connect(btns[2][1], &QPushButton::pressed, [&]() {
		string raspuns = srv.pressed(2, 1);

		char r = raspuns[0];

		switch (r)
		{
		case 'r':
			QMessageBox::warning(this, "Remiza", "Nimeni nu a castigat");
			this->close();
			break;

		case 'X':

			if (raspuns.length() != 1)
			{
				QMessageBox::warning(this, "WIN!", "X a castigat");
				this->close();
			}

			btns[2][1]->setText("X");
			break;
		default: // case 0
			if (raspuns.length() != 1)
			{
				QMessageBox::warning(this, "WIN!", "0 a castigat");
				this->close();
			}

			btns[2][1]->setText("0");
			break;
		}
		});


	QObject::connect(btns[2][2], &QPushButton::pressed, [&]() {
		string raspuns = srv.pressed(2, 2);

		char r = raspuns[0];

		switch (r)
		{
		case 'r':
			QMessageBox::warning(this, "Remiza", "Nimeni nu a castigat");
			this->close();
			break;

		case 'X':

			if (raspuns.length() != 1)
			{
				QMessageBox::warning(this, "WIN!", "X a castigat");
				this->close();
			}

			btns[2][2]->setText("X");
			break;
		default: // case 0
			if (raspuns.length() != 1)
			{
				QMessageBox::warning(this, "WIN!", "0 a castigat");
				this->close();
			}

			btns[2][2]->setText("0");
			break;
		}
		});
}
