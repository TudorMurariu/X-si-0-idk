#include "Xsi0.h"
#include <QtWidgets/QApplication>

#include "UI.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Repo repo;
    Service srv(repo);
    gui ui(srv);

    ui.build_UI();
    ui.conect_signals();
    for(int i=0;i<3;i++)
        ui.show();

    return a.exec();
}
