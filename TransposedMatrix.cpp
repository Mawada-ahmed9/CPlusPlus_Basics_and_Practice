#include <iostream>
#include <iomanip>
using namespace std;
void FillMatrix(int array[3][3], int row, int col)
{
    int k =1;
    for(int i =0; i < row; i++)
    {
        for(int j =0; j< col; j++){
            
                array[i][j] = k ;
                k += 1;     
        }
    }
}

void PrintNumbers(int array[3][3], int row, int col)
{
    
    cout << "The following is 3*3 matrix: \n";
    for(int i =0; i < row; i++)
    {
        for(int j =0; j< col; j++){
            cout << setw(3)<< array[i][j] << "  ";
        }cout << endl;
    }
}

void FillTransposeArray(int Tarray[3][3], int array[3][3], int row, int colNumber)
{
    for(int i =0; i < row; i++)
    {
        for(int j =0; j < row ; j++)
    {
        Tarray[i][j]= array[j][i];
    }
    }
    
}
void PrintSumOfArray(int arr[3])
{
    cout << "The following is sum of each col in 3*3 matrix: \n";
    for(int i =0; i < 3; i++){
        cout <<  arr[i] << endl;
    }
}
int main(){
    srand(time(0));
    int array[3][3], Tarray[3][3];
    FillMatrix(array, 3, 3);
    PrintNumbers(array, 3, 3);
    FillTransposeArray(Tarray, array, 3, 3);
return 0;
}
    PrintNumbers(Tarray, 3, 3);
