/* Write a function that finds that first element that repeats itself in an array. */

#include <iostream>
using namespace std;

int repeatElement(int ar[],int size,bool &c){
    bool a = true;
    int rep;
    for (int i =0;i<size;i++){
        for (int j=0;j<size;j++){
            if (ar[i]==ar[j]&&i!=j){
                rep =ar[i];
                a=false;
                c=true;
                break;
            }
        if (!a){
            break;
        }
        }
    if (!a){
        break;
    }
    }
    
    return rep;
}

int main(){
    cout<<"Enter the number of elements: ";
    int size;
    cin>>size;
    int ar[size];
    cout<<"Enter "<<size<<" numbers: "<<endl;
    for (int i =0;i <size;i++){
        cin>>ar[i];
    }
    bool c =false;
    int rep = repeatElement(ar,size,c);
    if(!c){
        cout<<"No repeating elements found."<<endl;
    } else {
        cout<<"The first repeating element is: "<<rep<<endl;
    }
}
