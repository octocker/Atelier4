#include <iostream>
using namespace std;

class Test {
    static int compteur;

public:
    void call() {
        compteur++;
    }

    static int getcompteur() {
        return compteur;
    }
};

int Test::compteur = 0;

int main() {
    Test T_1, T_2;
    T_1.call();
    T_1.call();
    T_2.call();
    
    cout << "Function call() was called " << Test::getcompteur() << " times!" << endl;
    return 0;
}
