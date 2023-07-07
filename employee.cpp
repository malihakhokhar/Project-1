#include"Employee.h"
#include<iostream>
#include<string>

using namespace std;

Employee::Employee(string f, string l, int s)
{
    firstname=f;
    lastname=l;
    monthlysalary=s;
}

void Employee::setfirstname(string f)
{
    firstname=f;
}

void Employee::setlastname(string l)
{
    lastname=l;
}

void Employee::setmonthlysalary(int s)
{
    if(s>0)
        monthlysalary=s;
    else
        monthlysalary=0;
}

string Employee::getfirstname()
{
    return firstname;
}

string Employee::getlastname()
{
    return lastname;
}

int Employee::getmonthlysalary()
{
    return monthlysalary;
}

void Employee::displayyearlysalary()
{
    cout<<"Year salary: "<<monthlysalary*12<<endl;
}

void Employee::displayraisedsalary(double percent)
{
    monthlysalary*=(1+percent/100);
}


