This Folder has the Polymorphism part.
Having Polymorphism files.

---------------Polymorphism 1-----------------------------

A step-by-step guide to help beginners understand the polymorphism used in this code.

The code defines a parent class called Fruit. It has a static variable called fruitsAmount that keeps track of the number of fruit objects created.
The Fruit class has a constructor that increments the fruitsAmount variable every time a new fruit object is created. 
It also has a destructor that decrements the fruitsAmount variable every time a fruit object is destroyed.

The code defines two child classes, Apples and Mangoes, which inherit from the parent Fruit class. They both have a similar structure to the parent class, 
with their own static variables (applesAmount and mangoesAmount) that keep track of the number of objects created and destroyed.

The Apples and Mangoes classes also have constructors that increment their respective static variables when objects of their type are created. 
Similarly, their destructors decrement their respective static variables when objects of their type are destroyed.
Finally, the main() function creates some objects of both Apples and Mangoes types and then prints out the number of objects created for each type using 
the static amount() function defined in each class. It also prints out the total number of Fruit objects created.


Instructions for understanding this code:

Read through the code and try to understand the structure of the Fruit, Apples, and Mangoes classes. 
Notice that the Apples and Mangoes classes inherit from the Fruit class.
Pay attention to the static variables defined in each class (fruitsAmount, applesAmount, and mangoesAmount)
and how they are used to keep track of the number of objects created and destroyed.


Look at the constructors and destructors in each class and notice how they increment and decrement the static variables respectively.
Observe how the amount() function is defined in each class and how it returns the number of objects created for that class.
In the main() function, notice how objects of both Apples and Mangoes types are created and 
how the amount() function is called to print out the number of objects created for each type.


Finally, notice how the total number of Fruit objects created is also printed out using the amount() function defined in the Fruit class.


---------------Polymorphism 2-----------------------------


 a list of instructions to help beginners understand the code:

The code defines three classes: Computer, Desktop, and Laptop.
The Computer class has two private attributes: companyName (string) and price (float).

The Computer class has two constructors: a default constructor and a parameterized constructor that initializes the companyName and price attributes.
The Computer class has a virtual function called show() that outputs the values of companyName and price.

The Desktop class and the Laptop class both inherit from the Computer class.
The Desktop class has three private attributes: color (string), monitorSize (float), and processorType (string).

The Desktop class has two constructors: a default constructor and a parameterized constructor that initializes the companyName, price, color,
monitorSize, and processorType attributes.

The Desktop class overrides the show() function of the Computer class to output the values of its own attributes in addition to those of the Computer class.

The Laptop class has three private attributes: color (string), size (float), and processorType (string).

The Laptop class has two constructors: a default constructor and a parameterized constructor that initializes the companyName, price, color,
size, and processorType attributes.
The Laptop class overrides the show() function of the Computer class to output the values of its own attributes in addition to those of the Computer class.
w
The main() function creates two instances of the Computer class: one of the Desktop subclass and one of the Laptop subclass.

The main() function calls the show() function of each instance to output its values.
Note: The commented out line #include <conio.h> is not used in the code, so it can be removed. Also, the system("pause");
line at the end of main() is a Windows-specific command to keep the command prompt open after the program has finished running, so it may not work on other operating systems.


---------------Polymorphism 3-----------------------------


This program is a C++ implementation of a system that generates marks for students in three subjects (Physics, Chemistry, and Mathematics) and computes their total marks and average marks.

The program starts by defining a Marks class which has the following data members: rollNumber, name, marks, and num_marks. marks is a dynamic array of integers which holds the marks obtained by the student in different subjects. GenerateMarks() method is used to fill the marks array with random marks. sum_of_marks() computes the sum of all the marks of a student. avarage() calculates the average of all the marks of a student. set_marks() and get_marks() methods are used to set and get a particular mark. set_num_marks() is used to set the number of marks. The destructor is used to deallocate the dynamic memory.

The Physics, Chemistry, and Mathematics classes are derived from the Marks class. The main function starts by taking the number of students as input from the user. It then creates an array of objects of Physics, Chemistry, and Mathematics classes with the size equal to the number of students. For each student, the roll number is set and marks are generated using the GenerateMarks() method.

After that, the program prints the total marks and average marks for each student in the three subjects.

Overall, this program is a good implementation of the given problem. However, it could be improved by adding more functionality, such as sorting the students based on their marks or displaying a list of students who have scored above a certain percentage.

---------------Polymorphism 4-----------------------------

This program is an example of using virtual functions and pure virtual functions in C++.

The program defines a base class Shape which has two data members a and b and a pure virtual function display_area(). The get_data() function is used to get the input values for a and b in each derived class.

The derived classes Triangle, Rectangle, and Circle inherit from the base class Shape. Each derived class provides its own implementation of the display_area() function.

In the main() function, objects of Triangle, Rectangle, and Circle classes are created and their addresses are assigned to Shape pointers. Then the get_data() and display_area() functions are called on each object through the Shape pointers. The actual function called is determined by the type of the object pointed to at runtime, thanks to the use of virtual functions.



---------------Polymorphism 5-----------------------------


This code defines a class hierarchy for employees and their income calculation.

The base class is Employee, which has two data members: name and empID. It also has two virtual functions calculate_the_income() and calculate_the_hourly_income() that are defined but not implemented in the base class.

The Hourly_Employee class and PermanentEmployee class are derived from the Employee class. Both classes have an additional data member Hourly_Income which represents the hourly income of the employee.

The Hourly_Employee class implements the calculate_the_hourly_income() function, which calculates the income of an hourly employee for a specified number of hours. The PermanentEmployee class implements the calculate_the_income() function, which calculates the income of a permanent employee for a specified number of hours.

In the main() function, two objects of the derived classes are created, and their addresses are assigned to a pointer of the base class Employee. The calculate_the_hourly_income() function is called on the Hourly_Employee object using the pointer to the base class, and the calculate_the_income() function is called on the PermanentEmployee object using the same pointer to the base class.

Overall, this code demonstrates the use of inheritance and polymorphism to implement a class hierarchy for employees and their income calculation.

