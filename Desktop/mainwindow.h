#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtMultimedia/QMediaPlayer>
#include "QTimer"
#include "QPalette"
#include "vector"
#include "QKeyEvent"
#include "QLineEdit"
#include "playlist.h"

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
    void update();

	void on_pushButton_close_clicked();

	void on_pushButton_min_clicked();
	
	void on_repeat_clicked();

    void on_play_clicked();

    void on_volumeBar_valueChanged(int value);

    void on_seekBar_sliderMoved(int position);

    void on_listWidget_doubleClicked();

    void on_forward_clicked();

    void on_back_clicked();

    void on_mute_clicked();

	void on_radioButton_lang_clicked();

	void on_listWidget_char_clicked();

	void on_listWidget_talk_clicked();

	void on_pushButton_char_1_clicked();

	void on_pushButton_char_2_clicked();

	void on_pushButton_char_3_clicked();

private:
	void initSetting();

    void updateList();

    void loadTrack();

    void next();

    void back();

    int getIndex();

	void resetTalklist();

	void resetSelect();

	void selectCN();

	void selectJP();

    void char_1_selected();

    void char_2_selected();

    void char_3_selected();

    int repeat = 0;

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
