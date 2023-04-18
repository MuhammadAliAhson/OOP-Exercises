Alright! Let's go through the code snippets one by one.

Code Snippet 1
This code snippet defines a class TestScores that takes an array of 10 integers as input and performs some calculations to output the average of those numbers if all of them are between 0 and 100. Otherwise, it outputs "Invalid input". Here's how it works:

The class has a private integer array array that can store up to 10 integers, and two integer variables check and average that are initially set to 0.
The constructor of the class takes an integer array of size 10 as input and initializes the array with the input values.
It then checks if each value in the array is between 0 and 100 (inclusive). If any value is outside that range, it sets the check variable to 1 and outputs "Invalid input".
If all the values are valid, it calculates the sum of the array values and stores it in a variable called Sum. It then calculates the average of the array values and stores it in the average variable.
Finally, it outputs the value of average.
Here's an example usage of the class:

c
Copy code
int main(){
    int arr[10];
    cout << "Enter the number " << endl;
    for (int k = 0; k < 10; k++){
        cin >> arr[k];
    }
    cout << endl << " Output " << endl;
    TestScores T1(arr);
}
In this example, the user is prompted to enter 10 integers, which are then stored in an array arr. The TestScores class is then called with arr as input, and it outputs the average of the numbers if they are valid, or "Invalid input" otherwise.


Code Snippet 2
This code snippet defines a class IceCreamCone that represents an ice cream cone with a flavor, number of scoops, type of cone, and price. Here's how it works:

The class has a private string variable flavor that stores the flavor of the ice cream, an integer variable scoops that stores the number of scoops, a string variable coneType that stores the type of cone, and a double variable price that stores the price of the cone.
The constructor of the class takes four optional parameters: flv for the flavor (default is "Vanilla"), scoop for the number of scoops (default is 1), Type for the type of cone (default is "Sugar"), and cost for the price (default is 0).
The constructor first initializes the flavor, scoops, and coneType variables with the input parameters. It then calculates the price of the cone based on the number of scoops and the type of cone.
Finally, it outputs the total cost of the order.
Here's an example usage of the class:

c
Copy code
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
In this example, the user is prompted to enter the flavor, number of scoops, and type of cone for an ice cream order.

Code Snippet 3
This code defines a class called Bank, which has a private member variable called balance, and three member functions: deposit(), withdraw(), and getBalance(). The deposit() function takes an integer argument amount and adds it to the balance, while the withdraw() function takes an integer argument amount and subtracts it from the balance if the balance is greater than or equal to amount. The getBalance() function returns the current balance.
In the main() function, the user is prompted to enter an account number, account type (either savings or current), and initial balance. Then, the user is prompted to either deposit or withdraw money, and the appropriate member function of the Bank class is called with the amount entered by the user. Finally, the user is prompted to check their remaining balance, and if they choose to do so, the getBalance() function is called and the balance is printed to the console.

Code Snippet 4

This code defines a class called Employee, which has several private member variables representing the employee's name, age, NIC (National Identity Card) number, address, salary, and zip code. The class has a constructor that takes values for these member variables as arguments, and two member functions setZipCode() and getZipCode() to set and retrieve the zip code, respectively.
The printEmployee() function takes an Employee object as an argument and prints out its member variables to the console.

In the main() function, the user is prompted to enter values for the employee's name, age, NIC number, address, salary, and zip code, which are used to create an Employee object. Then, the setZipCode() function is called on the object to set the zip code, and the printEmployee() function is called to print out the object's member variables to the console.


Code Snippet 5
This program is a simple simulation of a toll plaza. The toll plaza is represented by a class called "tollplaza" that has two private member variables "numofcars" and "totalmoney". The class also has three public methods: "payingcar()", "nopaycar()", and "display()". The "payingcar()" method increases the "numofcars" by 1 and increases the "totalmoney" by 30. The "nopaycar()" method increases the "numofcars" by 1 only. 

The "display()" method displays the total number of cars and the total amount of money collected. The program uses a loop to continuously prompt the user to input whether a car has paid the toll or not. The loop breaks when the user enters 'e' or 'E'. The program then displays the total number of cars and the total amount of money collected.


Code Snippet 6

This program defines a class called "Distance" that represents distance in feet and inches. The class has two private member variables "feet" and "inches". The class also has three public methods: "Distance()", "Distance(int a, float b)", "set_distance(int a, float b)", and "display_distance()". The first method is the default constructor that sets the "feet" and "inches" to 0. 

The second method is an overloaded constructor that takes two arguments "a" and "b" and sets the "feet" to "a" and the "inches" to "b". The third method sets the "feet" and "inches" to the provided arguments. The fourth method displays the distance in the format "distance is feet,inches". The program creates two objects of the "Distance" class called "d1" and "d2" and displays their distances. The first object uses the default constructor while the second object uses the overloaded constructor.





+============= The Last Struct and Class Part ====================+

This is a block of C++ code that defines three functions and three structures:

partstype: This structure defines three member variables - partNum, price, and quantitiesInStock of integer, double, and integer types, respectively.

parttype_insert(): This function takes an array of partstype structures as an argument and reads in values for each of the member variables for each of the three structures in the array using cin.

book: This structure defines four member variables - bookNumber, title, author, and availability of integer, string, string, and integer types, respectively.

book_insert(): This function takes an array of book structures as an argument and reads in values for each of the member variables for each of the three structures in the array using cin.

available_books(): This function takes an array of book structures as an argument and returns the number of books that are currently available (i.e., have an availability value of 1).

sale: This class defines two private member variables - itemCost and taxRate of double type. It also defines three member functions - set_itemCost(), set_taxRate(), getTax(), and getTotal(). set_itemCost() and set_taxRate() are used to set the values of the private member variables. getTax() calculates and returns the tax amount by multiplying itemCost with taxRate. getTotal() returns the total amount including tax by adding the value returned by getTax() to itemCost.
