#include<bits/stdc++.h>

using namespace std;

class Employee {                   // class Employeee        (User defined datatype like structure)
public:                                    // members are private by default
    string Name;
    string Company;               // class Employee members (attributes(characteristics),functions)
    int Age;

    void IntroduceYourself() {                       // behaviour of the object
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

};                                // Class is a "Blueprint" of an object
                                  // We have created the blueprint  for employee objects



int main(){
    
    Employee employee1;           // Object for Employee class (like "int number;")
    employee1.Name = "Ajay";       // Creating attributes for object employee1
    employee1.Company = "GitHub";
    employee1.Age = 20;
    employee1.IntroduceYourself();      // Calling the member function


    return 0;
}