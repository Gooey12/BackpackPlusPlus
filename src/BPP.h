#include <string>
#include <vector>
using namespace std;

class Item {
public:
    string id;
    string name;
    int maxQty;
};

class InvSlot {
public:
    Item item;
    int qty;
};

class Inventory {
public:
    int capacity;
    vector<InvSlot> slots;

    Inventory(int cap);
    bool addItem(Item item, int qty);
    bool removeItem(Item item, int qty);
    int getItemQtyByName(string itemName);
    int getItemQtyByID(string itemID);
};
