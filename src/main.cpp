#include <iostream>
#include <string>

using namespace std;
int main (){

    int playerHealth;
    int enemyHealth;

    int attackDmg = 20;
    string playerName;
    string winner = "Enemy";

    cout << "Trainer, what is your name?\n";
    cin >> playerName;

    cout << "Please choose your starting health: \n";
    cin >> playerHealth;

    cout << "Please choose the enemies starting health: \n";
    cin >> enemyHealth;



    cout << "\nHello " <<  playerName << " get ready for a battle, you're up first \n";
    

    while((playerHealth > 0)&&(enemyHealth > 0)){
    
	cout << "" << playerName << " attacks the enemy dealing " << attackDmg << "dmg\n";
	enemyHealth -= attackDmg;
	cout << "Enemy is now at " << enemyHealth << endl;    
	
	if(enemyHealth <= 0){
	 winner = playerName;
	 break;
	}

	cout << "Enemy now attacks the player dealing " << attackDmg << "dmg\n";
	playerHealth -= attackDmg;
	cout << "PlayerHealth = " << playerHealth << "\tEnemyHealth = " << enemyHealth << endl; 


    }
    
	cout << winner << " is victorius"; 
	return 0;

} 
