// родительский класс
# include "Electronics.h"
# include <string.h>
# include <cstdio>
# include <stdlib.h>
# include <iostream>


using namespace std;


	Electronics::Electronics(char name, int memory, int weight, int battery, char connector, char display) : _name(name), _memory(memory), _weight(weight), _battery(battery), _connector(connector), _display(display) {};

	char Electronics::getName() {
		return _name;
	}
	char Electronics::setName(char name) {
		_name = name;
	}
	int Electronics::getMemory() {
		return _memory;
	}
	int Electronics::setMemory(int memory) {
		_memory = memory;
	}

	int Electronics::getWeight() {
		return _weight;
	}
	int Electronics::setWeight(int weight) {
		_weight = weight;
	}

	int Electronics::getBattery() {
		return _battery;
	}
	int Electronics::setBattery(int battery) {
		_battery = battery;
	}

	char Electronics::getConnector() {
		return _connector;
	}
	char Electronics::setConnector(char connector) {
		_connector = connector;
	}

	char Electronics::getDisplay() {
		return _display;
	}
	char Electronics::setDisplay(char display) {
		_display = display;
	}
	void Electronics::Show(char name) {
		std::cout << name;
	}

	
