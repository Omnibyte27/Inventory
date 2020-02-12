#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

//Sell function checks if there is any of them item availble left, if there is
//   some items left then it decrements it by one, otherwise it returns Sorry
void Inventory::sell()
{
  if (m_in_stock == 0)
     cout << "Sorry, that item is out of stock" << endl;
  else
    m_in_stock--;
}

ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
