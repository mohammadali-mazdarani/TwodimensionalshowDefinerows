#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system(
) or input loop */
/*branch name
*
*
*
*/
//prototype

void show(int b[][3],int m,int n);
//--------------------------
//micro
//---------------------
//global variable
//-------------------
int main(int argc, char** argv)
{

//Declar array
int a[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

cout<<"Show array :"<<endl;
show(a,4,3);

cout<<endl<<"------------------------"<<endl;
getch();
}
//function variable
//--------------------------
//functions

//This function show array
void show(int b[][3],int m,int n)
{

for(int i=0; i<m; ++i)
{

for(int j=0; j<n; ++j)
{

    cout<<b[i][j]<<"\t";

}
cout<<endl;
}

}