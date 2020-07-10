// remove duplicates and print the array

#include <bits/stdc++.h>
using namespace std;

void removeDuplicate(int *arr, int n){
    int index = 1;
    for(int i=1; i<n; i++){
        if(arr[i] != arr[i-1]){
            arr[index++] = arr[i];
        }
    }
    for(int i=0; i<index; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {1,2,2,3,3,4,4,5,5,6,7,7,7,7,7,7,7,7,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    removeDuplicate(arr, n);
	return 0;
}

// remove duplicates and return the length of the array

#include <bits/stdc++.h>
using namespace std;

int removeDuplicate(int *arr, int n){
    int index = 1;
    for(int i=1; i<n; i++){
        if(arr[i] != arr[i-1]){
            arr[index++] = arr[i];
        }
    }
    return index;
}

int main() {
    int arr[] = {1,2,2,3,3,4,4,5,5,6,7,7,7,7,7,7,7,7,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<removeDuplicate(arr, n)<<endl;
	  return 0;
}
