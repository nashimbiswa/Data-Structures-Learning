#include<bits/stdc++.h>
using namespace std;

void TowerOFHonoi(int n, char A, char B, char C)
{
       if(n==1)
       {
              cout<<"Move Disk 1 from "<<A<<" to "<<C<<".\n";
              return;
       }
       TowerOFHonoi(n-1,A,C,B);//moving from A to B using C as a auxilary tower.
       cout<<"Move Disk "<<n<<" from "<<A<<" to "<<C<<".\n";
       TowerOFHonoi(n-1,B,A,C);//moving from B to C using A as a auxilary tower.
}

int main()
{
       TowerOFHonoi(3,'A','B','C');
       return 0;

}