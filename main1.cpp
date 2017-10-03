#include<iostream>
#include<cstdlib>
#include<string.h>
#include<fstream>
#include<conio.h>
#include<time.h>
#include<windows.h>

#include "User1.cpp"
#include "User2.cpp"
#include "User3.cpp"
#include "User4.cpp"
#include "User5.cpp"

using namespace std;


char name[20],password[20];
	 
	 
string name1,add1,idproof1,card_type1;
string name2,add2,idproof2,card_type2; 	
string name3,add3,idproof3,card_type3;
string name4,add4,idproof4,card_type4;
string name5,add5,idproof5,card_type5;


string ch;

class user : public User1 , public User2 , public User3 , public User4 , public User5
{
	private :
	
	time_t mytime;
	char *s;
	//char name[20],password[20];
	int j;
	
	public :
		
		void time_system()
		{

			time_t mytime;
			mytime = time(NULL);
			s=ctime(&mytime);
		}

		void login()
        {

    	cout << "Enter username: ";
    	cin >> name;
    	cout << "Enter password: ";
    	cin >> password ;


         if (strcmp(name, user1) == 0 && strcmp(password, password1) == 0)
        	{
            	cout << "Welcome User1\n\n";
            	main_user1();           	
        	}
      else if (strcmp(name, user2) == 0 && strcmp(password, password2) == 0)
	        {
    	        cout << "Welcome User2\n";
    	        main_user2();
        	}
        	
        else if (strcmp(name, user3) == 0 && strcmp(password, password3) == 0)
	        {
    	        cout << "Welcome User3\n";
    	        main_user3();
        	}
        else if (strcmp(name, user4) == 0 && strcmp(password, password4) == 0)
	        {
    	        cout << "Welcome User4\n";
    	        main_user4();
        	}
        else if (strcmp(name, user5) == 0 && strcmp(password, password5) == 0)
	        {
    	        cout << "Welcome User5\n";
    	        main_user5();
        	}
        else 
        {
        	cout << "\nAccess Denied\n";
		}
}

};



using namespace std;

static char passworda[10]="admin";
	 static char admina[10]="admin"; 
	 
	 char namea[20],passwordaa[20];
	 
	 
class admin : public user 
{
	
	 
	 
	private:
		
		string send1;
		string send2;
		string send3;
		string send4;
		string send5;
		string name1,add1,idproof1,card_type1;
		char name2[30],add2[50],idproof2[20];
		
	public:
	
	void main_admin()
	{
		int d;
		
		cout << "\n\n(1) Press 1 for User Information\n";
		cout << "(2) Press 2 for Sending Messages to User\n";
		cout << "(3) Press 3 for Company Account Information\n";
		cout << "(4) Press 4 for Viewing User Compalins\n";
		cout << "(5) Press 5 for Editing User DataBase\n\n";
		
		cin >> d;
		
		switch(d)
		{
			case 1:
				{
					admin_information();
					break;
				}
				
				case 2:
					{
						sending();
						break;
					}
					
					case 3:
						{
							
							break;
						}
						
						case 4:
							{
								admin_complain();
								break;
							}
							
							case 5:
								{
									//editing_database();	
									break;
								}
								
								default:
									{
										exit(0);
									}
		}
	}	
	
	void admin_information()
	{
		int b;
		cout << "\n\nPress 1 for user 1";
		cout << "\nPress 2 for user 2";
		cout << "\nPress 3 for user 3";
		cout << "\nPress 4 for user 4";
		cout << "\nPress 5 for user 5\n\n";
		cin >> b;
		
	switch (b)
		{
			case 1:
				{
					ifstream u1;
					u1.open("users/userdetails/user1/User1.txt");
					
					while(!u1.eof())
						{
							getline(u1,ch);
	        				cout<<ch;
						}
						u1.close();
						system ("pause");
					break;
				}
			
			case 2:
				{
					ifstream u2;
					u2.open("users/userdetails/user2/User2.txt");
					
					while(!u2.eof())
						{
							getline(u2,ch);
	        				cout<<ch;
						}
						u2.close();
						system ("pause");
					break;
				}
				
			case 3:
				{
					ifstream u3;
					u3.open("users/userdetails/user3/User3.txt");
					
					while(!u3.eof())
						{
							getline(u3,ch);
	        				cout<<ch;
						}
						u3.close();
						system ("pause");
					break;
				}
				
			case 4:
				{
					ifstream u4;
					u4.open("users/userdetails/user4/User4.txt");
					
					while(!u4.eof())
						{
							getline(u4,ch);
	        				cout<<ch;
						}
						u4.close();
						system ("pause");
					break;
				}
				
			case 5:
				{
					ifstream u5;
					u5.open("users/userdetails/user5/User5.txt");
					
					while(!u5.eof())
						{
							getline(u5,ch);
	        				cout<<ch;
						}
						u5.close();
						system ("pause");
					break;
				}
		}
	}
	
	void login_admin()
	{
		cout << "Enter username: ";
    	cin >> name;
    	cout << "Enter password: ";
    	cin >> password ;
    	
    	
		 if (strcmp(namea, admina) == 0 && strcmp(passworda, passworda) == 0)
	        {
    	        cout << "Admin Mode\n";
    	        main_admin();
        	}
        	
        	else 
        	{
        	//	login_admin();
        	main_admin();
			}
	}
	

	
	void sending()
	{
		int d1;
		
		cout << "\n\n(1) Press 1 for User-1\n";
		cout << "(2) Press 2 for User-2\n";
		cout << "(3) Press 3 for User-3\n";
		cout << "(4) Press 4 for User-4\n";
		cout << "(5) Press 5 for User-5\n\n";
		
		cin >> d1;
		
		switch(d1)
		{
			case 1:
				{
					cout << "\n\nType Your Message Here :: " ;
					cin >> send1;
					
					ofstream s1("admin/Messages/user1/User1.txt");
					s1 << "\n";
					s1.close();
					ofstream ls1("admin/Messageslog/user1/User1.txt",ios_base::app);
					ls1 << "\n";
					ls1.close();
					break;
				}
				
				case 2:
					{
					cout << "\n\nType Your Message Here :: " ;
					cin >> send2;
					
					ofstream s2("admin/Messages/user2/User2.txt");
					s2 << "\n";
					s2.close();
					ofstream ls2("admin/Messageslog/user2/User2.txt",ios_base::app);
					ls2 << "\n";
					ls2.close();
					break;
					}
					
					case 3:
						{
							cout << "\n\nType Your Message Here :: " ;
							cin >> send3;
					
							ofstream s3("admin/Messages/user3/User3.txt");
							s3 << "\n";
							s3.close();
							ofstream ls3("admin/Messageslog/user3/User3.txt",ios_base::app);
							ls3 << "\n";
							ls3.close();
							break;
						}
						
						case 4:
							{
								cout << "\n\nType Your Message Here :: " ;
								cin >> send4;
					
								ofstream s4("admin/Messages/user4/User4.txt");
								s4 << "\n";
								s4.close();
								ofstream ls4("admin/Messageslog/user4/User4.txt",ios_base::app);
								ls4 << "\n";
								ls4.close();
								break;
							}
							
							case 5:
								{
									cout << "\n\nType Your Message Here :: " ;
									cin >> send5;
					
									ofstream s5("admin/Messages/user5/User5.txt");
									s5 << "\n";
									s5.close();
									ofstream ls5("admin/Messageslog/user5/User5.txt",ios_base::app);
									ls5 << "\n";
									ls5.close();
									break;
								}
								
				
		}
	}
	
	/*void editing_database()
	{
		int k;
		
		cout << "\n\n(1) Press 1 for user-1\n";
		cout << "(2) Press 2 for user-2\n";
		cout << "(3) Press 3 for user-3\n";
		cout << "(4) Press 4 for user-4\n";
		cout << "(5) Press 5 for user-5\n\n";
		cin >> k;
		
		switch (k)
		{
			case 1:
			{
				cout << "\n\nEnter Your Name :: " << endl;
				getline(cin,name1);
				ofstream u1("users/userdetails/user1/User1.txt");
				u1 << "Name :: " << name1;
				u1 << "\n";		
		
				cout << "Enter Your Address :: " << endl;
				getline(cin,add1);
				u1 << "Address :: " << add1;
				u1 << "\n";

		
				cout << "Enter the ID-Proof given :: " << endl;
				getline(cin,idproof1);
				u1 << "ID_Proof :: " << idproof1;
				u1 << "\n";
		
				cout << "Enter the Type of your card :: " << endl;
				getline(cin,card_type1);
				u1 << "Card type :: " << card_type1;
				u1 << "\n";
		
				u1.close();
		
				cout << "\n\nThank's " << name1 << " for registration Welcome to our network\n\n";
				break;
			}			
			
			case 2:
				{
					cout << "\n\nEnter Your Name :: " << endl;
					getline(cin,name2);
					ofstream u2("users/userdetails/user2/User2.txt");
					u2 << "Name :: " << name2;
					u2 << "\n";		
		
					cout << "Enter Your Address :: " << endl;
					getline(cin,add2);
					u2 << "Address :: " << add2;
					u2 << "\n";

		
					cout << "Enter the ID-Proof given :: " << endl;
					getline(cin,idproof2);
					u2 << "ID_Proof :: " << idproof2;
					u2 << "\n";
		
					cout << "Enter the Type of your card :: " << endl;
					getline(cin,card_type2);
					u2 << "Card type :: " << card_type2;
					u2 << "\n";
		
					u2.close();
		
					cout << "\n\nThank's " << name2 << " for registration Welcome to our network\n\n";
					break;
				}
				
				case 3:
					{
						cout << "\n\nEnter Your Name :: " << endl;
						getline(cin,name3);
						ofstream u3("users/userdetails/user3/User3.txt");
						u3 << "Name :: " << name3;
						u3 << "\n";		
		
						cout << "Enter Your Address :: " << endl;
						getline(cin,add3);
						u3 << "Address :: " << add3;
						u3 << "\n";

		
						cout << "Enter the ID-Proof given :: " << endl;
						getline(cin,idproof3);
						u3 << "ID_Proof :: " << idproof3;
						u3 << "\n";
		
						cout << "Enter the Type of your card :: " << endl;
						getline(cin,card_type3);
						u3 << "Card type :: " << card_type3;
						u3 << "\n";
		
						u3.close();
		
						cout << "\n\nThank's " << name3 << " for registration Welcome to our network\n\n";
						break;
					}
					
					case 4:
						{
							cout << "\n\nEnter Your Name :: " << endl;
							getline(cin,name4);
							ofstream u4("users/userdetails/user4/User4.txt");
							u4 << "Name :: " << name4;
							u4 << "\n";		
		
							cout << "Enter Your Address :: " << endl;
							getline(cin,add4);
							u4 << "Address :: " << add4;
							u4 << "\n";

		
							cout << "Enter the ID-Proof given :: " << endl;
							getline(cin,idproof4);
							u4 << "ID_Proof :: " << idproof4;
							u4 << "\n";
		
							cout << "Enter the Type of your card :: " << endl;
							getline(cin,card_type4);
							u4 << "Card type :: " << card_type4;
							u4 << "\n";
		
							u4.close();
		
							cout << "\n\nThank's " << name4 << " for registration Welcome to our network\n\n";
							break;
						}
						
						case 5:
							{
								cout << "\n\nEnter Your Name :: " << endl;
								getline(cin,name5);
								ofstream u5("users/userdetails/user5/User5.txt");
								u5 << "Name :: " << name5;
								u5 << "\n";		
		
								cout << "Enter Your Address :: " << endl;
								getline(cin,add1);
								u5 << "Address :: " << add5;
								u5 << "\n";

		
								cout << "Enter the ID-Proof given :: " << endl;
								getline(cin,idproof5);
								u5 << "ID_Proof :: " << idproof5;
								u5 << "\n";
		
								cout << "Enter the Type of your card :: " << endl;
								getline(cin,card_type5);
								u5 << "Card type :: " << card_type5;
								u5 << "\n";
		
								u5.close();
		
								cout << "\n\nThank's " << name5 << " for registration Welcome to our network\n\n";
								break;
							}
		}	
}*/


	void admin_complain()
	{
		int d2;
		
		cout << "\n\n(1) Press 1 for user-1\n";
		cout << "(2) Press 2 for user-2\n";
		cout << "(3) Press 3 for user-3\n";
		cout << "(4) Press 4 for user-4\n";
		cout << "(5) Press 5 for user-5\n\n";
		
		cin >> d2;
		
	    switch(d2)
	    {
	    	case 1:
	    		{
	    			ifstream complain_1;
					complain_1.open("users/usercomplain/user1/compalin1.txt");
					
					while(!complain_1.eof())
						{
							getline(complain_1,ch);
	        				cout<<ch;
						}
						complain_1.close();
						system ("pause");
						
					break;
				}
			case 2:
				{
					ifstream complain_2;
					complain_2.open("users/usercomplain/user2/complain2.txt");
					
					while(!complain_2.eof())
					{
						getline(complain_2,ch);
						cout<<ch;
					}
					complain_2.close();
					system ("pause");
					
				    break;
				}
			case 3:
				{
					ifstream complain_3;
					complain_3.open("users/usercomplain/user3/complain3.txt");
					
					while(!complain_3.eof())
					{
						getline(complain_3,ch);
						cout<<ch;
					}
					complain_3.close();
					system ("pause");
					
				    break;
				}
				
				case 4:
					{
						ifstream complain_4;
					complain_4.open("users/usercomplain/user4/complain4.txt");
					
					while(!complain_4.eof())
					{
						getline(complain_4,ch);
						cout<<ch;
					}
					complain_4.close();
					system ("pause");
					
				    break;
					}
					
					case 5:
						{
							ifstream complain_5;
					complain_5.open("users/usercomplain/user5/complain5.txt");
					
					while(!complain_5.eof())
					{
						getline(complain_5,ch);
						cout<<ch;
					}
					complain_5.close();
					system ("pause");
					
				    break;
						}
		}
		
	}
};

int main()

{
	int kb;
	while(1)
	{
		
    //admin u;
    
    
    
    admin n;
    cout << "\n(1) Press 1 for User Mode\n\n";
    cout << "(2) Press 2 for Admin Mode\n\n";
	cin >> kb;
		

	if(kb==1)
	{
		n.login();
		//n.main_user1();
	}
	else
	{
		n.login_admin();
	//	n.main_admin();
	}
	}
}
