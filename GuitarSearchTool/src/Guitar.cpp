#include <iostream>
#include "Guitar.h"

using namespace std;

Guitar::Guitar(string sSerialNum, BUILDER eBuilder, string sModel, TYPE eType, double dbPrice)
{
    this->m_sSerialNumber = sSerialNum;
    this->m_eBuilder      = eBuilder;
    this->m_sModel        = sModel;
    this->m_eType         = eType;
    this->m_dbPrice       = dbPrice;
}   

Guitar::~Guitar()
{

}

string Guitar::getSerialNumber()
{
    return m_sSerialNumber;
}

Guitar::BUILDER Guitar::getBuilder()
{
    return m_eBuilder;
}

string Guitar::getModel()
{
    return m_sModel;
}

Guitar::TYPE Guitar::getType()
{
    return m_eType;
}

double Guitar::getPrice()
{
    return m_dbPrice;
}