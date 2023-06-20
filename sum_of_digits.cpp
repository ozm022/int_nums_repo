#include <iostream>

int sum_of_digits(int num_to_check) {
	if(num_to_check < 10) {
		return num_to_check;
	} else {
		return num_to_check % 10 + sum_of_digits((num_to_check - num_to_check % 10) / 10);
	}
}

int main(int argc, char const *argv[])
{	
	if(argc != 2) {
		std::cout << "./sum_of_digits <YOUR_INT>" << std::endl;
	} else {
		std::cout << "The summary of number digits is: " << sum_of_digits(atoi(argv[1])) << std::endl;
		return 0;
	}

}
