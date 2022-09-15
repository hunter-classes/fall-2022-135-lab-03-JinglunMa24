// add your code as appropriate 
#include <iostream>
#include "reservoir.h"

int main() {
	
	//test case for TASK A
	std::cout << "East basin storage: " << get_east_storage("05/20/2018") << " billion gallons" << std::endl;
	std::cout << "East basin storage: " << get_east_storage("09/30/2018") << " billion gallons" << std::endl;

	std::cout << std::endl;
  
	//test case for TASK B
	std::cout << "Minimum storage in East basin: " << get_min_east() << " billion gallons" << std::endl;
	std::cout << "Maximum storage in East basin: " << get_max_east() << " billion gallons" << std::endl;

	std::cout << std::endl;

	//test case for TASK C
	std::cout << "09/13/2018 " << compare_basins("09/13/2018") << std::endl;
	std::cout << "05/20/2018 " << compare_basins("05/20/2018") << std::endl;
	return 0;
}
