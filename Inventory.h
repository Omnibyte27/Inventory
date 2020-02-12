#ifndef _INVENTORY_
#define _INVENTORY_
#include <iostream>

using std::string;
using std::ostream;

//Creates a class to hold the item name, the price and the quantity in stock
class Inventory
{
  private:
    string m_name;
    float m_price;
    int m_in_stock;

  public:
    Inventory(string,float,int);
    void sell();
    friend ostream& operator<<(ostream&, const Inventory&);
};

#endif
