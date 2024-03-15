#include <iostream>

using namespace std;

int main()
{
    double M,S,R,E;

    cout<< "Enter the total cost of the merchandise:"<<endl;
    cin>>M;
    cout<< "Enter the salary of the employees:" << endl;
    cin>>S;
    cout<< "Enter the yearly rent:"<<endl;
    cin>>R;
    cout<< "Enter the estimated electricity cost:"<<endl;
    cin>>E;

 double T;
 T=M+S+R+E;

 double N;
 N=M*0.10;

double NW;
  NW=N/0.85;

  double U;
  U=(NW+T)/M;



    cout<<"The Markup is:"<<U;

    return 0;
}
