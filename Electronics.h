# pragma once
# include <iostream>
# include <string.h>
# include <cstring>
# include <cstdio>
# include <stdlib.h>


using namespace std;

class Electronics {

private:
	string _name; // �������� �������
	int _memory; // ����� ������ � ������� !
	int _weight; // ��� �������
	int _battery; // ����� ������������ !
	string _connector; // ������
	string _display; // ������� !


public:
	Electronics(string name, int memory, int weight, int battery, string connector, string display) /* : _name(name), _memory(memory), _weight(weight), _battery(battery), _connector(connector), _display(display)*/;
	//Electronics();

	string getName();
	void setName(string name);

	int getMemory();
	void setMemory(int memory);

	int getWeight();
	void setWeight(int weight);

	int getBattery();
	void setBattery(int battery);

	string getConnector();
	void setConnector(string name);

	string getDisplay();
	void setDisplay(string name);

	void Show();

};

