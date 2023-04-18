#include <iostream>
#include "GuitarInventory.h"

extern void InstallInventory(GuitarInventory&);

int main(void)
{
    GuitarInventory myStore;
    InstallInventory(myStore);

    Guitar wantedGuitar("","Tailor","SungHaJung","Classic",400);
    myStore.search(wantedGuitar);

    std::cout << "Search Finished" << std::endl;
    return 0;
}

void InstallInventory(GuitarInventory& inventory)
{
    inventory.addGuitar("0001", "Yamaha", "F310", "Classic", 150);
    inventory.addGuitar("0002", "Fender", "Telecaster", "Electric", 1500);
    inventory.addGuitar("0003", "Ibanez", "JSM100", "Electric", 1650);
    inventory.addGuitar("0004", "Gibson", "L5", "Classic", 350);
}