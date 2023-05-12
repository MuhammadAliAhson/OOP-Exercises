#include <iostream>
#include<string>
#include<stack>
#include<fstream>
#include"header1.h"
#include"Header.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace cv;
using namespace std;


int main()
{
    string filename[7] = { "Test-1.txt","Test-2.txt","Test-3.txt","Test-4.txt","Test-5.txt","Test-6.txt","Test-7.txt" };
    string final = "";
    for (int i = 0; i < 7; i++)
    {
        string output = run(filename[i]);
        final += "\n                               ";
        final += i + 1 + 48;
        final += "th file\n";
        final += output;
        final += "\n";
    }
    final += "\nHits:";
    final += hit + 48;

    final += "\nFault:";
    final += fault + 48;

    ofstream out("output.txt");
    out << final;
    out.close();
}