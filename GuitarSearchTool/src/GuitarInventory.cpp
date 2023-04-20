#include <iostream>
#include "GuitarInventory.h"

using namespace std;

GuitarInventory::GuitarInventory()
{

}

GuitarInventory::~GuitarInventory()
{
    
}

void GuitarInventory::addGuitar(std::string sSerial,\
                                GuitarSpecs stSpecs,\
                                double dbPrice)
{
    Guitar* pNewGuitar = new Guitar(stSpecs, sSerial, dbPrice);
    m_lGuitar.push_back(pNewGuitar);
}

Guitar* GuitarInventory::getGuitar(std::string sSerial)
{
    for (auto  & guitar : m_lGuitar)
    {
        if(guitar->getSerialNumber() == sSerial)
        {
            return guitar;
        }
    }
    return nullptr;
}

Guitar* GuitarInventory::search(GuitarSpecs searchSpecs)
{
    std::cout << "Search for guitar model " << searchSpecs.getModel() << std::endl;

    for (auto & guitar : m_lGuitar)
    {
        std::cout << "Model already in store " << guitar->getSpecs().getModel() << std::endl;
        if(guitar->getSpecs().getModel() == searchSpecs.getModel())
        {
            return guitar;
        }
    }
    std::cout << "No item" << std::endl;
    return nullptr;
}