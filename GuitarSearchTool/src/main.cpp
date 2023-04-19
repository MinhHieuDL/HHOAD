#include <iostream>
#include "GuitarInventory.h"

extern void InstallInventory(GuitarInventory&);

int main(void)
{
    GuitarInventory myStore;
    InstallInventory(myStore);

    Guitar wantedGuitar("",Guitar::BUILDER::TAYLOR,"SungHaJung",Guitar::TYPE::CLASSIC,400);
    myStore.search(wantedGuitar);

    std::cout << "Search Finished" << std::endl;
    return 0;
}

void InstallInventory(GuitarInventory& inventory)
{
    inventory.addGuitar("0001", Guitar::BUILDER::YAMAHA, "F310", Guitar::TYPE::CLASSIC, 150);
    inventory.addGuitar("0002", Guitar::BUILDER::FENDER, "Telecaster", Guitar::TYPE::ELECTRIC, 1500);
    inventory.addGuitar("0003", Guitar::BUILDER::IBANEZ, "JSM100", Guitar::TYPE::ELECTRIC, 1650);
    inventory.addGuitar("0004", Guitar::BUILDER::GIBSON, "L5", Guitar::TYPE::CLASSIC, 350);
}