 // write a program that calculates the current through a 200-μF capacitor whose voltage is given;
//        ⎧  50t V          0 < t < 1
// v(t) = ⎪  100 - 50t V    1 < t < 3
//        ⎪  -200 + 50t V   3 < t < 4
//        ⎩  0 V            otherwise

// The program should prompt the user to enter time, t.

#include <iostream>

int main() {
	constexpr double capacitance = 200e-6; // Farads
	double time;

	std::cout << "Enter time t in seconds: ";
	if (!(std::cin >> time)) {
		std::cerr << "Invalid time. Please enter a number.\n";
		return 1;
	}

	double voltageSlope = 0.0;

	if (time > 0.0 && time < 1.0) {
		voltageSlope = 50.0;
	} else if (time > 1.0 && time < 3.0) {
		voltageSlope = -50.0;
	} else if (time > 3.0 && time < 4.0) {
		voltageSlope = 50.0;
	}

	const double current = capacitance * voltageSlope;

	std::cout << "Current: " << current << " A ("
			  << current * 1000.0 << " mA)\n";

	return 0;
}