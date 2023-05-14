#include <iostream>
#include "Guitar.h"

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
            
Guitar::Guitar(GuitarSpecs stSpecs, std::string sSerialNum, double dbPrice)
{
    this->m_stSpecs       = stSpecs;
    this->m_sSerialNumber = sSerialNum;
    this->m_dbPrice       = dbPrice;
}   

Guitar::~Guitar()
{

}
