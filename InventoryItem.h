//This class has overload constructors, but will become and array of objects.
#ifndef IVENTORYITEM_H
#define IVENTORYITEM_H

#include <string>
using namespace std;

class InventoryItem
{
  private:
    string description;
    double cost;
    int units;
  public:
    InventoryItem()//default constructors
    {
      description = "";
      cost = 0.0;
      units = 0;
    }
    InventoryItem(string desc)
    {
      description = desc;
      cost = 0.0;
      units = 0;
    }
    InventoryItem(string desc, double c, int u)
    {
      description = desc;
      cost = c;
      units = u;
    }
    //Mutator Functions
    void setDescription(string desc) { description = desc; }
    void setCost(double c) { cost = c; }
    void setUnits(double u) { units = u; }

    //Accessor Functions
    string getDescription() const {return description; }
    double getCost() const { return cost; }
    double getUnits() const { return units; }
};
#endif