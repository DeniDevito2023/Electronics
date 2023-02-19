# include <iostream>
# include <string.h>
# include "Electronics.h"
# include <string>

//# pragma warning (default: 2665);


int main() {
	
	Electronics Elec( (const char*) "Bosh", 12, 12, 12, "USB", "Retina" );
	std::cout << Elec.getName();

}