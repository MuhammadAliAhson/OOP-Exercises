#include "Rational.cpp"
#include "String.cpp"
#include "Array.cpp"
#include "BinaryStore.cpp"
#include "CMap.cpp"

#include <gtest/gtest.h>

// Q1: Rational.cpp

TEST(Rational, Constructors) { 
    Rational a(9,3);
    Rational b(2,4);
    string expected1="3";
    string actual1=(string)a;
   
    ASSERT_EQ(0, actual1.compare(expected1));
    string expected2="1/2";
    string actual2=(string)b;
    ASSERT_EQ(0, actual2.compare(expected2));
    
}
TEST(Rational, Addition) { 
    	Rational a(9,3);
	Rational b(4,2);
	Rational c;
	Rational d;
	Rational x(5,1);
	c=a+x;
	string expected1="8";
        string actual1=(string)c;
        ASSERT_EQ(0, actual1.compare(expected1));
	d=c+b;
	string expected2="10";
        string actual2=(string)d;
        ASSERT_EQ(0, actual2.compare(expected2));	
}
TEST(Rational, Subtraction) { 
        Rational a(1,4);
	Rational b(-1,2);
	Rational c;
	Rational d;
	Rational x(3,4);
	c=a-x;
	string expected1="-1/2";
        string actual1=(string)c;
        ASSERT_EQ(0, actual1.compare(expected1));
	d=c-b;
	string expected2="0";
        string actual2=(string)d;
        ASSERT_EQ(0, actual2.compare(expected2));
}
TEST(Rational, Mul) { 
        Rational a(3,4);
	Rational b(16,3);
	Rational c;
	Rational x(1,4);
	c=a*x;
	string expected1="3/16";
        string actual1=(string)c;
        ASSERT_EQ(0, actual1.compare(expected1));
	c*=b;
	string expected2="1";
        string actual2=(string)c;
        ASSERT_EQ(0, actual2.compare(expected2));
    
}
TEST(Rational, Div) { 
        Rational a(2,4);
	Rational b(1,4);
	Rational c;
	Rational x(2,1);
	c=a/x;
	string expected1="1/4";
        string actual1=(string)c;
        ASSERT_EQ(0, actual1.compare(expected1));
	c/=b;
	string expected2="1";
        string actual2=(string)c;    
        ASSERT_EQ(0, actual2.compare(expected2));   
}
TEST(Rational, LessthanEqualGreaterthan) { 
        Rational a(3,3);
	Rational b(9,8);
	Rational c(1,1);
	Rational d(2,4);
	Rational e(1,2);
	ASSERT_EQ(true, e==d);
	ASSERT_EQ(false, e==a);
	ASSERT_EQ(true, a<=b);
	ASSERT_EQ(true, a==c);
	ASSERT_EQ(true, b>=d);
	ASSERT_EQ(true, e<c);
	   
}
TEST(Rational, InputOutput) { 
        Rational s1;
        cin>>s1;// input 4/2 on terminal
        Rational s2(2,1);
        cout<<s1;
        ASSERT_EQ(true,s2==s1 );
    
}

// Q2:String 
TEST(String, Constructors) { 
    String s1("123456");
    ASSERT_EQ(6, (int)s1); // Conversion Operator should be overloaded 
    char* c = (char*)"12345";
    String s2(c);
    ASSERT_EQ(5, (int)s2);
    String s3(15);
    ASSERT_EQ(15, (int)s3);
    String s4(s1);
    ASSERT_EQ(6, (int)s4);
}

TEST(String, SquareBracket) { 
    String s1("1234");
    ASSERT_EQ('1', s1[0]);
    s1[0]='x';// assignment operator should be overloaded 
    ASSERT_EQ('x', s1[0]);
    ASSERT_EQ('4', s1[3]);
}

TEST(String, ArithmeticOperatorsplus) { 
        String s1("123");
	String s2;
	String s4;
	s2 = s1 + '4';
	//cout << "ARRAY:" << s2 << endl ;
	ASSERT_EQ('2', s2[1]);
	ASSERT_EQ('4', s2[3]);
	s2 = s1 + '5';
	ASSERT_EQ('5', s2[3]);
	char* c = (char*)"456";
	char* c2 = (char*)"789";
	s2 = s1 + c;
	s2 = s2 + c2;
	ASSERT_EQ('4', s2[3]);
	ASSERT_EQ('6', s2[5]);
	ASSERT_EQ('8', s2[7]);
	ASSERT_EQ(9, (int)s2);
	String s3 = s1 + s2;
	ASSERT_EQ(12, (int)s3);
	ASSERT_EQ('8', s3[10]);
    
}
TEST(String, ArithmeticOperatorsSub) { 
        String s1("abaaaaba");
	String s2("aaaa");
	String string2("bb");;
	s2 = s1 - s2;
	cout << "ANSWER:" << s2 << "SUBSTR:aaaa\n" << "MAINSTR:" << s1;
	ASSERT_EQ('a', s2[0]);
	ASSERT_EQ('b', s2[1]);
	ASSERT_EQ('b', s2[2]);
	s2=s2-string2;
	ASSERT_EQ('a', s2[0]);
	ASSERT_EQ('a', s2[1]);
    
}
TEST(String, Logical) { 
        String s1("aaaa");
        String s4("aaa");
	String s2("baab");
	string string2="baab";
	char * chararray=(char*)"aaaa";
	ASSERT_EQ(true,s1==chararray );
	
	ASSERT_EQ(false,s2==s1 );
	ASSERT_EQ(false,s1==s4 );
	ASSERT_EQ(true,s2==string2 );
}
TEST(String, FunctionCall) { 
        String s1("aacaac");
        int i=s1('c');
        ASSERT_EQ(2,i );
	String s2("aac");
	i=s1(s2);
	ASSERT_EQ(0,i );
	string s3="ca";
	i=s1(s3);
	ASSERT_EQ(2,i );
}

// Q3 Array

TEST(Array, AssignmentAndEqual_A) {
    Array a1(3);
    int arr[] = {3,4,5};
    Array a2(arr,3);
    a1 = a2;
    ASSERT_EQ(true,a1==a2);
}
TEST(Array, AssignmentAndEqual_B) {
    Array a1;
    ASSERT_EQ(true,!a1);// checks for NULL
    int arr[] = {6,7,8,9};
    Array a2(arr,4);
    a1 = a2;
    for(int i=0;i<4;i++){
    	ASSERT_EQ(arr[i],a1[i]);
    }
}
TEST(Array, Addition_A) {
    int arr1[] = {-1,0,2};
    int arr2[] = {4,5,6};
    Array a1(arr1,3);
    Array a2(arr2,3);
    Array a3;
    a3 = a1 + a2;
    ASSERT_EQ(3,a3[0]);
    ASSERT_EQ(5,a3[1]);
    ASSERT_EQ(8,a3[2]);
}
TEST(Array, Addition_B) {
    int arr1[] = {3,1};
    int arr2[] = {4};
    Array a1(arr1,2);
    Array a2(arr2,1);
    a1 += a2;
    ASSERT_EQ(7,a1[0]);
    ASSERT_EQ(1,a1[1]);
}
TEST(Array, Subtraction_A) {
    int arr1[] = {7,8,9};
    int arr2[] = {4,5,6};
    Array a1(arr1,3);
    Array a2(arr2,3);
    Array a3;
    a3 = a2 - a1;
    ASSERT_EQ(-3,a3[0]);
    ASSERT_EQ(-3,a3[1]);
    ASSERT_EQ(-3,a3[2]);
}
TEST(Array, Subtraction_B) {
    int arr1[] = {4,2,3};
    int arr2[] = {4,-1};
    Array a1(arr1,3);
    Array a2(arr2,2);
    a1 -= a2;
    ASSERT_EQ(0,a1[0]);
    ASSERT_EQ(3,a1[1]);
    ASSERT_EQ(3,a1[2]);
}
TEST(Array, Increment) {
    int arr[] = {4,5,-1};
    Array a1(arr,3);
    a1++;
    ASSERT_EQ(5,a1[0]);
    ASSERT_EQ(6,a1[1]);
    ASSERT_EQ(0,a1[2]);
}
TEST(Array, Decrement) {
    int arr[] = {-3,4};
    Array a1(arr,3);
    a1--;
    ASSERT_EQ(-4,a1[0]);
    ASSERT_EQ(3,a1[1]);
}
TEST(Array, DelAtIndex) {
    int arr[] = {1,2,3};
    Array a1(arr,3);
    int res[] ={2,3};
    Array a2(res,2); 
    a1(0,1);
    ASSERT_EQ(true,a1==a2);
    int arr2[] = {4,5};
    Array a3(arr2,1);
    Array a4(arr2,2);
    a4(1,5);
    cout << a4 << endl;
    cout << a3 << endl;
    ASSERT_EQ(true,a3==a4);
}

// Q4

//4
TEST(Add_Assign_Get, One) {
    BinaryStore b1(3);

    b1 += "1010";
    b1.Add("1010", Byte("01011110"));
    EXPECT_TRUE(strcmp(b1.Get("1010").getByte(), "01011110") == 0);

    b1 += "1111";
    b1.Add("1111", Byte("01111110"));
    EXPECT_TRUE(strcmp(b1.Get("1111").getByte(), "01111110") == 0);

    b1 += "0100";
    b1.Add("0100", Byte("11111111"));
    EXPECT_TRUE(strcmp(b1.Get("0100").getByte(), "11111011") != 0);
    
}
//4
TEST(Add_Assign_Get, Two) {

    BinaryStore b1(5);
    b1 += "1000";
    b1.Add("1000", Byte("01111111"));
    EXPECT_EQ(strcmp(b1.Get("1000").getByte(), "01111111"), 0);

    b1 += "0000";
    b1.Add("0000", Byte("11111111"));
    EXPECT_FALSE(strcmp(b1.Get("0000").getByte(), "11111111") != 0);

    b1 += "1001";
    b1.Add("1001", Byte("01111111"));
    EXPECT_EQ(strcmp(b1.Get("1001").getByte(), b1.Get("1000").getByte()), 0);

    EXPECT_EQ(strcmp(Byte("00000000").getByte(), b1.Get("1000").getByte()), -1);



}
//4
TEST(Add_Assign_Get, Three) {
    BinaryStore b1;
    b1.setSize(5);
    b1 += "0010";
    b1.Add("0010", Byte("00000000"));
    EXPECT_FALSE(strcmp(b1.Get("0010").getByte(), "00000010") == 0);

}

//4
TEST(Byte_Addition, One) {
    Byte byt("01110001");
    Byte byt2("10110010");
    EXPECT_TRUE(strcmp((byt + byt2).getByte(), "00100011") == 0);
}
//4
TEST(Byte_Addition, Two) {
    Byte byt("01100101");
    Byte byt2("00100010");
    EXPECT_EQ(strcmp((byt + byt2 + Byte("00101001")).getByte(), "10110000"), 0);

}

//6
TEST(Byte_Subtraction, One) {
    Byte byt ("00001111");
    Byte byt2("00010000");
    EXPECT_TRUE (strcmp((byt - byt2).getByte(), "11111111") == 0);
    EXPECT_FALSE(strcmp((byt2 - byt).getByte(), "11111111") == 0);
    EXPECT_TRUE (strcmp((byt2- byt2).getByte(), "00000000") == 0);
    EXPECT_TRUE (strcmp((byt2 - byt).getByte(), "00000001") == 0);
}
//6
TEST(Byte_Subtraction, Two) {
    Byte byt ("00100001");//33
    Byte byt2("00000100");//4
                          //29,-29
    EXPECT_TRUE(strcmp((byt - byt2).getByte(), "00011101") == 0);
    EXPECT_TRUE(strcmp((byt2 - byt).getByte(), "11100011") == 0);
}

//2
TEST(Byte_Equality, One) {
    Byte byt("10010010");
    Byte byt2("10000010");
    EXPECT_FALSE(byt == byt2);
    EXPECT_TRUE(byt == Byte("10010010"));
}
//2
TEST(Byte_Equality, Two) {
    Byte byt ("10101010");
    Byte byt2("10101010");
    EXPECT_TRUE(byt == byt2);
    EXPECT_TRUE(byt == byt);
    EXPECT_FALSE(byt == Byte("00000000"));
}

//2
TEST(Byte_OR, One) {
    Byte byt ("10001001");
    Byte byt2("11100110");
    EXPECT_EQ(strcmp((byt || byt2).getByte(), "11101111"), 0);
    EXPECT_TRUE(strcmp((Byte("") || byt2).getByte(), "11101111") != 0);  //To test the check's in code
}
//2
TEST(Byte_AND, One) {
    Byte byt ("11010010");
    Byte byt2("10100011");
    EXPECT_TRUE(strcmp((byt && byt2).getByte(), "10000010") == 0);
    EXPECT_FALSE(strcmp((Byte("11110000") && Byte("00001111")).getByte(), "10110010") == 0);
    EXPECT_EQ(strcmp((Byte("") && byt2).getByte(), "11101001"), -1);  
}

//5
TEST(Byte_AND_OR, One) {
    Byte byt ("11101000");
    Byte byt2("11101110");                   
    EXPECT_TRUE(strcmp(((byt && byt2) || Byte("11110000")).getByte(), "11111000") == 0);
}

// Q5 CMap


TEST(CMap, Equal_A) {
	CMap map;
    map["Magic"] = "Dr. Strange";
    map["Surgery"] = "Dr. Fufanvok";
    cout << map.toString() << endl;

    ASSERT_EQ("[ Magic : { Dr. Strange }, Surgery : { Dr. Fufanvok } ]", map.toString());
}

TEST(CMap, Equal_B) {
    CMap map;
    map["Genome"] = "Dr. Hassam Saeed";
    map["Cardiology"] = "Dr. Haris Awan";
    map["Dermatology"] = "Dr. Mehmood";
    cout << map.toString() << endl;

    ASSERT_EQ("[ Genome : { Dr. Hassam Saeed }, Cardiology : { Dr. Haris Awan }, Dermatology : { Dr. Mehmood } ]", map.toString());
}

TEST(CMap, Equal_C) {

    CMap map, map2;
    map["ENT"] = "Dr. John";
    map["Radiology"] = "Dr. Waseem Shehzad";
    map2 = map;
    map["ENT"] = "Dr. Who";

    
    cout << map.toString() << endl;
    cout << map2.toString() << endl;

    ASSERT_EQ("[ ENT : { Dr. Who }, Radiology : { Dr. Waseem Shehzad } ]", map.toString());
    ASSERT_EQ("[ ENT : { Dr. John }, Radiology : { Dr. Waseem Shehzad } ]", map2.toString());

}


TEST(CMap, ADDEqual_A) {
CMap map;
    map["Anesthesia"] = "Dr. Vladmir";
    map["Anesthesia"] += "Dr. Putin";
    map["Computer Science"] = "Dr. Ijaz";
    map["Astrology"] = "Dr. Mir";
    map["Astrology"] += "Dr. Afridi";

    ASSERT_EQ("[ Anesthesia : { Dr. Vladmir, Dr. Putin }, Computer Science : { Dr. Ijaz }, Astrology : { Dr. Mir, Dr. Afridi } ]", map.toString());
}
TEST(CMap, ADDEqual_B) {
    CMap map;
    map["Philosophy"] += "Dr. Allama Iqbal";
    map["Philosophy"] += "Dr. Adam Innings";
    map["Dermatology"] += "Dr. Sana Mir";
    map["Mathematics"] += "Dr. Shaheen Afridi";
    
    ASSERT_EQ("[ Philosophy : { Dr. Allama Iqbal, Dr. Adam Innings }, Dermatology : { Dr. Sana Mir }, Mathematics : { Dr. Shaheen Afridi } ]", map.toString());

}

TEST(CMap, SUBEqual_A) {
    CMap map;
    map["Drugs"] = "Panadol";
    map["Drugs"] += "Disprin";
    map["Drugs"] -= "Panadol";

    map["Thugs"] += "Lester Crest";
    map["Thugs"] += "Trevor Philips";
    map["Thugs"] -= "Lester Crest";


    ASSERT_EQ("[ Drugs : { Disprin }, Thugs : { Trevor Philips } ]", map.toString());

}
TEST(CMap, SUBEqual_B) {
    CMap map;
    map["Games"] = "Call of Duty";
    map["Games"] += "Fortnite";
    map["Games"] += "PUBG";

    map["Games"] -= "PUBG";

    map["Consoles"] = "PS4";

    ASSERT_EQ("[ Games : { Call of Duty, Fortnite }, Consoles : { PS4 } ]", map.toString());
    
}
TEST(CMap, SUBEqual_C) {
    CMap map;
    map["Food"] = "Pizza";
    map["Food"] += "Lasagna";
    map["Food"] += "Chowmein";

    map["Food"] -= "Chowmein";
    map["Food"] -= "Biryani";

    map["Chef"] = "Sooraj Rathi";
    map["Chef"] -= "Salt Bae";

    ASSERT_EQ("[ Food : { Pizza, Lasagna }, Chef : { Sooraj Rathi } ]", map.toString());
    
}


TEST(CMap, ADDMaps_A) {
    CMap map, map2, map3;
    map["SuperHeroes"] = "Superman";
    map["Movies"] = "Justice League";
    map["SuperHeroes"] += "Batman";
    map["SuperHeroes"] += "Thor";

    map2["Cold Drinks"] = "Fanta";
    map2["Cold Drinks"] += "Coca Cola";
    map2["Cold Drinks"] += "Pepsi";
    map2["Cold Drinks"] += "Sting";
    map2["Cold Drinks"] += "7Up";
    map2["Cold Drinks"] += "Dew";

    map2["Fast Food Chains"] += "KFC";
    map2["Fast Food Chains"] += "McDonalds";
    map2["Fast Food Chains"] += "Burger King";
    map2["Fast Food Chains"] += "Hardees";

    map3 = map + map2;

    ASSERT_EQ("[ SuperHeroes : { Superman, Batman, Thor }, Movies : { Justice League }, Cold Drinks : { Fanta, Coca Cola, Pepsi, Sting, 7Up, Dew }, Fast Food Chains : { KFC, McDonalds, Burger King, Hardees } ]", map3.toString());
    
}

TEST(CMap, ADDMaps_B) {
    CMap map, map2, map3;
    map["ABC"] = "Alpha Bravo Charlie";
    map["DEF"] = "Delta Echo Foxtrot";
    map["ABC"] += "Apple Ball Cat";
    map["ABC"] += "Atom Bromine Calcium";

    map3 = map + map2;
    
    ASSERT_EQ("[ ABC : { Alpha Bravo Charlie, Apple Ball Cat, Atom Bromine Calcium }, DEF : { Delta Echo Foxtrot } ]", map3.toString());
    
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

