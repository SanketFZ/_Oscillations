#include"SHM.h"



hm f1; dm t1;

int options = NULL;
int Case = NULL;

void getValue(int *o,int *options)
{
	if (*options == 1) {
		switch (*o)
		{
		case 1:cout << "Enter N for phaseValue \n" << endl;
			cin >> f1.n;
			cout << "Enter the value Omega(rad/s) \n" << endl;
			cin >> f1._omega;
			cout << "Enter the Amplitude(cm) an time(s) \n" << endl;
			cin >> f1.A >> f1.t;
			cout << "The Displacement (x) = ";
			cout << f1.Displacement(&f1.A, &f1.t) << " m";
			cout << "\nEnter Springconstant(k)" << endl;
			cin >> f1.k;
			cout << "The Force(F) = ";
			cout << f1.Force(&f1.k) << " N";
			cout << "\nThe Acceleration (a) = ";
			cout << f1._acceleration() << " ms^-2";
			break;

		case 2:
			cout << "Enter N for phaseValue \n" << endl;
			cin >> f1.n;
			cout << "Enter the value Omega(rad/s) \n" << endl;
			cin >> f1._omega;
			cout << "Enter the Amplitude \n" << endl;
			cin >> f1.A;
			cout << "Enter the value Angle(radian) \n" << endl;
			cin >> f1.angle;
			cout << "The Displacement (x) = ";
			cout << f1.Displacement(&f1.angle) << " m";
			cout << "\nEnter Mass(m)" << endl;
			cin >> f1.m;
			cout << "\nThe Force(F) = ";
			cout << f1.Force(&f1.m) << " N";
			cout << "\nThe Acceleration (a) = ";
			cout << f1._acceleration() << " ms^-2";
			break;
			

		}
	}
	else if (*options == 2) {
		switch (*o)
		{
		case 1:cout << "Enter N for phaseValue \n" << endl;
			cin >> f1.n;
			cout << "Enter the value Omega(s^-1) \n" << endl;
			cin >> f1._omega;
			cout << "Enter the Amplitude(cm) an time(s) \n" << endl;
			cin >> f1.A >> f1.t;
			cout << "The Velocity(u) = ";
			cout << f1.Velocity(&f1.A, &f1.t) << " m/s";
			break;

		case 2:
			cout << "Enter N for phaseValue \n" << endl;
			cin >> f1.n;
			cout << "Enter the value Omega(s^-1) \n" << endl;
			cin >> f1._omega;
			cout << "Enter the Amplitude \n" << endl;
			cin >> f1.A;
			cout << "Enter the value Angle(radian) \n" << endl;
			cin >> f1.angle;
			cout << "The Velocity(u) = ";
			cout << f1.Velocity(&f1.angle) << " m/s";
			break;

		}
	}
	else {
		switch (*o)
		{
		case 1:
			cout << "Enter the value Omega(s^-1) \n" << endl;
			cin >> f1._omega;
			cout << "\nEnter Springconstant(k)" << endl;
			cin >> f1.k;
			cout << "Enter the Amplitude \n" << endl;
			cin >> f1.A;
			cout << "The Energy(E) = ";
			cout << f1._energy(&f1.k) << " J";
			break;

		case 2:
			cout << "Enter the value Omega(s^-1) \n" << endl;
			cin >> f1._omega;
			cout << "\nEnter mass(m)" << endl;
			cin >> f1.m;
			cout << "Enter the Amplitude \n" << endl;
			cin >> f1.A;
			cout << "The Energy(E) = ";
			cout << f1._energy(&f1.m) << " J";
			break;
		}
	}
}
void greeting() {

	cout << right << setw(69) << "************Group5************" << endl;
	cout << right << setw(69) << "                              " << endl;
	cout << right << setw(69) << "    1)Sandesh Buchkul(841)    " << endl;
	cout << right << setw(69) << "    2)Sanket Fulzele(842)     " << endl;
	cout << right << setw(69) << "    3)Vaishnav Damal(843)     " << endl;
	cout << right << setw(69) << "    4)Dhananjay Pandhare(844) " << endl;
	cout << right << setw(69) << "                              " << endl;
	cout << right << setw(69) << "******************************" << endl;
	cout << right << setw(99) << "PBL conducted By Sharada Desai Mamdam\n\n" << endl;
}
void Menu() {
	cout << right << setw(79) << " ____Welcome to Physics class of harmonics!!____\n" << endl;
	cout << right << setw(89) << " ___Which Topic You want to Calculate select from dropdown list!!!___\n" << endl;
	cout << right << setw(70) << "#**************Menu*************#" << endl;
	cout << right << setw(70) << "#                               #" << endl;
	cout << right << setw(70) << "#     1) SHM                    #" << endl;
	cout << right << setw(70) << "#     2) Free Damping           #" << endl;
	cout << right << setw(70) << "#     3) Graphs                 #" << endl;
	cout << right << setw(70) << "#     4) Exit Application       #" << endl;
	cout << right << setw(70) << "#                               #" << endl;
	cout << right << setw(70) << "#*******************************#" << endl;

}
void DmpMenu()
{
	cout << right << setw(89) << " ___What You want to Calculate select from dropdown list!!!___\n" << endl;
	cout << right << setw(69) << "#********************************#" << endl;
	cout << right << setw(69) << "#                                #" << endl;
	cout << right << setw(69) << "#    1) Zeta ,Damping Frequency  #" << endl;
	cout << right << setw(69) << "#    2) Angle                    #" << endl;
	cout << right << setw(69) << "#    3) Amplitude                #" << endl;
	cout << right << setw(69) << "#                                #" << endl;
	cout << right << setw(69) << "#********************************#" << endl;
	do
	{
		cout << "\n\n\n";
		cout << "Choice: ";
		cin >> options;
		system("cls");
		switch (options)
		{
		case 1:t1.getvalue(&options);break;
		case 2:t1.getvalue(&options);break;
		case 3:t1.getvalue(&options);break;
		case 4:cout << "Back" << endl;break;
		default:cout << "Please Enter a valid Number" << endl;
		}
	} while (options!=4);
	
}
void HrmsMenu()
{
	cout << right << setw(89) << " ___What You want to Calculate select from dropdown list!!!___\n" << endl;
	cout << right << setw(69) << "#****************************#" << endl;
	cout << right << setw(69) << "#                            #" << endl;
	cout << right << setw(69) << "#     1) Displacement        #" << endl;
	cout << right << setw(69) << "#        Acceleration        #" << endl;
	cout << right << setw(69) << "#        Force               #" << endl;
	cout << right << setw(69) << "#     2) Velocity            #" << endl;
	cout << right << setw(69) << "#     3) Energy              #" << endl;
	cout << right << setw(69) << "#     Press 4 to go Back     #" << endl;
	cout << right << setw(69) << "#                            #" << endl;
	cout << right << setw(69) << "#****************************#" << endl;
	do
	{
		cout << "\n\n\n";
		cout << "Choice: ";
		cin >> options;
		system("cls");
		switch (options)
		{
		case 1:cout << " Call method by using   " << endl;
			cout << " 1)By Amlitude , time and Force from (k) and Acceleration" << endl;
			cout << " 2)By Angle , Force from (mass) and Acceleration          " << endl;
			do {
				cout << "\n\n\n";
				cout << "Case: ";
				cin >> Case;
				system("cls");
				switch (Case)
				{
				case 1: getValue(&Case,&options);break;
				case 2:getValue(&Case,&options);break;
				case 3:cout << "Back to choice" << endl;
				default: cout<< "Please Enter a valid choice" << endl;
				}
			} while (Case != 3);
			break;

		case 2:cout << " Call method by using   " << endl;
			cout << " 1)By Amlitude  and time" << endl;
			cout << " 2)By Angle             " << endl;

			do {
				cout << "\n\n\n";
				cout << "Case: ";
				cin >> Case;
				system("cls");
				switch (Case)
				{
				case 1: getValue(&Case,&options);break;
				case 2:getValue(&Case,&options);break;
				case 3:cout<<"Back to choice" << endl;
				default:cout << "Please enter a valid Choice" << endl;
				}
			} while (Case != 3);
			break;

		case 3 : cout << " Call method by using   " << endl;
			cout << " 1)By Springconstant(k)" << endl;
			cout << " 2)By mass(m)          " << endl;

			do {
				cout << "\n\n\n";
				cout << "Case: ";
				cin >> Case;
				system("cls");
				switch (Case)
				{
				case 1: getValue(&Case, &options);break;
				case 2:getValue(&Case, &options);break;
				case 3:cout<<"Back to choice" << endl;
				default:cout<< "Please Enter a valid choice" << endl;
				}
			} while (Case != 3);
			break;

		case 4: cout << "Back" << endl;break;
		default:cout << "Please Enter a valid Number" << endl;
		}
	} while (options != 4);



}
void ShowGraphs() { cout << "G"; }

int main()
{
	int choice = NULL;
	do {
		cout << "\n\n\n";
		greeting();
		Menu();
		cout << "Options: ";
		cin >> choice;
		system("cls");
		switch (choice)
		{
		case 1:HrmsMenu();break;
		case 2:DmpMenu();break;
		case 3:ShowGraphs();break;
		case 4:cout << "You are Exiting the Application \n  Thank You!" << endl;
		default:cout << "Please Enter a valid Number" << endl;
		}
	} while (choice != 4);

	
}
