#ifndef FRAMETITLEBAR_H
#define FRAMETITLEBAR_H

#include <QFrame>
#include <QMouseEvent>

class FrameTitleBar : public QFrame
{
public:
	FrameTitleBar(QWidget *parent = 0);

protected:
	virtual void mousePressEvent(QMouseEvent* event);
	virtual void mouseMoveEvent(QMouseEvent* event);
	virtual void mouseReleaseEvent(QMouseEvent* event);

private:
	bool            m_isPressed;
	QPoint          m_startMovePos;
};

#endif // FRAMETITLEBAR_H