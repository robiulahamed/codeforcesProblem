#include <iostream>
#include <string>
#include <vector>

class Employee {
public:
    Employee(const std::string &name, int id, const std::string &position)
        : name(name), id(id), position(position) {}

    void displayInfo() const {
        std::cout << "ID: " << id << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Position: " << position << std::endl;
    }

private:
    std::string name;
    int id;
    std::string position;
};

class OfficeManagementSystem {
public:
    void addEmployee(const std::string &name, int id, const std::string &position) {
        employees.push_back(Employee(name, id, position));
    }

    void displayAllEmployees() const {
        std::cout << "Employee List:" << std::endl;
        for (const Employee &employee : employees) {
            employee.displayInfo();
            std::cout << "-----------------------" << std::endl;
        }
    }

private:
    std::vector<Employee> employees;
};

int main() {
    OfficeManagementSystem officeSystem;

    officeSystem.addEmployee("John Doe", 101, "Manager");
    officeSystem.addEmployee("Jane Smith", 102, "Developer");
    officeSystem.addEmployee("Michael Johnson", 103, "Designer");

    officeSystem.displayAllEmployees();

    return 0;
}

