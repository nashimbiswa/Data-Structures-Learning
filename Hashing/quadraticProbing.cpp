#include<bits/stdc++.h>
using namespace std;

struct quadraticProbing
{
    int *arr;
    int arraySize;
    int hashSize;

    quadraticProbing(int N, int hSize)
    {
        arraySize=N;
        arr=new int[arraySize];
        hashSize=hSize;
        for (int i = 0; i < hashSize; i++)
        {
            arr[i]=-1;
        }
        
    }

    int myHash(int key)
    {
        return key%hashSize;
    }
    
    
    bool insert(int key)
    {
        int hv=myHash(key);
        if(arr[hv]==key)
        {
            return false;
        }
        else if(arr[hv]==-1 ||arr[hv]==-2)
        {
            arr[hv]=key;
            return true;
        }
        else
        {
            for (int i = 1; i < hashSize; i++)
            {
                int nhv=(hv+i*i)%hashSize;
                if(arr[nhv]==key)
                {
                    return false;
                }
                if(arr[nhv]==-1 or arr[nhv]==-2)
                {
                    arr[nhv]=key;
                    return true;
                }
            }
            
        }
    }


    void printArray()
    {
        cout<<"Elements in the hash bucket are as follows:\n";
        for (int  i = 0; i < hashSize; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }

};
int main(int argc, char const *argv[])
{
    quadraticProbing q1(7,23);
    bool values[23];
    int ary[]={23,45,32,67,35,38,78};
    for (int i = 0; i < 7; i++)
    {
        values[i]=q1.insert(ary[i]);
    }

    q1.printArray();
    // cout<<"Return bool values are as follows:\n";
    // for (int i = 0; i < 7; i++)
    // {
    //     cout<<values[i]<<" ";
    // }
    return 0;
}

