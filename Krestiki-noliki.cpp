#include <iostream>
/*#include <string>*/
#include <cstdlib>
using namespace std;
string PlayerNameFirst, PlayerNameSecond;
char cells[9] = {'-', '-', '-', '-', '-', '-', '-', '-', '-'};
char win='-'; 
void show_table(){
	system("cls");
	
	cout << "Numbers of cells: \n" <<endl;
	cout << "-" << 1 << "-" << '|' << "-" << 2 << "-" << '|' << "-" << 3 << "-" << endl;
	cout << "-" << 4 << "-" << '|' << "-" << 5 << "-" << '|' << "-" << 6 << "-" << endl;
	cout << "-" << 7 << "-" << '|' << "-" << 8 << "-" << '|' << "-" << 9 << "-" << "\n" << endl;
	cout << "Current situation (--- is empty):\n" << endl;
	cout << "-" << cells[0] << "-" << '|' << "-" << cells[1] << "-" << '|' << "-" << cells[2] << "-" << endl;
	cout << "-" << cells[3] << "-" << '|' << "-" << cells[4] << "-" << '|' << "-" << cells[5] << "-" << endl;
	cout << "-" << cells[6] << "-" << '|' << "-" << cells[7] << "-" << '|' << "-" << cells[8] << "-" << "\n" << endl;
}
void make_move(int num){
	if (num == 1) cout<<PlayerNameFirst;
		else cout << PlayerNameSecond;
	cout << ", enter a cell`s number to make move: ";
	int cell;
	cin >> cell;
	cout << "\n";
	while (cell > 9 || cell < 1 || cells[cell - 1]=='O' || cells[cell-1]=='X'){
		cout << "Enter a CORRECT (1-9) or EMPTY (---) cell`s number to make move:"<<endl;
		cin >> cell;
		cout << "\n";
		
	}
	if (num == 1) cells[cell -1] = 'X';
		else cells[cell-1]='O';
}

char check(){
	if ((cells[0] == cells[4] && cells[4] == cells[8]) || (cells[2] == cells[4] && cells[4] == cells[6])) 
			{
			
			return cells[4];}
	else {
	
	for (int i=0;i<3;i++)
		{
		if (cells[3*i]==cells[i*3+1] && cells[i*3+1] == cells[i*3+2] && cells[3*i]!='-' )
			return cells[3*i];
		
		if (cells[i] == cells[i+3] && cells[i+3] == cells[i+6] && cells[3*i]!='-')
			return 	cells[i];
	}
}
	return '-';
}
void resultat(){
	if (win=='X') cout << PlayerNameFirst << " win! Congratulations! " << PlayerNameSecond << " is looser! Bugoga..." << endl;
	else if (win=='O') cout << PlayerNameSecond << " win! Congratulations! " << PlayerNameFirst << " is looser! Bugoga..." << endl;
	else cout << "Draw!!!" << endl;
}
int main(){
	
	cout << "Enter first name of player";
	cin >> PlayerNameFirst;
	cout << "Enter second name of player";
	cin >> PlayerNameSecond;
	
	show_table();
	for (int move=1;move <=9 ; move ++){
		if (move%2)make_move(1);
			else make_move(2);
			show_table();
		if (move>=5)
		{win=check();
			if (win!='-'){
			
			
			break;}
		}
	}
	resultat();
	pause;
	return 0;
	
}

