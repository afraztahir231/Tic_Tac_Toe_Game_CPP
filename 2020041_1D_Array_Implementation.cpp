#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void display ();
void display_array ( char* );
void replace_array ( char* );
void player_turnX ( char* );
void computer_turnO ( char* );
void player_turnO ( char* );
void computer_turnX ( char* );
void delay ( int );

int main ()
{
	int play_again;
	char choice;
	char ticcy[9]= {'1','2','3','4','5','6','7','8','9'};
	
		display ();
		replace_array(ticcy);
		
		
		while(true)
		{
			system ("CLS");
			display ();
			cout << endl << endl << "\t\t\t\t\t\tDo You Want To Play Again? (y/n): ";
			cin >> choice;
		
			if (choice=='y' || choice=='Y')
			{
				char ticcy[9]= {'1','2','3','4','5','6','7','8','9'};
				system ("CLS");
				display ();
				display_array(ticcy);
				replace_array(ticcy);
			}
			else if (choice == 'n' || choice == 'N')
			{
				system ("CLS");
				display();
				cout << endl << endl << "\t\t\t\t\t\t Thank You For Playing." << endl;
				break;
			}
		}
	return 0;
}

void display_array ( char*disp )
{
	cout << endl << endl;
	cout << "\t\t\t\t\t\t" << "     | " << "   " << "   |   " << endl;
	cout << "\t\t\t\t\t\t" << "  " << disp[0] << "  | " << "  " << disp[1] << " " << "  |  " << disp[2] << "   " << endl;
	cout << "\t\t\t\t\t\t" << "     | " << "   " << "   |   " << endl;
	cout << "\t\t\t\t\t\t" << "----------" << "---" << "------" << endl;
	cout << "\t\t\t\t\t\t" << "     | " << "   " << "   |   " << endl;
	cout << "\t\t\t\t\t\t" << "  " << disp[3] << "  | " << "  " << disp[4] << " " << "  |  " << disp[5] << "   " << endl;
	cout << "\t\t\t\t\t\t" << "     | " << "   " << "   |   " << endl;
	cout << "\t\t\t\t\t\t" << "----------" << "---" << "------" << endl;
	cout << "\t\t\t\t\t\t" << "     | " << "   " << "   |   " << endl;
	cout << "\t\t\t\t\t\t" << "  " << disp[6] << "  | " << "  " << disp[7] << " " << "  |  " << disp[8] << "   " << endl;
	cout << "\t\t\t\t\t\t" << "     | " << "   " << "   |   " << endl;
	
}

void replace_array ( char*disp1 )
{	
	int increment;
	char symbol;
	
	cout << "Enter Your Symbol." << endl;
	cin >> symbol;
	
	switch (symbol)
		{
			case 'X':
				case 'x':
					{
						while (increment<5)
						{
							system ("CLS");
							display ();
							display_array(disp1);
							
							player_turnX(disp1);
							increment++;
							
							if ((disp1[0] == disp1[1] && disp1[1] == disp1[2] && disp1[1] == 'X') || (disp1[3] == disp1[4] && disp1[4] == disp1[5] && disp1[4] == 'X') || (disp1[6] == disp1[7] && disp1[7] == disp1[8] && disp1[7] == 'X') || (disp1[0] == disp1[3] && disp1[3] == disp1[6] && disp1[3] == 'X') || (disp1[1] == disp1[4] && disp1[4] == disp1[7] && disp1[4] == 'X') || (disp1[2] == disp1[5] && disp1[5] == disp1[8] && disp1[5] == 'X') || (disp1[0] == disp1[4] && disp1[4] == disp1[8] && disp1[4] == 'X') || (disp1[2] == disp1[4] && disp1[4] == disp1[6] && disp1[4] == 'X') )
								{
									system ("CLS");
									display();
									cout << endl << endl << "\t\t\t\t\t\tYou Have Won.";
										for (int i=0; i<5; i++)
									{
										cout << i+1 << " ";
										delay(14);
									}
									break;
								}
								else if ((disp1[0] == disp1[1] && disp1[1] == disp1[2] && disp1[1] == 'O') || (disp1[3] == disp1[4] && disp1[4] == disp1[5] && disp1[4] == 'O') || (disp1[6] == disp1[7] && disp1[7] == disp1[8] && disp1[7] == 'O') || (disp1[0] == disp1[3] && disp1[3] == disp1[6] && disp1[3] == 'O') || (disp1[1] == disp1[4] && disp1[4] == disp1[7] && disp1[4] == 'O') || (disp1[2] == disp1[5] && disp1[5] == disp1[8] && disp1[5] == 'O') || (disp1[0] == disp1[4] && disp1[4] == disp1[8] && disp1[4] == 'O') || (disp1[2] == disp1[4] && disp1[4] == disp1[6] && disp1[4] == 'O'))
								{
									system ("CLS");
									display();
									cout << endl << endl << "\t\t\t\t\t\tThe Computer Has Won." ;
									for (int i=0; i<5; i++)
										{
											cout << i+1 << " ";
											delay(14);
										}
									break;
								}
								else if (increment == 4)
								{
									system ("CLS");
									display();
									cout << endl << endl << "\t\t\t\t\t\tIt is a draw." ;
									for (int i=0; i<5; i++)
										{
											cout << i+1 << " ";
											delay(14);
										}
									break;
								}
						}
						
						break;
					}
					
			case 'O':
				case 'o':
					{
						while (increment<5)
							{
								system ("CLS");
								display ();
								display_array(disp1);
								
								player_turnO(disp1);
								increment++;
			
								if ((disp1[0] == disp1[1] && disp1[1] == disp1[2] && disp1[1] == 'O') || (disp1[3] == disp1[4] && disp1[4] == disp1[5] && disp1[4] == 'O') || (disp1[6] == disp1[7] && disp1[7] == disp1[8] && disp1[7] == 'O') || (disp1[0] == disp1[3] && disp1[3] == disp1[6] && disp1[3] == 'O') || (disp1[1] == disp1[4] && disp1[4] == disp1[7] && disp1[4] == 'O') || (disp1[2] == disp1[5] && disp1[5] == disp1[8] && disp1[5] == 'O') || (disp1[0] == disp1[4] && disp1[4] == disp1[8] && disp1[4] == 'O') || (disp1[2] == disp1[4] && disp1[4] == disp1[6] && disp1[4] == 'O'))
									{
										system ("CLS");
										display();
										cout << endl << endl << "\t\t\t\t\t\tYou Have Won." ;
										for (int i=0; i<5; i++)
											{
												cout << i+1 << " ";
												delay(14);
											}
										break;
									}
								if ((disp1[0] == disp1[1] && disp1[1] == disp1[2]) || (disp1[3] == disp1[4] && disp1[4] == disp1[5]) || (disp1[6] == disp1[7] && disp1[7] == disp1[8]) || (disp1[0] == disp1[3] && disp1[3] == disp1[6]) || (disp1[1] == disp1[4] && disp1[4] == disp1[7] ) || (disp1[2] == disp1[5] && disp1[5] == disp1[8]) || (disp1[0] == disp1[4] && disp1[4] == disp1[8]) || (disp1[2] == disp1[4] && disp1[4] == disp1[6]) )
									{
										system ("CLS");
										display();
										cout << endl << endl << "\t\t\t\t\t\tThe Computer Has Won." ;
										for (int i=0; i<5; i++)
											{
												cout << i+1 << " ";
												delay(14);
											}
										break;
									}
									else if (increment == 4)
									{
										system ("CLS");
										display();
										cout << endl << endl << "\t\t\t\t\t\tIt is a draw." ;
											for (int i=0; i<5; i++)
												{
													cout << i+1 << " ";
													delay(14);
												}
										break;
									}
							}
							
						break;
					}
			
			default:
			{
				cout << "Invalid input entered." << endl;
				break;
			}		
		}
}


void player_turnX ( char*player )
{
	int player_number, i;
	
		cout << endl;
		cout << "Enter the number you want your symbol to replace." << endl;
		cin >> player_number;
	while (i==0)
	{
		if (player_number >= 1 && player_number <= 9)
		{
				while (player[player_number-1] == 'X' || player[player_number-1] == 'O')
				{
					cout << "Enter an unmarked number." << endl;
					cin >> player_number;
				}
				
				player[player_number-1] = 'X';
				system ("CLS");
				display();
				display_array(player);
				computer_turnO(player);
		}
		else
		{
			cout << "Enter Valid Number." << endl;
			cin >> player_number;
		}	
	}
}

void computer_turnO ( char*comp )
{
	srand(time(0));
	int computer_number;
	int timer;
	
	cout << "The computer is making its choice." ;
	
	for (int i=0; i<5; i++)
	{
		timer = i + 1;
		cout << timer << " " ;
		delay(14);
	}
	
	
	do
	{
		computer_number =  rand()%9;
	}while (comp[computer_number] == 'X' || comp[computer_number] == 'O');
	
	comp[computer_number] = 'O';
	
	system ("CLS");
	display();
	display_array(comp);
}

void player_turnO ( char*valueO )
{
	int player_number;
	
	cout << endl;
	cout << "Enter the number you want your symbol to replace." << endl;
	cin >> player_number;
	
	while (player_number<1 || player_number>9)
	{
		cout << "Enter a number between 1 to 9." << endl;
		cin >> player_number;
	}
	
	while(valueO[player_number - 1] == 'X' || valueO[player_number - 1] == 'O')
		{
			cout << "Enter an unmarked number." << endl;
			cin >> player_number;
		}
		
		valueO[player_number - 1] = 'O';
	
		system ("CLS");
		display();
		display_array(valueO);
}

void computer_turnX ( char*valueX )
{
	srand(time(0));
	int computer_number;
	int timer;
	
	cout << "The computer is making its choice." ;
	
	for (int i=0; i<5; i++)
	{
		timer = i + 1;
		cout << timer << " " ;
		delay (14);
	}
	do
	{
		computer_number =  rand()%9;
	}while (valueX[computer_number] == 'X' || valueX[computer_number] == 'O');
	
	valueX[computer_number] = 'X';
	
	system ("CLS");
	display();
	display_array(valueX);
}

void display ()
{
	cout <<"       "<< "**********" << "  **********" << "  **********" << "  **********" << "  **********" << "  **********" << "  **********" << "  **********" << "  **********" << endl; 
	cout <<"       "<< "**********" << "  **********" << "  **********" << "  **********" << "  **********" << "  **********" << "  **********" << "  **********" << "  **********" << endl;
    cout <<"       "<< "   ***    " << "      ***   " << "  ***       " << "      ***   " << "  ***    ***" << "  ***       " << "      ***   " << "  ***    ***" << "  ***       " << endl;
	cout <<"       "<< "   ***    " << "      ***   " << "  ***       " << "      ***   " << "  ***    ***" << "  ***       " << "      ***   " << "  ***    ***" << "  ***       " << endl;
	cout <<"       "<< "   ***    " << "      ***   " << "  ***       " << "      ***   " << "  ***    ***" << "  ***       " << "      ***   " << "  ***    ***" << "  ******    " << endl;
	cout <<"       "<< "   ***    " << "      ***   " << "  ***       " << "      ***   " << "  **********" << "  ***       " << "      ***   " << "  ***    ***" << "  ******    " << endl;
	cout <<"       "<< "   ***    " << "      ***   " << "  ***       " << "      ***   " << "  **********" << "  ***       " << "      ***   " << "  ***    ***" << "  ***       " << endl;
	cout <<"       "<< "   ***    " << "      ***   " << "  ***       " << "      ***   " << "  ***    ***" << "  ***       " << "      ***   " << "  ***    ***" << "  ***       " << endl;
	cout <<"       "<< "   ***    " << "  **********" << "  **********" << "      ***   " << "  ***    ***" << "  **********" << "      ***   " << "  **********" << "  **********" << endl;
	cout <<"       "<< "   ***    " << "  **********" << "  **********" << "      ***   " << "  ***    ***" << "  **********" << "      ***   " << "  **********" << "  **********" << endl;
	cout <<"       "<< "**********************************************************************************************************" << endl;
}

void delay (int a)
{
	int add;
	int time;
	int i;
	
	time = a * 10000000;
	
	for (i=0; i<time; i++)
	{
		add*=i;
		add++;
		add++;
	}
}
