#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>

using namespace std;

class Employee  {
    private:
        string firstname;
        string lastname;
        int monthlysalary;
    
    public:
        Employee(string f, string l, int s);
        string getfirstname();
        string getlastname();
        int getmonthlysalary();
        void setfirstname(string f);
        void setlastname(string l);
        void setmonthlysalary(int s);
        void displayyearlysalary();
        void displayraisedsalary(double percent);    
};

#endif

