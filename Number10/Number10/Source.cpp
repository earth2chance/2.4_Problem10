//Chance Daily
//2.4 Problem #10

#include <iostream>

int main(){

	double grossPay, netPay;

	std::cout << "Cartwright Industries payroll calculator" << std::endl;

	std::cout << "What is the gross pay for the week? ";
	std::cin >> grossPay;

	netPay = grossPay * 0.68;
	/*I multiply the gross pay by 0.68 because the problem asks for the program to take out
	20% for Federal, 8% for FICA, and 4% for state. I added these three numbers together to get 32.
	After taking 32% from the gross pay, 68% is leftover, leaving you with the net pay. */

	std::cout << "Net pay for the week is " << netPay << std::endl;

}