#include <iostream>
using namespace std;
 
void torredeHanoi(int discos,char A,char C,char B)
{
    if(discos==1)
    {
        cout << "Mueva el disco " << discos << " desde " << A << " hasta  " << C << endl;         
    }
    else
    {
        torredeHanoi(discos-1,A,B,C);
        cout << "Mueva el disco " << discos << " desde " << A << " hasta  " << C << endl;
        torredeHanoi(discos-1,B,C,A);
    }
}
 
int main()
{
        int discos;
        char A,B,C;
 
        cout<<"Numero de discos: ";
        cin>>discos;
        torredeHanoi(discos,'A','C','B');
         
         return 0;
}
