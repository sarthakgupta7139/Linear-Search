#include<iostream>
using namespace std;

int isKEY(int arr[], int size, int key){

    for(int i=0; i<size; i++){

        if(arr[i]==key){
            return i;
        }
        else
            return 0;
    }
}
int main() {
    int size, key, index=0;

    cout<<"Enter size of the array(max->100): ";
    cin>>size;

    int array[100];
    cout<<"Enter elements of the array: "<<endl;

    for(int i=0; i<size; i++){
        cin>>array[i];
    }
    cout<<"Enter element to search in the array: ";
    cin>>key;

    index = isKEY(array, size, key);
    
    if(index!=0){
        cout<<"Element found at "<< index << " index.";
    }
    else{
        cout<<"Element not found.";
    }
}
