Given that an EMPLOYEE class contains following members: Employee Number, Employee Name, Basic, DA, IT, Net Salary. Member functions: to read the data, to calculate Net Salary and to print data members.  Write a C++ program to read the data of N employees and compute Net Salary of each employee. (Dearness Allowance (DA) = 52% of Basic and Income Tax (IT) = 30% of the gross salary. Net Salary = Basic + DA - IT).


#include<iostream>
using namespace std;
class Employee{
    
    int eno;
    string ename;
    float basic,da,it,net_salary,gross_salary;
public:
void find_emp_details();
float emp_net_salary();
void displayempdata();

};
void Employee::find_emp_details(){
    cout<<"enter employee No:"<<endl;
    cin>>eno;
    cout<<"enter employee Name:"<<endl;
    cin>>ename;
    cout<<"enter employee basic salary:"<<endl;
    cin>>basic;
}
float Employee::emp_net_salary(){
    da = basic * 0.52;
      gross_salary = basic + da;
      it = gross_salary * 0.30;
      net_salary = (basic + da) - it;
      return net_salary;
}
void Employee::displayempdata(){
cout<<"Emp name"<<ename<<endl;
cout<<"Emp no"<<eno<<endl;
cout<<"Emp net_salary:"<<net_salary<<endl;
}

int main()
{
    Employee e;
    e.find_emp_details();
    e.emp_net_salary();
    e.displayempdata();
    return 0;
}
  
