#include <iostream>
using namespace std;

int main(){

    double total=0;
    int temp;
    cout<<"Please enter 10 for 'S', 9 for 'A' and so on"<<endl;
    cout<<"Please enter DAA Theory grade: ";
    cin>>temp;
    total += temp*3;

    cout<<"Please enter DAA Lab grade: ";
    cin>>temp;
    total += temp*1;

    cout<<"Please enter CAO grade: ";
    cin>>temp;
    total += temp*3;

    cout<<"Please enter OS theory grade: ";
    cin>>temp;
    total += temp*3;

    cout<<"Please enter OS lab grade: ";
    cin>>temp;
    total += temp*1;

    cout<<"Please enter AI grade: ";
    cin>>temp;
    total += temp*3;

    cout<<"Please enter MPMC theory grade: ";
    cin>>temp;
    total += temp*3;

    cout<<"Please enter MPMC Lab grade: ";
    cin>>temp;
    total += temp*1;

    cout<<"Please enter Math grade: ";
    cin>>temp;
    total += temp*4;

    cout<<"Please enter STS grade: ";
    cin>>temp;
    total += temp*1.5;

    cout<<endl<<"Your GPA is: "<<total/23.5;

    return 0;
}
