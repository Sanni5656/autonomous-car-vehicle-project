#include<iostream>
#include<conio.h>
using namespace std;
class car
{
      public:
             char manuf[20];
             int model;
             int eng;
             int cn;
             int year;
             char color[10];
             
      public:
             void input()
             {
                  cin>>manuf>>model>>eng>>cn>>year>>color;
                  }
             void display()
             {
                  cout<<"\n Name of manufactures is "<<manuf;
                  cout<<"\nName of model is"<<model;
                  cout<<"\n Engine no is "<<eng;
                  cout<<"\n chasis no is "<<cn;
                  cout<<"\n Year of manufacture "<<year;
                  cout<<"\n color of car "<<color;
                  }
};
int main()
{
    car c1;
    c1.input();
    c1.display();
getch();
}
