#include <iostream>
#include <vector>
class Employee{
private:
    std::string name;
    double wage;
public:
    int phone_number;
    std::string getName();
    void setName(std::string newName);
    double getWage();
    void setWage(double newWage);
};
void Employee::setName(std::string newName){
    name = newName;
}
std::string Employee::getName(){
    return name;
}
void Employee::setWage(double newWage){
    wage = newWage;
}
double Employee::getWage(){
    return wage;
}
int main(){
    std::vector<Employee> myEmployees;
    while(myEmployees.size() < 3){
        myEmployees.push_back(Employee{});
    }
    myEmployees.at(0).setName("Mark");
    myEmployees.at(1).setName("Derek");
    myEmployees.at(2).setName("Kaid");
    myEmployees.at(0).setWage(75000.00);
    myEmployees.at(1).setWage(75000.00);
    myEmployees.at(2).setWage(750000.00);
    for(Employee& person : myEmployees){
        std::cout << person.getName() << " makes $" << person.getWage() << " per year.\n";
    }
    return 0;
}
