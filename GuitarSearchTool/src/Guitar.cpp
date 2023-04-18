#include <iostream>
#include "Guitar.h"

using namespace std;

Guitar::Guitar()
{
    cout << "New guitar was made" << endl;
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