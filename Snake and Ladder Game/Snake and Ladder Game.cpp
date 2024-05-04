//snake and ladder game................
//you can see the instruction to know how to play the game.........
//Positions of the snake and LAdders are finalized..
//And the plaace where you will br droped if steped on snake/ladder are also initialized..
//you will know your new position by computer...
#include<iostream>    //includeing nessesory libraries
#include<ctime>
#include<windows.h>   //windows.h library for color themes 
#include<iomanip>     //iomanip for designing and board making
#include<string>
using namespace std;
void Board(char ch1, char ch2, char ch3, char ch4, int integer1, int integer2, int integer3, int integer4);  //declaring functions
void credits();   //function for credits..
void instructions();  //page of instructions
//int rolledSix(int& rollSix);
int main()
{
	int select, win1 = 0, win2 = 0, win3 = 0, win4 = 0;
	cout << endl;
	cout << "\t\t\t****** WELCOME TO SNAKE AND LADDER GAME *****\n\n";
	cout << "   Choose any of the option below.........\n\n";
	cout << "1.   Play Game " << endl << "2.   Credits" << endl << "3.   Instructions " << endl << "4.   Score " << endl << "5.   Exit " << endl << endl;
	cout << "    Enter Your Number : ";
	cin >> select;
	system("cls");   //clear screen to go on next page..
	switch (select)
	{
	case 1:
	{
		string name1, name2, name3, name4;
		cout << " Enter 1st Player Name : ";
		cin >> name1;
		cout << " Enter 2nd Player Name : ";
		cin >> name2;
		cout << " Enter 3rd Player Name : ";
		cin >> name3;
		cout << " Enter 4th Player Name : ";
		cin >> name4;
		system("cls");
		cout << "PRESS ENTER TO TOSS ....." << endl << endl;
		system("pause");
		int random;
		string first, second, third, fourth;
		char symbol1, symbol2, symbol3, symbol4;
		srand(time(NULL));
		random = (rand() % (4 - 1 + 1)) + 1;
		//Toss making
		cout << "\n\n" << setw(30) << setfill('*') << "\n";
		if (random == 1)
		{
			cout << name1 << " IS THE WINNER " << endl;
			cout << setw(30) << setfill('*') << "\n\n";
			cout << "\n";
			cout << setw(30) << setfill('=') << "\n";
			cout << name1 << " HAS THE FIRST TURN" << endl << endl << name2 << " HAS THE SECOND TURN" << endl << endl << name3 << " HAS THE THIRD TURN" << endl << endl << name4 << " HAS THE FOURTH TURN" << endl;
			first = name1;
			second = name2;
			third = name3;
			fourth = name4;
		}
		if (random == 2)
		{
			cout << name2 << " IS THE WINNER " << endl;
			cout << setw(30) << setfill('*') << "\n\n";
			cout << "\n";
			cout << setw(30) << setfill('=') << "\n";
			cout << name2 << " HAS THE FIRST TURN" << endl << endl << name1 << " HAS THE SECOND TURN" << endl << endl << name3 << " HAS THE THIRD TURN" << endl << endl << name4 << " HAS THE FOURTH TURN" << endl;
			first = name2;
			second = name1;
			third = name3;
			fourth = name4;
		}
		if (random == 3)
		{
			cout << name3 << " IS THE WINNER " << endl;
			cout << setw(30) << setfill('*') << "\n\n";
			cout << "\n";
			cout << setw(30) << setfill('=') << "\n";
			cout << name3 << " HAS THE FIRST TURN" << endl << endl << name1 << " HAS THE SECOND TURN" << endl << endl << name2 << " HAS THE THIRD TURN" << endl << endl << name4 << " HAS THE FOURTH TURN" << endl;
			first = name3;
			second = name1;
			third = name2;
			fourth = name4;
		}
		if (random == 4)
		{
			cout << name4 << " IS THE WINNER " << endl;
			cout << setw(30) << setfill('*') << "\n\n";
			cout << "\n";
			cout << setw(30) << setfill('=') << "\n";
			cout << name4 << " HAS THE FIRST TURN" << endl << endl << name1 << " HAS THE SECOND TURN" << endl << endl << name2 << " HAS THE THIRD TURN" << endl << endl << name3 << " HAS THE FOURTH TURN" << endl;
			first = name4;
			second = name1;
			third = name2;
			fourth = name3;
		}
		cout << endl;
		cout << setw(30) << setfill('=') << "\n\n";
		//Declaring players with symbols to play on board
		symbol1 = '#';
		symbol2 = '@';
		symbol3 = '$';
		symbol4 = '&';
		cout << "1st Player has " << symbol1 << " symbol" << endl << "2nd Player has " << symbol2 << " symbol" << endl << "3rd Player has " << symbol3 << " symbol" << endl << "4th Player has " << symbol4 << " symbol" << endl;
		cout << setw(30) << setfill('=') << "\n\n";
		cout << "\nPRESS ENTER TO PROCEED...\n";
		system("pause");
		system("cls");
		int random1, random2, random3, random4, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, move;
		int temp1, temp2, temp3, temp4;
		char choice, choice1;
		//using boolian
		bool flag1 = false, flag2 = false, flag3 = false, flag4 = false, flagtemp1 = false, flagtemp2 = false, flagtemp3 = false, flagtemp4 = false, moveflag = false;
		srand((NULL));  //srand for random numbers
		while (sum1 != 100 && sum2 != 100 && sum3 != 100 && sum4 != 100)  //it is the main loop..
		{
			for (int a = 1; a <= 4; a++)
			{
				switch (a)
				{
				case 1:
				{
					if (sum1 == 100)
					{
						if (win1 == 0)
						{
							cout << "Which Player You want to gave your 6 moves ( 2 for player 2, 3 for player 3 and 4 for player 4 = ";
							cin >> move;
							if (move == 2)
							{
								sum2 = sum2 + 6;
							}
							if (move == 3)
							{
								sum3 = sum3 + 6;
							}
							if (move == 4)
							{
								sum4 = sum4 + 6;
							}
							win1 = sum1;
							cout << "Player 1 : " << first << " Won 1st " << endl;
						}
						else if (win2 == 0)
						{
							win1 = sum1;
							cout << "Player 1 : " << first << " Won 2nd " << endl;
						}
						else if (win3 == 0)
						{
							win1 = sum1;
							cout << "Player 1 : " << first << " Won 3rd " << endl;
						}
						else if (win4 == 0)
						{
							win1 = sum1;
							cout << "Player 1 : " << first << " Won last " << endl;
						}
						break;
					}
					cout << " This is Player " << a << " : " << first << " Turn " << endl << "Press p for play = ";
					cin >> choice;
					system("cls");
					if (choice == 'p')
					{
						random1 = rand() % 6 + 1;
						temp1 = rand() % 6 + 1;
						cout << "You got : " << random1 << endl;
						if (random1 == 6)
						{
							flag1 = true;
						}
						if (flag1 == true && flagtemp1 == false)
						{
							random1 = 1;
							flagtemp1 = true;
						}
						if (flag1 == false)
						{
							Board(symbol1, symbol2, symbol3, symbol4, sum1, sum2, sum3, sum4);  //function call.
						}
						if (flag1 == true)
						{
							sum1 = sum1 + random1;

							if (sum1 == 23)
							{
								system("color 40");   //change color when snake bite..
								cout << "You got a snake from 23 to 3" << endl;

								Sleep(5000);   //sleep the system for some time.
								system("color 07");  //color back to normal.
								sum1 = 3;   //new sum defined
							}
							if (sum1 == 48)
							{
								system("color 40");

								cout << "You got a snake from 48 to 17" << endl;

								Sleep(5000);
								system("color 07");

								sum1 = 17;
							}
							if (sum1 == 61)
							{
								system("color 40");

								cout << "You got a snake from 51 to 41" << endl;

								Sleep(5000);
								system("color 07");

								sum1 = 41;
							}
							if (sum1 == 85)
							{
								system("color 40");

								cout << "You got a snake from 85 to 35" << endl;
								Sleep(5000);
								system("color 07");

								sum1 = 35;
							}
							if (sum1 == 98)
							{
								system("color 40");

								cout << "You got a snake from 98 to 3" << endl;
								Sleep(5000);
								system("color 07");

								sum1 = 3;
							}

							if (sum1 == 4)
							{
								system("color 20");

								cout << "You got a Ladder from 4 to 25" << endl;
								Sleep(5000);
								system("color 07");

								sum1 = 25;
							}
							if (sum1 == 19)
							{
								system("color 20");

								cout << "You got a Ladder from 19 to 50" << endl;
								Sleep(5000);
								system("color 07");

								sum1 = 50;
							}
							if (sum1 == 43)
							{

								system("color 20");

								cout << "You got a Ladder from 43 to 62" << endl;

								Sleep(5000);
								system("color 07");

								sum1 = 62;
							}
							if (sum1 == 37)
							{
								system("color 20");

								cout << "You got a Ladder from 37 to 86" << endl;

								Sleep(5000);
								system("color 07");

								sum1 = 86;
							}
							if (sum1 == 8)
							{
								system("color 20");

								cout << "You got a Ladder from 8 to 78" << endl;

								Sleep(5000);
								system("color 07");

								sum1 = 78;
							}


							Board(symbol1, symbol2, symbol3, symbol4, sum1, sum2, sum3, sum4);  //function call
						}
					}
					break;
				}
				case 2:
				{
					if (sum2 == 100)
					{
						if (win1 == 0)
						{
							cout << "Which Player You want to gave your 6 moves ( 1 for player 1, 3 for player 3 and 4 for player 4 = ";
							cin >> move;
							if (move == 1)
							{
								sum1 = sum1 + 6;
							}
							if (move == 3)
							{
								sum3 = sum3 + 6;
							}
							if (move == 4)
							{
								sum4 = sum4 + 6;
							}
							win1 = sum2;
							cout << "Player 1 : " << second << " Won 1st " << endl;
						}
						else if (win2 == 0)
						{
							win2 = sum2;
							cout << "Player 1 : " << second << " Won 2nd " << endl;
						}
						else if (win3 == 0)
						{
							win3 = sum2;
							cout << "Player 1 : " << second << " Won 3rd " << endl;
						}
						else if (win4 == 0)
						{
							win4 = sum2;
							cout << "Player 1 : " << second << " Won last " << endl;
						}
						break;
					}
					cout << "This is Player " << a << " : " << second << " Turn " << endl << "Press p for play = ";
					cin >> choice;
					system("cls");
					if (choice == 'p')
					{
						random2 = rand() % 6 + 1;
						cout << "You got = " << random2 << endl;
						if (random2 == 6)
						{
							flag2 = true;
						}
						if (flag2 == true && flagtemp2 == false)
						{
							random2 = 1;
							flagtemp2 = true;
						}
						if (flag2 == false)
						{
							Board(symbol1, symbol2, symbol3, symbol4, sum1, sum2, sum3, sum4);  //function call
						}
						if (flag2 == true)
						{
							sum2 = sum2 + random2;
							if (sum2 == 23)
							{
								system("color 40");

								cout << "You got a snake from 23 to 3" << endl;

								Sleep(5000);
								system("color 07");

								sum2 = 3;
							}
							if (sum2 == 48)
							{
								system("color 40");

								cout << "You got a snake from 48 to 17" << endl;

								Sleep(5000);
								system("color 07");

								sum2 = 17;
							}
							if (sum2 == 61)
							{
								system("color 40");

								cout << "You got a snake from 61 to 41" << endl;

								Sleep(5000);
								system("color 07");

								sum2 = 41;
							}
							if (sum2 == 85)
							{
								system("color 40");

								cout << "You got a snake from 85 to 35" << endl;

								Sleep(5000);
								system("color 07");

								sum2 = 35;
							}
							if (sum2 == 98)
							{
								system("color 40");

								cout << "You got a snake from 98 to 3" << endl;

								Sleep(5000);
								system("color 07");

								sum2 = 3;
							}

							if (sum2 == 4)
							{
								system("color 20");

								cout << "You got a Ladder from 4 to 25" << endl;

								Sleep(5000);
								system("color 07");

								sum2 = 25;
							}
							if (sum2 == 19)
							{
								system("color 20");

								cout << "You got a Ladder from 19 to 50" << endl;

								Sleep(5000);
								system("color 07");

								sum2 = 50;
							}
							if (sum2 == 43)
							{
								system("color 20");

								cout << "You got a Ladder from 43 to 62" << endl;

								Sleep(5000);
								system("color 07");

								sum2 = 62;
							}
							if (sum2 == 37)
							{
								system("color 20");

								cout << "You got a Ladder from 37 to 86" << endl;

								Sleep(5000);
								system("color 07");

								sum2 = 86;
							}
							if (sum2 == 8)
							{
								system("color 20");

								cout << "You got a Ladder from 8 to 78" << endl;

								Sleep(5000);
								system("color 07");

								sum2 = 78;
							}

							Board(symbol1, symbol2, symbol3, symbol4, sum1, sum2, sum3, sum4);   //function call
						}
					}
					break;
				}
				case 3:
				{
					if (sum3 == 100)
					{
						if (win1 == 0)
						{
							cout << "Which Player You want to gave your 6 moves ( 1 for player 1, 2 for player 2 and 4 for player 4 = ";
							cin >> move;
							if (move == 1)
							{
								sum1 = sum1 + 6;
							}
							if (move == 2)
							{
								sum2 = sum2 + 6;
							}
							if (move == 4)
							{
								sum4 = sum4 + 6;
							}
							win1 = sum3;
							cout << "Player 1 : " << third << " Won 1st " << endl;
						}
						else if (win2 == 0)
						{
							win2 = sum3;
							cout << "Player 1 : " << third << " Won 2nd " << endl;
						}
						else if (win3 == 0)
						{
							win3 = sum3;
							cout << "Player 1 : " << third << " Won 3rd " << endl;
						}
						else if (win4 == 0)
						{
							win4 = sum3;
							cout << "Player 1 : " << third << " Won last " << endl;
						}
						break;
					}
					cout << "This is Player " << a << " : " << third << " Turn " << endl << "Press p for play = ";
					cin >> choice;
					system("cls");
					if (choice == 'p')
					{
						random3 = rand() % 6 + 1;
						cout << "You got = " << random3 << endl;
						if (random3 == 6)
						{
							flag3 = true;
						}
						if (flag3 == true && flagtemp3 == false)
						{
							random3 = 1;
							flagtemp3 = true;
						}
						if (flag3 == false)
						{
							Board(symbol1, symbol2, symbol3, symbol4, sum1, sum2, sum3, sum4);   //calling function
						}
						if (flag3 == true)
						{
							sum3 = sum3 + random3;

							if (sum3 == 23)
							{
								system("color 40");

								cout << "You got a snake from 23 to 3" << endl;

								Sleep(5000);
								system("color 07");

								sum3 = 3;
							}
							if (sum3 == 48)
							{
								system("color 40");

								cout << "You got a snake from 48 to 17" << endl;

								Sleep(5000);
								system("color 07");

								sum3 = 17;
							}
							if (sum3 == 61)
							{
								system("color 40");

								cout << "You got a snake from 61 to 41" << endl;

								Sleep(5000);
								system("color 07");

								sum3 = 41;
							}
							if (sum3 == 85)
							{
								system("color 40");

								cout << "You got a snake from 85 to 35" << endl;

								Sleep(5000);
								system("color 07");

								sum3 = 35;
							}
							if (sum3 == 98)
							{
								system("color 40");

								cout << "You got a snake from 98 to 3" << endl;

								Sleep(5000);
								system("color 07");

								sum3 = 3;
							}

							if (sum3 == 4)
							{
								system("color 20");

								cout << "You got a Ladder from 4 to 25" << endl;

								Sleep(5000);
								system("color 07");

								sum3 = 25;
							}
							if (sum3 == 19)
							{
								system("color 20");

								cout << "You got a Ladder from 19 to 50" << endl;

								Sleep(5000);
								system("color 07");

								sum3 = 50;
							}
							if (sum3 == 43)
							{
								system("color 20");

								cout << "You got a Ladder from 43 to 62" << endl;

								Sleep(5000);
								system("color 07");

								sum3 = 62;
							}
							if (sum3 == 37)
							{
								system("color 20");

								cout << "You got a Ladder from 37 to 86" << endl;

								Sleep(5000);
								system("color 07");

								sum3 = 86;
							}
							if (sum3 == 8)
							{
								system("color 20");

								cout << "You got a Ladder from 8 to 78" << endl;

								Sleep(5000);
								system("color 07");

								sum3 = 78;
							}

							Board(symbol1, symbol2, symbol3, symbol4, sum1, sum2, sum3, sum4);   //function call
						}

					}
					break;
				}
				case 4:
				{
					if (sum4 == 100)
					{
						if (win1 == 0)
						{
							cout << "Which Player You want to gave your 6 moves ( 1 for player 1, 2 for player 2 and 3 for player 3 = ";
							cin >> move;
							if (move == 1)
							{
								sum1 = sum1 + 6;
							}
							if (move == 2)
							{
								sum2 = sum2 + 6;
							}
							if (move == 3)
							{
								sum3 = sum3 + 6;
							}
							win1 = sum4;
							cout << "Player 1 : " << fourth << " Won 1st " << endl;
						}
						else if (win2 == 0)
						{
							win2 = sum4;
							cout << "Player 1 : " << fourth << " Won 2nd " << endl;
						}
						else if (win3 == 0)
						{
							win3 = sum4;
							cout << "Player 1 : " << fourth << " Won 3rd " << endl;
						}
						else if (win4 == 0)
						{
							win4 = sum4;
							cout << "Player 1 : " << fourth << " Won last " << endl;
						}
						break;
					}
					cout << "This is Player " << a << " : " << fourth << " Turn " << endl << "Press p for play = ";
					cin >> choice;
					system("cls");
					if (choice == 'p')
					{
						random4 = rand() % 6 + 1;
						cout << "You got = " << random4 << endl;
						if (random4 == 6)
						{
							flag4 = true;
						}
						if (flag4 == true && flagtemp4 == false)
						{
							random4 = 1;
							flagtemp4 = true;
						}
						if (flag4 == false)
						{
							Board(symbol1, symbol2, symbol3, symbol4, sum1, sum2, sum3, sum4);
						}
						if (flag4 == true)
						{
							sum4 = sum4 + random4;

							if (sum4 == 23)
							{
								system("color 40");

								cout << "You got a snake from 23 to 3" << endl;

								Sleep(5000);
								system("color 07");

								sum4 = 3;
							}
							if (sum4 == 48)
							{
								system("color 40");

								cout << "You got a snake from 48 to 17" << endl;

								Sleep(5000);
								system("color 07");

								sum4 = 17;
							}
							if (sum4 == 61)
							{
								system("color 40");

								cout << "You got a snake from 61 to 41" << endl;

								Sleep(5000);
								system("color 07");

								sum4 = 41;
							}
							if (sum4 == 85)
							{
								system("color 40");

								cout << "You got a snake from 85 to 35" << endl;

								Sleep(5000);
								system("color 07");

								sum4 = 35;
							}
							if (sum4 == 98)
							{
								system("color 40");

								cout << "You got a snake from 98 to 3" << endl;

								Sleep(5000);
								system("color 07");

								sum4 = 3;
							}

							if (sum4 == 4)
							{
								system("color 20");

								cout << "You got a Ladder from 4 to 25" << endl;

								Sleep(5000);
								system("color 07");

								sum4 = 25;
							}
							if (sum4 == 19)
							{
								system("color 20");

								cout << "You got a Ladder from 19 to 50" << endl;

								Sleep(5000);
								system("color 07");

								sum4 = 50;
							}
							if (sum4 == 43)
							{
								system("color 20");

								cout << "You got a Ladder from 43 to 62" << endl;

								Sleep(5000);
								system("color 07");

								sum4 = 62;
							}
							if (sum4 == 37)
							{
								system("color 20");

								cout << "You got a Ladder from 37 to 86" << endl;

								Sleep(5000);
								system("color 07");

								sum4 = 86;
							}
							if (sum4 == 8)
							{
								system("color 20");

								cout << "You got a Ladder from 8 to 78" << endl;

								Sleep(5000);
								system("color 07");

								sum4 = 78;
							}

							Board(symbol1, symbol2, symbol3, symbol4, sum1, sum2, sum3, sum4);
						}
					}
					break;
				}
				}
				cout << endl;
			}
		}
		break;
	}
	case 2:
	{
		credits();  //function call
		break;
	}
	case 3:
	{
		instructions();   //function call
		break;
	}
	case 4:
	{
		cout << "1st  score is = " << win1 << endl << endl;
		cout << "2nd  score is = " << win2 << endl << endl;
		cout << "3rd  score is = " << win3 << endl << endl;
		cout << "4th  score is = " << win4 << endl << endl;
		break;
	}
	case 5:
	{

		break;
	}
	default:
	{
		cout << "Invalid Number" << endl;
	}
	}
	system("pause");
	return 0;
}

void Board(char ch1, char ch2, char ch3, char ch4, int integer1, int integer2, int integer3, int integer4)  //Making board to play in function
{
	int board[10][10], num1 = integer1, num2 = integer2, num3 = integer3, num4 = integer4;
	int counter = 100;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++, counter--)
		{
			board[i][j] = counter;
		}
	}

	cout << "\n" << setw(83) << setfill('*') << " \n";
	for (int i = 0; i < 10; i++)
	{
		if (i == 0 || i == 2 || i == 4 || i == 6 || i == 8)
		{
			for (int j = 0; j < 10; j++)
			{
				if (board[i][j] == num1)
				{
					cout << ch1;
				}
				if (board[i][j] == num2)
				{
					cout << ch2;
				}
				if (board[i][j] == num3)
				{
					cout << ch3;
				}
				if (board[i][j] == num4)
				{
					cout << ch4;
				}
				if (board[i][j] == 23 || board[i][j] == 48 || board[i][j] == 61 || board[i][j] == 85 || board[i][j] == 98)
				{
					cout << "S";

				}
				if (board[i][j] == 4 || board[i][j] == 19 || board[i][j] == 43 || board[i][j] == 86 || board[i][j] == 8)
				{
					cout << "L";

				}
				cout << "   " << board[i][j] << "\t|";
			}
		}
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 9)
		{
			for (int j = 9; j >= 0; j--)
			{
				if (board[i][j] == num1)
				{
					cout << ch1;
				}
				if (board[i][j] == num2)
				{
					cout << ch2;
				}
				if (board[i][j] == num3)
				{
					cout << ch3;
				}
				if (board[i][j] == num4)
				{
					cout << ch4;
				}
				if (board[i][j] == 23 || board[i][j] == 48 || board[i][j] == 61 || board[i][j] == 85 || board[i][j] == 98)
				{
					cout << "S";
				}
				if (board[i][j] == 4 || board[i][j] == 19 || board[i][j] == 43 || board[i][j] == 37 || board[i][j] == 8)
				{
					cout << "L";

				}

				cout << "   " << board[i][j] << "\t|";
			}
		}
		cout << endl;
		for (int j = 0; j < 10; j++)
		{
			cout << "\t|";
		}
		cout << "\n\n";
	}
	cout << setw(83) << setfill('*') << " \n";
}
void credits()   //function to show cradits
{
	cout << "<----------------------Credits------------------->" << endl << endl;
	cout << "-> Name" << setw(40) << "Roll number \n\n";
	cout << "Muhammad Hanzla Iqbal" << setw(20) << "20F-1106\n";
	cout << "<----------------------Course & Resource Person------------------->" << endl << endl;
	cout << "CS-1002 Programming Fundamentals             Dr Danish";
	
}
void instructions()   //function to show instructions
{
	cout << "<-------------Instructions/Rules----------------->\n\n";
	cout << "1. Firstly roll the dice.\n2. If you got 6 on the dice you will be allowed to play.\n";
	cout << "3. There are ups and downs i-e Ladder and snakes.\n";
	cout << "4. If you step on L your position will be advanced.\n5. The computer will tell you your next position\n";
	cout << "6. If you step on a S you will be moved in lower points.\n7. Tje computer will tell you your next position.\n";
	cout << "8. The first one to reach 100 position will win the game.\n";

}
//int rolledSix(int& rollSix)
//{
//	int next_turn;
//	next_turn = rand() % 6 + 1;
//	cout << "\nYou got a six : \nYou have an extra turn : " << next_turn;
//	rollSix = rollSix + next_turn;
//	return rollSix;
//}