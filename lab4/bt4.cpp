#include <iostream>

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    Inventory() : itemNumber(0), quantity(0), cost(0.0), totalCost(0.0) {}
    Inventory(int itemNumber, double cost, int quantity) : itemNumber(itemNumber), quantity(quantity), cost(cost) {
        setTotalCost();
    }

    void setItemNumber(int itemNumber) {
        this->itemNumber = itemNumber;
    }

    void setQuantity(int quantity) {
        this->quantity = quantity;
        setTotalCost();
    }

    void setCost(double cost) {
        this->cost = cost;
        setTotalCost();
    }

    void setTotalCost() {
        totalCost = quantity * cost;
    }

    int getItemNumber() const {
        return itemNumber;
    }

    int getQuantity() const {
        return quantity;
    }

    double getCost() const {
        return cost;
    }

    double getTotalCost() const {
        return totalCost;
    }
};

int main() {
    Inventory item1;
    Inventory item2(1234, 9.99, 50);
    item1.setItemNumber(5678);
    item1.setCost(19.99);
    item1.setQuantity(25);

    std::cout << "Item 1: " << std::endl;
    std::cout << "Item Number: " << item1.getItemNumber() << std::endl;
    std::cout << "Quantity: " << item1.getQuantity() << std::endl;
    std::cout << "Cost: " << item1.getCost() << std::endl;
    std::cout << "Total Cost: " << item1.getTotalCost() << std::endl;

    std::cout << std::endl;

    std::cout << "Item 2: " << std::endl;
    std::cout << "Item Number: " << item2.getItemNumber() << std::endl;
    std::cout << "Quantity: " << item2.getQuantity() << std::endl;
    std::cout << "Cost: " << item2.getCost() << std::endl;
    std::cout << "Total Cost: " << item2.getTotalCost() << std::endl;

    return 0;
}
