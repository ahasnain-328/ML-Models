// All C++ concepts in one file.
#include <iostream>
#include <string>
// String is included to perform some string operations.
using namespace std;

// User defined function (UDF). UDF must be defined outside of main function.
// int add(int a, int b)
// {
//     int c;
//     c = a + b;
//     return c;
// }

// Class: A template which can be reused with different types of methods like public, private or protected. Public methods can be accessed in anywhere in main. Private methods can't directly accessed like public methods but these can be accessed using public methods. Protected methods are similar to private methods but these are inaccessable outside of that clas and can be accessed by sub-class (child-class) of main class.

// Class defination/declaration
class Employee
{
public:
    string name;
    int salary;

    // Constructor method of class. It helps in protecting the data contained within the object from external manipulation and ensures that the object is always in a valid state.

    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPasssword =sp;
    }

    void printDetails()
    {
        // This is used to access the arguments of class.
        cout << "The name of employee is " << this->name << " and the salary of employee is " << this->salary << endl;
    }

    // printSecretPassword method is made public to access the private method.

    void printSecretPassword()
    {
        cout<<"The secret password of employee is "<<this->secretPasssword;
    }

private:
    int secretPasssword = 458799;

};

// // Inheritance

// class Programmer : public Employee
// {
// public:
//     int errors;

// };



int main()
{

    // Comments
    // Shortcut for comment: Ctrl + /
    // Multiline comment: /* */

    // Variables
    // short ab;
    // int ac;
    // long ad;
    // long long ae;
    // string b;
    // b = "Hello World";
    // cout << b;

    // // camelCase Notation for long variable names
    // int marksInMathematics = 95;
    // // If i write mim it will sujest marksInMathematics.
    // cout << "The marks of the student in the mathematics is " << marksInMathematics;
    // float s = 45.5;
    // double s1 = 45.55;
    // long double s2 = 45.555;

    // Constants int const score = 89;
    // score = 85;
    // // It through an error because score is constant.cout << "The score is " << score;

    // // Input from user and arithmatic operators #others might searched int a, b;
    // cout << "The first input number: " << endl;
    // cin >> a;
    // cout << "The second input number: " << endl;
    // cin >> b;
    // cout << "The sum of two numbers is " << a + b << endl;
    // cout << "The diff of two numbers is " << a - b << endl;
    // cout << "The prod of two numbers is " << a * b << endl;
    // cout << "The div of two numbers is " << (float)a / b << endl;
    // // Here float is used for type casting which help to change data type of variable.

    // // If else statements
    // int age;
    // cout << "Please enter your age:" << endl;
    // cin >> age;
    // if (age > 150 || age < 1)
    // {
    //     cout << "Invalid age.";
    // }
    // else if (age >= 18)
    // {
    //     cout << "You can vote.";
    // }
    // else
    // {
    //     cout << "You cannot vote.";
    // }

    // // Switch statement
    // switch (age)
    // {
    // case 12:
    //     cout << "You are 12 years old.";
    //     break;
    // case 18:
    //     cout << "You are 18 years old.";
    //     break;
    // default:
    //     cout << "You are neither 12 nor 18 years old.";
    //     break;
    // }

    // Loops
    // While Loop: Check one time condition then runs till condition becomes false.
    // int index = 0;
    // while (index < 30)
    // {
    //     cout << "The index is at value: " << index << endl;
    //     index = index + 1;
    // }
    // Do While Loop: Runs one time must either condition is false then checks the condition.
    // do
    // {
    //     cout << "The index is at value: " << index << endl;
    //     index = index + 1;
    // } while (index > 30);
    // For Loop: Check condition everytime and runs till condition becomes false.
    // for (int i = 0; i < 30; i++)
    // {
    //     cout << "The index is at value: " << i << endl;
    // }

    // User defined function: Must called inside main function.
    // int x, y;
    // cout << "The first input number: " << endl;
    // cin >> x;
    // cout << "The second input number: " << endl;
    // cin >> y;
    // cout << "The sum returned by add function is: " << add(x, y) << endl;

    // The concept of array: data storage

    // 1-D Array

    // int marks[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Enter the of " << i << "th student: " << endl;
    //     cin >> marks[i];
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "The marks of " << i << "th student is: " << marks[i] << endl;
    // }

    // 2-D Array

    // int array2d[2][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6}};
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "The value of integer at " << i << "," << j << " is: " << array2d[i][j] << endl;
    //     }
    // }

    // String data type and basic operations

    // string name = "harry";
    // cout << "My name is " << name << endl;
    // cout << "My name is " << name.length() << endl;
    // cout << "My name is " << name.substr(0, 3) << endl;

    // Type Casting: Change the type of vaiable after defining.
    // int a = 34;
    // cout << (float)a / 3;

    // Pointer Data Storage: To store address of a variable.

    // int a = 40;
    // int *ptra;
    // ptra = &a;
    // cout << "The value of a is " << a << endl;
    // cout << "The value of a is " << *ptra << endl;
    // cout << "The address of a is " << &a << endl;
    // cout << "The address of a is " << ptra << endl;

    // Class called in main function.
    // har is object of that class.

    Employee har ("Harry Constructor", 3200, 458799);
    // har.name = "Harry";
    // har.salary = 3040;
    har.printDetails();
    har.printSecretPassword();

    return 0;
}
