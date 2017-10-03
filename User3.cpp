#include<iostream>
#include<string.h>
#include<fstream>
#include<cstdlib>
#include<time.h>
#include<windows.h>

using namespace std;

     static char password3[10]="hello3";
	 static char user3[10]="hi3"; 

class User3
{
private :
	
	float balance3=0,Balance3=0,Nbal,nbal;
	string name3,add3,idproof3,card_type3;
	char usercomplain3[100];
	int datapack3,sms3;
	char usercomplain8[100];
	string ch3;
	float pay3;
	string chs;

public:
  
	void main_user3()
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
					ifstream s3;
					s3.open("admin/Messages/user3/User3.txt");
					
					while(!s3.eof())
						{
							getline(s3,chs);
	        				cout<<chs;
						}
						s3.close();
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
		int bill3;
		
		cout << "\n\n(1) Press 1 for billing status\n";
		cout << "(2) Press 2 for payment\n\n";
		cin >> bill3;
		
		switch(bill3)
		{
			case 1:
				{
					cout << "\n\n Your current Billing Status according to Date wise is :: \n\n";
					
					ifstream bill_3;
					bill_3.open("users/usertotallog/user3/User3.txt");
					
					while(!bill_3.eof())
						{
							getline(bill_3,ch3);
	        				cout<<ch3;
						}
						bill_3.close();
						system ("pause");
						
						break;
				}
				
				case 2:
					{
						cout << "Enter the amount you want to pay :: ";
						cin >> pay3;
						
						ofstream payme3("users/paymentlog/user3/paywallet_3" , ios_base::app);
						
						payme3 << pay3 << endl;
						
						payme3.close();
						
						break;
					}
		}
	}

	void registration()
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
							Complain3();
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
							cin >> balance3;
							Nbal = balance3;
							
							ofstream bl3("users/usertotallog/user3/User3.txt", ios::app);
							ofstream r3("users/userpaymentlog/user3/User3.txt" , ios_base::app);
							if (balance3 <= 2500)
							{
								cout << "Recharge succesful of " << balance3 << "\n";
								Balance3 = Balance3 + balance3;
								r3 << "Recharge Done of " << Balance3;
								r3 << "\n";
								r3.close();
								
								nbal=nbal+Nbal;
								
								bl3 << nbal;
								bl3 << "\n";
								bl3.close(); 
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
							cout << "\n\nYour Current balance is :: " << Balance3 << "\n"<< endl;
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

ofstream r3("users/userpaymentlog/user3/User3.txt" , ios_base::app);
ofstream bl3("users/usertotallog/user3/User3.txt", ios::app);

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
						cin >> datapack3;

						if (datapack3 == 165)
						{
							cout << "\nRecharge succesful of 1GB 2G data for 165 Rs\n\n";
							Balance3 = Balance3 + 165;
							r3 << "Recharge done of (Data Pack) :: 165"; 
							bl3 <<  nbal + 165 ;
							bl3 << "\n";
						}

						else if (datapack3 == 245)
						{
							cout << "\nRecharge succesful of 2GB 3G data for 245 Rs\n\n";
							Balance3 = Balance3 + 245;
							r3 << "Recharge done of (Data Pack) :: 245"; 
							bl3 <<  nbal + 245 ;
							bl3 << "\n";
						}

						else if (datapack3 == 345)
						{
							cout << "\nRecharge succesful of 2G Unlimited data for 345 Rs\n\n";
							Balance3 = Balance3 + 345;
							r3 << "Recharge done of (Data Pack) :: 345"; 
							bl3 <<  nbal + 345 ;
							bl3 << "\n";
						}

						else if (datapack3 == 645)
						{
							cout << "\nRecharge succesful of 3G Unlimited data for 645 Rs\n\n";
							Balance3 = Balance3 + 645;
							r3 << "Recharge done of (Data Pack) :: 645"; 
							bl3 <<  nbal + 645 ;
							bl3 << "\n";
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
		r3.close();
		bl3.close();
	}

	void Sms()
	{
		int c6;
		 smspa :
		cout << "\n(1) Press 1 for information of SMS Pack\n";
		cout << "(2) Press 2 for SMS Recharge\n";

		cin >> c6;

            ofstream r3("users/userpaymentlog/user3/User3.txt" , ios_base::app);
			ofstream bl3("users/usertotallog/user3/User3.txt", ios::app);

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
						cin >> sms3;

						if (sms3 == 35)
						{
							cout << "\nRecharge successful\n\n";
							Balance3 = Balance3 + 35;
							r3 << "Recharge done of (SMS Pack) :: 35"; 
							bl3 <<  nbal + 35 ;
							bl3 << "\n";
						}

						else if (sms3 == 79)
						{
							cout << "\nRecharge successful\n\n";
							Balance3 = Balance3 + 79;
							r3 << "Recharge done of (SMS Pack) :: 79"; 
							bl3 <<  nbal + 79 ;
							bl3 << "\n";
						}

						else
						{
							cout <<"\nInvalid Recharge\n\n";
							goto Sms;
						}

						break;
					}
		}

				r3.close();
				bl3.close();
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

					ofstream r3("users/userpaymentlog/user3/User3.txt" , ios_base::app);
					ofstream bl3("users/usertotallog/user3/User3.txt", ios::app);

		switch(c3)
		{
			case 1:
				{
					cout << "You have selected 25 paisa/min pack\nYour charges are 35 Rs.\n";
					Balance3 = Balance3 + 35;
					r3 << "Recharge done of (Plan) :: 35"; 
					bl3 <<  nbal + 35 ;
					bl3 << "\n";
					break;
				}

				case 2:
					{
						cout << "You have selected 100 free min pack\nYour charges are 49 Rs.\n";
						Balance3 = Balance3 + 49;
						bl3 << nbal + 49 ;
						bl3 << "\n";
						r3 << "Recharge done of (Plan) :: 49"; 
						break;
					}

					case 3:
						{
							cout << "You have selected 200 free min pack\nYour charges are 65 Rs.\n";
							Balance3 = Balance3 + 65;
							bl3 <<  nbal + 65 ;
							bl3 << "\n";
							r3 << "Recharge done of (Plan) :: 65"; 
				
							break;
						}

						default:
							{
								exit(0);
								break;
							}
		}
		
		r3.close();
		bl3.close();
	}
	

	void CurrentPlan()
	{
		int c4;
	}

	void Complain3()
	{
		cout << "Type your complain here ::" << endl;
		gets(usercomplain3);
		gets(usercomplain8);
	    
	    
		ofstream c_3("users/usercomplain/user3/compalin3.txt");
		c_3 << usercomplain8;
		c_3 << "\n";
		c_3 << "\n";
		c_3.close();
	}

};

