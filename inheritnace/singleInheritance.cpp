//Create the single inheritace 
#include <iostream>;
using namespace std ;
//create the first class that is your parent class ;
class A{
    public:
    int a;
    int b;
    //create the function for access value from user ;
    void value(){
        cout<<"Enter the value from user"<<endl;
        //access value from user 
        cin>>a>>b;
    }
};
// Create class B i.e your child class;
//What is public A It is your parent class and it call in your child class ;

class B:public A{
    public:
    int c;
    //create the function for wrting your answer 
    void add(){
        c=a+b;
    cout<<"print the addtion of two numbers : "<<c<<endl;
    }
};
//create your main function what is it it  is your starting function of the program and if you can not declare it then your program cant exacute the code 
int main(){
    // create the object of your child calss i.e class B
    B b1;
    //call the parent class for taking the value from users
    b1.value();
    b1.add();

}