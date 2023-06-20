#include <iostream>

/// this func will return the sum of the digits of the int given
int sum_of_digits(int num_to_check) {
	if(num_to_check < 10) {
		return num_to_check;
	} else {
		return (num_to_check % 10 + 
				sum_of_digits(num_to_check / 10));
	}
}

/// func will take exactly one intput from the user and use sum_of_digits on him
int main(int argc, char const *argv[]) {	
	if(argc != 2) {
		std::cout << "./sum_of_digits <YOUR_INT>" << std::endl;
		return 1;
	} else {
		std::cout << "The summary of number digits is: " << sum_of_digits(atoi(argv[1])) << std::endl;
		return 0;
	}
}
