/*
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void printMem(int * arr, int size) 
{ // void printMem(int arr[], int size )
    printf("Each int is worth %lu bytes\n", sizeof(arr[0]));
    for(int i = 0; i < size; i++) {
        printf("Value :%i at Memory Location: %p\n", arr[i], arr + i);
    }
}

void printMemStr(string * arr, int size) 
{ // void printMem(int arr[], int size )
    printf("Each int is worth %lu bytes\n", sizeof(arr[0]));
    for(int i = 0; i < size; i++) {
        printf("Value :%i at Memory Location: %p\n", arr[i], arr + i);
    }
}

int main()
{
    int array [5] = {1, 2, 3, 4, 5};
    printMem(array, 5);
    array[4] = 500;
    cout << "array position 4 = " <<array[4] <<endl;
    int *a1 = &array[0];
    int *a2 = &array[1];
    cout << "a1 memory address = " <<a1 <<endl;
    cout << "a2 memory address = " <<a2 <<endl;
    int newa = a2 - a1;

    string helloArr[5] = { "Hello", "Bonjourno" , "NiHao" , "Hola", "Ciao" };
    printMemStr(helloArr, 5);

    
    return 0;
}
*/

#include <iostream>
#include <string>

using namespace std;

void printMem(int * arr, int size) 
{ // void printMem(int arr[], int size )

    printf("Each int is worth %lu bytes\n", sizeof(arr[0]));
    
    for(int i = 0; i < size; i++) {
        
        printf("Value :%i at Memory Location: %p\n", arr[i], arr + i);
    }
}

void printMem1(string * arr1, int sizeo) 
{ 
    printf("Each string is worth %lu bytes\n", sizeof(arr1[0]));
    
    for(int j = 0; j < sizeo; j++) {
        
        printf("Value :%s at Memory Location: %p\n", arr1[j].c_str(), arr1 + j);
    }
}

int main(){

    int arr[5]= {1, 2, 3, 4, 5};
    int size = 5;
    
    printMem(arr, size);
    
    arr[4] = 500;
    
    cout << arr[4] << endl;
    
    string arr1[5] = {"hi", "nihao", "bonjour", "anyeong", "konichiwa"};
    int sizeo = 5;
    
    printMem1(arr1, size);
    
    return 0;
}
