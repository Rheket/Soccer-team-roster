#include <iostream>
#include "ItemToPurchase.h"

using namespace std;

int main()
{
	string name1;
	int price1;
	int quantity1;
	string name2;
	int price2;
	int quantity2; 
	
	cout << "Item 1" << endl;
	cout << "Enter the item name:" << endl;
	getline(cin, name1);

	cout << "Enter the item price:" << endl;
	cin >> price1;

	cout << "Enter the item quantity:" << endl << endl;
	cin >> quantity1;

	cin.ignore();

	cout << "Item 2" << endl; 
	cout << "Enter the item name:" << endl;
	getline(cin, name2);

	cout << "Enter the item price:" << endl;
	cin >> price2;

	cout << "Enter the item quantity:" << endl << endl;
	cin >> quantity2;

	
	cout << "TOTAL COST" << endl;

	ItemToPurchase item1;
	ItemToPurchase item2;

	item1.SetName(name1);
	item1.SetPrice(price1);
	item1.SetQuantity(quantity1);

	item2.SetName(name2);
	item2.SetPrice(price2);
	item2.SetQuantity(quantity2);

	int item1Tot = item1.GetQuantity(quantity1) * item1.GetPrice(price1);
	int item2Tot = item2.GetQuantity(quantity2) * item2.GetPrice(price2);

	
	cout << item1.GetName(name1) << " " << item1.GetQuantity(quantity1) << " @ $" << item1.GetPrice(price1) << " = $" << item1Tot << endl;
	cout << item2.GetName(name2) << " " << item2.GetQuantity(quantity2) << " @ $" << item2.GetPrice(price2) << " = $" << item2Tot << endl;

	cout << endl << "Total: $" << item1Tot + item2Tot << endl;
	
	return 0;
}