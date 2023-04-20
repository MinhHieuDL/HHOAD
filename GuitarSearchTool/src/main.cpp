#include <iostream>
#include "GuitarInventory.h"

extern void InstallInventory(GuitarInventory&);

int main(void)
{
    GuitarInventory myStore;
    InstallInventory(myStore);

    GuitarSpecs wantedGuitar("SungHaJung",GuitarSpecs::BUILDER::TAYLOR,GuitarSpecs::TYPE::CLASSIC);
    myStore.search(wantedGuitar);

    std::cout << "Search Finished" << std::endl;
    return 0;
}

void InstallInventory(GuitarInventory& inventory)
{
    GuitarSpecs specs1("F310",GuitarSpecs::BUILDER::YAMAHA,GuitarSpecs::TYPE::CLASSIC);
    inventory.addGuitar("0001", specs1, 150);
    GuitarSpecs specs2("Telecaster",GuitarSpecs::BUILDER::FENDER,GuitarSpecs::TYPE::ELECTRIC);
    inventory.addGuitar("0002", specs2, 1500);
    GuitarSpecs specs3("JSM100",GuitarSpecs::BUILDER::IBANEZ,GuitarSpecs::TYPE::ELECTRIC);
    inventory.addGuitar("0003", specs3, 1650);
    GuitarSpecs specs4("L5",GuitarSpecs::BUILDER::GIBSON,GuitarSpecs::TYPE::CLASSIC);
    inventory.addGuitar("0004", specs4, 350);
}