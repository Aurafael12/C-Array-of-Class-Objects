/*C++ array of class objects */
//Dr. Tyson McMillan Gaddis 2019 Example

#include <iostream>
#include <iomanip>
#include "InventoryItem.h"
#include <array>
#include <vector>
using namespace std;

int main() 
{
  //instnatiate an inventory item, using the default constructor
 InventoryItem item1; // default constructor is call no arguments passed
 //Instnatiate an inventory item desc Hammer with one paramerter constructor


InventoryItem item2("Hammer");

item1.setDescription("Saw");
item1.setCost(25.99);
item1.setUnits(8);

InventoryItem item3("Flathead Screwdriver, 5.33, 63");
/* ****************Array of Objects **********/
//Goal store and effeciently display the items in teh lest(array)
const int NUM_ITEMS = 3; // think ahead of time how many items you're going to store in something to allocate memory
//vector only grows to the size it needs
InventoryItem inventoryArray[NUM_ITEMS];
inventoryArray[0] = item1;
inventoryArray[1] = item2;
inventoryArray[2] = item3;

cout << "\nItems in the invnetory List: " << endl;
cout << setw(14) << "Inventory Item " << setw(8) << "Cost: " << setw(8)
     << setw(16) << "Units on Hand\n";
     cout << "***********************************************\n";
for(int i = 0; i < NUM_ITEMS; i++ )
{
  cout << setw(14) << inventoryArray[i].getDescription();
  cout << setw(8) << inventoryArray[i].getCost();
  cout << setw(7) << inventoryArray[i].getUnits();
  cout << endl;
  

}
//output these data using a a vector
//vecor inventoryVector
vector<InventoryItem> inventoryVector; //22
inventoryVector.push_back(item1);// 24
inventoryVector.push_back(item2);//25
inventoryVector.push_back(item3); // equivalent of line 26

cout << "\nItems in the invnetory List: " << endl;
cout << setw(20) << "Inventory Item " << setw(8) << "Cost: " << setw(8)
     << setw(7) << "Units on Hand\n";
     cout << "***********************************************\n";
for(InventoryItem x : inventoryVector) // let x equal every element that exists in the Inventoryvector
{
  cout << setw(20) << x.getDescription();
  cout << setw(8) << x.getCost();
  cout << setw(7) << x.getUnits();
  cout << endl;

}
 return 0;
}