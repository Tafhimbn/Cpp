/* Problem statement:
2. Write a program which implements the following features:
a) Write a class person which have following properties –
I. Two private variables named name and age.
II. Two public functions named setName(string ) and getName() which will assign value to name var. and will return that value 
respectively.
III. Two public functions named setAge(int a) and getAge() which will assign value to age var. and will return that value respectively.
b) Write a class student which will inherit (public) class person. And this class will also have its own following properties –
I. A private variable named cgpa.
II. Two public functions named setCGPA(float c) and getCGPA() which will assign value to cgpa var. and will return that value 
respectively.
c) Write a class teacher which will inherit (public) class person. And this class will also have its own following properties –
I. A private variable named salary.
II. Two public functions named setSalary(int s) and getSalary() which will assign value to salary var. and will return that value 
respectively.
You can test your program using the following main function:
int main() {
student s;
s.setName("bill");
s.setAge(20);
s.setCGPA(3.78);
teacher t;
t.setName("alex");
t.setAge(38);
t.setSalary(2000);
cout << "===== Student info =====" << endl;
cout << "name: " << s.getName() << endl;
cout << "age: " << s.getAge() << endl;
cout << "cgpa: " << s.getCGPA() << endl;
cout << "===== Teacher info =====" << endl;
cout << "name: " << t.getName() << endl;
cout << "age: " << t.getAge() << endl;
cout << "salary: " << t.getSalary() << endl;
return 0;
}
*/
#include <iostream>
using namespace std;
class person
{
private:
 string name;
 int age;
public:
 void setName(string n)
 {
 name=n;
 }
 string getName()
 {
 return name;
 }
 void setAge(int a)
 {
 age=a;
 }
 int getAge()
 {
 return age;
 }
};
class student : public person
{
private:
 float cgpa;
public:
 void setCGPA(float c)
 {
 cgpa=c;
 }
float getCGPA()
 {
 return cgpa;
 }
};
class teacher : public person
{
private:
 double salary;
public:
 void setSalary(int s)
 {
 salary=s;
 }
 float getSalary()
 {
 return salary;
 }
};
int main() {
student s;
s.setName("bill");
s.setAge(20);
s.setCGPA(3.78);
teacher t;
t.setName("alex");
t.setAge(38);
t.setSalary(2000);
cout << "===== Student info =====" << endl;
cout << "name: " << s.getName() << endl;
cout << "age: " << s.getAge() << endl;
cout << "cgpa: " << s.getCGPA() << endl;
cout << "===== Teacher info =====" << endl;
cout << "name: " << t.getName() << endl;
cout << "age: " << t.getAge() << endl;
cout << "salary: " << t.getSalary() << endl;
return 0;
}


/* output:

===== Student info =====
name: bill
age: 20
cgpa: 3.78
===== Teacher info =====
name: alex
age: 38
salary: 2000
*/
