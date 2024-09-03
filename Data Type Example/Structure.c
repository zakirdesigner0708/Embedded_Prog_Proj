#include <stdio.h>  
#include <string.h>

// Define a structure representing a person  
/*A structure is a derived data type that enables the creation of composite data types by allowing the grouping of many data types under a single name. It gives you the ability to create your own unique data structures by fusing together variables of various sorts.

A structure's members or fields are used to refer to each variable within it.
Any data type, including different structures, can be a member of a structure.
A structure's members can be accessed by using the dot (.) operator.
A declaration and use of a structure is demonstrated here:*/

struct Person {  
    char name[50];  
    int age;  
    float height;  
};  
   
int main() {  
    // Declare a variable of type struct Person  
    struct Person person1;  
   
    // Assign values to the structure members  
    strcpy(person1.name, "John Doe");  
    person1.age = 30;  
    person1.height = 1.8;  
   
    // Accessing the structure members  
    printf("Name: %s\n", person1.name);  
    printf("Age: %d\n", person1.age);  
    printf("Height: %.2f\n", person1.height);  
   
    return 0;  
}  