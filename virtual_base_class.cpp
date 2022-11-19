/* problem statement:
Write a C++ program to calculate the total mark of a student using the concept of virtual base class. Consider the output given and follow the following steps to complete 
your program
Step 1: Start the program.
Step 2: Declare the base class student.
Step 3: Declare and define the functions getnumber() and putnumber().
Step 4: Create the derived class test virtually derived from the base class student.
Step 5: Declare and define the function getmarks() and putmarks().
Step 6: Create the derived class sports virtually derived from the base class student. 
Step 7: Declare and define the function getscore() and putscore().
Step 8: Create the derived class result derived from the class test and sports.
Step 9: Declare and define the function display() to calculate the total.
Step 10: Create the derived class object obj.
Step 11: Call the function get number(),getmarks(),getscore() and display().
Step 12: Stop the program.
Output:
 Enter Roll No: 200 
 Enter Marks
 Part1: 90
 Part2: 80
 Enter Sports Score: 80
   
  */

#include<iostream>
using namespace std;
class student
{
 int rno;
public:
 void getnumber(int n)
 {
 rno=n;
 }
 int putnumber()
 {
 return rno;
 }
};
class test : virtual public student
 {
protected:
 int part1, part2;
public:
 void getmarks(int p1,int p2) {
 part1=p1;
 part2=p2;
 }
void putmarks()
 { cout << "\n\tPart1:" << part1;
 cout << "\n\tPart2:" << part2;
 }
};
class sports : public virtual student {
public:
 int score;
 void getscore(int s)
 {
 score=s;
 }
int putscore() {
 return score;
 }
};
class result : public test, public sports {
 int total;
public:
 void display() {
 total = part1 + part2 + score;
 cout << "\n\n\tRoll No:" << putnumber()<< "\n";
 cout << "\tMarks Obtained\n";
 putmarks();
 cout << "\n\tSports Score is:" << putscore();
 cout << "\n\tTotal Score:" << total;
 }
};
int main() { 
int no ,p1,p2,s;
 result obj;
 student std;
 cout << "Enter Roll No:";
 cin>>no;
 obj.getnumber(no);
 cout << "Enter Marks\n";
 cout << "Part1:";
 cin>>p1;
 cout << "Part2:";
 cin>>p2;
 obj.getmarks(p1,p2);
 cout << "Enter Sports Score:";
 cin>>s;
 obj.getscore(s);
 obj.display();
 return 0;
 }

/*
Roll No: 200
 Marks Obtained
 Part1: 90
 Part2: 80
 Sports Score is: 80
 Total Score is: 250
 */
