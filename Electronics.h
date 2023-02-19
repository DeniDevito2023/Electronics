# pragma once
# include <iostream>



class Electronics {

public:
	char _name; // �������� �������
	int _memory; // ����� ������ � �������
	int _weight; // ��� �������
	int _battery; // ����� ������������
	char _connector; // ������
	char _display; // �������


public:
	Electronics(char name, int memory, int weight, int battery, char connector, char display) /* : _name(name), _memory(memory), _weight(weight), _battery(battery), _connector(connector), _display(display)*/;


	char getName();
	char setName(char name);

	int getMemory();
	int setMemory(int memory);

	int getWeight();
	int setWeight(int weight);

	int getBattery();
	int setBattery(int battery);

	char getConnector();
	char setConnector(char name);

	char getDisplay();
	char setDisplay(char name);

	void Show(char name);

};

