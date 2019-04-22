#include <iostream>
#include <map>
#include <string>
#include <cstdlib>
using namespace std;
map <string, string> add (map <string,string> lst, string st ,string rt){
	lst[st]=rt;
	return lst;
}

void remove(map <string,string>* lst,string st){
	 if (not (*lst).empty()){
	 (*lst).erase(st);
	}	 
}

void show(map <string,string> lst){
	for (map<string,string>::iterator it=lst.begin(); it!=lst.end(); ++it)
	{
		cout << it->first << " => " << it->second << '\n';
	}
    
}
	
void clear(map <string,string>* lst){
	(*lst).clear();
	
}
int main(){
		map<string,string> email_to_name;
		int number;
		
		do {
		cout<<"1-add to map"<<endl;
		cout<<"2-delete"<<endl;
		cout<<"3-output all map"<<endl;
		cout<<"4-clear all"<<endl;
		cout<<"0-leave"<<endl;
		cout<<"input number";
		cin>>number;	
		switch(number)
		{case 1:
			{
			string email,name;
			cout<<"input email"<<endl;
			cin>>email;
			cout<<"input name"<<endl;
			cin>>name;
			email_to_name = add(email_to_name,email,name);
			break;
		}
		case 2:{
			cout<<"input email"<<endl;
			string email;
			cin>>email;
			remove(&email_to_name,email);
			break;
		}
		case 3:{
			show(email_to_name);
			break;
		}
		case 4:{
			
			clear(&email_to_name);
			break;
		
		}
		}
		system("PAUSE");
}
	while (number!=0);

}
