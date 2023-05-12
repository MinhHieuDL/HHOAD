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

bool GuitarSpecs::operator==(const GuitarSpecs& specs)
{
    return ((m_eBuilder==specs.m_eBuilder) && \
            (m_sModel==specs.m_sModel) && \
            (m_eType == specs.m_eType));
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
