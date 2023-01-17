#include<iostream>


void swap1(int &first_f, int &second_f);



int main() {

	int array[10] = {};
	const int size = 10;
	int *array_ptr = array; // only used with the OPTIONAL LOOP


	for (int i = 0; i < 10; i++)
	{
		array[i] = (i + 1);
	}


	std::cout << "array in original form:\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << array[i] << " ";
	}



	// SIMPLER LOOP
	/*
	for (int i = 0; i < size / 2; i++)
	{
		swap1(array[i], array[size-i-1]);

	}
	*/
	// END OF SIMPLER LOOP




	// OPTIONAL LOOP

	int size_b = 1;
	for (int i = 0; i < size / 2; i++)
	{
		swap1(*array_ptr, *(array_ptr + size - size_b));
		array_ptr++;
		size_b += 2;
		
	}
	//END OF OPTIONAL LOOP



	std::cout << "\narray in reverse:\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << array[i] << " ";
	}



	return 0;
}




void swap1(int &first_f, int &second_f) { //Swap 2 numbers

	int temp;

	temp = first_f;
	first_f = second_f;
	second_f = temp;


}