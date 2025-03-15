#include<bits/stdc++.h>
using namespace std;

//Encapsulation ->Hide Salary from user 
class Teacher{
    // access only in the class
    private:
    double salary;
    // access anywhere
    public:

   
// property/attribute
    string name;
    string dept;
    string subject;
     
// method/memberfunction
    void setSalary(double s){
        salary=s;
    }//setter

    double displaySalary(){
        return salary;
    }//getter

//Constructor -> always declare  in public
    //Non Parametrized Constructor
    Teacher(){
        cout<<" new object created";
    }
    //Parametrized Constructor
    Teacher(string subject){
        this->subject=subject;//this is a special pointer use to differentiate which is object property and which one is parameter
    }// set value also during initialization
    //Copy Constructor
    Teacher(Teacher &orgObj){
        this->name=orgObj.name;
        this->dept=orgObj.dept;
        this->subject=orgObj.subject;
        this->salary=orgObj.salary;
    }


    
};

// class for explaning deep and shallow copy and destructer
class DeepCopyClass{
    public:
    string name;
    int *ageptr= new int;
    DeepCopyClass(string n,int a){
        name=n;
        *ageptr=a;
    }
    // DeepCopyClass(DeepCopyClass &orgObj){
    //     this->name=orgObj.name;
    //     this->ageptr=orgObj.ageptr;
    // }// Do Shallow copy
    DeepCopyClass(DeepCopyClass &orgObj){
        this->name=orgObj.name;
        this->ageptr= new int;// create new ptr and allocate only value
        *this->ageptr=*orgObj.ageptr;
    }// Do deep copy

    //Destructor
    ~DeepCopyClass(){
        delete ageptr;
        cout<<"successfully memory free"<<endl;
    }

    void getinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<*ageptr<<endl;
    }
};


int main(){
    DeepCopyClass p1("Rohan",12);
    DeepCopyClass p2=p1;
    p1.getinfo();
    *p2.ageptr=15;
    p1.getinfo();
    p2.getinfo();
}