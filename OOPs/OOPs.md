# [OOPs](/OOPs/OOPs.cpp)

## Basic defination of OOPs
### Object
Entities in the real world

### Class
Blueprint or template for creating objects

### Object-Oriented Programming (OOPs)
A programming paradigm that revolves around the concept of objects and classes.

### Method/Member function
A block of code(function) that belongs to a class and can be called using an object of that class.

### Property/Attribute
A variable that belongs to a class and can be accessed using an object of that class.

### Setter
A method used to set the value of a private property.

### Getter
A method used to get the value of a private property.


## Access Modifier
Access modifier is used to restrict the access of a class, method or variable. There are three types
### Private(Default)
Access modifier that restricts the class, method or variable to be accessed only within the class itself.
### Public
Access modifier that allows the class, method or variable to be accessed from anywhere in the program.
### Protected
Access modifier that restricts the class, method or variable to be accessed only within the class itself and its derived classes.

## Encapsulation
Encapsulation is the concept of hiding the internal details of an object from the outside world and only exposing the necessary information through public methods.(wrapping up of data and member functions into a single unit known as class)

## Constructor
A special method of a class that is used to initialize the objects of the class when they are created .
### Property
- Same name as class.
- Constructor doesn't have a return type.
- Only called once(automatically), at object creation.
- Memory allocation happens when constructor is called.
### Type of Constructor
- Non Parametrized Constructor
- Parametrized Constructor
- Copy Constructor

## This Pointer 
It is a special pointer in C++ that points to the current object.

## Type of Copy
### Shallow Copy
Copies all of the member value from one object to another . 
<br>Create problem if the object contains pointer to dynamically allocated memory.Because it copy pointer of Dynamic Memory which leads to change value of obj 1 during change in obj 2.
### Deep Copy
Copies all of the member value from one object to another .
<br>Not only copies the member values but also make copies of any DAM that the members point to.

## Destructor
A special method of a class that is used to free the memory occupied by an object when it is destroyed. 
<br>In C++ there is default destructor but it only delete static memory so we need to write delete ptr to delete dynamically allocated memory.
<br>Call automatically when object goes out of scope. (Use ~ symbol before declaration)

### New 
use to allocate memory dynamically.
### Delete
use to free the memory dynamically.
### Delete[ ]
use to free the memory dynamically for array.
### New[ ]
use to allocate memory dynamically for array.

## Inheritance
When property and member function of base class are passed on to the derived class
<br>
class child:Public parent{
           }
<table align="center" border="1">
        <caption style="font-weight: bold;">Parameter Passing</caption>
        <tr>
            <th scope="row">Base Class</th>
            <th colspan="3" scope="row">Derived Class</th>
        </tr>
        <tr>
            <th scope="col"></th>
            <th scope="col">Public</th>
            <th scope="col">Private</th>
            <th scope="col">Protected</th>
        </tr>
        <tr>
            <th scope="row">Public</th>
            <td>Public</td>
            <td>Private</td>
            <td>Protected</td>
        </tr>
        <tr>
            <th scope="row">Private</th>
            <td>Not Inherit</td>
            <td>Not Inherit</td>
            <td>Not Inherit</td>
        </tr>
        <tr>
            <th scope="row">Protected</th>
            <td>Protected</td>
            <td>Private</td>
            <td>Protected</td>
        </tr>
</table>

## Type of Inheritance
### Single Inheritance
parent->child
### Multi Level Inheritance
parent->child->grandchild
### Multiple Inheritance
parent1->child<-parent2
### Hierarchical Inheritance
child1<-parent->child2
### Hybrid Inheritance
random inheritance(means of above inheritance)

## Polymorphism
Ability of an object to take on different forms or behave in different ways depending on the context in which it is used.(like constructor overloding)
### compile time polymorphism 
* constructor overloding
* Function overloding
### runtime polymorphism
* function overriding

## Virtual Function
A virtual function is a member function of a class that can be overridden by a derived class.
### Property
- Dynamic in nature
- Define by the keyword "Virtual" inside a base class and are always declared with a base class and overridden in a child class
- A virtual function is called during runtime




