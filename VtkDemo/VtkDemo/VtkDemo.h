#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VtkDemo.h"

class VtkDemo : public QMainWindow
{
    Q_OBJECT

public:
    VtkDemo(QWidget *parent = Q_NULLPTR);

	void Init();

	void RegisteComponent(QMainWindow *); // ע��ؼ�������ʾ
	
	void open();//�򿪵ķ���

	void connectRegiste();// QT �źŲ�ע��
private:
    Ui::VtkDemoClass ui;
	QString DicomPath;
};
