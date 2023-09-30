//Taylor Shook
//Dr. Steinberg
//COP3223
//Large Program 1


// function prototypes
#define ROUNDS 5
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void greeting(); //display welcome message to user
void playRound(int round); //play one round
int pickOne(); //retrieve the user's guess
int computerPick(); //computer makes its pick
int battle(int player1, int player2); //battle rock...paper...scissor
void result(int player1, int player2); //overall winner of round

int main()
{
	greeting(); //display greeting message
	
	//setup random generator
	int seed;
	printf("Before we start, pick a number to determine how random I will be.\n");
	scanf("%d", &seed);
    srand(seed);
	printf("All set now!\n");
	
	// for loop that repeats until the user has played for 5 rounds
	for(int x = 0; x < ROUNDS; ++x)
	{
		playRound(x + 1);
	}
	
	printf("********************************************************\n");
	printf("Thank you for playing!\n");
	return 0;
}

//greeting function
void greeting()
{
	printf("********************************************************\n");
	printf("Welcome to rock paper scissors game!\n");
	printf("Here are the rules.\n");
	printf("You and I will get to choose rock, paper, or scissors.\n");
	printf("After we made a decision we will reveal it and determine the winner based on these rules\n");
	printf("Rock beats Scissors!\n");
	printf("Paper beats Rock!\n");
	printf("Scissor beats Paper!\n");
	printf("If we both pick the same option, then it is a tie\n");
	printf("Ready to play?...Here we go!\n");
	printf("********************************************************\n");
}

// play round function
void playRound(int round)
{
	printf("Welcome to a new round %d!\n", round);
	printf("Best out of three...Let's go!\n");
	
	//declares and assigns variables
	int p1wins = 0;
	int p2wins = 0;
	
	//loop that keeps track of wins until respective player reaches 3. we will learn about conditional loops soon :)
	while(p1wins != 3 && p2wins != 3)
	{
		printf("Player 1 has won %d time(s).\n", p1wins);
		printf("Player 2 has won %d time(s).\n", p2wins);
		int play1, play2;
		//calls function to prompt user's choice
		play1 = pickOne();
		//calls function to generate a random choice from the computer
		play2 = computerPick();
		
		// if invalid, declares it invalid and starts over
		if(play1 < 1 || play1 > 3 || play2 < 1 || play2 > 3)
		{
			printf("Someone made an invalid choice.\n");
		}
		else
		{
			//battle function is called, compares choices
			int match = battle(play1, play2);
			
			// adds 1 to the variable of whoever wins
			if(match == 1)
			{
				p1wins += 1;
			}			
			else if(match == 2)
			{
				p2wins += 1;
			}
		}
		printf("********************************************************\n");
		printf("********************************************************\n");
	}
	// passes the number of wins to result function
	result(p1wins, p2wins);
}

// function takes users input for their choice
int pickOne()
{
	int pick;
	printf("1---Rock\n");
	printf("2---Paper\n");
	printf("3---Scissors\n");
	printf("Make your selection: ");
	scanf("%d", &pick);
	
	return pick;
}

// function uses a random number generator to select a choice for the computer
int computerPick()
{
	int compPick;
	printf("I'm making my decision now.\n");
	compPick = (rand()% 3) + 1;
	
	return compPick;
}

// battle function decides what each player picked and who wins this match
int battle(int player1, int player2)
{
	// all cases that player 1 wins
	if(player1 == 1 && player2 == 3 || player1 == 2 && player2 == 1 || player1 == 3 && player2 == 2)
	{
		// nested if statement determines what each player used
		if(player1 == 1 && player2 == 3)
		{
			printf("Player 1 used Rock and Player 2 used Scissors!\n");
			printf("Rock beats Scissors!\n");
		}			
		else if(player1 == 2 && player2 == 1 )
		{
			printf("Player 1 used Paper and Player 2 used Rock!\n");
			printf("Paper beats Rock!\n");
		}		
		else
		{
			printf("Player 1 used Scissors and Player 2 used Paper!\n");
			printf("Scissors beats Paper!\n");
		}		
		return 1;
	}
	// all cases that player 2 wins
	else if (player2 == 1 && player1 == 3 || player2 == 2 && player1 == 1 || player2 == 3 && player1 == 2)
	{
		// nested if statement determines what each player used
		if(player2 == 1 && player1 == 3)
		{
			printf("Player 1 used Scissors and Player 2 used Rock!\n");
			printf("Rock beats Scissors!\n");
		}			
		else if(player2 == 2 && player1 == 1 )
		{
			printf("Player 1 used Rock and Player 2 used Paper!\n");
			printf("Paper beats Rock!\n");
		}		
		else
		{
			printf("Player 1 used Paper and Player 2 used Scissors!\n");
			printf("Scissors beats Paper!\n");
		}	
		return 2;
	}
	// all cases that the players tied
	else if (player1 == player2)
	{
		// nested if statement determines what each player used
		if(player1 == 1)
		{
			printf("Player 1 and Player 2 both used Rock!\n");
		}
		else if(player1 == 2)
		{
			printf("Player 1 and Player 2 both used Paper!\n");
		}
		else if (player1 == 3)
		{
			printf("Player 1 and Player 2 both used Scissors!\n");
		}
		printf("Draw!\n");
		return 0;
	}
}

// result function decides who won the round (3 matches won total in a round)
void result(int player1, int player2)
{
	if(player1 > player2)
	{
		printf("I'll let you have this one. You WIN!\n");
	}
	else
	{
		printf("I WON! Haha better luck next time... NOT!\n");
	}
	
	printf("********************************************************\n");
	printf("********************************************************\n");
}