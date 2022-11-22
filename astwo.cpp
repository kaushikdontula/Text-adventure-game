/***************************************************************************************************
 * ** astwo.cpp
 * ** Author: Kaushik Dontula
 * ** Date: 04/15/2022
 * ** Description: This program is a textual game for people to enjoy inputting their answers and choose paths along the adventurous game. This textual game is a car chase, and to win you have to successfully get away from the chase.
 * ** Input: characters, integers, doubles.
 * ** Output: text, either you win because you were going fast enough, you lose because you were going too fast you crashed, or you lose because you were going too slow.
 * **************************************************************************************************/

//including all allowed libraries based on assignment template
 #include <iostream>
 #include <cmath>
 #include <iomanip>
 #include <ctime>
 #include <cstdlib>

using namespace std;

  int main() {


//printing out the introduction to the adventurous game
	cout << endl<< "Hello and welcome to the adventure! You are currently being chased, you have two vehicle options. To choose car, enter C. To choose motorbike, enter M: "; 
	char morb;
	cin >> morb;
 	cout << endl << endl;
	

//creating variables so they work outside of if statements
	int cartype;
	int routetype;
	int fixorrisk;
	int landorwater;
	int detorwait;
	int bridgeorred;


// declaring random variable function and creating a variable for it
	int num;
	srand(time(NULL));
	num = rand() % 2+1;
//this is to see what the random number is to see if it works
	//cout << " Your random number is: " << num << endl;


// this is the if statement for the first input of the car.
	if (morb == 'C') {
		cout << "You have chosen the car! You now have two options. Press 1 for a classic car or press 2 for a futuristic car: ";
		cin >> cartype;
		cout << endl;
		
		//within the car input this is for if you choose a classic car.
			if (cartype == 1) {
				cout << "Unfortunately, your classic car ran into some problems. Enter 1 to try and fix it or Enter 2 to risk it and keep going: ";
				cin >> fixorrisk;
				cout << endl;
			
			//within the car input this is whether your selection was successful or not.
				if (fixorrisk == num) {	
					cout << "You're lucky! The option you chose was successful, you are now on that path..." << endl << endl;
				}
				else if (fixorrisk != num){
					cout << "Unfortunately, luck was not on your side. The option was not successful, and you were diverted to the other path..."<< endl << endl;
				}
			}

		//within the car input this is if you choose a futuristic car
			else if (cartype == 2){
				cout << "Your futuristic car can go on water!! Press 1 to go on water or press 2 to stay on land: ";
				cin >> landorwater;
				cout << endl;

			//within the futuristic car this is whether your option was successful or not
				if (landorwater == num){
					cout << "You're lucky! The option you chose was successful, you are now on that path... " << endl << endl;
				}
				else if (landorwater != num){
					cout << "Unfortunately, luck was not on your side. The option was not successful, and you were diverted to the other path..." << endl << endl;
				}
			}
		//this is for errors within picking futurstic or classic car
			else {
				cout << "Sorry, it looks like you havent inputted a readable value please restart the program and enter either 1 or 2" << endl;
				return 0;
			}
	}

//this is the else if statement for the first input if its a motorbike
	else if (morb == 'M') {
	cout << "You have chosen the motorbike! You have two route options. Press 1 to take the scenic route or press 2 to take the city route: ";
	cin >> routetype;
	cout << endl;

	//this is the if statement for if you picked the scenic route
		if (routetype == 1){
		cout << "You picked the scenic route, but on your way you stumble upon a herd of sheep blocking your path. Press 1 to attempt a detour or press 2 to wait: ";
		cin >> detorwait;
		cout << endl;

		//this is the if statement for detour or wait for motorbike
			if (detorwait == num) {	
				cout << "You're lucky! The option you chose was successful, you are now on that path..." << endl << endl;
			}
			else if (detorwait != num){
				cout << "Unfortunately, luck was not on your side. The option was not successful, and you were diverted to the other path..."<< endl << endl;
			}
		}
	
	//this is the else statement for the city route
		else if (routetype == 2){
		cout << "You picked the city route but its taking too long at this red light. Press 1 to take the detour on the bridge, or press 2 to run the red light: ";
		cin >> bridgeorred;
		cout << endl;
	
			if (bridgeorred == num) {	
				cout << "You're lucky! The option you chose was successful, you are now on that path..."<< endl << endl;
			}else if (bridgeorred != num){
				cout << "Unfortunately, luck was not on your side. The option was not successful, and you were diverted to the other path..." << endl << endl;
			}
		}
	// this is the error statement for if you didnt input a valid route for the motorbike
		else {
				cout << "Sorry, it looks like you havent inputted a readable value please restart the program and enter either 1 or 2" << endl;
				return 0;
			}
	}

	else{
		cout << "You have inputted an invalid value, please restart the program and try again. Thank You." << endl;
		return 0;
	}


//final equation statement to win the game. This is a velocity equation.

//getting input for amount of miles driven.
	cout << "What is the distance you have travelled so far, in M (miles): ";
	double distance;
	cin >> distance;

//getting input for the time it took to drive those miles.
	cout << "How long did it take you to travel that distance, in m (minutes): ";
	double time;
	cin >> time;
	cout << endl;

//creating variable to convert minutes to hours
	double timeinhours;
	timeinhours = time*.016666666;

	double avgvelocity;
	avgvelocity = distance/timeinhours;

//if statement deciding on whether you win the game or not
	if (avgvelocity > 100){	
		cout << "Your average velocity is " << avgvelocity << " miles per hour" << endl << endl << "Unfortunately, your speed was too high. " << endl << "You ended up crashing and getting caught. Please restart the game." << endl << endl;
	}
	
	else if (avgvelocity > 60 ){
		cout << "Your average velocity is " << avgvelocity << " miles per hour" << endl << endl << "You successfully got away in the car chase!!" << endl << "Congrats! you have beat the game." << endl << endl;
	}
	else if ( 0 < avgvelocity < 60){
		cout << "Your average velocity is " << avgvelocity << " miles per hour" << endl << endl << "You are going too slow!" << endl << "You end up getting caught. Please restart the game. " << endl << endl;
	}	

return 0;

}
