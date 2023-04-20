#include <iostream>
#include "Guitar.h"

using namespace std;

GuitarSpecs::GuitarSpecs()
{
    
}

GuitarSpecs::GuitarSpecs(std::string sModel, GuitarSpecs::BUILDER eBuilder, GuitarSpecs::TYPE eType)
{
    this->m_sModel = sModel;
    this->m_eBuilder = eBuilder;
    this->m_eType = eType;
}

GuitarSpecs::~GuitarSpecs()
{

}
            
std::string GuitarSpecs::getModel()
{
    return m_sModel;
}
GuitarSpecs::BUILDER GuitarSpecs::getBuilder()
{
    return m_eBuilder;
}
GuitarSpecs::TYPE GuitarSpecs::getType()
{
    return m_eType;
}

Guitar::Guitar(GuitarSpecs stSpecs, std::string sSerialNum, double dbPrice)
{
    this->m_stSpecs       = stSpecs;
    this->m_sSerialNumber = sSerialNum;
    this->m_dbPrice       = dbPrice;
}   

Guitar::~Guitar()
{

}

string Guitar::getSerialNumber()
{
    return m_sSerialNumber;
}

double Guitar::getPrice()
{
    return m_dbPrice;
}

GuitarSpecs Guitar::getSpecs()
{
    return m_stSpecs;
}
