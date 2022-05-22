#pragma once
#include <qwidget.h>
#include <qboxlayout.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include "Service.h"

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

}

void gui::conect_signals()
{

}
