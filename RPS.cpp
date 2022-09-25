#include <iostream>
#include <ctime>
#include <stdlib.h>

char getPlayerChoose();
char getComputerChoose();
void showChoose(char);
void winner(char, char);

int main(){

	char player,computer;
	
	player = getPlayerChoose();
	std::cout<<"Your choose: ";
	showChoose(player);
	
	computer = getComputerChoose();
	std::cout<<"Computer's choose: ";
	showChoose(computer);
	
	winner(player,computer);

	return 0;
}
char getPlayerChoose(){
	
	char player;
	std::cout<<"Welcome to Rock-Paper-Scissors Game\n\n";
	
	do{
		std::cout<<"Choose one of the following\n";
		std::cout<<"***************************\n";
		std::cout<<"'r' for Rock"<<"\n";
		std::cout<<"'p' for Paper"<<"\n";
		std::cout<<"'s' for Scissors"<<"\n";
		std::cin>>player;
	}while(player != 'r' && player != 'p' && player !='s');
	
	return player;
}
char getComputerChoose(){
	
	srand(time(0));
	int computer = rand()%3 + 1;
	
	switch(computer){
		case 1: return 'r';
		case 2: return 'p';
		case 3: return 's';
	}
	
	return 0;
}
void showChoose(char choose){
	
	switch(choose){
		case 'r': std::cout<<"Rock\n";
				  break;
		case 'p': std::cout<<"Paper\n";
				  break;
		case 's': std::cout<<"Scissors\n";
				  break;
	}	
}
void winner(char player, char computer){
	
	switch(player){
		case 'r': if(computer == 'r'){
					std::cout<<"It's a tie\n";
				}
				else if(computer == 'p'){
					std::cout<<"You lose\n";
				}
				else{
					std::cout<<"You win\n";
				}
				break;
		case 'p': if(computer == 'r'){
					std::cout<<"You win\n";
				}
				else if(computer == 'p'){
					std::cout<<"It's a tie\n";
				}
				else{
					std::cout<<"You lose\n";
				}
				break;
		case 's': if(computer == 'r'){
					std::cout<<"You lose\n";
				}
				else if(computer == 'p'){
					std::cout<<"You win\n";
				}
				else{
					std::cout<<"It's a tie\n";
				}
				break;
	}
}
