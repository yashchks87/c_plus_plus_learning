#include <iostream>
int main(){
	// Just creating empty arry
	int empty_arr[4];
	// creted array with elements inside
	int arr_nums[4] = {1,2,3,4};
	// Printing numbers 
	for (int i=0;i<(sizeof(arr_nums)/sizeof(arr_nums[0])); i++){
		std::cout << arr_nums[i] << "\n";
	}
	// Inserting values inside empty arr
	int base_start = 40;
	for (int i=0; i < (sizeof(empty_arr) / sizeof(empty_arr[0])); i++){
		empty_arr[i] = base_start + i;
	}
	// printing empty arr
	std::cout << "Printing empty array:\n";
	for (int i = 0; i < (sizeof(empty_arr) / sizeof(empty_arr[0])); i++){
		std::cout << empty_arr[i] << "\n";
	}
}