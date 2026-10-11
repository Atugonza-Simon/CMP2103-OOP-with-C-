// Write a program that prompts the user to enter a weight in pounds and height in inches and
// then displays the BMI. Note that one pound is 0.45359237 kilograms and one inch is
// 0.0254 meters. Listing 4.6 gives the program.

// Conditions
// Below 18.5 Underweight
// 18.5–24.9 Normal
// 25.0–29.9 Overweight
// Above 30.0 Obese

// Enter weight in pounds:
// Enter Weight in pounds: 146
// Enter height in inches: 70
// BMI is 20.95
// Normal

#include <iomanip>
#include <iostream>

int main() {
	constexpr double poundsToKilograms = 0.45359237;
	constexpr double inchesToMeters = 0.0254;

	double weightPounds;
	double heightInches;

	std::cout << "Enter weight in pounds: ";
	if (!(std::cin >> weightPounds) || weightPounds <= 0.0) {
		std::cerr << "Weight must be a positive number.\n";
		return 1;
	}

	std::cout << "Enter height in inches: ";
	if (!(std::cin >> heightInches) || heightInches <= 0.0) {
		std::cerr << "Height must be a positive number.\n";
		return 1;
	}

	const double weightKilograms = weightPounds * poundsToKilograms;
	const double heightMeters = heightInches * inchesToMeters;
	const double bmi = weightKilograms / (heightMeters * heightMeters);

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "BMI is " << bmi << '\n';

	if (bmi < 18.5) {
		std::cout << "Underweight\n";
	} else if (bmi < 25.0) {
		std::cout << "Normal\n";
	} else if (bmi < 30.0) {
		std::cout << "Overweight\n";
	} else {
		std::cout << "Obese\n";
	}

	return 0;
}