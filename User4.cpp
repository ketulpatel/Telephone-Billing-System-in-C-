#include<iostream>
#include<string>
#include<fstream>

using namespace std;

	 static char password4[10]="hello4";
	 static char user4[10]="hi4";

class User4
{
    private:

	float balance4=0,Balance4=0;
	char name4[30],add4[50],idproof4[20];
	char usercompalin4[100];
	int datapack4,sms4;

	public:

	void main_user4()
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
							break;
						}

						case 4:
							{
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

	void registration()
	{
		cout << "\n\nEnter Your Name :: " << endl;
		cin >> name4;

		cout << "Enter Your Address :: " << endl;
		cin >> add4;

		cout << "Enter the ID-Proof given :: " << endl;
		cin >> idproof4;

		cout << "\n\nThank's" << name4 << "for registration Welcome to our network\n\n";
	}

	void CustomerCare()
	{
		int c;
		cout<<"\n\n(1) Press 1 for Balance Options\n";
		cout<<"(2) Press 2 for Activation or Deactivation realted information\n";
		cout<<"(3) Press 3 to view Current Offers\n";
		cout<<"(4) Press 4 to Register Complain\n";
		cout<<"\n    Press E to exit the menu\n\n";

		cin>>c;
		/*ofstream SaveFile("cpp-home.txt");
    SaveFile << "Hello World, from www.cpp-home.com and Loobian!";
    SaveFile.close();*/


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
							break;
						}

						case 4:
						{
							Complain();
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
							cin >> balance4;

							if (balance4 <= 2500)
							{
								cout << "Recharge succesful of " << balance4 << "\n";
								Balance4 = Balance4 + balance4;
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
							cout << "\n\nYour Current balance is :: " << Balance4 << "\n"<< endl;
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
						cin >> datapack4;

						if (datapack4 == 165)
						{
							cout << "\nRecharge succesful of 1GB 2G data for 165 Rs\n\n";
							Balance4 = Balance4 + 165;
						}

						else if (datapack4 == 245)
						{
							cout << "\nRecharge succesful of 2GB 3G data for 245 Rs\n\n";
							Balance4 = Balance4 + 245;
						}

						else if (datapack4 == 345)
						{
							cout << "\nRecharge succesful of 2G Unlimited data for 345 Rs\n\n";
							Balance4 = Balance4 + 345;
						}

						else if (datapack4 == 645)
						{
							cout << "\nRecharge succesful of 3G Unlimited data for 645 Rs\n\n";
							Balance4 = Balance4 + 645;
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

	}

	void Sms()
	{
		int c6;
		 smspa :
		cout << "\n(1) Press 1 for information of SMS Pack\n";
		cout << "(2) Press 2 for SMS Recharge\n";

		cin >> c6;

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
						cin >> sms4;

						if (sms4 == 35)
						{
							cout << "\nRecharge successful\n\n";
							Balance4 = Balance4 + 35;
						}

						else if (sms4 == 79)
						{
							cout << "\nRecharge successful\n\n";
							Balance4 = Balance4 + 79;
						}

						else
						{
							cout <<"\nInvalid Recharge\n\n";
							goto Sms;
						}

						break;
					}
		}

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

		switch(c3)
		{
			case 1:
				{
					cout << "You have selected 25 paisa/min pack\nYour charges are 35 Rs.\n";
					Balance4 = Balance4 + 35;
					break;
				}

				case 2:
					{
						cout << "You have selected 100 free min pack\nYour charges are 49 Rs.\n";
						Balance4 = Balance4 + 49;
						break;
					}

					case 3:
						{
							cout << "You have selected 200 free min pack\nYour charges are 65 Rs.\n";
							Balance4 = Balance4 + 65;
							break;
						}

						default:
							{
								exit(0);
								break;
							}
		}
	}

	void CurrentPlan()
	{
		int c4;
	}

	void Complain()
	{
		cout << "Type your complain here ::" << endl;
		cin >> usercompalin4;
	}
};





