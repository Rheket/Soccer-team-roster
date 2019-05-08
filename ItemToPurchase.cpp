#include <iostream> 
#include "ItemToPurchase.h"

using namespace std;

ItemToPurchase::ItemToPurchase()
{
	string itemName = "none";
	int itemPrice = 0;
	int itemQuantity = 0;
}

void ItemToPurchase::SetName(string name)
{
	itemName = name;
}
void ItemToPurchase::SetPrice(int price)
{
	itemPrice = price;
}
void ItemToPurchase::SetQuantity(int quantity)
{
	itemQuantity = quantity;
}

string ItemToPurchase::GetName(string name)
{
	return itemName;
}
int ItemToPurchase::GetPrice(int price)
{
	return price;
}
int ItemToPurchase::GetQuantity(int quantity)
{
	return quantity;
}