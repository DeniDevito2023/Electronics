#pragma once
# include "Electronics.h"

class Laptop : public Electronics {
private: 
	int _battery; // объем аккумулятора
	string _display; // дисплей
	int _memory; // объем памяти у гаджета

public:
	Laptop(string name, int memory, int weight, int battery, string connector, string display) : Electronics(name, weight, connector), _memory(memory), _battery(battery), _display(display) {};
}


