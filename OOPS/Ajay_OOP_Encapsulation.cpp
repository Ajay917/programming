#include<bits/stdc++.h>

using namespace std;

class Employee {             
private:                      
    string Name;
    string Company;              
    int Age;
public:
    void setName(string name) {    //setter
        Name = name;
    }
    string getName() {          //getter
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        if(age >= 18)
        Age = age;
    }
    int getAge() {
        return Age;
    }

    void IntroduceYourself() {                       
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

};                                



int main(){
    
    Employee employee1 = Employee("Ajay","GitHub",21);          // to contruct an object         
    employee1.IntroduceYourself();      

    Employee employee2 = Employee("John","Amazon",21);
    employee2.IntroduceYourself();

    employee2.setAge(15);

    cout<<employee2.getName()<<" is "<<employee2.getAge()<<" years old"<<endl;



    return 0;
}                                                 