/*

* Peyton White
* 3250
* 2/26/18
* assignment 4 is an rpn calculator


*/

#include <iostream>
#include <string>
#include "Stack.hpp"


int main()
{

	Stack<int> values;
	std::string token;
	bool valid = true;

	std::cout << "Enter a token or '.' to stop: ";
	std::cin >> token;

	while (token != ".") {
		int value = std::atoi(token.c_str());

		if (token == "0" || value != 0) {
			values.push(value);
			// Do something with value.
		}
		else if (token == "+" || token == "-" || token == "*" || token == "/") {
			
			if (values.size() > 1) {

				int b = values.pop();
				int a = values.pop();

				if (token == "+") {
					int sum = a + b;
					values.push(sum);
				}
				else if (token == "-") {
					int sum = a - b;
					values.push(sum);
				}
				else if (token == "*") {
					int sum = a * b;
					values.push(sum);
				}
				else if (token == "/") {
					int sum = a / b;
					values.push(sum);
				}
			}
			else {
				valid = false;
			}


		}
		else if (token != "") {
			std::cout << "This token in invalid please enter a Number or a sign,*,-,+,/ \n";
			valid = false;
			// Do something with an invalid token.
		}

		std::cout << "Enter a token or '.' to stop: ";
		std::cin >> token;
	}
	if (values.size() > 1) {
		valid = false;
	}
	if (valid) {
		std::cout << "Result is: " <<  values.top();
	}
	else {
		std::cout << "The expression is invalid more than one on the stack \n";
	}



	system("pause");
	return 0;
}
