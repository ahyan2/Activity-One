#include <iostream>
using namespace std;
int main() {
    int x = 5;
    int y = 10;
    
    int temp = x;
    
    x = y;
    y = temp;
    
    cout << x << endl;
    cout << y << endl;
    return 0;
}
