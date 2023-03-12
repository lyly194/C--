#include <iostream>
#include <string>
using namespace std;

class RetailItem {
private:
    string description;
    int unitsOnHand;
    double price;
public:
    // constructor
    RetailItem(string desc, int units, double pr) {
        description = desc;
        unitsOnHand = units;
        price = pr;
    }
    // mutator functions
    void setDescription(string desc) {
        description = desc;
    }
    void setUnitsOnHand(int units) {
        unitsOnHand = units;
    }
    void setPrice(double pr) {
        price = pr;
    }
    // accessor functions
    string getDescription() {
        return description;
    }
    int getUnitsOnHand() {
        return unitsOnHand;
    }
    double getPrice() {
        return price;
    }
};

int main() {
    // create RetailItem objects
    RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);
    
    // display data for each item
    cout << "Item #1\n";
    cout << "Description: " << item1.getDescription() << endl;
    cout << "Units On Hand: " << item1.getUnitsOnHand() << endl;
    cout << "Price: $" << item1.getPrice() << endl << endl;
    
    cout << "Item #2\n";
    cout << "Description: " << item2.getDescription() << endl;
    cout << "Units On Hand: " << item2.getUnitsOnHand() << endl;
    cout << "Price: $" << item2.getPrice() << endl << endl;
    
    cout << "Item #3\n";
    cout << "Description: " << item3.getDescription() << endl;
    cout << "Units On Hand: " << item3.getUnitsOnHand() << endl;
    cout << "Price: $" << item3.getPrice() << endl << endl;
    
    return 0;
}
