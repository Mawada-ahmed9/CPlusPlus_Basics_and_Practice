#include <iostream>
using namespace std;

void swap(int *a, int * b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}
int main(){
    int a = 1, b =2;
    cout << "Before swap: " << endl;
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
    swap(&a, &b);
    cout << "After swap: " << endl;
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
return 0;
}
