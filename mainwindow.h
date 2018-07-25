#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "playlist.h"
#include <QtMultimedia/QMediaPlayer>
#include "QTimer"
#include "QPalette"
#include "vector"
#include "QKeyEvent"
#include "QLineEdit"

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //void on_add_clicked();

    //void on_remove_clicked();

	void on_repeat_clicked();

    void on_play_clicked();

    void on_volumeBar_valueChanged(int value);

    void on_seekBar_sliderMoved(int position);

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_forward_clicked();

    void on_back_clicked();

    void on_mute_clicked();

	void on_reset_clicked();

    void update();

	void on_radioButton_CN_clicked();

	void on_radioButton_JP_clicked();

	void on_listWidget_char_clicked(const QModelIndex &index);

	void on_listWidget_talk_clicked(const QModelIndex &index);

private:
    void updateList();

    void loadTrack();

    void next();

    void back();

    int getIndex();

	void resetTalklist();

    bool repeat = false;

    bool muted = false;

    int lCounter = 0;

    Playlist playlist;

    Ui::MainWindow *ui;

    QTimer *updater = new QTimer(this);

    QMediaPlayer *player = new QMediaPlayer();

protected:
    void keyPressEvent(QKeyEvent *event);

};

#endif // MAINWINDOW_H
