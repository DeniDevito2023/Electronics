#pragma once
# include "Electronics.h"

class Laptop : public Electronics {
private: 
	int _battery; // ����� ������������
	string _display; // �������
	int _memory; // ����� ������ � �������

public:
	Laptop(string name, int memory, int weight, int battery, string connector, string display) : Electronics(name, weight, connector), _memory(memory), _battery(battery), _display(display) {};
}


