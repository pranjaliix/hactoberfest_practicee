#include<iostream>
using namespace std;

class account
{
    private: 
      int account_number;
      float balance;
    public:
      void set_value()
      {
        cout<<"Enter account number: ";
        cin>>account_number;
        cout<<"Enter balance: ";
        cin>>balance;
      }  
      void display()
      {
        cout<<"Account number: "<<account_number;
        cout<<"\nBalance: "<<balance;
      }
};
int main()
{
    account A;

    A.set_value();
    A.display();
    return 0;
}
