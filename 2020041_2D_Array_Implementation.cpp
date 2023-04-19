#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void display ();
void display_array ( char[][3] );
void replace_array ( char[][3] );
void player_turnX ( char[][3] );
void computer_turnO ( char[][3] );
void player_turnO ( char[][3] );
void computer_turnX ( char[][3] );
void delay ( int );

int main ()
{
	int play_again;
	char choice;
	char ticcy[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	
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
				char ticcy[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
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

void display_array ( char disp[][3] )
{
	cout << endl << endl;
	cout << "\t\t\t\t\t\t" << "     | " << "   " << "   |   " << endl;
	cout << "\t\t\t\t\t\t" << "  " << disp[0][0] << "  | " << "  " << disp[0][1] << " " << "  |  " << disp[0][2] << "   " << endl;
	cout << "\t\t\t\t\t\t" << "     | " << "   " << "   |   " << endl;
	cout << "\t\t\t\t\t\t" << "----------" << "---" << "------" << endl;
	cout << "\t\t\t\t\t\t" << "     | " << "   " << "   |   " << endl;
	cout << "\t\t\t\t\t\t" << "  " << disp[1][0] << "  | " << "  " << disp[1][1] << " " << "  |  " << disp[1][2] << "   " << endl;
	cout << "\t\t\t\t\t\t" << "     | " << "   " << "   |   " << endl;
	cout << "\t\t\t\t\t\t" << "----------" << "---" << "------" << endl;
	cout << "\t\t\t\t\t\t" << "     | " << "   " << "   |   " << endl;
	cout << "\t\t\t\t\t\t" << "  " << disp[2][0] << "  | " << "  " << disp[2][1] << " " << "  |  " << disp[2][2] << "   " << endl;
	cout << "\t\t\t\t\t\t" << "     | " << "   " << "   |   " << endl;
	
}

void replace_array ( char disp1[][3] )
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
							computer_turnO(disp1);
							increment++;
							
							if ((disp1[0][0] == disp1[0][1] && disp1[0][1] == disp1[0][2] && disp1[0][1] == 'X') || (disp1[0][3] == disp1[1][1] && disp1[1][1] == disp1[1][2] && disp1[1][1] == 'X') || (disp1[2][0] == disp1[2][1] && disp1[2][1] == disp1[2][2] && disp1[2][1] == 'X') || (disp1[0][0] == disp1[1][0] && disp1[1][0] == disp1[2][0] && disp1[1][0] == 'X') || (disp1[0][1] == disp1[1][1] && disp1[1][1] == disp1[2][1] && disp1[1][1] == 'X') || (disp1[0][1] == disp1[1][2] && disp1[1][2] == disp1[2][2] && disp1[1][2] == 'X') || (disp1[0][0] == disp1[1][1] && disp1[1][1] == disp1[2][2] && disp1[1][1] == 'X') || (disp1[0][2] == disp1[1][1] && disp1[1][1] == disp1[2][0] && disp1[1][1] == 'X') )
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
								else if((disp1[0][0] == disp1[0][1] && disp1[0][1] == disp1[0][2] && disp1[0][1] == 'O') || (disp1[0][3] == disp1[1][1] && disp1[1][1] == disp1[1][2] && disp1[1][1] == 'O') || (disp1[2][0] == disp1[2][1] && disp1[2][1] == disp1[2][2] && disp1[2][1] == 'O') || (disp1[0][0] == disp1[1][0] && disp1[1][0] == disp1[2][0] && disp1[1][0] == 'O') || (disp1[0][1] == disp1[1][1] && disp1[1][1] == disp1[2][1] && disp1[1][1] == 'O') || (disp1[0][1] == disp1[1][2] && disp1[1][2] == disp1[2][2] && disp1[1][2] == 'O') || (disp1[0][0] == disp1[1][1] && disp1[1][1] == disp1[2][2] && disp1[1][1] == 'O') || (disp1[0][2] == disp1[1][1] && disp1[1][1] == disp1[2][0] && disp1[1][1] == 'O') )
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
								computer_turnX(disp1);
								increment++;
			
								if ((disp1[0][0] == disp1[0][1] && disp1[0][1] == disp1[0][2] && disp1[0][1] == 'O') || (disp1[0][3] == disp1[1][1] && disp1[1][1] == disp1[1][2] && disp1[1][1] == 'O') || (disp1[2][0] == disp1[2][1] && disp1[2][1] == disp1[2][2] && disp1[2][1] == 'O') || (disp1[0][0] == disp1[1][0] && disp1[1][0] == disp1[2][0] && disp1[1][0] == 'O') || (disp1[0][1] == disp1[1][1] && disp1[1][1] == disp1[2][1] && disp1[1][1] == 'O') || (disp1[0][1] == disp1[1][2] && disp1[1][2] == disp1[2][2] && disp1[1][2] == 'O') || (disp1[0][0] == disp1[1][1] && disp1[1][1] == disp1[2][2] && disp1[1][1] == 'O') || (disp1[0][2] == disp1[1][1] && disp1[1][1] == disp1[2][0] && disp1[1][1] == 'O') )
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
								if ((disp1[0][0] == disp1[0][1] && disp1[0][1] == disp1[0][2] && disp1[0][1] == 'X') || (disp1[0][3] == disp1[1][1] && disp1[1][1] == disp1[1][2] && disp1[1][1] == 'X') || (disp1[2][0] == disp1[2][1] && disp1[2][1] == disp1[2][2] && disp1[2][1] == 'X') || (disp1[0][0] == disp1[1][0] && disp1[1][0] == disp1[2][0] && disp1[1][0] == 'X') || (disp1[0][1] == disp1[1][1] && disp1[1][1] == disp1[2][1] && disp1[1][1] == 'X') || (disp1[0][1] == disp1[1][2] && disp1[1][2] == disp1[2][2] && disp1[1][2] == 'X') || (disp1[0][0] == disp1[1][1] && disp1[1][1] == disp1[2][2] && disp1[1][1] == 'X') || (disp1[0][2] == disp1[1][1] && disp1[1][1] == disp1[2][0] && disp1[1][1] == 'X') )
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


void player_turnX ( char player[][3] )
{
	int player_number;
	int row;
	int column;
	
		cout << endl;
		cout << "Enter the number you want your symbol to replace." << endl;
		cin >> player_number;
			
			while (player_number < 1 || player_number > 9)
			{
				cout << "Enter A Valid Number." << endl;
				cin >> player_number;
			}
				switch(player_number)
				{
					case 1: {
						row = 0; column = 0;
						break;
					}
					case 2: {
						row = 0; column = 1;
						break;
					}
					case 3: {
						row = 0; column = 2;
						break;
					}
					case 4: {
						row = 1; column = 0;
						break;
					}
					case 5: {
						row = 1; column = 1;
						break;
					}
					case 6: {
						row = 1; column = 2;
						break;
					}
					case 7: {
						row = 2; column = 0;
						break;
					}
					case 8: {
						row = 2; column = 1;
						break;
					}
					case 9: {
						row = 2; column = 2;
						break;
					}
					default:{
						cout << "Wrong Input Entered." << endl;
						break;
					}
				}
			
				while (player[row][column] == 'X' || player[row][column] == 'O')
				{
					cout << "Enter an unmarked number." << endl;
					cin >> player_number;
					while (player_number < 1 || player_number > 9)
					{
						cout << "Enter Valid Number." << endl;
						cin >> player_number;
					}
						switch(player_number)
						{
								case 1: {
								row = 0; column = 0;
								break;
							}
							case 2: {
								row = 0; column = 1;
								break;
							}
							case 3: {
								row = 0; column = 2;
								break;
							}
							case 4: {
								row = 1; column = 0;
								break;
							}
							case 5: {
								row = 1; column = 1;
								break;
							}
							case 6: {
								row = 1; column = 2;
								break;
							}
							case 7: {
								row = 2; column = 0;
								break;
							}
							case 8: {
								row = 2; column = 1;
								break;
							}
							case 9: {
								row = 2; column = 2;
								break;
							}
							default:{
								cout << "Entered Wrong Input." << endl;
								break;
							}
						}
				}
			
		player[row][column] = 'X';
	
		system ("CLS");
		display();
		display_array(player);
}

void computer_turnO ( char comp[][3] )
{
	srand(time(0));
	int computer_number;
	int timer;
	int row;
	int column;
	
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
		switch(computer_number)
		{
			case 1: {
				row = 0; column = 0;
				break;
			}
			case 2: {
				row = 0; column = 1;
				break;
			}
			case 3: {
				row = 0; column = 2;
				break;
			}
			case 4: {
				row = 1; column = 0;
				break;
			}
			case 5: {
				row = 1; column = 1;
				break;
			}
			case 6: {
				row = 1; column = 2;
				break;
			}
			case 7: {
				row = 2; column = 0;
				break;
			}
			case 8: {
				row = 2; column = 1;
				break;
			}
			case 9: {
				row = 2; column = 2;
				break;
			}
		}
		
	}while (comp[row][column] == 'X' || comp[row][column] == 'O');
	
	switch(computer_number)
		{
			case 1: {
				row = 0; column = 0;
				break;
			}
			case 2: {
				row = 0; column = 1;
				break;
			}
			case 3: {
				row = 0; column = 2;
				break;
			}
			case 4: {
				row = 1; column = 0;
				break;
			}
			case 5: {
				row = 1; column = 1;
				break;
			}
			case 6: {
				row = 1; column = 2;
				break;
			}
			case 7: {
				row = 2; column = 0;
				break;
			}
			case 8: {
				row = 2; column = 1;
				break;
			}
			case 9: {
				row = 2; column = 2;
				break;
			}
		}
	comp[row][column] = 'O';
	
	system ("CLS");
	display();
	display_array(comp);
}

void player_turnO ( char valueO[][3] )
{
	int player_number;
	int row;
	int column;
	
		cout << endl;
		cout << "Enter the number you want your symbol to replace." << endl;
		cin >> player_number;
		
		while (player_number < 1 || player_number > 9)
		{
			cout << "Enter A Valid Number." << endl;
			cin >> player_number;
		}	
				switch(player_number)
				{
					case 1: {
						row = 0; column = 0;
						break;
					}
					case 2: {
						row = 0; column = 1;
						break;
					}
					case 3: {
						row = 0; column = 2;
						break;
					}
					case 4: {
						row = 1; column = 0;
						break;
					}
					case 5: {
						row = 1; column = 1;
						break;
					}
					case 6: {
						row = 1; column = 2;
						break;
					}
					case 7: {
						row = 2; column = 0;
						break;
					}
					case 8: {
						row = 2; column = 1;
						break;
					}
					case 9: {
						row = 2; column = 2;
						break;
					}
					default:{
						cout << "Wrong Input Entered." << endl;
						break;
					}
				}
				
				while (valueO[row][column] == 'X' || valueO[row][column] == 'O')
				{
					cout << "Enter an unmarked number." << endl;
					cin >> player_number;
					
					switch(player_number)
					{
							case 1: {
							row = 0; column = 0;
							break;
						}
						case 2: {
							row = 0; column = 1;
							break;
						}
						case 3: {
							row = 0; column = 2;
							break;
						}
						case 4: {
							row = 1; column = 0;
							break;
						}
						case 5: {
							row = 1; column = 1;
							break;
						}
						case 6: {
							row = 1; column = 2;
							break;
						}
						case 7: {
							row = 2; column = 0;
							break;
						}
						case 8: {
							row = 2; column = 1;
							break;
						}
						case 9: {
							row = 2; column = 2;
							break;
						}
						default:{
							cout << "Entered wrong input." << endl;
							break;
						}
					}
				}
			
		valueO[row][column] = 'O';
	
		system ("CLS");
		display();
		display_array(valueO);
}

void computer_turnX ( char valueX[][3] )
{
	srand(time(0));
	int computer_number;
	int timer;
	int row;
	int column;
	
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
		switch(computer_number)
		{
			case 1: {
				row = 0; column = 0;
				break;
			}
			case 2: {
				row = 0; column = 1;
				break;
			}
			case 3: {
				row = 0; column = 2;
				break;
			}
			case 4: {
				row = 1; column = 0;
				break;
			}
			case 5: {
				row = 1; column = 1;
				break;
			}
			case 6: {
				row = 1; column = 2;
				break;
			}
			case 7: {
				row = 2; column = 0;
				break;
			}
			case 8: {
				row = 2; column = 1;
				break;
			}
			case 9: {
				row = 2; column = 2;
				break;
			}
		}
		
	}while (valueX[row][column] == 'X' || valueX[row][column] == 'O');
	
	switch(computer_number)
		{
			case 1: {
				row = 0; column = 0;
				break;
			}
			case 2: {
				row = 0; column = 1;
				break;
			}
			case 3: {
				row = 0; column = 2;
				break;
			}
			case 4: {
				row = 1; column = 0;
				break;
			}
			case 5: {
				row = 1; column = 1;
				break;
			}
			case 6: {
				row = 1; column = 2;
				break;
			}
			case 7: {
				row = 2; column = 0;
				break;
			}
			case 8: {
				row = 2; column = 1;
				break;
			}
			case 9: {
				row = 2; column = 2;
				break;
			}
		}
	valueX[row][column] = 'X';
	
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
