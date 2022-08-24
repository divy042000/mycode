#include <bits/stdc++.h>
using namespace std;
    int arr[10];
    int top=-1;
void IsEmpty()
{
    //Stack.obj;
    if(top==9)
    {
    cout<<"Not Empty"<<endl;;
    }
    else
    {
    cout<<"Stack Underflow"<<endl;
    }
} 
void push(int x) 
{
    if(top!=9)
    {
        top++;
        arr[top] = x;
    }
    else
    {
    cout<<"Stack Overflow"<<endl; 
    }
} 
void pop()
{
    if(top==-1)
    {
        cout<<"Deletion not possible! No elements inside "<<endl;
    }
    else
    {
        cout<<"Deleted"<<endl;
        top--;
    }
}
void peek()
{
    if(top==-1)
    {
        cout<<"No element present"<<endl;
    }
    else
    {
        cout<<"Found"<<" "<<arr[top]<<endl;
    }
}
void print()
{
    if(top==-1)
    {
        cout<<"No element present"<<endl;
    }
    else
    {
    for ( int i = 0; i <= top; i++)
    {
        /* code */
        cout<<" "<<arr[i]<<endl;
    }  
    }
}
int main()
{
    push(10);
    //print();
    push(12);
    push(13);
    push(14);
    //print();
    pop();
    //print();
    push(15);
    print();
    return 0;
}