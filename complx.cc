//this code read and display two complax number and sum those complx number,Use array object in class
#include<iostream>
using namespace std;
class Compx 
{
    private:
        int real; //real number is int type
        int imag;// imagainary number is also int type
public:
    Compx(){};//Constructor taking no parmeter
    Compx(int r, int i){real=r;imag=i;} //Constructor initinalized value
    void GetValue()
    {
        int r,i;
        cout<<"Enter real value :"<<endl;cin>>r;
        cout<<"Enter imaginry value "<<endl;
        cin>>i;
        real=r;imag=i;
    }
    void print()//Print function print values of complex number
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    Compx add(Compx c2)
    {
        Compx temp;
        temp.real=real+c2.real;
        temp.imag=imag+c2.imag;
        return temp;
    }
};
int main()
{
  Compx c1[10];   // array contain 10 values 
  int i,n;
  cout<<"How many complex number you want to enter "<<endl;
  cin>>n; //Complex number
  for (i=0;i<n;i++)// this for loop for getting value
  {
      cout<<"Enter complex number :"<<i+1<<endl;
      c1[i].GetValue();
  }
  for(i=0;i<n;i++)//this for loop is for printing values
  {
      c1[i].print();
  }
  
 return 0;
}