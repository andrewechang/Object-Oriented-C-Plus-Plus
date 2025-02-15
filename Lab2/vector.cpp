#include <iostream>
#include <vector>
using namespace std;



void printMemVec(const vector<int>&v)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        cout <<"Value of" << v[i] << "at Memory Location: " << &v[i] << endl;
    }
}


void incVecBy10(vector<int>&v)
{
    for (size_t i = 0; i< v.size(); i++)
    {
        v[i] += 10;
    }
}    

int main()
{
    const int SIZE = 5;
    vector <int> vec;

    for (int i = 0; i < SIZE; i++)
    {
        vec.push_back(100 + i);
    }

    printf("\n Before Increment ------------- \n" );
    printMemVec(vec);
    incVecBy10(vec);
    printf("\n After Increment ------------- \n");
    printMemVec(vec);

    vec.pop_back();
    printf("\n After Pop ------------- \n");
    printMemVec(vec);

    vec.push_back (101);
    vec.push_back (102);
    printf("\n After Push ------------- \n");
    printMemVec(vec);

    return 0;
}
