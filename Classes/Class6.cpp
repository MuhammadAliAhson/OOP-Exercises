//Muhammad Ali Ahson
 #include<iostream>
using namespace std;


class Distance{
    private:
    int feet;
    float inches;
    public:

    Distance();
    Distance(int a, float b);
   void set_distance(int a, float b);
   void display_distance();

};
Distance::Distance()
{
    feet=0;
    inches=0;
}
Distance::Distance(int a, float b)
{
    feet=a;
    inches=b;
}
void Distance::set_distance(int a, float b)
{
    feet=a;
    inches=b;

}

void Distance::display_distance()
{
    cout<<"distance is "<<feet<<","<<inches<<endl;
}



int main()
{
    Distance d1, d2(10, 2);

    d1.display_distance();
    d2.display_distance();

}