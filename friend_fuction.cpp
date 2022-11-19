/*  Problem statements: 
Create an application which will have 2 classes called "FaceBook" and "GooglePlus". 
Both the classes will have the following:
DATA MEMBERS:
i. an integer which represent the number of user 
MEMBER FUNCTIONS:
i. A constructor which initialize its private members.
Write a function called ‘void compare(FaceBook, GooglePlus)' which will print which social media is more popular based on their number of user.
You should decide whether the functions should be friendly or not.
Test the program using main function.
*/

#include <iostream>
using namespace std;
class Googleplus;
class Facebook
{
private:
int user1;
public:
 Facebook()//constructor
 {
 int user1=0;
 }
 ~Facebook()//destructor
 {}
 void setuser1(int u1)
 {
 user1=u1;
 }
 int getuser1()
 {
 return user1;
 }
 friend void compare(Facebook&,Googleplus&);
//called global friend function
// friend global_function(class1&,class2&,…..)
};
class Googleplus
{
private:
 int user2;
public:
 Googleplus() //constructor
 {
 int user2=0;
 }
 ~Googleplus () //destructor
 {}
 void setuser2(int u2)
 {
 user2=u2;
 }
 int getuser2()
 {
 return user2;
 }
 friend void compare(Facebook&,Googleplus&);
//called global friend function
// friend global_function(class1&,class2&,…..)
};
void compare(Facebook& f , Googleplus& g)
{ int u1,u2;
u1 = f.getuser1();
u2 =g.getuser2();
if (u1 > u2 )
 {
 cout<<"Facebook is more popular"<<endl;
 }
 else if(u1 < u2 )
 {
 cout << "Googleplus is more popular"<<endl;
 }
 else
 {
 cout << "Facebook and Googleplus Both are equal popular"<<endl;
 }
}
int main()
{
 int n,m;
 Googleplus g;
 Facebook f;
 cout<<"Enter The number of FaceBook user"<<endl;
 cin >>n;
 f.setuser1(n);
 cout<<"Enter The number of GooglePlus user"<<endl;
 cin>>m;
 g.setuser2(m);
 compare(f,g); //Global_function(Object1,object2,….. , object nth)
 return 0;
}



