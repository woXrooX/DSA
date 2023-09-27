#include <iostream>

void sort(int *arr, unsigned int size){
	for(int i = 0; i < size; i++)
		for(int j = 0; j < size-i-1; j++)
			if(arr[j] > arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
}

void sortRev(int *arr, unsigned int size){
	for(int i = 0; i < size; i++)
		for(int j = 0; j < size-i-1; j++)
			if(arr[j] < arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
}

int main(){
    unsigned int size = 5;
    int arr[size];
	arr[0] = 4;
	arr[1] = 8;
	arr[2] = 8;
	arr[3] = 2;
	arr[4] = 1;

	// Before sort
	for(auto val : arr) std::cout << val << ' ';
	std::cout << '\n';

	sort(arr, size);

	// After the sort
	for(auto val : arr) std::cout << val << ' ';
	std::cout << '\n';

	sortRev(arr, size);

	// After the reverse sort
	for(auto val : arr) std::cout << val << ' ';
	std::cout << '\n';






    return 0;
}
