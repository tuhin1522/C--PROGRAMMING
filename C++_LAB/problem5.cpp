#include<bits/stdc++.h>
using namespace std;
class Vector
{
    int size=0;
    double *ptr;
public:
    void create(void);
    void modify(void);
    void multiply(void);
    void display(void);
    void add(Vector v2);
};
void Vector::create(void)
{
    while(true)
    {
        cout<<"Enter the size: ";
        cin>>size;
        if(size>0) break;
        cout<<"Invalid Input"<<endl;
    }
    ptr = new double[size];
    cout<<"Enter the elements: ";
    for(int i=0; i<size; i++) cin>>ptr[i];
    cout<<"The vector has been created successfully"<<endl;
}
void Vector::modify(void)
{
    int i;
    if(size==0){
    cout<<"The vector is empty"<<endl;
    return;
    }
    while(true){
        cout<<"Enter the index number of the element you want to modify: ";
        cin>>i;
        if((i>=0) && (i<size)) break;
        cout<<"Index out of bound"<<endl;
    }
    cout<<"The previous element is "<<ptr[i]<<endl;
    cout<<"Enter the new element: ";
    cin>>ptr[i];
    cout<<"The element has been modified"<<endl;
}
void Vector::multiply(void)
{
    if(size==0) {
    cout<<"The vector is empty"<<endl;
    return;
    }
    double m;
    cout<<"Enter the scalar number: ";
    cin>>m;
    for(int i=0; i<size; i++) ptr[i] = ptr[i]*m;
    cout<<"The elements of the vector have been multiplied by the scalar value"<<endl;
}
void Vector::display(void)
{
    if(size==0){
        cout<<"The vector is empty"<<endl;
        return;
    }
    cout<<"The elements of the vector are: ";
    for(int i=0; i<size; i++) cout<<ptr[i]<<" ";
    cout<<endl;
}
void Vector::add(Vector v2)
{
    if(size==0){
        cout<<"The initial vector is empty"<<endl;
        return;
    }
    v2.create();
    if(size != v2.size)
        cout<<"The vectors are not compatible to add"<<endl;
    else{
    for(int i=0; i<size; i++) v2.ptr[i] = v2.ptr[i] + ptr[i];
    cout<<"After addition ";
    v2.display();
}}
int main()
{
    Vector v;
    Vector v2;
    int n;
    while(true){
        cout<<endl;
        cout<<"Press 1 to create the vector"<<endl;
        cout<<"Press 2 to modify an element"<<endl;
        cout<<"Press 3 to multiply by a scalar value"<<endl;
        cout<<"Press 4 to display the vector"<<endl;
        cout<<"Press 5 to add this vector with another vector"<<endl;
        cout<<"Press 6 to Exit"<<endl;
        cin>>n;
        switch(n){
            case 1:
                v.create();break;
            case 2:
                v.modify();break;
            case 3:
                v.multiply();break;
            case 4:
                v.display();break;
            case 5:
                v.add(v2);break;
            case 6:
                return 0;
            default:
                cout<<"Invalid Choice"<<endl;
            break;
        }
    }
}