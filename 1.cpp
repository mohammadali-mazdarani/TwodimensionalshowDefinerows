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

int nr();

void Showrows(int b[][3],int m,int n,int r);
//--------------------------
//micro
//---------------------
//global variable
//-------------------
int main(int argc, char** argv)
{

//Declar array
int a[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

//Show array
cout<<"Show array :"<<endl;
show(a,4,3);


//Seperator
cout<<endl<<"------------------------"<<endl;

//Get number of rows
int n;
n = nr();

//Seperator
cout<<endl<<"------------------------"<<endl;

//Show Define rows
Showrows(a,4,3,n);


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


//Function for get number of rows
int nr()
{
    int n;
    cout<<"Enter number of rows (1,2,3,4) = ";
    cin>>n;

    return n;
}

//Function for show define Rows

void Showrows(int b[][3],int m,int n,int r)
{
    for(int j=0; j<n; ++j)
    {
        cout<<b[(r-1)][j]<<"\t";
    }
}