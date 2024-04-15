#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "game.h"
#include <QMainWindow>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    //Ui::MainWindow *ui;
    Game* game;
    QGridLayout* gridLayout;

    QLabel* hor_lbl1;
    QLabel* hor_lbl2;
    QLabel* ver_lbl1;
    QLabel* ver_lbl2;
    //  vectori mej hat 3 knopkka difficult amen mek@ ira bardutyun
    // 1 hat el knopa xaxi skizb@ sksi
    //  input window anun

private:
    void handleStart();
};
#endif // MAINWINDOW_H
