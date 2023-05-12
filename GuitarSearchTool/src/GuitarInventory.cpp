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

Guitar* GuitarInventory::getGuitar(std::string sSerial) const
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
        if(guitar->getSpecs() == searchSpecs)
        {
            std::cout << "Got one with serial numer: " << guitar->getSerialNumber() << std::endl;        
            return guitar;
        }
    }
    std::cout << "No item" << std::endl;
    return nullptr;
}