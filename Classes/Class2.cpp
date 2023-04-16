# include <iostream>
using namespace std;

class IceCreamCone {
private:
	string flavor;
	int scoops;
	string coneType;
	double price;
public:
	IceCreamCone(string flv = "Vanilla", int scoop = 1, string Type = "Sugar", double cost = 0) {
		flavor = flv;
		scoops = scoop;
		coneType = Type;
		price = cost;
		price = 75 * scoops;
		if (coneType == "Waffle") {
			price = price + 45;
		}
		cout << "Total cost of the order is : " << price;
	}

};

int main() {
		string flavor;
		int scoops;
		string coneType;
		cout << "Enter your flavor ";
		cin >> flavor;
		cout << "Num of scoops: ";
		cin >> scoops;
		cout << "Cone : ";
		cin >> coneType;
		cout << endl;
		IceCreamCone Order1(flavor, scoops, coneType);
		cout << " Centers";
	
}