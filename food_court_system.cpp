#include<iostream>
#include<conio.h>
#include <iomanip>  // for std::setw and std::setfill
#include<string>
using namespace std;
int main()
{
	string username, password;
	d:
	cout <<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    cout <<"\t\t\t\t\t@@        LOGIN PAGE       @@" << endl;
    cout <<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl<<endl;
	cout << " Enter Username : ";
	cin >> username;
	cout << " Enter Password : ";
	cin >> password;
	if ((username == "abdullah") && (password == "280"))
	{
        cout << "\t\t_____________________________________________________________________________" << endl;
        cout << "\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
        cout << "\t\t*****************************************************************************" << endl;
        cout << "\t\t**                                                                         **" << endl;
        cout << "\t\t**                ****WELCOME TO REFRESHMENT CENTER****                    **" << endl;
        cout << "\t\t**                                                                         **" << endl;
        cout << "\t\t*****************************************************************************" << endl;
        cout << "\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
        cout << "\t\t_____________________________________________________________________________" << endl;
		cout<<endl;
		cout<<"Press any key to continue: ";
	}
	else{
		cout << "\t\t\t\t\tInvalid UserName or Password.\n\t\t\t\t\t\t Please Try Agan "<<endl<<endl;
	goto d; 
	}
	_getch();

	system("cls");
	int Nbrg, brg = 450, Nsnd, snd = 220, Npiz, piz = 1500, Nshw, shw = 150,rPra=300,bstk=1400,lasa=1000,pas=800,NrPra,Nbstk,Nlasa,Npas, totalamt = 0;
	int a,b,c,co,st,dw,svnup,loop=1 ;
	int vna,cho,stra,mang;  
cout << "\t\t*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_" << endl;
cout << "\t\t_____________________________________________________________________________" << endl;
cout << "\t\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
cout << "\t\t*****************************************************************************" << endl;
cout << "\t\t*******                   @@@@@@@@@@@@@@@@@@@@@@@@                   ********" << endl;
cout << "\t\t*******                   @  REFRESHMENT CENTER  @                   ********" << endl;
cout << "\t\t*******                   @@@@@@@@@@@@@@@@@@@@@@@@                   ********" << endl;
cout << "\t\t*****************************************************************************" << endl;
cout << "\t\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
cout << "\t\t_____________________________________________________________________________" << endl;
cout << "\t\t*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_" << endl;

    e:
    cout <<"@@@@@@@@@@@@@@@@@@@@@@@@ " << endl;
    cout <<"@         MENU         @ " << endl;
    cout <<"@@@@@@@@@@@@@@@@@@@@@@@@ " << endl;

	cout<<"1.Burger       =Rs.450"<<endl;
	cout<<"2.Pizza        =Rs.1500"<<endl;
	cout<<"3.Shawarma     =Rs.150"<<endl;
	cout<<"4.SandWich     =Rs.220"<<endl;
	cout<<"5.Roll Paratha =Rs.300"<<endl;
	cout<<"6.Beef Steak   =Rs.1400"<<endl;
	cout<<"7.Lasagna      =Rs.1000"<<endl;
	cout<<"8.Pasta        =Rs.800"<<endl;
	cout<<"9.skip"<<endl;
	cout<<"0.Exit\n\n";
	cout<<"select your order : ";
	cin>>a;
   switch (a)
	{
	case 1:
		cout << "\nYour order is Burger..."<<endl;
        cout<<endl;
		cout << "Select number of items:";
		cin >> Nbrg;
		cout<<"Amount=" << Nbrg * brg<<endl;
		totalamt = Nbrg * brg;
		break;
		
	case 2:
		cout << "\nyour order is Pizza..."<<endl;
		cout<<endl;
		cout << "Select number of items:";
		cin >> Npiz;
		cout <<"Amount="<< Npiz * piz<< endl;
		totalamt = totalamt + Npiz * piz;
		break;
		
	case 3:
		cout << "\nYour order is Shawarma..."<<endl;
		cout<<endl;
		cout << "Select number of items:";
		cin >> Nshw;
		cout <<"Amount="<<Nshw * shw<< endl;
		totalamt = totalamt + Nshw * shw;
		break;
		
	case 4:
		cout << "\nYour order is SandWich..."<<endl;
		cout<<endl;
		cout << "Select number of items:";
		cin >> Nsnd;
		cout <<"Amount="<< Nsnd * snd<< endl;
		totalamt = totalamt + Nsnd * snd;
		break;
		
	case 5:
		cout << "\nYour order is Roll Paratha..."<<endl;
		cout<<endl;
		cout << "Select number of items:";
		cin >> NrPra;
		cout <<"Amount="<<NrPra * rPra<< endl;
		totalamt = totalamt + NrPra * rPra;
		break;
		
	case 6:
		cout << "Your order is Beef Steak..."<<endl;
		cout<<endl;
		cout << "Select number of items:";
		cin >> Nbstk;
		cout <<"Amount="<<Nbstk * bstk<< endl;
		totalamt = totalamt + Nbstk * bstk;
		break;
		
	case 7:
		cout << "\nYour order is Lasagna..."<<endl;
		cout<<endl;
		cout << "Select number of items:";
		cin >> Nlasa;
		cout <<"Amount="<<Nlasa * lasa<< endl;
		totalamt = totalamt + Nlasa * lasa;
		break;
	case 8:
		cout << "\nYour order is Pasta..."<<endl;
		cout<<endl;
		cout << "Select number of items:";
		cin >> Npas;
		cout <<"Amount="<<Npas * pas<< endl;
		totalamt = totalamt + Npas * pas;
		break;
		
	case 9:
		cout << "No one:\n click any key to move forward";
		break;
		
	case 0:
		exit(0);

	default:
		cout <<"\n\nInvalid Choice!!...Please Select The Correct Option :\n\n"<< endl;
		goto e;
	}
  _getch();
  system("cls");
    f:
    cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout<<"@@      Choose your Drinks       @@ \n";
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl<<endl;
	cout<<"1.Coke  =90"<<endl;
	cout<<"2.Dew   =90"<<endl;
	cout<<"3.Sting =90"<<endl;
	cout<<"4.7up   =90"<<endl;
	cout<<"5.skip"<<endl;
	cout<<"0.Exit\n\n";
	cout<<"\nselect your drink :";
	cin >> b;

	switch (b)
	{
	
	case 1:
		cout <<"\nYour choice is coke..."<<endl;
		cout<<endl;
		cout<<"Select number of items:";
		cin >> co; 
		cout <<"price="<< co * 90<<endl;
		totalamt = totalamt + co*90;
		break;
	case 2:
		cout << "\nYour choice is Dew..."<<endl;
		cout<<endl;
		cout<<"Select number of items:";
		cin >> dw;
		cout << "Amount=" << dw * 90<<endl;
		totalamt = totalamt + dw*90;
		break;
	case 3:
		cout << "\nyour choice is Sting..."<<endl;
		cout<<endl;
		cout<<"Select number of items:";
		cin >> st;
		cout << "Amount=" << st * 90<<endl;
		totalamt = totalamt + st*90;
		break;
	case 4:
		cout << "\nYour choice is 7Up..."<<endl;
		cout<<endl;
		cout<<"Select number of items:";
		cin >> svnup; 
		cout <<"Amount="<< svnup * 90<<endl;
		totalamt = totalamt + svnup*90;
		break;
	case 5:
		cout << "\nNothing Selected: Enter any key to continue...";
		break;
		
	case 0:
		exit(0);
		
	default:
		cout << "\n\nInvalid Entery...Please Select Correct Option:\n"<<endl;
		goto f;
	}
	_getch();
    system("cls");
    g:
    cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
    cout<<"@@     Choose your Shakes        @@\n";
   	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl<<endl;
	cout<<"1.Vanilla MilkShake    =Rs.220" << endl;
    cout<<"2.Chocolate MilkShake  =Rs.350" << endl;
    cout<<"3.Strawberry MilkShake =Rs.400" << endl;
    cout<<"4.Mango MilkShake      =Rs.280" << endl;
    cout<<"5.Skip\n";
    cout<<"0.Exit"<<endl;
    cout<<"\nselect your order : ";
	cin >> c;

	switch (c)
	{
	
	case 1:
		cout <<"Your choice is Vanilla MilkShake..."<<endl;
		cout<<endl;
		cout<<"Select number of items:";
		cin >> vna; 
		cout <<"Amount="<< vna * 220<<endl;
		totalamt = totalamt + vna*220;
		break;
	case 2:
		cout << "Your choice is Chocolate MilkShake..."<<endl;
		cout<<endl;
		cout<<"Select number of items:";
		cin >> cho;
		cout << "Amount=" << cho * 350<<endl;
		totalamt = totalamt + cho*350;
		break;
	case 3:
		cout << "Your choice is Strawberry MilkShake..."<<endl;
		cout<<endl;
		cout<<"Select number of items:";
		cin >> stra;
		cout << "Amount=" << stra * 400<<endl;
		totalamt = totalamt + stra*400;
		break;
	case 4:
		cout << "Your choice is Mango MilkShake..."<<endl;
		cout<<endl;
		cout<<"Select number of items:";
		cin >> mang; 
		cout <<"Amount="<< mang * 280<<endl;
		totalamt = totalamt + mang*280;
		break;
	case 5:
		cout << "Nothing : \n";
		break;
		
	case 0:
		exit(0);
		
	default:
		cout << "\n\nInvalid Entery....Please select Correct Option :\n"<<endl;
		goto g;
	}
	cout << "\n\n";
    cout << "*************************************************\n";
    cout << "*                                               *\n";
    cout << "*                  RECEIPT                      *\n";
    cout << "*                                               *\n";
    cout << "*************************************************\n";
    if (totalamt >= 5000) {  
        
        cout << "* Your Total Bill:         " << setw(10) << totalamt << "           *\n";
        cout << "* You Get a Discount of 20%:                    *\n";
        totalamt = totalamt - (totalamt * 20 / 100);
        cout << "* Your New Bill:           " << setw(10) << totalamt << "           *\n";
    }
    
    cout << "*                                               *\n";
    cout << "* Total Amount To Pay:     " << setw(10) << totalamt << "           *\n";
    cout << "*                                               *\n";
    cout << "*************************************************\n\n";

	_getch();
	system("cls");

	cout << "\t\t\t\t\t\tThank You!";
	cout << "\n\n\t\t\t\t\t(:****Have a good day****:)\n\n";
	_getch();
	return 0;
}
