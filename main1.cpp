#include"Employee.h"
#include<iostream>
#include<string>

using namespace std;

int main()
{
    Employee e1("Maliha","Khokhar",20000);

    Employee e2("Wajeeha","Khokhar",60000);

    cout << e1.getfirstname() << " " << e1.getlastname() << " makes $" << e1.getmonthlysalary()*12 << " per year." << endl;
    cout << e2.getfirstname() << " " << e2.getlastname() << " makes $" << e2.getmonthlysalary()*12 << " per year." << endl;

    e1.displayraisedsalary(10);
    e2.displayraisedsalary(10);

    cout << e1.getfirstname() << " " << e1.getlastname() << " makes $" << e1.getmonthlysalary()*12 << " per year." << endl;
    cout << e2.getfirstname() << " " << e2.getlastname() << " makes $" << e2.getmonthlysalary()*12 << " per year." << endl;

    return 0;
}

