#include "pch.h"
#include "Header.h"
TEST(small, T1) {
    EXPECT_EQ(1, smaller<int>(4, 1));
    EXPECT_EQ(8, smaller(8.0, 9.0));   //this will be false
}
TEST(small, T2) {
    EXPECT_EQ('a', smaller('a', 'c'));
    EXPECT_EQ('f', smaller('f', 'z'));
}

TEST(smaller, T1) {
    EXPECT_EQ(1, smaller(4, 1, 2));
    EXPECT_EQ(3.5, smaller(8.0, 9.0, 3.5));
}
TEST(smaller, T2) {
    EXPECT_EQ('a', smaller('a', 'c', 's'));
    EXPECT_EQ('f', smaller('f', 'z'));
}

TEST(sameElement, T1) {
    char arr1[] = { 'a','x','e' };
    char arr2[] = { '1','c','e' };
    char* expec = sameElement<char>(arr1, arr2, 4, 4);
    char res[] = { 'e' };
    for (int i = 0; i < 1; i++)
    {
        EXPECT_EQ(res[i], expec[i]);
    }

}
TEST(sameElement, T2) {
    int arr1[] = { 1,2,3,4 };
    int arr2[] = { 3,4,5,6 };
    int* expec = sameElement<int>(arr1, arr2, 4, 4);
    int res[] = { 3,4 };
    for (int i = 0; i < 2; i++)
    {
        EXPECT_EQ(res[i], expec[i]);
    }
}

TEST(concatenate, T1) {
    int arr1[] = { 1,2,3,4 };
    int arr2[] = { 3,4,5,6 };
    int* expec = concatenateArrays<int>(arr1, arr2, 4, 4);
    int res[] = { 1,2,3,4,5,6 };
    for (int i = 0; i < 6; i++)
    {
        EXPECT_EQ(res[i], expec[i]);
    }

}
TEST(concatenate, T2) {
    char arr1[] = { 'a','x','e' };
    char arr2[] = { '1','c','e' };
    char* expec = concatenateArrays<char>(arr1, arr2, 3, 3);
    char res[] = { 'a','x','e','1','c' };
    for (int i = 0; i < 5; i++)
    {
        EXPECT_EQ(res[i], expec[i]);
    }

}




container<int> obj(5);
TEST(container, insert) {
    EXPECT_EQ(true, obj.insert(1));
    EXPECT_EQ(true, obj.insert(56));
    EXPECT_EQ(true, obj.insert(11));
    EXPECT_EQ(true, obj.insert(5));


}
TEST(container, search) {
    //EXPECT_TRUE(true, obj.insert(6));
    EXPECT_EQ(1, obj.search(11));

}

TEST(container, remove) {
    /**/
    obj.insert(3);
    EXPECT_EQ(true, obj.remove(11));
}
TEST(container, isFull) {
    EXPECT_EQ(1, obj.insert(15));
    EXPECT_EQ(true, obj.isFull());
}