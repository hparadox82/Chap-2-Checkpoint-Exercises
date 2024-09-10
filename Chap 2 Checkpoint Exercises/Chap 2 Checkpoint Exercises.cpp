// Chap 2 Checkpoint Exercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Austin Mollard
//10 Sep 2024
//Project: "Chapter 2 Checkpoint Exercises"
//Branch: "Checkpoint_2-17"

//Objective for this checkpoint: Write a program that has the following character variables: first, middle, and last.
//Store your initials in these variables then display them on the screen. Then replace code in main with this one.
//Then, compile/run/verify results.

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string fullName, realAddress, actualPhone;
	fullName = "Austin C Mollard";
	realAddress = "69 Noneya St Anywhere, AS USA";
	actualPhone = "(123)456-7890";
	cout << "My name is " << fullName << '\n' << "I live at " << realAddress << '\n' << "You can contact me at " << actualPhone << endl;
	return 0;
}
