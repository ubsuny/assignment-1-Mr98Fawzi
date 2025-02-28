#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main() {
  
  int seriesIf=2;
  long int seriesLf=2;
  unsigned long int seriesUf=2;
int i;

int imax = std::numeric_limits<int>::max();
long int lmax = std::numeric_limits<long int>::max();
unsigned long int umax = std::numeric_limits<unsigned long int>::max();


cout<<"The max value for integer is "<<imax<<endl;

cout<<"The series following the recursive relation f_n=[f_(n-1)]^2 will be as follows "<<endl;


    for (i = 0;imax >= seriesIf; i++) 
    {   
        if (i==0)
        {
         std::cout << "f("<<i<<")="<<seriesIf<<std::endl;
        }
        else 
        {
            if (pow(seriesIf,2)<imax)
             {
            seriesIf=pow(seriesIf,2);
            std::cout << "f("<<i+1<<")="<<seriesIf<<std::endl;
             }
             else
            {
             seriesIf=pow(seriesIf,2);
             cout<< "f("<<i+1<<")="<<seriesIf<<std::endl;
             cout<<"The series cannot be excuted further due to an overFlow error as Int data type in used to store the series elements "<<std::endl;
             cout<<endl;
              cout<<endl;
              cout<<endl;
             break;
              
            }
        }
    }
    
    
    cout<<"The max value for long int is "<<lmax<<endl;

cout<<"the series following the recursive relation f_n=[f_(n-1)]^2 will be as follows "<<endl;


    for (i = 0;lmax >= seriesLf; i++) 
    {   
        if (i==0)
        {
         std::cout << "f("<<i<<")="<<seriesLf<<std::endl;
        }
        else 
        {
            if (pow(seriesLf,2)<lmax)
             {
            seriesLf=pow(seriesLf,2);
            std::cout << "f("<<i+1<<")="<<seriesLf<<std::endl;
             }
             else
            {
            seriesLf=pow(seriesLf,2);
             cout<< "f("<<i+1<<")="<<seriesLf<<std::endl;
             cout<<"The series cannot be excuted further due to an overFlow error as long Int data type in used to store the series elements"<<std::endl;
             cout<<endl;
              cout<<endl;
               cout<<endl;
             break;
            }
        }
    }
    cout<<"the max value for unsinged long int is "<<umax<<endl;
    
    cout<<"the series following the recursive relation f_n=[f_(n-1)]^2 will be as follows "<<endl;


    for (i = 0;umax >= seriesUf; i++) 
    {   
        if (i==0)
        {
         std::cout << "f("<<i<<")="<<seriesUf<<std::endl;
        }
        else 
        {
            if (pow(seriesUf,2)<umax)
             {
            seriesUf=pow(seriesUf,2);
            std::cout << "f("<<i+1<<")="<<seriesUf<<std::endl;
             }
             else
            {
                seriesUf=pow(seriesUf,2);
             cout<< "f("<<i+1<<")="<<seriesUf<<std::endl;
             cout<<"The series cannot be excuted further due to an overFlow error as unsiged long Int data type in used to store the series elements"<<std::endl;
            cout<<endl;
              cout<<endl;
               cout<<endl;
             break;
              
            }
        }
    }
    
cout << "\nExplanation:\n";
cout << "The reason the results differ from problem 2 is due to the host system being 64-bit." << endl;
cout << "On a 64-bit system, an 'int' typically occupies 4 bytes (32 bits), while 'long int' and 'unsigned long int' use 8 bytes (64 bits)." << endl;
cout << "This causes overflow to occur at different values compared to a 32-bit system." << endl;


return 0;
}


