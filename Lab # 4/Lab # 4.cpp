#include <iostream>
#include <string>
using namespace std;
class Order {
private:
    int OrderID;
    string CustomerName;
    double Amount;
    static int TotalOrders;
public:
    Order(int id, string name, double amt) {
        OrderID = id;
        CustomerName = name;
        Amount = amt;
        TotalOrders++;
    }
    void setOrderID(int id) {
        OrderID = id;
    }
    void setCustomerName(string name) {
        CustomerName = name;
    }
    void setAmount(double amt) {
        Amount = amt;
    }
    int getOrderID() {
        return OrderID;
    }
    string getCustomerName() {
        return CustomerName;
    }
    double getAmount() {
        return Amount;
    }
    static int getTotalOrders() {
        return TotalOrders;
    }
};

int Order::TotalOrders = 0;

int main() {
    Order order1(101, "Ali", 1500);
    Order order2(102, "Sara", 2500);
    Order order3(103, "Usman", 3200);

    cout << Order::getTotalOrders() << endl;
}
