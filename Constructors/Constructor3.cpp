/*
Muhammad Ali Ahson


*/




#include <iostream>
#include "Constructor3.h"
using namespace std;
Matrix3::Matrix3() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = 0;
		}
}

}
Matrix3::Matrix3(float x) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = x;
		}
	}
}

Matrix3 Matrix3:: dot(Matrix3 obj) {
     Matrix3 rslt;

    cout << "Multiplication of given two matrices is:\n" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rslt.arr[i][j] = 0;

            for (int k = 0; k < 3; k++) {
                rslt.arr[i][j] = rslt.arr[i][j] + (arr[i][k] * obj.arr[k][j]);
            }

           
        }

        cout << endl;
    }
    return rslt;
}
 float Matrix3:: retreive(int x, int y) {
     return arr[x][y];


 }



  

