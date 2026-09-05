#include <iostream>
#include <cstdlib>
using namespace std;
int Random(int from, int to){
    return rand() % (to - from +1) + from;
}

int main (){
    srand((unsigned)time(NULL));   
    cout << rand()<< endl; 
    cout << Random(40, 60);
return 0;
}
