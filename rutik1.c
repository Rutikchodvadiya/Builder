#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    string role;
    double salary;
    int experience;
    string address;
    string email;
    string contact;

public:

    void setId(int empId) {
        id = empId;
    }

    void setName(string empName) {
        name = empName;
    }

    void setRole(string empRole) {
        role = empRole;
    }

    void setSalary(double empSalary) {
        salary = empSalary;
    }

    void setExperience(int empExperience) {
        experience = empExperience;
    }

    void setAddress(string empAddress) {
        address = empAddress;
    }

    void setEmail(string empEmail) {
        email = empEmail;
    }

    void setContact(string empContact) {
        contact = empContact;
    }


    int getId() {
        return id;
    }

    string getName() {
        return name;
