#ifndef ItemToPurchase_H
#define ItemToPurchase_H
#include <string>

using namespace std;

class ItemToPurchase
{
public:

	void SetName(string name);
	void SetPrice(int price);
	void SetQuantity(int quantity);

	string GetName(string name);
	int GetPrice(int price);
	int GetQuantity(int quantity);

	ItemToPurchase();
	
private:

	string itemName;
	int itemPrice;
	int itemQuantity;

};
#endif