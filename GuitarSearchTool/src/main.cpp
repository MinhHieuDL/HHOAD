#include <iostream>
#include "GuitarInventory.h"

extern void InstallInventory(GuitarInventory&);

static const Guitar g_GuitarInventory[] = {
    {{"F310",GuitarSpecs::BUILDER::YAMAHA,GuitarSpecs::TYPE::CLASSIC},"0001", 150},
    {{"Telecaster",GuitarSpecs::BUILDER::FENDER,GuitarSpecs::TYPE::ELECTRIC}, "0002", 1500},
    {{"JSM100",GuitarSpecs::BUILDER::IBANEZ,GuitarSpecs::TYPE::ELECTRIC}, "0003", 1650},
    {{"L5",GuitarSpecs::BUILDER::GIBSON,GuitarSpecs::TYPE::CLASSIC}, "0004", 350}
};

int main(void)
{
    GuitarInventory myStore;
    InstallInventory(myStore);

    GuitarSpecs wantedGuitar("Telecaster",GuitarSpecs::BUILDER::FENDER,GuitarSpecs::TYPE::ELECTRIC);
    myStore.search(wantedGuitar);
    GuitarSpecs wantedGuitar1("SunghaJung",GuitarSpecs::BUILDER::FENDER,GuitarSpecs::TYPE::ELECTRIC);
    myStore.search(wantedGuitar1);
    std::cout << "Search Finished" << std::endl;
    return 0;
}

void InstallInventory(GuitarInventory& inventory)
{
    for(auto const& guitarSpecs : g_GuitarInventory)
    {
        inventory.addGuitar(guitarSpecs);
    }
}