// *** ADDED BY HEADER FIXUP ***
#include <istream>
// *** END ***
#include <iostream>
#include "Stock.h"

using namespace std;

int main()
{
    Stock my_stock("Ticker",100);
    cout << my_stock.getTickerSymbol() << endl;
    my_stock.setTickerSymbol("Fortive");
    cout << my_stock.getTickerSymbol() << endl;
    return 0;
}
