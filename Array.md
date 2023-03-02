# code
 
//This the code of linear search in array
#include<iostream>
using namespace std ;
bool search(int arr[10 ] ,int element) {
for(int i=0;i<10;i++) { // 'i' will traverse all the                                                index of array
if(arr[i]==element) { 
return 1; }
}

 return 0;
}
int main( ) {
int arr[ ]={1,2,3,4,5,6,7,8,9,10};
int element;
cout<<"enter the element to search"<<endl;
cin>>element;
 bool found = search( arr  , element);
 if (found) {
 	cout<<"The element is available"<<endl;
 }
 else cout<<"Element is not available";
return 0;
}
