#include <iostream>
int main(){
    using namespace std;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3.0;
    double mint  = 10.0 / 3.0;
    const float million = 1.0e6;

    cout << "tub = " << tub;
    cout << " , a million tub = " << million * tub;
    cout << endl;
    cout << "mint = " << mint;
    cout << ", a million mint = " << mint * million;
    cout << endl;


    return 0;
}