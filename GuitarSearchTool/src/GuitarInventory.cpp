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
                                std::string sBuilder,\
                                std::string sModel,\
                                std::string sType,\
                                double dbPrice)
{
    Guitar* pNewGuitar = new Guitar(sSerial, sBuilder, sModel, sType, dbPrice);
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

Guitar* GuitarInventory::search(Guitar searchGuitar)
{
    std::cout << "Search for guitar model " << searchGuitar.getModel() << std::endl;

    for (auto & guitar : m_lGuitar)
    {
        std::cout << "Model already in store " << guitar->getModel() << std::endl;
        if(guitar->getModel() == searchGuitar.getModel())
        {
            return guitar;
        }
    }
    std::cout << "No item" << std::endl;
    return nullptr;
}