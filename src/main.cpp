#include <iostream>
#include "BPP.h"
using namespace std;

int main() {
    Inventory inv(5);

    Item apple;
    apple.id = "001";
    apple.name = "apple";
    apple.maxQty = 8;

    Item knife;
    knife.id = "002";
    knife.name = "knife";
    knife.maxQty = 2;

    string userResponseStr;
    int userResponseInt;

    cout << "How many apples do you want to buy?: ";
    cin >> userResponseInt;

    inv.addItem(apple, userResponseInt);
    if (inv.getItemQtyByName("apple") > 1) {
        cout << "You just bought " << inv.getItemQtyByName("apple") << " apples!";
    } else {
        cout << "You just bought an apple!";
    }

    cout << "\n\nDo you wanna buy a knife? (y/n): ";
    cin >> userResponseStr;

    if (userResponseStr == "y") {
        inv.addItem(knife, 1);
        cout << "You bought a knife!\n";
    }

    cout << endl;
    inv.showInv();
}