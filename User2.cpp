#include<iostream>
#include<string.h>
#include<fstream>
#include<cstdlib>
#include<time.h>
#include<windows.h>

using namespace std;

     static char password2[10]="hello2";
	 static char user2[10]="hi2"; 

class User2
{
private :
	
	float balance2=0,Balance2=0,Nbal,nbal;
	string name2,add2,idproof2,card_type2;
	char usercomplain2[100];
	int datapack2,sms2;
	char usercomplain7[100];
	string ch2;
	float pay2;
	string chs;

public:
  
	void main_user2()
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
					ifstream s2;
					s2.open("admin/Messages/user2/User2.txt");
					
					while(!s2.eof())
						{
							getline(s2,chs);
	        				cout<<chs;
						}
						s2.close();
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
		int bill2;
		
		cout << "\n\n(1) Press 1 for billing status\n";
		cout << "(2) Press 2 for payment\n\n";
		cin >> bill2;
		
		switch(bill2)
		{
			case 1:
				{
					cout << "\n\n Your current Billing Status according to Date wise is :: \n\n";
					
					ifstream bill_2;
					bill_2.open("users/usertotallog/user2/User2.txt");
					
					while(!bill_2.eof())
						{
							getline(bill_2,ch2);
	        				cout<<ch2;
						}
						bill_2.close();
						system ("pause");
						
						break;
				}
				
				case 2:
					{
						cout << "Enter the amount you want to pay :: ";
						cin >> pay2;
						
						ofstream payme2("users/paymentlog/user2/paywallet_2" , ios_base::app);
						
						payme2 << pay2 << endl;
						
						payme2.close();
						
						break;
					}
		}
	}

	void registration()
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
							Complain2();
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
							cin >> balance2;
							Nbal = balance2;
							
							ofstream bl2("users/usertotallog/user2/User2.txt", ios::app);
							ofstream r2("users/userpaymentlog/user2/User2.txt" , ios_base::app);
							if (balance2 <= 2500)
							{
								cout << "Recharge succesful of " << balance2 << "\n";
								Balance2 = Balance2 + balance2;
								r2 << "Recharge Done of " << Balance2;
								r2 << "\n";
								r2.close();
								
								nbal=nbal+Nbal;
								
								bl2 << nbal;
								bl2 << "\n";
								bl2.close(); 
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
							cout << "\n\nYour Current balance is :: " << Balance2 << "\n"<< endl;
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

ofstream r2("users/userpaymentlog/user2/User2.txt" , ios_base::app);
ofstream bl2("users/usertotallog/user2/User2.txt", ios::app);

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
						cin >> datapack2;

						if (datapack2 == 165)
						{
							cout << "\nRecharge succesful of 1GB 2G data for 165 Rs\n\n";
							Balance2 = Balance2 + 165;
							r2 << "Recharge done of (Data Pack) :: 165"; 
							bl2 <<  nbal + 165 ;
							bl2 << "\n";
						}

						else if (datapack2 == 245)
						{
							cout << "\nRecharge succesful of 2GB 3G data for 245 Rs\n\n";
							Balance2 = Balance2 + 245;
							r2 << "Recharge done of (Data Pack) :: 245"; 
							bl2 <<  nbal + 245 ;
							bl2 << "\n";
						}

						else if (datapack2 == 345)
						{
							cout << "\nRecharge succesful of 2G Unlimited data for 345 Rs\n\n";
							Balance2 = Balance2 + 345;
							r2 << "Recharge done of (Data Pack) :: 345"; 
							bl2 <<  nbal + 345 ;
							bl2 << "\n";
						}

						else if (datapack2 == 645)
						{
							cout << "\nRecharge succesful of 3G Unlimited data for 645 Rs\n\n";
							Balance2 = Balance2 + 645;
							r2 << "Recharge done of (Data Pack) :: 645"; 
							bl2 <<  nbal + 645 ;
							bl2 << "\n";
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
		r2.close();
		bl2.close();
	}

	void Sms()
	{
		int c6;
		 smspa :
		cout << "\n(1) Press 1 for information of SMS Pack\n";
		cout << "(2) Press 2 for SMS Recharge\n";

		cin >> c6;

            ofstream r2("users/userpaymentlog/user2/User2.txt" , ios_base::app);
			ofstream bl2("users/usertotallog/user2/User2.txt", ios::app);

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
						cin >> sms2;

						if (sms2 == 35)
						{
							cout << "\nRecharge successful\n\n";
							Balance2 = Balance2 + 35;
							r2 << "Recharge done of (SMS Pack) :: 35"; 
							bl2 <<  nbal + 35 ;
							bl2 << "\n";
						}

						else if (sms2 == 79)
						{
							cout << "\nRecharge successful\n\n";
							Balance2 = Balance2 + 79;
							r2 << "Recharge done of (SMS Pack) :: 79"; 
							bl2 <<  nbal + 79 ;
							bl2 << "\n";
						}

						else
						{
							cout <<"\nInvalid Recharge\n\n";
							goto Sms;
						}

						break;
					}
		}

				r2.close();
				bl2.close();
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

					ofstream r2("users/userpaymentlog/user2/User2.txt" , ios_base::app);
					ofstream bl2("users/usertotallog/user2/User2.txt", ios::app);

		switch(c3)
		{
			case 1:
				{
					cout << "You have selected 25 paisa/min pack\nYour charges are 35 Rs.\n";
					Balance2 = Balance2 + 35;
					r2 << "Recharge done of (Plan) :: 35"; 
					bl2 <<  nbal + 35 ;
					bl2 << "\n";
					break;
				}

				case 2:
					{
						cout << "You have selected 100 free min pack\nYour charges are 49 Rs.\n";
						Balance2 = Balance2 + 49;
						bl2 << nbal + 49 ;
						bl2 << "\n";
						r2 << "Recharge done of (Plan) :: 49"; 
						break;
					}

					case 3:
						{
							cout << "You have selected 200 free min pack\nYour charges are 65 Rs.\n";
							Balance2 = Balance2 + 65;
							bl2 <<  nbal + 65 ;
							bl2 << "\n";
							r2 << "Recharge done of (Plan) :: 65"; 
				
							break;
						}

						default:
							{
								exit(0);
								break;
							}
		}
		
		r2.close();
		bl2.close();
	}
	

	void CurrentPlan()
	{
		int c4;
	}

	void Complain2()
	{
		cout << "Type your complain here ::" << endl;
		gets(usercomplain2);
		gets(usercomplain7);
	    
	    
		ofstream c_2("users/usercomplain/user2/compalin2.txt");
		c_2 << usercomplain7;
		c_2 << "\n";
		c_2 << "\n";
		c_2.close();
	}

};

