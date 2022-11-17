#include <iostream>
#include<string.h>
using namespace std;

class BOOK
{
public :
  string t[5] ;
  string a[5];
  int e[5];
  double  price[5];



    double Totalprice()
 {
     double totalprice=0 ;
     int i;
     for(i=0;i<=4;i++)
        {
        totalprice = totalprice+price[i];
        }
     return totalprice ;

 }


void Maxprice()
 {
     cout<< "Book of Maximum Price :" <<endl;
 if (price[0]>price[1])
    {

    cout<< "Title :" <<t[0]<<endl;
    cout<< "Authors name : "<< a[0]<<endl;
    cout<< "Edition :" <<e[0]<<endl;
    cout<< "Book Price :" <<price[0]<<endl<<endl;



    }
 else if (price[1]>price[2])
 {

    cout<< "Title :" <<t[1]<<endl;
    cout<< "Authors name : "<< a[1]<<endl;
    cout<< "Edition :" <<e[1]<<endl;
    cout<< "Price :" <<price[1]<<endl<<endl;


 }
  else if (price[2]>price[3])
 {

    cout<< "Title :" <<t[2]<<endl;
    cout<< "Authors name : "<< a[2]<<endl;
    cout<< "Edition :" <<e[2]<<endl;
    cout<< "Price :" <<price[2]<<endl<<endl;


 }
  else if (price[3]>price[4])
 {

     cout<< "Title :" <<t[3]<<endl;
    cout<< "Authors name : "<< a[3]<<endl;
    cout<< "Edition :" <<e[3]<<endl;
    cout<< "Price :" <<price[3]<<endl<<endl;

 }
  else
 {

    cout<< "Title :" <<t[4]<<endl;
    cout<< "Authors name : "<< a[4]<<endl;
    cout<< "Edition :" <<e[4]<<endl;
    cout<< "Price :" <<price[4]<<endl<<endl;


 }

   return ;
}

void Minprice()
 {
     cout<< "Book of Minimum Price :" <<endl;
 if (price[0]<price[1])
    {
    cout<< "Title :" <<t[0]<<endl;
    cout<< "Authors name : "<< a[0]<<endl;
    cout<< "Edition :" <<e[0]<<endl;
    cout<< "Price :" <<price[0]<<endl<<endl;

    }
 else if (price[1]<price[2])
 {

cout<< "Title :" <<t[1]<<endl;
    cout<< "Authors name : "<< a[1]<<endl;
    cout<< "Edition :" <<e[1]<<endl;
    cout<< "Price :" <<price[1]<<endl<<endl;


 }
  else if (price[2]<price[3])
 {

    cout<< "Title :" <<t[2]<<endl;
    cout<< "Authors name : "<< a[2]<<endl;
    cout<< "Edition :" <<e[2]<<endl;
    cout<< "Price :" <<price[2]<<endl<<endl;


 }
  else if (price[3]<price[4])
 {

     cout<< "Title :" <<t[3]<<endl;
    cout<< "Authors name : "<< a[3]<<endl;
    cout<< "Edition :" <<e[3]<<endl;
    cout<< "Price :" <<price[3]<<endl<<endl;


 }
  else
 {

    cout<< "Title :" <<t[4]<<endl;
    cout<< "Authors name : "<< a[4]<<endl;
    cout<< "Edition :" <<e[4]<<endl;
    cout<< "Price :" <<price[4]<<endl<<endl;

 }

 }


   void Display()
   {

        cout<< "Total Price: "<< Totalprice() << endl<<endl;
        Maxprice();
        Minprice();

   }

};
int main()
{
      int i,j;
       BOOK obj;

    for (i=0;i<=4;i++)
        {
        cout << "Enter Book Title :" <<endl;
        cin >> obj.t[i];
        cout << "Enter Book Authors name :" <<endl;
        cin >> obj.a[i];
        cout << "Enter Book Edition :" <<endl;
        cin >> obj.e[i];
        cout << "Enter Book Price :" <<endl;
        cin >> obj.price[i];
        }

    obj.Display();

    return 0;
}

