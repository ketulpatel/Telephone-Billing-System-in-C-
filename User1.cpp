#include<iostream>
#include<string.h>
#include<fstream>
#include<cstdlib>
#include<time.h>
#include<windows.h>

using namespace std;

     static char password1[10]="hello1";
	 static char user1[10]="hi1"; 

class User1
{
private :
	
	float balance1=0,Balance1=0,Nbal,nbal;
	string name1,add1,idproof1,card_type1;
	char usercomplain1[100];
	int datapack1,sms1;
	char usercomplain6[100];
	string ch1;
	float pay1;
	string chs;

public:
  
	void main_user1()
	{
		int c7;

		cout << "\n\n(1) Press 1 for New User Registration\n";
		cout << "(2) Press 2 for Customer Care\n";
		cout << "(3) Press 3 for Billing and Payment Options\n";
		cout << "(4) Press 4 for Company messages\n";
		cout << "(5) Press 5 to Exit\n\n";

		cin >> c7;

		switch (c7)
		{
			case 1:
				{
					registration();
					break;
				}

			case 2:
				{
					CustomerCare();
					break;
				}

			case 3:
				{
					bill_pay();
					break;
				}

			case 4:
				{
					ifstream s1;
					s1.open("admin/Messages/user1/User1.txt");
					
					while(!s1.eof())
						{
							getline(s1,chs);
	        				cout<<chs;
						}
						s1.close();
						system ("pause");
			
					break;
				}

			case 5:
				{
					cout << "\n\nThank You\n\n";
					exit(0);
					break;
				}

			default :
				{
					exit(0);
					break;
				}
		}
	}
	
	void bill_pay()
	{
		int bill1;
		
		cout << "\n\n(1) Press 1 for billing status\n";
		cout << "(2) Press 2 for payment\n\n";
		cin >> bill1;
		
		switch(bill1)
		{
			case 1:
				{
					cout << "\n\n Your current Billing Status according to Date wise is :: \n\n";
					
					ifstream bill_1;
					bill_1.open("users/usertotallog/user1/User1.txt");
					
					while(!bill_1.eof())
						{
							getline(bill_1,ch1);
	        				cout<<ch1;
						}
						bill_1.close();
						system ("pause");
						
						break;
				}
				
				case 2:
					{
						cout << "Enter the amount you want to pay :: ";
						cin >> pay1;
						
						ofstream payme1("users/paymentlog/user1/paywallet_1" , ios_base::app);
						
						payme1 << pay1 << endl;
						
						payme1.close();
						
						break;
					}
		}
	}

	void registration()
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
	}

	void CustomerCare()
	{
		int c;
		cout<<"\n\n(1) Press 1 for Balance Options\n";
		cout<<"(2) Press 2 for Activation or Deactivation realted information\n";
		//cout<<"(3) Press 3 to view Current Offers\n";
		cout<<"(3) Press 3 to Register Complain\n";
		cout<<"\n    Press E to exit the menu\n\n";

		cin>>c;

		switch(c)
		{
			case 1:
				{
					balanceOption();
					break;
				}

				case 2:
					{
						ActDactPlan();
						break;
					}

					case 3:
						{
							Complain1();
							break;
						}

						case 4:
						{
							
							break;
						}

						default:
							{
								exit(0);
								break;
							}
		}
	}

	void balanceOption()
	{
		int c1;

		cout << "\nPress (1) for Data Pack balance\n";
		cout << "Press (2) for SMS Pack balance\n";
		cout << "Press (3) to Recharge\n";
		cout << "Press (4) for Details of current balance\n";

		cin>>c1;

		switch(c1)
		{
			case 1:
				{
					DataPack();
					break;
				}

				case 2:
					{
						Sms();
						break;
					}

					case 3:
						{
							again :
							cout << "\nEnter the amount to recharge\n";
							cin >> balance1;
							Nbal = balance1;
							
							ofstream bl1("users/usertotallog/user1/User1.txt", ios::app);
							ofstream r1("users/userpaymentlog/user1/User1.txt" , ios_base::app);
							if (balance1 <= 2500)
							{
								cout << "Recharge succesful of " << balance1 << "\n";
								Balance1 = Balance1 + balance1;
								r1 << "Recharge Done of " << Balance1;
								r1 << "\n";
								r1.close();
								
								nbal=nbal+Nbal;
								
								bl1 << nbal;
								bl1 << "\n";
								bl1.close(); 
							}
							else
							{
								cout << "You can't recharge more than 2500/-\n";
								goto again;
							}
							break;
						}

						case 4:
						{
							cout << "\n\nYour Current balance is :: " << Balance1 << "\n"<< endl;
							break;
						}

						default:
							{
								exit(0);
								break;
							}
		}
	}

	void DataPack()
	{
		int c5;
		data :
		cout << "\n(1) Press 1 for Datapack Plans\n";
		cout << "(2) Press 2 for DataPack Recharge\n";

		cin >> c5;

ofstream r1("users/userpaymentlog/user1/User1.txt" , ios_base::app);
ofstream bl1("users/usertotallog/user1/User1.txt", ios::app);

		switch(c5)
		{
			case 1:
				{
					cout <<"\n(1) 1-GB 2G Data for 165 Rs.\n";
					cout <<"(2) 2-GB 3G Data for 245 Rs.\n";
					cout <<"(3) 2G Unlimited for 345 Rs.\n";
					cout <<"(4) 3G Unlimited for 645 Rs.\n";
					goto data;
					break;
				}

				case 2:
					{
						dataenter :
						cout << "\nEnter the amount you want to recharge :: ";
						cin >> datapack1;

						if (datapack1 == 165)
						{
							cout << "\nRecharge succesful of 1GB 2G data for 165 Rs\n\n";
							Balance1 = Balance1 + 165;
							r1 << "Recharge done of (Data Pack) :: 165"; 
							bl1 <<  nbal + 165 ;
							bl1 << "\n";
						}

						else if (datapack1 == 245)
						{
							cout << "\nRecharge succesful of 2GB 3G data for 245 Rs\n\n";
							Balance1 = Balance1 + 245;
							r1 << "Recharge done of (Data Pack) :: 245"; 
							bl1 <<  nbal + 245 ;
							bl1 << "\n";
						}

						else if (datapack1 == 345)
						{
							cout << "\nRecharge succesful of 2G Unlimited data for 345 Rs\n\n";
							Balance1 = Balance1 + 345;
							r1 << "Recharge done of (Data Pack) :: 345"; 
							bl1 <<  nbal + 345 ;
							bl1 << "\n";
						}

						else if (datapack1 == 645)
						{
							cout << "\nRecharge succesful of 3G Unlimited data for 645 Rs\n\n";
							Balance1 = Balance1 + 645;
							r1 << "Recharge done of (Data Pack) :: 645"; 
							bl1 <<  nbal + 645 ;
							bl1 << "\n";
						}

						else
						{
							cout << "\nInvalid Recharge\n";
							goto dataenter;
						}

						break;
					}

					default :
						{
							exit(0);
						}
		}
		r1.close();
		bl1.close();
	}

	void Sms()
	{
		int c6;
		 smspa :
		cout << "\n(1) Press 1 for information of SMS Pack\n";
		cout << "(2) Press 2 for SMS Recharge\n";

		cin >> c6;

            ofstream r1("users/userpaymentlog/user1/User1.txt" , ios_base::app);
			ofstream bl1("users/usertotallog/user1/User1.txt", ios::app);

		switch (c6)
		{
			case 1:
				{
					cout << "\n(1) 100 messages for 15 days for 35 Rs.\n";
					cout << "\n(2) 500 messgaes for 28 days for 79 Rs.\n";
					goto smspa;
					break;
				}

				case 2:
					{
						Sms:
						cout << "\nEnter the sms recharge amount :: ";
						cin >> sms1;

						if (sms1 == 35)
						{
							cout << "\nRecharge successful\n\n";
							Balance1 = Balance1 + 35;
							r1 << "Recharge done of (SMS Pack) :: 35"; 
							bl1 <<  nbal + 35 ;
							bl1 << "\n";
						}

						else if (sms1 == 79)
						{
							cout << "\nRecharge successful\n\n";
							Balance1 = Balance1 + 79;
							r1 << "Recharge done of (SMS Pack) :: 79"; 
							bl1 <<  nbal + 79 ;
							bl1 << "\n";
						}

						else
						{
							cout <<"\nInvalid Recharge\n\n";
							goto Sms;
						}

						break;
					}
		}

				r1.close();
				bl1.close();
	}

	void ActDactPlan()
	{
		int c2;

		cout << "\n(1) Press 1 to Activate any Plan\n";
		cout << "(2) Press 2 to Deactivate any Plan\n";

		cin>>c2;

		switch(c2)
		{
			case 1:
				{
					PlanList();
					break;
				}

				case 2:
					{
						cout << "Select which plan you want to deactivate\n";
						CurrentPlan();
						break;
					}

					default:
						{
							exit(0);
							break;
						}
		}
	}

	void PlanList()
	{
		int c3;

		cout << "\nPress (1) for 25 paisa/min STD and Local call rate\n";
		cout << "Press (2) for 100 free STD and Local min\n";
		cout << "Press (3) for 200 free STD and Local min\n";

		cin>>c3;

					ofstream r1("users/userpaymentlog/user1/User1.txt" , ios_base::app);
					ofstream bl1("users/usertotallog/user1/User1.txt", ios::app);

		switch(c3)
		{
			case 1:
				{
					cout << "You have selected 25 paisa/min pack\nYour charges are 35 Rs.\n";
					Balance1 = Balance1 + 35;
					r1 << "Recharge done of (Plan) :: 35"; 
					bl1 <<  nbal + 35 ;
					bl1 << "\n";
					break;
				}

				case 2:
					{
						cout << "You have selected 100 free min pack\nYour charges are 49 Rs.\n";
						Balance1 = Balance1 + 49;
						bl1 << nbal + 49 ;
						bl1 << "\n";
						r1 << "Recharge done of (Plan) :: 49"; 
						break;
					}

					case 3:
						{
							cout << "You have selected 200 free min pack\nYour charges are 65 Rs.\n";
							Balance1 = Balance1 + 65;
							bl1 <<  nbal + 65 ;
							bl1 << "\n";
							r1 << "Recharge done of (Plan) :: 65"; 
				
							break;
						}

						default:
							{
								exit(0);
								break;
							}
		}
		
		r1.close();
		bl1.close();
	}
	

	void CurrentPlan()
	{
		int c4;
	}

	void Complain1()
	{
		cout << "Type your complain here ::" << endl;
		gets(usercomplain1);
		gets(usercomplain6);
	    
	    
		ofstream c_1("users/usercomplain/user1/compalin1.txt");
		c_1 << usercomplain6;
		c_1 << "\n";
		c_1 << "\n";
		c_1.close();
	}

};

