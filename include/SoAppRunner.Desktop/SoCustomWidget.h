// Copyright luoxiangyong, E-mail: solo_lxy@126.com
// https://github.com/sololxy/solo-apprunner.git
// $Id$

#ifndef SO_CUSTOM_WIDGET_H
#define SO_CUSTOM_WIDGET_H

#include <QWidget>
#include <QRgb>
#include <QColor>

#include <SoAppRunner/SoProgram.h>
#include <SoAppRunner.Desktop/SoAppRunnerDesktopExport.h>

//
class SO_APPRUNNER_DESKTOP_API SoCustomWidget : public QWidget
{
    Q_OBJECT
public:
	SoCustomWidget(QColor background = QColor(255,255,255), QWidget* parent = NULL);
    virtual ~SoCustomWidget();


private:
	QColor _background;
};

#endif // SO_CUSTOM_WIDGET_H
