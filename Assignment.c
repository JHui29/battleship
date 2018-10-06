/*
 ============================================================================
 Name        : Assignment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char name1, name2;
int carrierLength=5;
int battleshipLength=4;
int cruiserLength=3;
int submarineLength=3;
int destroyerLength=2;
int player=0;


char array1[11][11]={
						{'*', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'},
						{'1', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'2', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'3', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'4', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'5', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'6', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'7', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'8', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'9', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'0', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'}
					};

char array2[11][11]={
						{'*', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'},
						{'1', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'2', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'3', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'4', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'5', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'6', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'7', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'8', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'9', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'0', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'}
					};

char array3[11][11]={
						{'*', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'},
						{'1', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'2', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'3', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'4', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'5', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'6', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'7', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'8', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'9', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'0', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'}
					};

char array4[11][11]={
						{'*', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'},
						{'1', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'2', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'3', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'4', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'5', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'6', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'7', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'8', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'9', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
						{'0', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'}
					};

void name(int player);
void welcome();
void mainboard(int player);
void carrier(int player);
void battleship(int player);
void cruiser(int player);
void submarine(int player);
void destroyer(int player);
void showStore(int player);
void game();
void showResult(int player);

void showStore(int player)
{
	char *array;
	switch (player)
	{
		case 1:
			array = &array1[0][0];
			break;
		case 2:
			array = &array2[0][0];
			break;
	}
	for(int i = 0; i < 11; i++)
	{
		for(int j = 0; j < 11; j++)
		{
			printf("%c ",array[i * 11 + j]);
		}
		printf("\n");
	}
}

void showResult(int player)
{
	char *array;
	switch (player)
	{
		case 1:
			array = &array4[0][0];
			break;
		case 2:
			array = &array3[0][0];
			break;
	}
	for(int i = 0; i < 11; i++)
	{
		for(int j = 0; j < 11; j++)
		{
			printf("%c ",array[i * 11 + j]);
		}
		printf("\n");
	}
}

void welcome()
{
	int ans;

	printf("XXXXX   XXXX  XXXXXX XXXXXX XX     XXXXXX  XXXXX XX  XX XX XXXX\n");
	printf("XX  XX XX  XX   XX     XX   XX     XX     XX     XX  XX XX XX  XX\n");
	printf("XXXXX  XX  XX   XX     XX   XX     XXXX    XXXX  XXXXXX XX XXXX\n");
	printf("XX  XX XXXXXX   XX     XX   XX     XX         XX XX  XX XX XX\n");
	printf("XXXXX  XX  XX   XX     XX   XXXXXX XXXXXX XXXXX  XX  XX XX XX\n");
	printf("\n\n");
	printf("RULES OF THE GAME:\n");
	printf("-This is a two player game.\n");
	printf("-Before play begins, each player secretly arranges their ships on their primary grid.\n");
	printf("-Each ship occupies a number of consecutive squares on the grid, arranged either horizontally or vertically.\n");
	printf("-The number of squares for each ship is determined by the type of the ship.\n");
	printf("Class of ship\tSize\tNumber\tSymbol\n");
	printf("Carrier\t\t5\t1\tc\n");
	printf("Battleship\t4\t2\tb\n");
	printf("Cruiser\t\t3\t3\tr\n");
	printf("Submarine\t3\t4\ts\n");
	printf("Destroyer\t2\t5\td\n");
	printf("-The ships cannot overlap (i.e., only one ship can occupy any given square in the grid).\n");
	printf("-The types and numbers of ships allowed are the same for each player.\n");
	printf("-After the ships have been positioned, the game proceeds in a series of rounds.\n");
	printf("-In each round, each player takes a turn to announce a target square in the opponent's grid which is to be shot at.\n");
	printf("-The opponent announces whether or not the square is occupied by a ship.\n");
	printf("-If it is a miss, the player marks their primary grid with a white peg.\n");
	printf("-If a hit, they mark this on their own primary grid with a red peg.\n");
	printf("-The attacking player notes the hit or miss on their own tracking.\n");
	printf("-Grid with the appropriate color peg (red for hit, white for miss).\n");
	printf("-In order to build up a picture of the opponent's fleet.\n");
	printf("-After the player gets a hit the player continues shooting until the player gets a miss.\n");
	printf("-When all of the squares of a ship have been hit, the ship is sunk, and the ship's owner announces this (e.g., You sank my battleship!).\n");
	printf("-If all of a player's ships have been sunk, the game is over and their opponent wins.\n");

	printf("Are you ready ? (1)Yes (2)No");
	scanf("%d", &ans);
	fflush(stdin);

	if(ans == 1)
	{
		mainboard(player);
	}
	else if(ans == 2)
	{
		welcome();
	}
}

void name(int player)
{
	int ans;

	printf("Do you want to start the game, (1)Yes (2)No");
	scanf("%d", &ans);
	fflush(stdin);

	if(ans == 1)
	{
		welcome(player);
	}
	else if(ans == 2)
	{
		printf("Goodbye, have a nice day !!!\n");
	}
}

void mainboard(int player)
{
		printf("Player grid\n");
		char *array;
		switch (player){
		case 1:
			array = &array1[0][0];
			break;
		case 2:
			array = &array2[0][0];
			break;
		}
		for(int i = 0; i < 11; i++)
		{
			for(int j = 0; j < 11; j++)
			{
				printf("%c ",array[i * 11 + j]);
			}
			printf("\n");
		}
		carrier(player);
}

void carrier(int player)
{
	int b , x ,h;
	char y;
	int i=carrierLength-1;

	A:printf("You want to place your carrier in (1) horizontal or (2) vertical");
	scanf("%d", &b);
	fflush(stdin);

	if(b == 1)
	{
		a:printf("Please enter one coordinate (1A) for carrier:");
		scanf("%d%c", &x, &y);
		fflush(stdin);

		if(y>=65 && y<=74)
		{
			h = y - 64;
		}
		else
		{
			printf("Please enter an alphabet between A to J\n");
			goto a;
		}
		if(h>6)
		{
			printf("The ship is placing out of the grid, please enter again.\n");
			goto a;
		}
		for(i=0; i < carrierLength; i++)
		{
			if(player == 1)
			{
				if(array1[x][h+i] != '~')
				{
					printf("The ship is overlapping, please enter again.\n");
					goto a;
				}
				else
				{
					array1[x][h+i] = 'c';
				}
			}
			else if(player == 2)
			{
				if(array2[x][h+i] != '~')
				{
					printf("The ship is overlapping, please enter again.\n");
					goto a;
				}
				else
				{
					array2[x][h+i] = 'c';
				}
			}
		}
	}
	else if(b == 2)
	{
		b:printf("Please enter one coordinate (1A) for carrier:");
		scanf("%d%c", &x, &y);
		fflush(stdin);

		if(y>=65 && y<=74)
		{
			h = y - 64;
		}
		else
		{
			printf("Please enter an alphabet between A to J\n");
			goto b;
		}
		if(x>6)
		{
			printf("The ship is placing out of the grid, please enter again.\n");
			goto b;
		}
		for(i=0; i < carrierLength; i++)
		{
			if(player == 1)
			{
				if(array1[x+i][h] != '~')
				{
					printf("The ship is overlapping, please enter again.\n");
					goto b;
				}
				else
				{
					array1[x+i][h] = 'c';
				}
			}
			else if(player == 2)
			{
				if(array2[x+i][h] != '~')
				{
					printf("The ship is overlapping, please enter again.\n");
					goto b;
				}
				else
				{
					array2[x+i][h] = 'c';
				}
			}
		}
	}
	else
	{
		printf("Please enter 1 or 2.\n");
		goto A;
	}
	showStore(player);
	battleship(player);
}

void battleship(int player)
{
	int b , x ,h;
	char y;
	int i=battleshipLength-1;

	for(int j=0; j<2; j++)
	{
		A:printf("You want to place your battleship in (1) horizontal or (2) vertical");
		scanf("%d", &b);
		fflush(stdin);

		if(b == 1)
		{
			a:printf("Please enter one coordinate (1A) for battleship:");
			scanf("%d%c", &x, &y);
			fflush(stdin);

			if(y>=65 && y<=74)
			{
				h = y - 64;
			}
			else
			{
				printf("Please enter an alphabet between A to J\n");
				goto a;
			}
			if(h>7)
			{
				printf("The ship is placing out of the grid, please enter again.\n");
				goto a;
			}
			for(i=0; i < battleshipLength; i++)
			{
				if(player == 1)
				{
					if(array1[x][h+i] != '~')
					{
						printf("The ship is overlapping, please enter again.\n");
						goto a;
					}
					else
					{
						array1[x][h+i] = 'b';
					}
				}
				else if(player == 2)
				{
					if(array2[x][h+i] != '~')
					{
						printf("The ship is overlapping, please enter again.\n");
						goto a;
					}
					else
					{
						array2[x][h+i] = 'b';
					}
				}
			}
		}
		else if(b == 2)
		{
			b:printf("Please enter one coordinate (1A) for battleship:");
			scanf("%d%c", &x, &y);
			fflush(stdin);

			if(y>=65 && y<=74)
			{
				h = y - 64;
			}
			else
			{
				printf("Please enter an alphabet between A to J\n");
				goto b;
			}
			if(x>7)
			{
				printf("The ship is placing out of the grid, please enter again.\n");
				goto b;
			}
			for(i=0; i < battleshipLength; i++)
			{
				if(player == 1)
				{
					if(array1[x+i][h] != '~')
					{
						printf("The ship is overlapping, please enter again.\n");
						goto b;
					}
					else
					{
						array1[x+i][h] = 'b';
					}
				}
				else if(player == 2)
				{
					if(array2[x+i][h] != '~')
					{
						printf("The ship is overlapping, please enter again.\n");
						goto b;
					}
					else
					{
						array2[x+i][h] = 'b';
					}
				}
			}
		}
		else
		{
			printf("Please enter 1 or 2.\n");
			goto A;
		}
		showStore(player);
	}
	cruiser(player);
}

void cruiser(int player)
{
	int b , x ,h;
	char y;
	int i=cruiserLength-1;

	for(int j=0; j<3; j++)
	{
		A:printf("You want to place your cruiser in (1) horizontal or (2) vertical");
		scanf("%d", &b);
		fflush(stdin);

		if(b == 1)
		{
			a:printf("Please enter one coordinate (1A) for cruiser:");
			scanf("%d%c", &x, &y);
			fflush(stdin);

			if(y>=65 && y<=74)
			{
				h = y - 64;
			}
			else
			{
				printf("Please enter an alphabet between A to J\n");
				goto a;
			}
			if(h>8)
			{
				printf("The ship is placing out of the grid, please enter again.\n");
				goto a;
			}
			for(i=0; i < cruiserLength; i++)
			{
				if(player == 1)
				{
					if(array1[x][h+i] != '~')
					{
						printf("The ship is overlapping, please enter again.\n");
						goto a;
					}
					else
					{
						array1[x][h+i] = 'r';
					}
				}
				else if(player == 2)
				{
					if(array2[x][h+i] != '~')
					{
						printf("The ship is overlapping, please enter again.\n");
						goto a;
					}
					else
					{
						array2[x][h+i] = 'r';
					}
				}
			}
		}
		else if(b == 2)
		{
			b:printf("Please enter one coordinate (1A) for cruiser:");
			scanf("%d%c", &x, &y);
			fflush(stdin);

			if(y>=65 && y<=74)
			{
				h = y - 64;
			}
			else
			{
				printf("Please enter an alphabet between A to J\n");
				goto b;
			}
			if(x>8)
			{
				printf("The ship is placing out of the grid, please enter again.\n");
				goto b;
			}
			for(i=0; i < cruiserLength; i++)
			{
				if(player == 1)
				{
					if(array1[x+i][h] != '~')
					{
						printf("The ship is overlapping, please enter again.\n");
						goto b;
					}
					else
					{
						array1[x+i][h] = 'r';
					}
				}
				else if(player == 2)
				{
					if(array2[x+i][h] != '~')
					{
						printf("The ship is overlapping, please enter again.\n");
						goto b;
					}
					else
					{
						array2[x+i][h] = 'r';
					}
				}
			}
		}
		else
		{
			printf("Please enter 1 or 2.\n");
			goto A;
		}
		showStore(player);
	}
	submarine(player);
}

void submarine(int player)
{
	int b , x ,h;
	char y;
	int i=submarineLength-1;

	for(int j=0; j<4; j++)
	{
		A:printf("You want to place your submarine in (1) horizontal or (2) vertical");
		scanf("%d", &b);
		fflush(stdin);

		if(b == 1)
		{
			a:printf("Please enter one coordinate (1A) for submarine:");
			scanf("%d%c", &x, &y);

			if(y>=65 && y<=74)
			{
				h = y - 64;
			}
			else
			{
				printf("Please enter an alphabet between A to J\n");
				goto a;
			}
			if(h>8)
			{
				printf("The ship is placing out of the grid, please enter again.\n");
				goto a;
			}
			for(i=0; i < submarineLength; i++)
			{
				if(player == 1)
				{
					if(array1[x][h+i] != '~')
					{
						printf("The ship is overlapping, please enter again.\n");
						goto a;
					}
					else
					{
						array1[x][h+i] = 's';
					}
				}
				else if(player == 2)
				{
					if(array2[x][h+i] != '~')
					{
						printf("The ship is overlapping, please enter again.\n");
						goto a;
					}
					else
					{
						array2[x][h+i] = 's';
					}
				}
			}
		}
		else if(b == 2)
		{
			b:printf("Please enter one coordinate (1A) for submarine:");
			scanf("%d%c", &x, &y);
			fflush(stdin);

			if(y>=65 && y<=74)
			{
				h = y - 64;
			}
			else
			{
				printf("Please enter an alphabet between A to J\n");
				goto b;
			}
			if(x>8)
			{
				printf("The ship is placing out of the grid, please enter again.\n");
				goto b;
			}
			for(i=0; i < submarineLength; i++)
			{
				if(player == 1)
				{
					if(array1[x+i][h] != '~')
					{
						printf("The ship is overlapping, please enter again.\n");
						goto b;
					}
					else
					{
						array1[x+i][h] = 's';
					}
				}
				else if(player == 2)
				{
					if(array2[x+i][h] != '~')
					{
						printf("The ship is overlapping, please enter again.\n");
						goto b;
					}
					else
					{
						array2[x+i][h] = 's';
					}
				}
			}
		}
		else
		{
			printf("Please enter 1 or 2.\n");
			goto A;
		}
		showStore(player);
	}
	destroyer(player);
}

void destroyer(int player)
{
	int b , x ,h;
	char y;
	int i=destroyerLength-1;

	for(int j=0; j<5; j++)
	{
		A:printf("You want to place your destroyer in (1) horizontal or (2) vertical");
		scanf("%d", &b);
		fflush(stdin);

		if(b == 1)
		{
			a:printf("Please enter one coordinate (1A) for destroyer:");
			scanf("%d%c", &x, &y);
			fflush(stdin);

			if(y>=65 && y<=74)
			{
				h = y - 64;
			}
			else
			{
				printf("Please enter an alphabet between A to J\n");
				goto a;
			}
			if(h>9)
			{
				printf("The ship is placing out of the grid, please enter again.\n");
				goto a;
			}
			for(i=0; i < destroyerLength; i++)
			{
				if(player == 1)
				{
					if(array1[x][h+i] != '~')
					{
						printf("The ship is overlapping, please enter again.\n");
						goto a;
					}
					else
					{
						array1[x][h+i] = 'd';
					}
				}
				else if(player == 2)
				{
					if(array2[x][h+i] != '~')
					{
						printf("The ship is overlapping, please enter again.\n");
						goto a;
					}
					else
					{
						array2[x][h+i] = 'd';
					}
				}
			}
		}
		else if(b == 2)
		{
			b:printf("Please enter one coordinate (1A) for destroyer:");
			scanf("%d%c", &x, &y);
			fflush(stdin);

			if(y>=65 && y<=74)
			{
				h = y - 64;
			}
			else
			{
				printf("Please enter an alphabet between A to J\n");
				goto b;
			}
			if(x>9)
			{
				printf("The ship is placing out of the grid, please enter again.\n");
				goto b;
			}
			for(i=0; i < destroyerLength; i++)
			{
				if(player == 1)
				{
					if(array1[x+i][h] != '~')
					{
						printf("The ship is overlapping, please enter again.\n");
						goto b;
					}
					else
					{
						array1[x+i][h] = 'd';
					}
				}
				else if(player == 2)
				{
					if(array2[x+i][h] != '~')
					{
						printf("The ship is overlapping, please enter again.\n");
						goto b;
					}
					else
					{
						array2[x+i][h] = 'd';
					}
				}
			}
		}
		else
		{
			printf("Please enter 1 or 2.\n");
			goto A;
		}
		showStore(player);
	}
}

void game(void)
{
	int x, h, player1Hit=0, player2Hit=0;
	char y;

	for(int i=0; i<200; i++)
	{
		if(player == 1)
		{
			a:printf("Player 1, please enter a coordinate (1A) to attack:");
			scanf("%d%c", &x, &y);
			fflush(stdin);

			if(y>=65 && y<=74)
			{
				h = y - 64;
			}
			else
			{
				printf("Please enter an alphabet between A to J\n");
				goto a;
			}
			if(array2[x][h] != '~')
			{
				array3[x][h] = 'X';
				player1Hit++;
				showResult(1);
				if(player1Hit == 44)
				{
					printf("Player 1 win the game !!!");
				}
				else
				{
					goto a;
				}
			}
			else
			{
				array3[x][h] = '*';
				player = 2;
			}
		}
		if(player == 2)
		{
			b:printf("Player 2, please enter a coordinate (1A) to attack:");
			scanf("%d%c", &x, &y);
			fflush(stdin);

			if(y>=65 && y<=74)
			{
				h = y - 64;
			}
			else
			{
				printf("Please enter an alphabet between A to J\n");
				goto a;
			}
			if(array1[x][h] != '~')
			{
				array4[x][h] = 'X';
				player2Hit++;
				showResult(2);
				if(player2Hit == 44)
				{
					printf("Player 2 win the game !!!");
				}
				else
				{
					goto b;
				}

			}
			else
			{
				array4[x][h] = '*';
				player = 1;
			}
		}
	}
}

int main(void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	player = 1;
	printf("Player 1\n");
	name(1);

	player = 2;
	printf("Player 2\n");
	name(2);

	game();

	return EXIT_SUCCESS;
}
