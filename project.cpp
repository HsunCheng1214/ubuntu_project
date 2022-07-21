#include <QApplication>
#include <QLabel>
#include <QWidget>

int main(int argc, char *argv[ ])
{
	QApplication app(argc, argv);
	QLabel hello("<center>Welcom to my first Qt Sample program</center>");
	hello.setWindowTitle("My Project");
	hello.resize(400, 400);
	hello.show();
	return app.exec();
}
