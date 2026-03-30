#include <iostream>
#include <iomanip>

using namespace std;

#include "Time.h"

int main(){
    Time t1,t2,t3;
    t1.getTime();
    t2.getTime();
    //t1.set_time(5,60);
    //t2.set_time(6);
    t3=t2.operator-(t1);
    //t3=t2-t1;
    t1.display();
    t2.display();
    t3=t2-t1;
    t3=t3-10;
    ++t3;
    t3.display();
    /*
    cout<<"What time was it?";
    //getTime(t1);
    t1.set_time
    cout<<"What time is it now?";
    //getTime(t2);
    t2.set_time
    t3=subtract(t2,t1); //t3=t2-t1
    cout<<"Time diff is ";
    display(t3);
    */
}

/*
#include <iostream>
#include <iomanip>
using namespace std;
void square(int&);
void square(int &x){
    x*=x;
}

int main(){
    int age;
    std::string colour;

    std::cout<<"Hello World "<<std::endl;
    cout<<"Your age and colour :";
    cin>>age >>colour;
    square(age);
    cout<<"Age:"<<setprecision(2)<<age<<endl;
    cout<<"Colour:"<<setfill('x')<<setw(8)<<colour<<endl;

}*/