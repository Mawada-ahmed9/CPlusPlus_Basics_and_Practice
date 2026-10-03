#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int RandomNumbers(int from, int to)
{
    return rand()% (to - from + 1) + from;
}
void ReadMatrix(int array[3][3], int row, int col)
{
    
    for(int i =0; i < row; i++)
    {
        for(int j =0; j< col; j++){
            array[i][j] = RandomNumbers(0,100);
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
int SumRow(int array[3][3], int rownumber, int cols)
{
    int sum =0;
    for(int j =0; j < cols ; j++)
    {
        sum += array[rownumber][j];
    }return sum;
}
void SumArray(int arr[3],int array[3][3], int row, int col)
{
    for(int i =0; i < row; i++)
    {
        arr[i] = SumRow(array, i, col);
    }
}
void PrintSumArray(int arr[3])
{
    cout << "The following is sum of each row in 3*3 matrix: \n";
    for(int i =0; i < 3; i++){
        cout << "Row " << i +1 << " sum " << arr[i] << endl;
    }
}
int main(){
    srand(time(0));
    int array[3][3], arr[3];
    ReadMatrix(array, 3, 3);
    PrintNumbers(array, 3, 3);
    SumArray(arr,array, 3, 3);
    PrintSumArray(arr);
    
   return 0;
}
