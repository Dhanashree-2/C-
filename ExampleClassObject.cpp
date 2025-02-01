#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
    string name;
    int age;

    void introduce(){
        cout << "Hello, My name is " << name << " and i am " << age << " years old" << endl ;
    }
    };

    int main(){
        Person p1;
        p1.name = "Dhanashree";
        p1.age = 25;
        p1.introduce();
        return 0;
    
}

