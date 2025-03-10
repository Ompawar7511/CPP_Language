// Create the multilevel inheritance 
// in this type of inheritance it create the chain of the parent class as well as child class 
#include<iostream>
using namespace std;
//create the class A for inserting the value 
class A{
    public:
    int a;
    int b;
    // This is the simple function for inserting the value
    void value(){
        cout<<"Enter the value "<<endl;
        cin>>a>>b;
    }   
};
//create second class i.e class B;
class B:public A{
    public:
    int c;
    //create void function for performing addition operation on two  numbers 
    void add(){
        c=a+b;
        cout<<"Addition of two number is "<<c<<endl;
    }
};
// this is single inheritance but how to work multilevel inheritance 
// in multilevel inheritance child class of Class A Is the parent class of class C it show in following example ;
// Create class C
class C:public B{
    public:
    int d;
    // create void function for performing substraction of elment of class B i.e And your static value i.e 30;
    void substraction(){
        d=c-30;
        cout<<"perform the substraction of two numbers : "<<d<<endl;
    }
};
// in this class last child class is C Thats why we create object of that  class in any example which is last chaild create object of this child in your  main function 
int main(){
    // Creating the object of class  C
    C c1;
    //calling one by one First call the value for insterting the value of numbers a and b;
    c1.value();
    //Call the add for adding two number i.e a and B;
    c1.add();
    //call the substraction for substracting the number i.e d-30;
    c1.substraction();
}

// in this way we can create the multilevel inheritance 
