/*
Write a program to demonstrate a Rock Paper Scissor Game.
• Display the Menu using appropriate codes.
• For Menu kinds of Programming , use the core logic of Loops/conditional statements.
• You need to strictly follow the syntaxes’s of that logic which you are using.
• Write the necessary comments for better understanding to you as well as to the
faculty.
Project Requirements :
• Invoke the particular Method/Function through object , in which you are writing your
logic.
• Use this function :
• srand(time(0));
• (rand()%3)+1; -> Generating for random no.s from computer’s end.
• Use library header files i.e #include<stdlib.h> and #include<ctime> for above logic if
necessary.
• Add the necessary comments for better understanding of code.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

	int getRandomChoice() 
	{
	    srand(time(0));
	    return (rand() % 3) + 1;
	}
	int getChoice() 
	{
	    int choice;
	    cout<<"\n\n\t ...... Rock Paper Scissors Game .....";
    	cout<<"\n\n\t 1. Rock ";
    	cout<<"\n\n\t 2. Paper";
    	cout<<"\n\n\t 3. Scissors";
    	cout<<"\n\n\t Enter your choice: ";
    	cin>>choice;
    	return choice;
	}

	void Winner(int userChoice, int computerChoice) 
	{
    	cout<<"\n\n\t ..... Computer's choice ...... ";
    	switch(computerChoice) 
		{
        	case 1:
            	cout<<"\n\n\t Rock";
            	break;
        	case 2:
            	cout<<"\n\n\t Paper";
            	break;
        	case 3:
            	cout<<"\n\n\t Scissors";
            	break;
    	}

    	cout<<"\n\n\t ..... Your choice ..... ";
    	switch(userChoice) 
		{
        	case 1:
            	cout<<"\n\n\t 1.Rock";
            	break;
        	case 2:
            	cout<<"\n\n\t 2.Paper";
            	break;
        	case 3:
            	cout<<"\n\n\t 3.Scissors";
            	break;
    	}

    	if(userChoice == computerChoice) 
		{
			cout << "\n\n\t It's a tie! ";
    	} 
		else if((userChoice == 1 && computerChoice == 3) ||
        	    (userChoice == 2 && computerChoice == 1) ||
            	(userChoice == 3 && computerChoice == 2)) 
			
			{
    		    cout<<"\n\n\t You win! ";
    		   
    		} 
		else
		{
        	cout<<"\n\n\t Computer wins!";
    	}
    	
	}



main() 
{
	string name;
	int round;
	cout<<"\n\n\t .... Name .....";
	cout<<"\n\n\t Enter a Name : ";
	cin>>name;
	cout<<"\n\n\t .... Rounds .....";
	cout<<"\n\n\t how many rounds you want to play : ";
    cin>>round;
    
    int roundnumber=0;
    int userscore=0;
	while(roundnumber<round)
	{
		cout<<"\n\n\t Round NO : "<<roundnumber+1<<"/"<<round;

		int userChoice, computerChoice;
		userChoice=getChoice();
        
        if(userChoice >= 1 && userChoice <= 3) 
		{
            computerChoice=getRandomChoice();
            
            Winner(userChoice, computerChoice);
            userscore++;
        } 
		else 
		{
            cout<<"\n\n\t Invalid choice! Please select again.";
        }
        roundnumber++;
        cout<<"\n\n\t ... Score .... \n\n\t -* "<<name<<" Score : "<<userscore<<"\n\n\t -* Computer score : "<<roundnumber - userscore ;
	}

    cout<<"\n\n\t Thanks for playing ";
    
}
