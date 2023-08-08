#include<iostream>
#include<string.h>

class a{
	
	int id,salary,exprience;
	char name[100],role[100],address[100],emali[100],comp_name[100],contact[100];
	
	void set()
	
	cout<<"hotel id = ";
	cin>>id;
	
	cout<<"hotel name = ";
	cin>>name;
	
	cout<<"role =  ";
	cin>>adderss;
};

class b{
	cout<<" = ";
	cin>>id;
	
	cout<<"hotel name = ";
	cin>>name;
	
	cout<<"adderss =  ";
	cin>>adderss;
};

class c : public b{
	public :
		
		void stter(){
		
	cout<<"hotel  = ";
	cin>>id;
	
	cout<<"hotel name = ";
	cin>>name;
	
	cout<<"salary =  ";
	cin>>adderss;
}
    void getter(){
    	public :
    		
    cout<<"name = "<<name<<endl
        <<"role = "<<role<<endl
        <<"salary = "<<salary<<endl;
	}
};

class d{
	void stter(){
		public :
			cout<<"email = "<<eamil<<endl
			    <<"contact = "<<contact<<endl;
	}
	
	void getter(){
		
		<<"id = "<<name<<endl
		<<"name = "<<name<<endl
        <<"role = "<<role<<endl
        <<"salary = "<<salary<<endl
        <<"exprience = "<<exprience<<endl
        <<"comp name = "<<comp_name<<endl
        <<"address = "<<address<<endl
        <<"email = "<<email<<endl
        <<"contact = "<<contact<<endl;
	}
};

int main(){
	 a o1;
	 
}

