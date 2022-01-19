// This includes the command line console
#include <iostream>
// int main begins the main code
int main() 
{
	//int favorite_number; means that favorite_number is the name of an object the ; means tha tthe statement in thisline has ended
	int favorite_number;
	//std::cout << "example" means that it is going out the console to the user in the command line interface
	std::cout << "Enter your favorite number between 1 and 100: ";
	// the console asks what the number is and then the user inputs it
	std::cin >> favorite_number;
	// the console will output text just like the first cout element
	std::cout << "Amazing!! That's my favorite number too!" << std::endl;
	// this means the code is over it took me a bit to read this part but i can idenify my code on day 1 so i am not really complaining
	return 0;
}
