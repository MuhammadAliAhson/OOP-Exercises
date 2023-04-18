<------------Explainiation--------------Inheritance1.h------------------------------------------------------------------->

The Mammal class has a private member variable called "name" and public member functions to set and get the name of the mammal.

The Bird class has a private member variable called "name_bird" and public member functions to set and get the name of the bird.

The Organism class is derived from both Mammal and Bird classes using multiple inheritance. It has a private member variable called "name_org" and public member functions to set and get the name of the organism.

In the main function, an object of the Organism class is created. The name of the mammal, bird, and organism are set using the member functions and then retrieved using the member functions.

Overall, this program demonstrates the concept of multiple inheritance, where a derived class can inherit properties and behaviors from two or more base classes. The Organism class in this program inherits the name property from both the Mammal and Bird classes, making it an organism that has characteristics of both mammals and birds.
<------------------------------------------------------------------------------------------------------------------------>

<------------Explainiation--------------Inheritance2.h------------------------------------------------------------------->
The program defines four classes: Base, Rectangle, Square, and Triangle.

The Base class is an abstract class with two protected member variables, length and width. It has a constructor to initialize these variables and a public member function to calculate the area of a rectangle given its length and width.

The Rectangle class is derived from the Base class publicly. It has a constructor to initialize the length and width of the rectangle and a public member function to calculate the area of the rectangle by calling the area function of the base class.

The Square class is derived from the Base class privately. It has a constructor to initialize the length and width of the square and a public member function to calculate the area of the square. Since the Base class is inherited privately, the member variables of the Base class are not accessible directly from outside the Square class.

The Triangle class is also derived from the Base class publicly. It has a constructor to initialize the length and width of the triangle and a public member function to calculate the area of the triangle.

In the main function, objects of the Rectangle, Square, and Triangle classes are created and the area of each shape is calculated and printed using the appropriate member functions.

Overall, this program demonstrates the use of inheritance in C++ OOP, where a derived class can inherit properties and behaviors from a base class. It also shows the concept of abstraction, where the Base class serves as an abstract class that provides common functionality to its derived classes.

<------------------------------------------------------------------------------------------------------------------------>

<------------Explainiation--------------Inheritance3.h------------------------------------------------------------------->

 The program defines three classes: Staff, Faculty, and NonFaculty.

The Staff class is an abstract class that has protected member variables for name, CNIC, date of birth (dob), and contact number. It also has a constructor to initialize these variables and public member functions to get the name, CNIC, dob, contact number, and age of the staff member.

The Faculty class is derived from the Staff class privately. It has additional protected member variables for payscale, subject, room number, and rank. It has a constructor to initialize all these variables and public member functions to get the payscale, subject, room number, and rank of the faculty member. Since the Staff class is inherited privately, the member variables of the Staff class are not accessible directly from outside the Faculty class.

The NonFaculty class is derived from the Staff class publicly. It has additional protected member variables for duty, timing, and end timing. It has a constructor to initialize all these variables and public member functions to get the duty, start timing, and end timing of the non-faculty member.

In the main function, objects of the Faculty and NonFaculty classes are created and the member functions of each class are used to retrieve and print the information about the staff members.

Overall, this program demonstrates the use of inheritance in C++ OOP, where a derived class can inherit properties and behaviors from a base class. It also shows the concept of abstraction, where the Staff class serves as an abstract class that provides common functionality to its derived classes. The program also demonstrates the concept of access modifiers in inheritance, where a derived class can inherit the properties of the base class with different access modifiers.


<------------------------------------------------------------------------------------------------------------------------>

<------------Explainiation--------------Inheritance4.h------------------------------------------------------------------->

The program defines four classes: Staff, Faculty, NonFaculty, HOD, and Teacher.

The Staff class is an abstract class that has protected member variables for name, CNIC, date of birth (dob), and contact number. It also has a constructor to initialize these variables and public member functions to get the name, CNIC, dob, contact number, and age of the staff member.

The Faculty class is derived from the Staff class privately. It has additional protected member variables for payscale, subject, room number, and rank. It has a constructor to initialize all these variables and public member functions to get the payscale, subject, room number, and rank of the faculty member. Since the Staff class is inherited privately, the member variables of the Staff class are not accessible directly from outside the Faculty class.

The NonFaculty class is derived from the Staff class publicly. It has additional protected member variables for duty, timing, and end timing. It has a constructor to initialize all these variables and public member functions to get the duty, start timing, and end timing of the non-faculty member.

The HOD class is derived from the Faculty class publicly. It has additional private member variables for department ID and department name. It has a constructor to initialize all these variables and public member functions to get the department ID and department name of the head of department.

The Teacher class is derived from the Faculty class publicly. It has an additional member variable for the program the teacher is teaching. It has a constructor to initialize all the variables and a public member function to get the program of the teacher.

In the main function, objects of the HOD and Teacher classes are created and the member functions of each class are used to retrieve and print the information about the staff members.

Overall, this program demonstrates the use of inheritance in C++ OOP, where a derived class can inherit properties and behaviors from a base class. It also shows the concept of abstraction, where the Staff class serves as an abstract class that provides common functionality to its derived classes. The program also demonstrates the concept of access modifiers in inheritance, where a derived class can inherit the properties of the base class with different access modifiers.


<------------------------------------------------------------------------------------------------------------------------>
