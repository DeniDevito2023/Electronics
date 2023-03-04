// родительский класс
# include "Electronics.h"
# include <string.h>
# include <cstdio>
# include <stdlib.h>
# include <iostream>

//# pragma warning (default: 4716);

using namespace std;


	Electronics::Electronics(string name, int memory, int weight, int battery, string connector, string display) : _name(name), _memory(memory), _weight(weight), _battery(battery), _connector(connector), _display(display) {};
	
	string Electronics::getName() {
		return _name;
	}
	void Electronics::setName(string name) {
		_name = name;
	}
	int Electronics::getMemory() {
		return _memory;
	}
	void Electronics::setMemory(int memory) {
		_memory = memory;
	}

	int Electronics::getWeight() {
		return _weight;
	}
	void Electronics::setWeight(int weight) {
		_weight = weight;
	}

	int Electronics::getBattery() {
		return _battery;
	}
	void Electronics::setBattery(int battery) {
		_battery = battery;
	}

	string Electronics::getConnector() {
		return _connector;
	}
	void Electronics::setConnector(string connector) {
		_connector = connector;
	}

	string Electronics::getDisplay() {
		return _display;
	}
	void Electronics::setDisplay(string display) {
		_display = display;
	}
	void Electronics::Show() {
		std::cout <<  _name;
	}

	
