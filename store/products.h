#pragma once
#include <iostream>
#include <string>

struct products {
	std::string name;
	int number;
	int price;
};

void printProd(products &P);
int fullPrice(products& P);
void sell(products& P);
