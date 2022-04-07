#include <iostream>
#include "products.h"

void printProd(products  &P) {
	std:: cout << "The product name is " << P.name << ", its amount is " << P.number << ", price for one is " << P.price << std:: endl;
}

int fullPrice(products& P){
	std::cout << "Full price for " << P.number << " " << P.name << " is ";
	return  P.number * P.price;
}

void sell(products& P){
	std::cout << std::endl;
	std::cout << "The amount of product " << P.name << " is " << P.number << std::endl;
	std::cout << "How much do you want to sell? ->";
	int dec;
	std::cin >> dec;
	std::cout << "Now the amount of product " << P.name << " is " << P.number - dec << std::endl;

}
