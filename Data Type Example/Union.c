/*Union:
A derived data type called a union enables you to store various data types in the same memory address.
 In contrast to structures, where each member has a separate memory space, members of a union all share a
  single memory space. A value can only be held by one member of a union at any given moment. When you need 
  to represent many data types interchangeably, unions come in handy. Like structures, you can access the members
   of a union by using the dot (.) operator.

Here is an example of a union being declared and used:*/

#include <stdio.h>  
// Define a union representing a numeric value  
union NumericValue {  
    int intValue;  
    float floatValue;  
    char stringValue[20];  
};  
int main() {  
    // Declare a variable of type union NumericValue  
    union NumericValue value;  
    // Assign a value to the union  
    value.intValue = 42;  
    // Accessing the union members  
    printf("Integer Value: %d\n", value.intValue);  
    // Assigning a different value to the union  
    value.floatValue = 3.14;  
    // Accessing the union members  
    printf("Float Value: %.5f\n", value.floatValue);  
   
    return 0;  
}  