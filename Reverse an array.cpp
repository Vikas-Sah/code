// REVERSING AN ARRAY
#include <iostream>
using namespace std;
void reverse(int arr[ ], int length){
	int start = 0;
	int end = length -1;
	while( start <= end ) {
		swap( arr[start] , arr[end] );
		start++;
		end--;
	}
}
	
	void printArray( int arr[ ] , int length) {
		for( int i=0; i<length; i++ ) {  //  ' i ' will traverse all index  
		cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	int main( ){
		int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
		int arr2[ 9 ] = {1,2,3,4,5,6,7,8,9};

		// FUNCTION CALL		
		reverse( arr1 , 10 );
		reverse( arr2 , 9 );
		
		printArray( arr1 , 10 );
		printArray( arr2 ,  9 );
		
		return 0;
	}
