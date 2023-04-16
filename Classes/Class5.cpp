//Muhammad Ali Ahson



#include<iostream>
using namespace std;

class tollplaza{
private:
    int numofcars;
    int totalmoney;
public:
    tollplaza()
    {
        numofcars=0;
        totalmoney=0;
    }
  void  payingcar()
    {
        totalmoney=totalmoney+30;
        numofcars=numofcars+1;

    }
    void nopaycar()
    {
        numofcars=numofcars+1;

    }
    void display()
    {
        cout<<" no of cars :"<<numofcars;
        cout<<" Money :"<<totalmoney;

    }

};



int main()
{
    tollplaza t1;
    char point='y';
    for( int i=1; ; i++)
    {
        cout<<"Did car "<<i<<" toll of 30 pkr  (Y/N)  and  (e/E) for end ";
        cin>>point;
        if(point=='e' || point=='E')
        {
            break;
        }
        if(point=='y' || point=='Y')
        {
            t1.payingcar();
        }
        else if(point=='n' || point=='N')
        {
            t1.nopaycar();
        }

    }

    t1.display();

}


