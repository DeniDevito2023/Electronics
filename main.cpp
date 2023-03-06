# include <iostream>
# include <string.h>
# include <cstring>
# include "Electronics.h"
# include <string>
# include <cstdio>
# include <stdlib.h>

////# pragma warning (default: 2665);
using namespace std;

int main() {
	
	Electronics *Elec = new Electronics ( "Bosh", 12, 12, 12, "USB", "Retina");
	Elec->setName("Samsung");

	cout << Elec->getName()<< endl;
	cout << endl;
	//std::cout << Elec->setName("Bosh");
	//std::cout << Elec->getName();
	std::cout << Elec->getName() << endl;
	std::cout << Elec->getMemory() << endl;
	std::cout << Elec->getWeight() << endl;
	std::cout << Elec->getBattery() << endl;
	std::cout << Elec->getConnector() << endl;
	std::cout << Elec->getDisplay() << endl;

	cout << endl;
	cout << endl;
	Elec->Show();
	cout << endl;
	
	system("pause");
	return 0;
}