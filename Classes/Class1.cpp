#include <iostream>
using namespace std;

class TestScores{
private:
	int array[10] = {};
	int check = 0 ,average = 0;
public:
	TestScores(int arr[10]);
};

TestScores::TestScores(int arr[10]){
	for (int k = 0; k < 10; k++){
		array[k] = arr[k];
	}
	for (int k = 0; k < 10; k++){
		if (array[k] > 100 || array[k] < 0){
			check = 1;
			cout << "Invalid input" << endl;
		}
	}
	if (check == 0){
		int Sum = 0;
		for (int k = 0; k < 10; k++){
			Sum += array[k];
		}
		average = Sum / 10;
		cout << average;
	}

}

int main(){
	int arr[10];
	cout << "Enter the number " << endl;
	for (int k = 0; k < 10; k++){
		cin >> arr[k];
	}
	cout << endl << " Output " << endl;
	TestScores T1(arr);

}