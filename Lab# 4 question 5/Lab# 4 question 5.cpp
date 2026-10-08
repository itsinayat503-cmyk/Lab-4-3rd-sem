#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int EmployeeID;
    string EmployeeName;
    static int NextID;
public:
    Employee(string name) {
        EmployeeName = name;
        EmployeeID = NextID;
        NextID++;
    }
    void setEmployeeName(string name) {
        EmployeeName = name;
    }
    int getEmployeeID() {
        return EmployeeID;
    }
    string getEmployeeName() {
        return EmployeeName;
    }
    void displayEmployee() {
        cout << EmployeeID << endl;
        cout << EmployeeName << endl;
    }
};

int Employee::NextID = 1001;

int main() {
    Employee emp1("Zain");
    Employee emp2("Tariq");
    Employee emp3("Hassan");

    emp1.displayEmployee();
    emp2.displayEmployee();
    emp3.displayEmployee();
}