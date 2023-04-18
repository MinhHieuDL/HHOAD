#include <iostream>
#include "Guitar.h"

using namespace std;

Guitar::Guitar(string sSerialNum, string sBuilder, string sModel, string sType, double dbPrice)
{
    this->m_sSerialNumber = sSerialNum;
    this->m_sBuilder      = sBuilder;
    this->m_sModel        = sModel;
    this->m_sType         = sType;
    this->m_dbPrice       = dbPrice;
}   

Guitar::~Guitar()
{

}

string Guitar::getSerialNumber()
{
    return m_sSerialNumber;
}

string Guitar::getBuilder()
{
    return m_sBuilder;
}

string Guitar::getModel()
{
    return m_sModel;
}

string Guitar::getType()
{
    return m_sType;
}

double Guitar::getPrice()
{
    return m_dbPrice;
}