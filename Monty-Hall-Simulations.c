/* This program runs a probability simulation on the famous Monty Hall
Door problem which allows us  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIMULATION_NUMBER 50000

int main(){
	printf("Welcome to the probability simulation! \n");
	srand(time(0));//This seeds the random number generator with the current time
	int random_number;//An integer variable to store the random_number we generate
	int successes = 0;//An integer variable to store the number of times the switching technique is successful
	int location_of_prize;//An integer variable to tell us where the prize is located
	for(int i = 0;i < SIMULATION_NUMBER;i++){
		location_of_prize = rand()%3 + 1;//Generates a random number between 1 and 3 that will be the door the prize is hidden
		random_number = rand()%3 + 1;//Generates a random number between 1 and 3 that will be our initial pick
		if(random_number != location_of_prize){
			successes++;
		}
	}
	printf("The probability that the door switch is successful is %f \n",((float)successes)/SIMULATION_NUMBER);
	return 0;
}