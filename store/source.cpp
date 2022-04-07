#include <iostream>
#include <string>
#include "products.h"

using namespace std;



int main() {
	setlocale(LC_ALL, "ru");

	products one = {"Milk", 3, 10};
	products two = {"Apple", 6, 5};
	products three = {"Bread", 2, 8};
	products four = {"Coffee", 1, 50};
	products five = {"Tea", 4, 30};


	printProd(one);
	cout << fullPrice(two);
	sell(five);

	return 0;
}