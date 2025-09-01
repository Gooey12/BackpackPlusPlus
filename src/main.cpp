#include <iostream>
#include "BPP.h"
using namespace std;

int main() {
    Inventory inv(5);

    Item apple;
    apple.id = "001";
    apple.name = "apple";
    apple.maxQty = 10;



    string userResponseStr;
    int userResponseInt;

    cout << "How many apples do you want to buy?: ";
    cin >> userResponseInt;

    inv.addItem(apple, userResponseInt);
    cout << "\nYou just bought " << inv.getItemQtyByName("apple") << " apples!";
}