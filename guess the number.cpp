#include<iostream> //inaruhusu kutumia cin na cout
#include<cstdlib> //inatumika kuzalisha namba za bahati
#include<ctime> //inatumika kuzalisha namba kwa muda husika

//kuanza programu.

using namespace std; //inafanya iwe rahisi kutumia cou na cin bila std::
int main() //sehemu kuu pogramu inapoanzwa kutengenezwa.
{ 	
	srand(time(0)); //inazalisha namba tofauti random
	int level = 1; //kiwango cha kuanzia
	int score = 0; //alama za kuanzia
	char playAgain; //kubaini kama mchezaji anataka kuenderea kecheza.
	
	//kuanzisha mchezo kwa mtumiaji.
	
	do{
		int maxNumber = level * 10; //wigo wa namba unapanuka kwakila kiwango
		int number =rand() % maxNumber +1; //namba random kati ya moja adi nambakubwa
		int guess; //inahifazi thamani ya mtumiaji
		int attempts = 0;
		const int maxAttempts = 6 - level; //idadi ya majaribio inapunguwa kwa kila kiwango.
		
		cout<<"HELLO!! FRIEND, WELCOME TO GUESS THE NUMBER GAME!"<<endl;
		
		cout<<"level"<<level<<endl;
		cout<<"I have chosen a number between 1 and"<<maxNumber<<","<<endl;
		cout<<"You have"<<maxAttempts<<"of guess the correct number."<<endl;
		
		//mzunguko wa mchezo
		
		bool correct = false;
		while (attempts < maxAttempts) {
		cout<<"Enter your guess number"<<endl;
		cin>>guess;
		attempts++; //ongeza idadi ya majaribio.
		
		if(guess < number){ 
		cout<<"Too low, Try again!"<<endl;
		} else if(guess > number){
		cout<<"Too high, Try again!"<<endl;
		} else{
			cout<<"Conguraturations!!, You guessed the correct number."<<attempts<<"!"<<endl;
			
			score += (maxAttempts - attempts + 1) * 10; //naongeza alama kulingana na majalibio yaliyo bakia.
			correct = true;
			break; //toka kwenye mzunguko ikiwa jibu ni sahihi
		}
		
		//mjuishe mchezaji idadi ya majalibio yaliyobaki.
		
		cout<<"You remain"<<(maxAttempts - attempts)<<"challenges"<<endl;
		}
		
		if(!correct) {
			cout<<"Sorry,You finish all your challenge,the correct number is"<<number<<"."<<endl;
		}

		//onyesha alama za sasa
		cout<<"your score"<<score<<endl;
		
		//uliza kama mchezaji anaitaji kuenderea kwenye kiwango kinacho fuata
		
		if(correct) {
			cout<<"do you want to continue to the next stage?.(y/n):"<<endl;
			cin>>playAgain;
			if(playAgain == 'y' || playAgain == 'y') {
				level++; //ongeza kiwango.
			}else{
				cout<<"Thank you for play,your last score"<<score<<endl;
				break;
			}
		}while(true);
	}
	return  0;
	}
