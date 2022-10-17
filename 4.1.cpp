#include <iostream>
#include <string>

using namespace std;

int main(){
	string credit_card_number;
	cin >> credit_card_number;
	int i = 0; 
	while (i < credit_card_number.length()){
		string c = credit_card_number.substr(i, 1);
		if(c == " " || c == "-"){
			string before = credit_card_number.substr(0,i);
			string after = credit_card_number.substr(i+1);
			credit_card_number = before + after;
		}
		else{
			i++;
		}
	}
	cout << credit_card_number << endl;
}
