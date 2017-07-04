#include "mainwindow.h"
#include <QApplication>
#include <Qlist>
#include <QGraphicsScene>
#include "game.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Game * game = new Game();
    game->show();

    return a.exec();
}
