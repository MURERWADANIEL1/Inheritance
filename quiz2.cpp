#include<iostream>
#include<string>
using namespace std;
class Person
{
    string Firstname;
    string Lastname;
    int Age;
public:
    void getInfo()
    {
        cout<<"Enter your Firstname"<<endl;
        cin>>Firstname;

        cout<<"Enter your Lastname"<<endl;
        cin>>Lastname;

        cout<<"Enter your Age"<<endl;
        cin>>Age;
    }
    void display_info()
    {
        cout<<"Displaying Data"<<endl;
        cout<<"Firstname  :"<<Firstname<<endl;
        cout<<"Lastname   :"<<Lastname<<endl;
        cout<<"Age        :"<<Age<<endl;
    }
};
class Student : public Person
{
    int Institution;
public:
    void getInstitution()
    {
        cout<<"Enter your Institution"<<endl;
        cin>>Institution;
    }
    void show_Institution()
    {
        cout<<"Student's Institution :"<<Institution<<"\n"<<endl;
    }
};
int main()
{
    Student obj1;
    obj1.getInfo();
    obj1.getInstitution();
    return 0;
}
