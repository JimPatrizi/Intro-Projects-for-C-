#ifndef STOCK_H
#define STOCK_H
#include <string>

using namespace std;


class Stock
{
    private:
        string _name;
        double _price;
        string _tickerSymbol;

    public:
        Stock(string, double);
        Stock(string, string, double);
        string getCompanyName();
        void setCompanyName(string name);
        string getTickerSymbol();
        void setTickerSymbol(string ts);
        double getCurrentPrice();
        void setCurrentPrice(double cprice);
};

#endif // STOCK_H
