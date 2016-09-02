#include <iostream>

int main()

{
		//#1

		/*int numbers[10] = {0, 0, 1, 0, 0, 1, 0, 0, 1, 1 }; -- Valid
		int matrix[5] = { 1, 2, 3, 4, 5, 6, 7 }; -- Invalid. It has too many assigned numbers
		double radii[10] = {3.2, 4.7}; -- Invalid - You cannot have decimals
		int table[7] = {2, 0, 0, 27, , 45, 39} - Invalid. An arry cannot have missing values
		char codes[] = { 'A', 'X', '1', '2', 's'| }; - Valid
		int blanks[]; - Invalid. It has no identifyer
		int collection[-20]; - Invalid. You cannot have a negative number
		int hours[3] = 8, 12, 16; - Invalid. It does not have any "{}"*/

		int number[10] = { 0, 0, 1, 0, 0, 1, 0, 0, 1, 1 };

		//int matrix[5] = { 1, 2, 3, 4, 5, 6, 7 };

		//double radii[10] = { 3.2, 4.7 };

		//int table[7] = { 2, , , 27, , 45, 39 };

		//char codes[] = { 'A', 'X', '1', '2', 's' | };

		//int blanks[];

		//int collection[-20];

		//int hours[3] = 8, 12, 16;

		system("pause");

		//#2

		/*Given the following array definition:
		int values[] = { 2, 6, 10, 14 };
		What does each of the following display?
		a) cout << values[2]
		b) cout << ++values[0];
		c) cout << values[1]++;
		d) x = 2; cout << values[++x];
		e) cout << values[4];*/

		int values[] = { 2, 6, 10, 14 };
		std::cout << values[2];

		system("pause");

		int values[] = { 2, 6, 10, 14 };
		std::cout << ++values[0];

		system("pause");

		int values[] = { 2, 6, 10, 14 };
		std::cout << values[1]++;

		system("pause");

		int values[] = { 2, 6, 10, 14 };
		int x = 2;
		std::cout << values[++x];

		system("pause");

		int values[] = { 2, 6, 10, 14 };
		std::cout << values[4];

		system("pause");

		//#3

		//Write a for loop to initialize the following array (int data[10]) with the values 10, 9, 8… (Etc)
		
		int data[10];
		for (int data = 10; data > 0; data--)
			std::cout << data << std::endl;
		//4

		//Create a program that asks for 5 numbers from the user, and store them in an array.Print out the numbers in reverse order.

		std::cout << "Give me 5 numbers" << std::endl;

		int numb[5];
		std::cin >> numb[0];
		std::cin >> numb[1];
		std::cin >> numb[2];
		std::cin >> numb[3];
		std::cin >> numb[4];

		for (int i = 4; i >= 0; i--)
		{
			std::cout << numb[i] << std::endl;
		}
		//#5

		//Write a program that lets the user enter 10 values into an array.The program should then display the largest and smallest values stored in the array.

		std::cout << "Give me 10 numbers" << std::endl;
		
		int numb[10];
		int i = 0;

		std::cin >> numb[0];
		std::cin >> numb[1];
		std::cin >> numb[2];
		std::cin >> numb[3];
		std::cin >> numb[4];
		std::cin >> numb[5];
		std::cin >> numb[6];
		std::cin >> numb[7];
		std::cin >> numb[8];
		std::cin >> numb[9];

		int largenum = numb[0];
		int smallnum = numb[0];

		for (i = 0; i < 9; i--);
		{
			if (largenum < numb[0])
			{
				largenum = numb[0];
			}
			if (smallnum > numb[0])
			{
				smallnum = numb[0];
			}
			if (largenum < numb[1])
			{
				largenum = numb[1];
			}
			if (smallnum > numb[1])
			{
				smallnum = numb[1];
			}
			if (largenum < numb[2])
			{
				largenum = numb[2];
			}
			if (smallnum > numb[2])
			{
				smallnum = numb[2];
			}
			if (largenum < numb[3])
			{
				largenum = numb[3];
			}
			if (smallnum > numb[3])
			{
				smallnum = numb[3];
			}
			if (largenum < numb[4])
			{
				largenum = numb[4];
			}
			if (smallnum > numb[4])
			{
				smallnum = numb[4];
			}
			if (largenum < numb[5])
			{
				largenum = numb[5];
			}
			if (smallnum > numb[5])
			{
				smallnum = numb[5];
			}
			if (largenum < numb[6])
			{
				largenum = numb[6];
			}
			if (smallnum > numb[6])
			{
				smallnum = numb[6];
			}
			if (largenum < numb[7])
			{
				largenum = numb[7];
			}
			if (smallnum > numb[7])
			{
				smallnum = numb[7];
			}
			if (largenum < numb[8])
			{
				largenum = numb[8];
			}
			if (smallnum > numb[8])
			{
				smallnum = numb[8];
			}
			if (largenum < numb[9])
			{
				largenum = numb[9];
			}
			if (smallnum > numb[9])
			{
				smallnum = numb[9];
			}

			std::cout << largenum << smallnum;
		}
		//#6

		//Create a program that creates a small 3x3 array of integers.Use a nested for loop to initialise the numbers 1 - 9. Output the numbers in a grid format.

	int map[3][3];

		for (int row = 0; row < 3; ++row)
		{
			for (int col = 0; col < 3; ++col)
			{
				std::cout << map[3][3];
			}
		}

		//#7

		/*An application uses a two dimensional array defined as follows:
		int days[29][5];
		Write code that sums each row in the array and displays the results.
		Write code that sums each column in the array and displays the results.*/

		//#8

		/*Create a program that declares an array of 5 integer values. These values will represent the
		health of 5 characters. Initialise the values all to 100. Your program is to ask the user to
		enter a number(0 to 4) to select a character that is to be attacked by a monster. Each attack
		deals 40 damage per attack.If a player’s health gets below 0 then should not be able to be
		attacked. Your program should simulate 5 attacks. After the attacks have finished, output
		the parties’ remaining health to the console.
		CHALLENGE: Research random number generation and modify your program so that random
		damage is dealt with each attack.*/

		//#9

		/*Daenerys Targaryen wants to keep track of how many kilos of food her three dragons eat
		each day during a typical week. Write a program that stores this information in a 2
		dimensional 3 x 7 array, where each row represents a different dragon and each column
		represents a different day of the week. The program should first have Dany input the user
		for each dragon. Then it should create a report that includes the following information:
		-Average amount of food eaten per day by all the dragons together
		-average amount of food eaten per day by any one dragon
		-the greatest amount of food eaten during one day and which dragon that was
		-the least amount of food eaten during one day and which dragon that was*/

	system("pause");
	return 0;
}