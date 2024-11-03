#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string Nom;
    string Prenom;
    string D_N;

public:
    // Constructor for Person
    Person(string nom, string pre, string d_n)
        : Nom(nom), Prenom(pre), D_N(d_n) {}

    // Virtual function to allow overriding in derived classes
    virtual void Afficher() {
        cout << "Nom: " << Nom << ", Prenom: " << Prenom
             << ", Date de naissance: " << D_N << endl;
    }
};

class Employee : public Person {
protected:
    double Salaire;

public:
    // Constructor for Employee
    Employee(string n1, string p1,  string d_n1, double sal)
        : Person(n1, p1, d_n1), Salaire(sal) {}

    void Afficher() override {
        Person::Afficher();
        cout << "Salaire: " << Salaire << endl;
    }
};

class Chef : public Person {
private:
    string Service;

public:
    
    Chef(string n2, string p2, string d_n2, string service)
        : Person(n2, p2, d_n2), Service(service) {}

    void Afficher() override { 
        Person::Afficher();
        cout << "Service: " << Service << endl;
    }
};

int main() {

    Person person("Lol", "Mami", "03/01/2003");
    Employee employee("Bobi", "Jessy", "02/04/1985", 10000);
    Chef chef("Law", "Law", "04/05/2001", "Nothing");

    person.Afficher();
    cout << "\n" << endl;
    employee.Afficher();
    cout << "\n" << endl;
    chef.Afficher();
    return 0;
}
