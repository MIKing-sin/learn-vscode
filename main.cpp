#include <iostream>
#include "swap.h"

using namespace std;


int main (int argc,char **argv)
{
    int val1=10;
    int val2=20;

    cout<<"Before swap :"<<"  val1= "<<val1<<"  val2= "<<val2<<endl;
    swap(val1,val2);
    cout<<"After swap  :"<<"  val1= "<<val1<<"  val2= "<<val2<<endl;

    return 0;
}