#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VtkDemo.h"
#include "Graphics.h"


class VtkDemo : public QMainWindow
{
    Q_OBJECT

public:
    VtkDemo(QWidget *parent = Q_NULLPTR);

	void Init();

	void RegisteComponent(QMainWindow *); // ע��ؼ�������ʾ
	
	void open();//�򿪵ķ���

	void connectRegiste();// QT �źŲ�ע��

	void SetThreeViewMode();

	void SetMarchingCubeMode();

	void SetRayCastingMode();

	void DeleteAllView();

private:
    Ui::VtkDemoClass ui;
	QString DicomPath;
	QAction *actionThreeView;
	QAction *actionMarchingCube;
	QAction *actionRayCasting;
	QAction *actionDeleteView;
	Graphics *graphics;
};
