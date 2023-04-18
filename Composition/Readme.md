# Composition
 Composition in OOP

Composition is a fundamental concept in object-oriented programming (OOP) where an object is made up of other objects. It is a way to combine simple or complex objects into more complex objects to achieve more advanced functionality. In composition, an object contains one or more instances of other classes as member variables or fields. These member variables define the characteristics and behavior of the main object.

For example, a car object can be composed of an engine object, a wheel object, a door object, and many more. Each of these objects is unique and can be used independently, but they are combined together to form a more complex object, which is the car.

Composition allows for modular design, which means that each component can be developed and tested separately before being integrated into the main object. This promotes reusability, flexibility, and maintainability of code.

<---------------------------------------------------------------------------------------------------------------------------------->

This is a C++ program that demonstrates the concept of composition in object-oriented programming. In this program, there are several classes defined, such as Engine, Window, Door, and Car. The Engine class has two member functions, start() and stop(), which display messages to indicate whether the engine is started or stopped. The Window class has two member functions, rollup() and rolldown(), which display messages to indicate whether the window is rolled up or down. The Door class has an object of the Window class as a member, and the Car class has objects of the Engine and Door classes as members.

In the main function, an object of the Car class is created. Using this object, we can access the member functions of the Engine and Door classes to start or stop the engine and roll up or down the window. The composition is shown in the Car class, where the objects of the Engine and Door classes are composed to create the Car object. Similarly, the Door object is composed of the Window object.
