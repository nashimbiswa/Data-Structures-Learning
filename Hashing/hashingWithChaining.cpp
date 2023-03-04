#include<bits/stdc++.h>
using namespace std;

class MyHash
{
    public:
        int bucket;
        list<int> *table;//list is a dt used to implement doubly linked list.
        
        
        MyHash(int bucketSize)
        {
            bucket=bucketSize;
            table=new list<int>[bucketSize];//array of doubly linked list
        }
        
        void insert(int key)
        {
            int index=key%bucket;
            table[index].push_back(key);
        }
        
        void remove(int key)
        {
            bool presentOrNot=search(key);
            if(presentOrNot)
            {
                int index=key%bucket;
                table[index].remove(key);
                cout<<"Successfully Removed.";
            }
            else
            {
                cout<<"The key "<<key<<" is not present.\n";
            }
        }

        bool search(int key)
        {
            int index=key%bucket;
            for(auto x:table[index])
            {
                if(x==key)
                    return true;
            }
            return false;
        }
};

int main(int argc, char const *argv[])
{
    MyHash h1(13);
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    for(auto x:arr)
        h1.insert(x);
    int element;
    // cout<<"Enter the element to search.\n";
    // cin>>element;
    // cout<<h1.search(element);
    cout<<"Enter the element to remove:\n";
    cin>>element;
    h1.remove(element);
    return 0;
}




