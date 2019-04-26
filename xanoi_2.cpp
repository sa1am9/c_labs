#include <iostream>
#include <cstdlib>
using namespace std;
 
void towers(int, int, int, int);
char lst[9]={'1','2','3','|','|','|','|','|','|'};
int findElement(char array[], char element, int index=0 ) {
    if (array[index] != element)
        return findElement(array, element, ++index);
    
    if (index == (sizeof(array) / sizeof(*array) - 1))
        return  index;
    
    return index;
}
 
int main()
{
    int num;
 	
  	cout << "Current situation" << endl;
	cout << "-" << lst[0] << "-"  << "-" << lst[3] << "-"  << "-" << lst[6] << "-" << endl;
	cout << "-" << lst[1] << "-"   << "-" << lst[4] << "-" << "-" << lst[7] << "-" << endl;
	cout << "-" << lst[2] << "-"  << "-" << lst[5] << "-"  << "-" << lst[8] << "-" << "\n" << endl;
    towers(3, 1, 3, 2);
    return 0;
}
void towers(int num, int frompeg, int topeg, int auxpeg)
{
    if (num == 0)
    {
        
        return;
    }
    towers(num - 1, frompeg, auxpeg, topeg);
    char c=num + '0';
	int number =findElement(lst,c);
	for (int i=1;i<4;++i){
		if (lst[3*(topeg)-i]=='|'){
	
			lst[3*(topeg)-i]=c;
			lst[number]='|';
			break;
		}
	}
	cout << "Current situation" << endl;
	cout << "-" << lst[0] << "-"  << "-" << lst[3] << "-"  << "-" << lst[6] << "-" << endl;
	cout << "-" << lst[1] << "-"   << "-" << lst[4] << "-" << "-" << lst[7] << "-" << endl;
	cout << "-" << lst[2] << "-"  << "-" << lst[5] << "-"  << "-" << lst[8] << "-" << "\n" << endl;
    /*system("pause");
    system("cls");*/

    towers(num - 1, auxpeg, topeg, frompeg);
}
 
