#include <QCoreApplication>
#include <QApplication>
#include <QWidget>

#include <SoAppRunner/SoAppManager.h>
#include <SoAppRunner.Desktop/SoAppManagerWidget.h>

int main(int argn, char** argv)
{
    QApplication app(argn,argv);

	QString configPath = QCoreApplication::applicationDirPath() + "/config/config.xml";

	if (false == SoAppManager::instance()->open(configPath))
		exit(1);

	SoAppManagerWidget widget(NULL, SoAppManager::instance());

	widget.show();

    return app.exec();
}
