#include <iostream>
#include <windows.h>
 
using namespace std;
 
struct Student 							
{
	char Name[35]; 							
	char Family[35]; 						
	char School[100]; 				
	int Date[3],Postup[3]; 		
	void Show(); 						
	void Input(); 			
};
 
void Student::Input() 					
{
 
			cout << "\n";
			cout << "�������\t\t";
			cin.getline(Family,35); 		
 
 
			cout << "��� \t\t";
			cin.getline(Name,35);
			
 
 
			cout<<"���� ��������\n";
 				cout<<"���� - \t";
				cin >> Date[0]; 			
 				cout<<"����� - \t";
			    cin >> Date[1];
			    
 				cout<<"��� - \t";
			    cin >> Date[2];
		
 				cin.ignore();
 
				cout << "�����\t\t";
				cin.getline(School,100);
 
 
				cout << "�����������\n";
 				cout<<"���� - \t";
				cin >> Postup[0];
			
 				cout<<"����� - \t";
			    cin >> Postup[1];
		
 				cout<<"��� - \t";
			    cin >> Postup[2];
	
				cout << "\n\n";
 
		cout << "======================\n";
}
 
void Student::Show() 								
{
	cout << Name << "\t" << Family << "\t������� " << Date[0] << "." << Date[1] << "." << Date[2] << "\n";
	cout << "�������� � ������� ���������\t" << School << "\t" << Postup[0] << "." << Postup[1] << "." << Postup[2] << "\n\n";
}
 
int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
 
 
    //const int N = 3; 					
	Student Student[1]; 					
 	
	for (int i=0; i<1; i++) Student[i].Input(); 	
	for (int i=0; i<1; i++) Student[i].Show(); 	
 
   return 0;
}
