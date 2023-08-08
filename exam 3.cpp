#include<iostream>
#include<string.h>

using namespace std;

class Hotal{
	public :
		
	void setter(){

       public :
		   	
	int id;
	int type;
	int saff_size;
    int room_size,establish_year,rating_type;
	char name[100],adderss[100]website[100];
	
	cout<<"hotel id = ";
	cin>>id;
	
	cout<<"hotel name = ";
	cin>>name;
	
	cout<<"adderss =  ";
	cin>>adderss;
	
	cout<<"type = ";
	cin>>type;
	
	cout<<"saff size = ";
	cin>>saff_size;
	
	cout<<"room size= ";
	cin>>room_size;
	
	cout<<"hotel establish year = ";
	cin>>establish_year;
	
	cout<<"rating type = ";
	cin>>rating_type;
	
	cout<<"website = ";
	cin>>website;
}


void getter(){
	public :
		
	cout<<"hotel id = "<<id<<endl
	cout<<"hotel name = "<<name<<endl
	cout<<"adderss = "<<adderss<<endl
	cout<<"type = "<<tyep<<endl
	cout<<"saff size = "<<saff_size<<endl
	cout<<"room size= "<<room_size<<endl
	cout<<"hotel establish year = "<<hotel establish_year<<endl 	
	cout<<"rating type = "<<rating_type<<endl
    cout<<"website = "<<website<<endl;
}
};
int main()
{
	Hotel h1;
	
	h1.setter();
	h1.getter();
	
	
}

