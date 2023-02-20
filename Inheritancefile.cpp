#include <iostream>
using namespace std;

// Base class
class Student {
protected:
    string name;
    int id;

public:
    Student(string n, int i) {
        name = n;
        id = i;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

// Subclasses
class ICTStudent : public Student {
private:
    string courseType;
    int stage;
public:
    ICTStudent(string n, int i, string t, int s) : Student(n, i) {
        courseType = t;
        stage = s;
    }
    void display() {
        cout << "ICT Student" << endl;
        Student::display();
        cout << "Course type: " << courseType << endl;
        cout << "Stage: " << stage << endl;
    }
};

class LawStudent : public Student {
private:
    string courseType;
public:
    LawStudent(string n, int i, string t) : Student(n, i) {
        courseType = t;
    }
    void display() {
        cout << "Law Student" << endl;
        Student::display();
        cout << "Course type: " << courseType << endl;
    }
};

class BusinessStudent : public Student {
private:
    string courseType;
public:
    BusinessStudent(string n, int i, string t) : Student(n, i) {
        courseType = t;
    }
    void display() {
        cout << "Business Student" << endl;
        Student::display();
        cout << "Course type: " << courseType << endl;
    }
};

int main() {
    // Create some student objects
    ICTStudent s1("Scott T", 9345, "BSC-IT", 1);
    LawStudent s2("Diana Joe", 9600, "Certificate");
    BusinessStudent s3("Bob Jack", 9010, "Diploma");

    // Display their details
    s1.display();
    cout << endl;
    s2.display();
    cout << endl;
    s3.display();

    return 0;
}
