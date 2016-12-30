#include "Stock.h"
#include <string>

using namespace std;

Stock::Stock(string ts, double cprice)
{
    this -> _tickerSymbol = ts;
    this -> _price = cprice;
}

Stock::Stock(string n, string ts, double cprice)
{
    this -> _name = n;
    this -> _tickerSymbol = ts;
    this -> _price = cprice;
}

string Stock:: getTickerSymbol()
{
    return  _tickerSymbol;
}

double Stock:: getCurrentPrice()
{
    return _price;
}

string Stock::getCompanyName()
{
    return _name;
}

void Stock::setCompanyName(string name)
{
    this -> _name = name;
}

void Stock::setCurrentPrice(double cprice)
{
    this -> _price = cprice;
}

void Stock::setTickerSymbol(string ts)
{
    this ->_tickerSymbol = ts;
}

