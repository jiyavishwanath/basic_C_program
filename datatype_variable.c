#include <stdio.h>
#include <stdbool.h>

//Datatype:type of data that variable store.
//variable: place to store data.
int global=100; //globle variable
// -------- FUNCTION ----------
int add(int a, int b) {
    return a + b;
}

// -------- STRUCTURE ----------
struct Student {
    int id;
    char name[20];
};

// -------- UNION ----------
union Data {
    int i;
    float f;
};

// -------- ENUM ----------
enum Day {MON, TUE, WED, THU, FRI};

// -------- TYPEDEF ----------
typedef int Number;




void basicProgram() {

    int age = 20;
    float percentage = 85.5;
    double pi = 3.14159;
    char grade = 'A';
    bool isPassed = true;

    printf("\n--- BASIC DATA TYPES PROGRAM ---\n");

    printf("Integer (age) = %d\n", age);
    printf("Float (percentage) = %.2f\n", percentage);
    printf("Double (pi) = %.10lf\n", pi);
    printf("Character (grade) = %c\n", grade);
    printf("Boolean (isPassed) = %d\n\n", isPassed);
 printf("Use of Multiple variables");
    int a = 10, b = 20, c = 30;
    printf("Multiple Variables:\n a=%d, b=%d, c=%d\n\n", a, b, c);

   
}


// 2. VARIABLE CONCEPTS
void variableConcept() {
    // 1. Declaration
    int a;

    // 2. Definition + Initialization
    int b = 10;

    // 3. Initialization later
    a = 5;

    printf("Value of a = %d\n", a);
    printf("Value of b = %d\n", b);
}

// 3. PRIMARY DATA TYPES
void primaryTypes() {
    int age = 20;
    float per = 85.5;
    double pi = 3.14;
    char grade = 'A';
    bool pass = true;

    printf("\n--- Primary Data Types ---\n");
    printf("int = %d\n", age);
    printf("float = %.2f\n", per);
    printf("double = %.2lf\n", pi);
    printf("char = %c\n", grade);
    printf("bool = %d\n", pass);
}

// 4. DERIVED TYPES

void derivedTypes() {
    printf("\n--- Derived Data Types ---\n");

    int arr[3] = {10, 20, 30};
    printf("Array: ");
    for(int i = 0; i < 3; i++)
        printf("%d ", arr[i]);

    int x = 100;
    int *ptr = &x;
    printf("\nPointer value = %d", *ptr);

    printf("\nFunction sum = %d\n", add(5, 3));
}


// 5. USER DEFINED TYPES
void userDefined() {
    printf("\n--- User Defined Types ---\n");

    struct Student s1 = {1, "Jiya"};
    printf("Structure: ID=%d Name=%s\n", s1.id, s1.name);

    union Data d;
    d.i = 10;
    printf("Union int = %d\n", d.i);
    d.f = 5.5;
    printf("Union float = %.2f\n", d.f);

    enum Day today = WED;
    printf("Enum value = %d\n", today);

    Number num = 50;
    printf("Typedef number = %d\n", num);
}

// 6. CONSTANT & UPDATE

void constantUpdate() {
    const int MAX = 100;
    int age = 20;

    printf("\n--- Constant & Update ---\n");
    printf("Constant MAX = %d\n", MAX);
 
    printf("age before update%d\n",age);
    age = 25;
    printf("Updated age = %d\n", age);
}
// 7.size of all datatype
void sizeofdatatype(){
    int age=25;
    float per=91.98;
    double pi=3.14;
    char grade='A';
    printf("SIZE OF ALL DATA TYPES\n");
    printf("Size of int = %lu bytes\n", sizeof(age));
    printf("Size of float = %lu bytes\n", sizeof(per));
    printf("Size of double = %lu bytes\n", sizeof(pi));
    printf("Size of char = %lu bytes\n\n", sizeof(grade));
}

// MAIN MENU

int main() {
    int choice;
    

    do {
        printf("\n===== C PROGRAM MENU =====\n");
        printf("1. Basic Program (Your Code)\n");
        printf("2. Variable Concepts\n");
        printf("3. Primary Data Types\n");
        printf("4. Derived Data Types\n");
        printf("5. User Defined Types\n");
        printf("6. Constant & Update\n");
        printf("7.size of all datatype\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    

        switch(choice) {
            case 1: basicProgram(); break;
            case 2: variableConcept(); break;
            case 3: primaryTypes(); break;
            case 4: derivedTypes(); break;
            case 5: userDefined(); break;
            case 6: constantUpdate(); break;
            case 7:sizeofdatatype();break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }

        

    } while(choice!= 0);
printf("\n \ngloble variable %d\n",global);

    return 0;
}
