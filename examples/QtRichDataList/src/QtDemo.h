#ifndef QT_DEMO
#define QT_DEMO

#include <QtCore>
#include <QApplication>
#include "MainWindow.h"

class QtDemo : public QApplication
{
	Q_OBJECT
public:
	QtDemo(int argc, char* argv[]);
	~QtDemo();
	void ShowUI();
private:
	MainWindow window;
};

#endif
