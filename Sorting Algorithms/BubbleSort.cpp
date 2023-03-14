#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n)
{   
    bool swapped;//for array which is already sorted.
    for(int i=0;i<n-1;++i)
    {
        swapped=false;
        for (int j = 0; j < n-i-1; ++j)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
            break;
        
    }
}
int main(int argc, char const *argv[])
{
    int arr[]={90,4,3,5,43,6,-1};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    for(auto x:arr)
        cout<<x<<" ";
    return 0;
}
