#include<iostream>
using namespace std;


class Employee
       {    private :
              int Id;
              char Name[25];
              int Age;
              long Salary;

              public:
              void GetData()           //Statement 1 : Defining GetData()
              {
                    cout <<"\n\tEnter Employee Id : ";
                    cin >>Id;

                    cout<<"\n\tEnter Employee Name : ";
                    cin>>Name;

                    cout<<"\n\tEnter Employee Age : ";
                    cin>>Age;

                    cout<<"\n\tEnter Employee Salary : ";
                    cin>>Salary;
              }

              void PutData()           //Statement 2 : Defining PutData()
              {  int j;
                 for(j=1;j<=3;j++)
                 {
                    cout<<"\n Details of Employee no."<< j<<"\n Id: "<<Id<<"\n Name:"<<Name<<"\n Age :"<<Age<<"\n Salary :"<<Salary;

                 }

              }

       };


int main()
       {

              int i;

              Employee E[3];           //Statement 3 : Creating Array of 3 Employees

              for(i=0;i<3;i++)
              {
                    cout<<"\nEnter details of "<<i+1<<" Employee";
                    E[i].GetData();
              }

              cout<<"\nDetails of Employees";
              for(i=0;i<3;i++)
              E[i].PutData();
  return 0;
       }
