#include <iostream>
using namespace std;
int main() {

    int carrots;
    carrots = 25;

    cout << "I have ";
    cout << carrots;
    cout << " carrots";
    cout << endl;

    carrots -= 1;

    cout << "Eat one, I have ";
    cout << carrots;
    cout << " carrots";
    cout << endl;
    int buy;

    cin >> buy;

    cout << "buy " << buy << " carrots.";
    cout << endl;

    return 0;
}