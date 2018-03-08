# include <iostream>

using namespace std;

int main()
{
	float usernumber;
	int change,quarters,dimes,nickels,pennies;
	cout<< "Enter amount of money in cents:";
	cin >>usernumber;
	change=usernumber*100;
	quarters=change/25;
	change=change%25;
	dimes=change/10;
	change=change%10;
	nickels=change/5;
	pennies=change%100;

	cout<<"\nquarters:"<<quarters<<endl;
	cout<<"Dimes:"<<dimes<<endl;
	cout<<"Nickels"<<nickels<<endl;
	cout<<"Pennies:"<<pennies<<endl;
	system("Pause");
	return(0);
}

	