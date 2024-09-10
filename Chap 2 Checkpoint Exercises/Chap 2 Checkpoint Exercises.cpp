// Chap 2 Checkpoint Exercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Austin Mollard
//10 Sep 2024
//Project: "Chapter 2 Checkpoint Exercises"
//Branch: "Checkpoint_2-17"

//Write a program that defines an integer variable named age and a float variable named weight.
//Store your age and weight, as literals, in the variables.The program should display these values on
//the screen in a manner similar to the following :
//My age is 26 and my weight is 120 pounds.
//(Feel free to lie to the computer about your age and your weight—it’ll never know!)
//Replace the code in the main function with the code for this program.Compile and run the
//program.Verify that it is producing the correct results.

#include <iostream>
using namespace std;
int main()
{
	int age;
	age = 25;
	float weight;
	weight = 250;
	cout << "My age is " << age << " and my weight is " << weight << "." << endl;
	return 0;
}
