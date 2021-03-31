#include <iostream>
#include <limits.h>
 
using namespace std;
 
int main()
{
    int** arr = NULL;
    int size = 3;
    int maxi = 0, maxj = 0;
    
    arr = new int*[size];
    for(int i = 0; i < size; i++)
        arr[i] = new int[size];
    
    srand(time(NULL));
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++){
            arr[i][j] = rand() % 101;
            arr[i][j] *= (rand() % 2 == 0) ? -1 : 1;
        }
        
    cout<<"Array: " << endl;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
 
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++){
            
            if(arr[maxi][maxj] < arr[i][j]){
                maxi = i;
                maxj = j;
            }
        }
 
    cout << "max element indexes: " << maxi << ", " << maxj << endl;
    
    for(int i = 0; i < size; i++)
        delete [] arr[i];
    delete [] arr;
        
    return 0;
}