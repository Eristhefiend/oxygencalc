
#include <iostream>

int main()
{
    std::cout << "Dissolved Oxygen Calculator\n";

	std::cout << "Enter the temperature of the water in degrees Celsius:\n ";

	double temperature; 

	std::cin >> temperature;

	std::cout << "Enter measured dissolved oxygen in mg/L:\n ";

	double DO_measured;

	std::cin >> DO_measured;

	std::cout << "Enter the atmospheric pressure in mmHg:\n ";

	double pressure;

	std::cin >> pressure;

	double DO_saturation = temperature * pressure;

	std::cout << "The saturation concentration of dissolved oxygen is " << DO_saturation;
		


}
