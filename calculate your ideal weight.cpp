#include <iostream>
using namespace std;

int main(){
    string name;
    int height;
    cout << "Your Name: "; cin >> name;
    cout << "Your Height: "; cin >> height;

    float idealWeight = (height - 100) - 0.1 * (height -100);

    cout << name;
    cout << " Your Ideal Weight is: " << idealWeight;
}
