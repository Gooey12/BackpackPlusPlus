#include "BPP.h"
using namespace std;

Inventory::Inventory(int cap) {
    capacity = cap;
}

bool Inventory::addItem(Item item, int qty) {
    for (int i = 0; i < (int)slots.size(); i++) {
        if (slots[i].item.name == item.name) {
            slots[i].qty += qty;
            return true;
        }
    }

    InvSlot newSlot;
    newSlot.item = item;
    newSlot.qty = qty;
    slots.push_back(newSlot);
    return true;
}

bool Inventory::removeItem(Item item, int qty) {
    for (int i = 0; i < (int)slots.size(); i++) {
        if (slots[i].item.name == item.name) {
            if (slots[i].qty < qty) {
                return false;
            }

            slots[i].qty = slots[i].qty - qty;

            if (slots[i].qty == 0) {
                slots.erase(slots.begin() + i);
            }
            return true;
        }
    }
    return false;
}

int Inventory::getItemQtyByName(string itemName) {
    for (int i = 0; i < (int)slots.size(); i++) {
        if (slots[i].item.name == itemName) {
            return slots[i].qty;
        }
    }

    return 0;
}

int Inventory::getItemQtyByID(string itemID) {
    for (int i = 0; i < (int)slots.size(); i++) {
        if (slots[i].item.id == itemID) {
            return slots[i].qty;
        }
    }

    return 0;
}