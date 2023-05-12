#pragma once
#include <iostream>
#include<string>
#include<queue>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace cv;
using namespace std;




int imageparts(string im)
{
    int label = 1;
    int nonZ = 0;
    int ass = 0;

    Mat img = imread(im);
    Mat lena1 = img;
    queue<int> rows;
    queue<int> cols;
    //cout << img.rows << endl << img.cols << endl;
    double** arr = new double* [img.rows];
    for (int i = 0; i < img.rows; ++i)
        arr[i] = new double[img.cols]{ 0 };

    //loops to store matrix value in array 
    for (int i = 0; i < img.rows; i++)
    {
        for (int j = 0; j < img.cols; j++)
        {
            arr[i][j] = ((img.at<Vec3b>(i, j)[0]));
        }
    }





    for (int i = 0; i < img.rows; i++)
    {
        for (int j = 0; j < img.cols; j++)
        {
            nonZ = 0;
            if (arr[i][j] == 255)
            {
                if (i != 0 && j != 0 && i != img.rows && j != img.cols)
                {

                    if (arr[i][j - 1] > 0)
                    {
                        nonZ++;
                        ass = arr[i][j - 1];
                    }
                    if (arr[i - 1][j - 1] > 0)
                    {
                        nonZ++;
                        if (ass > arr[i - 1][j - 1] && nonZ > 1)
                        {

                            for (int k = 0; k <= i; k++)
                                for (int l = 0; l <= j; l++)
                                {
                                    if (arr[k][l] == ass)
                                    {
                                        arr[k][l] = arr[i - 1][j - 1];      //change
                                    }
                                }
                            ass = arr[i - 1][j - 1];

                        }
                        else if (ass < arr[i - 1][j - 1] && nonZ > 1)   //change
                        {

                            for (int k = 0; k < img.rows; k++)
                                for (int l = 0; l < img.cols; l++)
                                {
                                    if (arr[k][l] == arr[i - 1][j - 1])     //change
                                    {
                                        arr[k][l] = ass;
                                    }
                                }
                        }
                        else
                        {
                            ass = arr[i - 1][j - 1];
                        }
                    }
                    if (arr[i - 1][j] > 0)
                    {
                        nonZ++;
                        if (ass > arr[i - 1][j] && nonZ > 1)        //change
                        {

                            for (int k = 0; k < i; k++)
                                for (int l = 0; l < j; l++)
                                {
                                    if (arr[k][l] == ass)
                                    {
                                        arr[k][l] = arr[i - 1][j];      //change
                                    }
                                }
                            ass = arr[i - 1][j];        //change

                        }
                        else if (ass < arr[i - 1][j] && nonZ > 1)   //change
                        {

                            for (int k = 0; k < i; k++)
                                for (int l = 0; l < j; l++)
                                {
                                    if (arr[k][l] == arr[i - 1][j])     //change
                                    {
                                        arr[k][l] = ass;
                                    }
                                }
                        }
                        else
                        {
                            ass = arr[i - 1][j];
                        }
                    }
                    if (arr[i - 1][j + 1] > 0)
                    {

                        nonZ++;
                        if (ass > arr[i - 1][j + 1] && nonZ > 1)        //change
                        {

                            for (int k = 0; k < i; k++)
                                for (int l = 0; l < j; l++)
                                {
                                    if (arr[k][l] == ass)
                                    {
                                        arr[k][l] = arr[i - 1][j + 1];      //change
                                    }
                                }
                            ass = arr[i - 1][j + 1];        //change

                        }
                        else if (ass < arr[i - 1][j + 1] && nonZ > 1)   //change
                        {

                            for (int k = 0; k < i; k++)
                                for (int l = 0; l < j; l++)
                                {
                                    if (arr[k][l] == arr[i - 1][j + 1])     //change
                                    {
                                        arr[k][l] = ass;
                                    }
                                }
                        }
                        else
                        {
                            ass = arr[i - 1][j + 1];
                        }
                    }
                }


                //  left top corner
                else if (i == 0 && j == 0)
                {
                }

                //   top line
                else if (i == 0 && j != 0)
                {
                    if (arr[i][j - 1] > 0)
                    {
                        nonZ++;
                        ass = arr[i][j - 1];
                    }
                }
                //  right top corner
                else if (i == 0 && j == img.cols)
                {
                    if (arr[i][j - 1] > 0)
                    {
                        nonZ++;

                        ass = arr[i][j - 1];
                    }
                }
                //  right line
                else if (i != 0 && j == img.cols)
                {
                    if (arr[i][j - 1] > 0)
                    {
                        nonZ++;

                        ass = arr[i][j - 1];

                    }
                    if (arr[i - 1][j - 1])
                    {
                        nonZ++;
                        if (ass > arr[i - 1][j - 1] && nonZ > 1)        //change
                        {

                            for (int k = 0; k < i; k++)
                                for (int l = 0; l < j; l++)
                                {
                                    if (arr[k][l] == ass)
                                    {
                                        arr[k][l] = arr[i - 1][j - 1];      //change
                                    }
                                }
                            ass = arr[i - 1][j - 1];        //change

                        }
                        else if (ass < arr[i - 1][j - 1] && nonZ > 1)   //change
                        {

                            for (int k = 0; k < i; k++)
                                for (int l = 0; l < j; l++)
                                {
                                    if (arr[k][l] == arr[i - 1][j - 1])     //change
                                    {
                                        arr[k][l] = ass;
                                    }
                                }
                        }
                        else
                        {
                            ass = arr[i - 1][j - 1];
                        }
                    }
                    if (arr[i - 1][j] > 0)
                    {
                        nonZ++;
                        if (ass > arr[i - 1][j] && nonZ > 1)        //change
                        {

                            for (int k = 0; k < i; k++)
                                for (int l = 0; l < j; l++)
                                {
                                    if (arr[k][l] == ass)
                                    {
                                        arr[k][l] = arr[i - 1][j];      //change
                                    }
                                }
                            ass = arr[i - 1][j];        //change

                        }
                        else if (ass < arr[i - 1][j] && nonZ > 1)   //change
                        {

                            for (int k = 0; k < i; k++)
                                for (int l = 0; l < j; l++)
                                {
                                    if (arr[k][l] == arr[i - 1][j])     //change
                                    {
                                        arr[k][l] = ass;
                                    }
                                }
                        }
                        else
                        {
                            ass = arr[i - 1][j];
                        }
                    }
                }
                //  right bottom corner
                else if (i == img.rows && j == img.cols)
                {
                    if (arr[i][j - 1] > 0)
                    {
                        nonZ++;

                        ass = arr[i][j - 1];
                    }
                    if (arr[i - 1][j - 1])
                    {
                        nonZ++;
                        if (ass > arr[i - 1][j - 1] && nonZ > 0)        //change
                        {

                            for (int k = 0; k < i; k++)
                                for (int l = 0; l < j; l++)
                                {
                                    if (arr[k][l] == ass)
                                    {
                                        arr[k][l] = arr[i - 1][j - 1];      //change
                                    }
                                }
                            ass = arr[i - 1][j - 1];        //change

                        }
                        else if (ass < arr[i - 1][j - 1] && nonZ > 1)   //change
                        {

                            for (int k = 0; k < i; k++)
                                for (int l = 0; l < j; l++)
                                {
                                    if (arr[k][l] == arr[i - 1][j - 1])     //change
                                    {
                                        arr[k][l] = ass;
                                    }
                                }
                        }
                        else
                        {
                            ass = arr[i - 1][j - 1];
                        }
                    }
                    if (arr[i - 1][j] > 0)
                    {
                        nonZ++;
                        if (ass > arr[i - 1][j] && nonZ > 1)        //change
                        {

                            for (int k = 0; k < i; k++)
                                for (int l = 0; l < j; l++)
                                {
                                    if (arr[k][l] == ass)
                                    {
                                        arr[k][l] = arr[i - 1][j];      //change
                                    }
                                }
                            ass = arr[i - 1][j];        //change

                        }
                        else if (ass < arr[i - 1][j] && nonZ > 1)   //change
                        {

                            for (int k = 0; k < i; k++)
                                for (int l = 0; l < j; l++)
                                {
                                    if (arr[k][l] == arr[i - 1][j])     //change
                                    {
                                        arr[k][l] = ass;
                                    }
                                }
                        }
                        else
                        {
                            ass = arr[i - 1][j];
                        }
                    }
                }
                //  bottom line
                else if (i == img.rows && j != 0 && j != img.cols)
                {
                    if (arr[i][j - 1] > 0)
                    {
                        nonZ++;

                        ass = arr[i][j - 1];

                    }
                    if (arr[i - 1][j - 1])
                    {
                        nonZ++;
                        if (ass > arr[i - 1][j - 1] && nonZ > 1)        //change
                        {

                            for (int k = 0; k < i; k++)
                                for (int l = 0; l < j; l++)
                                {
                                    if (arr[k][l] == ass)
                                    {
                                        arr[k][l] = arr[i - 1][j - 1];      //change
                                    }
                                }
                            ass = arr[i - 1][j - 1];        //change

                        }
                        else if (ass < arr[i - 1][j - 1] && nonZ > 1)   //change
                        {

                            for (int k = 0; k < i; k++)
                                for (int l = 0; l < j; l++)
                                {
                                    if (arr[k][l] == arr[i - 1][j - 1])     //change
                                    {
                                        arr[k][l] = ass;
                                    }
                                }
                        }
                        else
                        {
                            ass = arr[i - 1][j - 1];
                        }
                    }
                    if (arr[i - 1][j] > 0)
                    {
                        nonZ++;
                        if (ass > arr[i - 1][j] && nonZ > 1)        //change
                        {

                            for (int k = 0; k < i; k++)
                                for (int l = 0; l < j; l++)
                                {
                                    if (arr[k][l] == ass)
                                    {
                                        arr[k][l] = arr[i - 1][j];      //change
                                    }
                                }
                            ass = arr[i - 1][j];        //change

                        }
                        else if (ass < arr[i - 1][j] && nonZ > 1)   //change
                        {

                            for (int k = 0; k < i; k++)
                                for (int l = 0; l < j; l++)
                                {
                                    if (arr[k][l] == arr[i - 1][j])     //change
                                    {
                                        arr[k][l] = ass;
                                    }
                                }
                        }
                        else
                        {
                            ass = arr[i - 1][j];
                        }
                    }
                    if (arr[i - 1][j + 1] > 0)
                    {
                        nonZ++;
                        if (ass > arr[i - 1][j + 1] && nonZ > 1)        //change
                        {

                            for (int k = 0; k < i; k++)
                                for (int l = 0; l < j; l++)
                                {
                                    if (arr[k][l] == ass)
                                    {
                                        arr[k][l] = arr[i - 1][j + 1];      //change
                                    }
                                }
                            ass = arr[i - 1][j + 1];        //change

                        }
                        else if (ass < arr[i - 1][j + 1] && nonZ > 1)   //change
                        {

                            for (int k = 0; k < i; k++)
                                for (int l = 0; l < j; l++)
                                {
                                    if (arr[k][l] == arr[i - 1][j + 1])     //change
                                    {
                                        arr[k][l] = ass;
                                    }
                                }
                        }
                        else
                        {
                            ass = arr[i - 1][j + 1];
                        }
                    }
                }
                //  bottom leftt corner
                else if (i == img.rows && j == 0)
                {
                    if (arr[i - 1][j] > 0)
                    {
                        nonZ++;

                        ass = arr[i - 1][j];

                    }
                    if (arr[i - 1][j + 1] > 0)
                    {
                        nonZ++;
                        if (ass > arr[i - 1][j + 1] && nonZ > 1)        //change
                        {

                            for (int k = 0; k < i; k++)
                                for (int l = 0; l < j; l++)
                                {
                                    if (arr[k][l] == ass)
                                    {
                                        arr[k][l] = arr[i - 1][j + 1];      //change
                                    }
                                }
                            ass = arr[i - 1][j + 1];        //change

                        }
                        else if (ass < arr[i - 1][j + 1] && nonZ > 1)   //change
                        {

                            for (int k = 0; k < i; k++)
                                for (int l = 0; l < j; l++)
                                {
                                    if (arr[k][l] == arr[i - 1][j + 1])     //change
                                    {
                                        arr[k][l] = ass;
                                    }
                                }
                        }
                        else
                        {
                            ass = arr[i - 1][j + 1];
                        }
                    }
                }
                // left line
                else if (i != 0 && j == 0)
                {
                    if (arr[i - 1][j] > 0)
                    {
                        nonZ++;

                        ass = arr[i - 1][j];

                    }
                    if (arr[i - 1][j + 1] > 0)
                    {
                        nonZ++;
                        if (ass > arr[i - 1][j + 1] && nonZ > 1)        //change
                        {

                            for (int k = 0; k < i; k++)
                                for (int l = 0; l < j; l++)
                                {
                                    if (arr[k][l] == ass)
                                    {
                                        arr[k][l] = arr[i - 1][j + 1];      //change
                                    }
                                }
                            ass = arr[i - 1][j + 1];        //change

                        }
                        else if (ass < arr[i - 1][j + 1] && nonZ > 0)   //change
                        {

                            for (int k = 0; k < i; k++)
                                for (int l = 0; l < j; l++)
                                {
                                    if (arr[k][l] == arr[i - 1][j + 1])     //change
                                    {
                                        arr[k][l] = ass;
                                    }
                                }
                        }
                        else
                        {
                            ass = arr[i - 1][j + 1];
                        }
                    }
                }

                if (nonZ == 0)
                {
                    arr[i][j] = label;
                    label++;
                    if (label == 255)
                    {
                        label = 256;
                    }
                }
                else if (nonZ == 1)
                {
                    arr[i][j] = ass;
                }
                else if (nonZ > 1)
                {
                    arr[i][j] = ass;
                }





            }
        }
    }







    double newarr[500] = { 0 };
    int abc = 0;
    for (int i = 0; i < img.rows; i++)
    {
        for (int j = 0; j < img.cols; j++)
        {
            if (arr[i][j] > 0)
            {
                bool flaag = true;
                for (int k = 0; k < abc; k++)
                {
                    if (arr[i][j] == newarr[k])
                    {
                        flaag = false;
                    }
                }
                if (flaag)
                {
                    newarr[abc] = arr[i][j];
                    abc++;
                }
            }
        }
    }
    string name = "1";
    char ch = 'a';
    for (int k = 0; k < abc; k++)
    {
        ch = ch + 1;
        name += ch;
        name += ".jpg";

        for (int i = 0; i < 512; i++)
        {
            for (int j = 0; j < 512; j++)
            {
                lena1.at<Vec3b>(i, j)[0] = 0;
                lena1.at<Vec3b>(i, j)[1] = 0;
                lena1.at<Vec3b>(i, j)[2] = 0;
            }
        }


        for (int i = 0; i < 512; i++)
        {
            for (int j = 0; j < 512; j++)
            {
                if (arr[i][j] == newarr[k])
                {
                    rows.push(i);
                    cols.push(j);
                }

            }
        }
        while (rows.empty() != true)
        {
            int i = rows.front();
            int j = cols.front();
            rows.pop();
            cols.pop();
            lena1.at<Vec3b>(i, j)[0] = 255;
            lena1.at<Vec3b>(i, j)[1] = 255;
            lena1.at<Vec3b>(i, j)[2] = 255;
        }
        imwrite(name, lena1);
    }


    return abc;
}

char srctag(string name)
{
    string name1 = "C:\\Users\\AL-SAEED\\Source\\Repos\\ConsoleApplication3\\ConsoleApplication3";
    name1 += name;
    name1 += ".png";
    return (imageparts(name1) + 48);
}