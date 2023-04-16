#include <iostream>
using namespace std;
class Fruit {
    static int fruitsAmount;
  
public:
    Fruit(){
        ++fruitsAmount;
    }
    ~Fruit(){
        --fruitsAmount;
    }


    static int amount(){
        return fruitsAmount;
    }
};


class Apples: public Fruit{


    static int applesAmount;
        
    public:
        Apples(){
            ++applesAmount; 
        } 
    ~Apples(){
            --applesAmount; 
        }
    static int amount(){
        return applesAmount;
    }
};


class Mangoes: public Fruit{


    static int mangoesAmount;
        
    public:
        Mangoes(){
            ++mangoesAmount; 
        } 
    ~Mangoes(){
            --mangoesAmount; 
        }
    static int amount(){
        return mangoesAmount;
    }
};
int Fruit::fruitsAmount;
int Apples::applesAmount;
int Mangoes::mangoesAmount;


int main()
{
    Apples a1, a2, a3;
    Mangoes m1,m2,m3,m4;
    cout<<"Apples: "<<Apples::amount()<<endl;
    cout<<"Mangoes: "<<Mangoes::amount()<<endl;
    cout<<"Fruits: "<<Fruit::amount()<<endl;
    
    return 0;
}