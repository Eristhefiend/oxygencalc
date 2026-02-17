
#include <iostream>

int main()
{
    std::cout << "Dissolved Oxygen Calculator\n";

	std::cout << "Enter the temperature of the water in degrees Celsius:\n ";

	double temperatureC; //celsius
	std::cin >> temperatureC;

	std::cout << "Enter measured dissolved oxygen in mg/L:\n ";

	double DO_measured;
	std::cin >> DO_measured;

	std::cout << "Enter the atmospheric pressure in mmHg:\n ";

	double pressure;
	std::cin >> pressure; 

	// Calculate DO saturation using Standard Methods formula (most accurate for 0-40°C)
	double DO_saturation = 14.652 - 0.41022 * temperatureC
		+ 0.007991 * temperatureC * temperatureC
		- 0.000077774 * temperatureC * temperatureC * temperatureC;

	// Adjust for atmospheric pressure (standard is 760 mmHg)
	DO_saturation = DO_saturation * (pressure / 760.0);

	std::cout << "The saturation concentration of dissolved oxygen is " << DO_saturation << " mg/L\n";

	return 0;
}
	
