#include "Header.hpp"

float get_bmi(float weight, float height) {
	return weight / ((height > 100 ? (height / 100) : height) * (height > 100 ? (height / 100) : height));
}

std::string am_i_healthy(float bmi) {
	if (bmi > 0 && bmi <= 18.4) {
		return "Underweight";
	}
	else if (bmi > 18.4 && bmi <= 24.5) {
		return "Healthy";
	}
	else if (bmi > 24.5 && bmi <= 34.9) {
		return "Overweight";
	}
	else if (bmi > 34.9 && bmi > 35) {
		return "Obese";
	}
}

std::string to_string(float bmi) {
	return "Your BMI is "+ std::to_string(bmi) + " and you are " + am_i_healthy(bmi);
}
