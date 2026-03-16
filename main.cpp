#include <iostream>
#include <iomanip>

using namespace std;

#include "Time.h"

int main(){
    struct Time t1,t2,t3;
    cout<<"What time was it?";
    getTime(t1);
    cout<<"What time is it now?";
    getTime(t2);
    t3=subtract(t2,t1); //t3=t2-t1
    cout<<"Time diff is ";
    display(t3);
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