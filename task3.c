#include <string>
using namespace std;

#include <iostream>
class HighSchool {
    private:
        static int nextId;
        int id;
        string stu_name;
        int stu_roll_no;
        int stu_standard;
        int stu_age;
        string stu_contact;
        string stu_edu_institute_name;
        string stu_address;
    public:
        HighSchool() {
            id = nextId++;
        }
        
        static int getNextId() {
            return nextId;
        }
        
        int getId() {
            return id;
        }
        
        void setStuName(string name) {
            stu_name = name;
        }
        
        string getStuName() {
            return stu_name;
        }
        
        void setStuRollNo(int rollNo) {
            stu_roll_no = rollNo;
        }
        
        int getStuRollNo() {
            return stu_roll_no;
        }
        
        void setStuStandard(int standard) {
            stu_standard = standard;
        }
        
        int getStuStandard() {
            return stu_standard;
        }
        
        void setStuAge(int age) {
            stu_age = age;
        }
