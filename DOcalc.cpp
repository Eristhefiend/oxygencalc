#include <iostream>

double Do_reading(double temperatureC, double pressure) {
	// Calculate DO saturation using Standard Methods formula (most accurate for 0-40°C)
	double DO_saturation = 14.652 - 0.41022 * temperatureC
		+ 0.007991 * temperatureC * temperatureC
		- 0.000077774 * temperatureC * temperatureC * temperatureC;
	// Adjust for atmospheric pressure (standard is 760 mmHg)
	DO_saturation = DO_saturation * (pressure / 760.0);
	
	return DO_saturation;
}