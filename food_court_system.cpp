#include<iostream>
#include<conio.h>
#include <iomanip>  
#include<string>
using namespace std;

int main() {
    string username, password;

    // Login page loop, repeats if login fails
    d:
    // Display login page banner
    cout <<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    cout <<"\t\t\t\t\t@@        LOGIN PAGE       @@" << endl;
    cout <<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl << endl;

    // Prompt for username and password
    cout << " Enter Username : ";
    cin >> username;
    cout << " Enter Password : ";
    cin >> password;

    // Check if username and password are correct
    if ((username == "abdullah") && (password == "280")) {
        // If login successful, display welcome message
        cout << "\t\t_____________________________________________________________________________" << endl;
        cout << "\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
        cout << "\t\t*****************************************************************************" << endl;
        cout << "\t\t**                                                                         **" << endl;
        cout << "\t\t**                ****WELCOME TO REFRESHMENT CENTER****                    **" << endl;
        cout << "\t\t**                                                                         **" << endl;
        cout << "\t\t*****************************************************************************" << endl;
        cout << "\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
        cout << "\t\t_____________________________________________________________________________" << endl;
        cout << endl;
        cout << "Press any key to continue: ";
    } else {
        // If login fails, show error and retry
        cout << "\t\t\t\t\tInvalid Username or Password.\n\t\t\t\t\t\t Please Try Again " << endl << endl;
        goto d; 
    }

    _getch();
    system("cls");  // Clear the screen

    // Initialize variables for order items and prices
    int Nbrg, brg = 450, Nsnd, snd = 220, Npiz, piz = 1500, Nshw, shw = 150, rPra = 300, bstk = 1400, lasa = 1000, pas = 800;
    int NrPra, Nbstk, Nlasa, Npas, totalamt = 0;
    int a, b, c, co, st, dw, svnup, loop = 1;
    int vna, cho, stra, mang;

    // Display food court welcome banner
    cout << "\t\t*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
    cout << "\t\t_____________________________________________________________________________" << endl;
    cout << "\t\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
    cout << "\t\t*****************************************************************************" << endl;
    cout << "\t\t*******                   @@@@@@@@@@@@@@@@@@@@@@@@                   ********" << endl;
    cout << "\t\t*******                   @  REFRESHMENT CENTER  @                   ********" << endl;
    cout << "\t\t*******                   @@@@@@@@@@@@@@@@@@@@@@@@                   ********" << endl;
    cout << "\t\t*****************************************************************************" << endl;
    cout << "\t\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
    cout << "\t\t_____________________________________________________________________________" << endl;
    cout << "\t\t*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;

    // Start the menu loop
    e:
    // Display the menu
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@ " << endl;
    cout << "@         MENU         @ " << endl;
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@ " << endl;

    // List food items and prices
    cout << "1.Burger       =Rs.450" << endl;
    cout << "2.Pizza        =Rs.1500" << endl;
    cout << "3.Shawarma     =Rs.150" << endl;
    cout << "4.SandWich     =Rs.220" << endl;
    cout << "5.Roll Paratha =Rs.300" << endl;
    cout << "6.Beef Steak   =Rs.1400" << endl;
    cout << "7.Lasagna      =Rs.1000" << endl;
    cout << "8.Pasta        =Rs.800" << endl;
    cout << "9.skip" << endl;
    cout << "0.Exit\n\n";
    cout << "Select your order: ";
    cin >> a;

    // Process the user's food order
    switch (a) {
        case 1:
            // Order Burger
            cout << "\nYour order is Burger..." << endl;
            cout << endl;
            cout << "Select number of items:";
            cin >> Nbrg;
            cout << "Amount=" << Nbrg * brg << endl;
            totalamt = Nbrg * brg;
            break;

        case 2:
            // Order Pizza
            cout << "\nYour order is Pizza..." << endl;
            cout << endl;
            cout << "Select number of items:";
            cin >> Npiz;
            cout << "Amount=" << Npiz * piz << endl;
            totalamt = totalamt + Npiz * piz;
            break;

        case 3:
            // Order Shawarma
            cout << "\nYour order is Shawarma..." << endl;
            cout << endl;
            cout << "Select number of items:";
            cin >> Nshw;
            cout << "Amount=" << Nshw * shw << endl;
            totalamt = totalamt + Nshw * shw;
            break;

        case 4:
            // Order SandWich
            cout << "\nYour order is SandWich..." << endl;
            cout << endl;
            cout << "Select number of items:";
            cin >> Nsnd;
            cout << "Amount=" << Nsnd * snd << endl;
            totalamt = totalamt + Nsnd * snd;
            break;

        case 5:
            // Order Roll Paratha
            cout << "\nYour order is Roll Paratha..." << endl;
            cout << endl;
            cout << "Select number of items:";
            cin >> NrPra;
            cout << "Amount=" << NrPra * rPra << endl;
            totalamt = totalamt + NrPra * rPra;
            break;

        case 6:
            // Order Beef Steak
            cout << "Your order is Beef Steak..." << endl;
            cout << endl;
            cout << "Select number of items:";
            cin >> Nbstk;
            cout << "Amount=" << Nbstk * bstk << endl;
            totalamt = totalamt + Nbstk * bstk;
            break;

        case 7:
            // Order Lasagna
            cout << "\nYour order is Lasagna..." << endl;
            cout << endl;
            cout << "Select number of items:";
            cin >> Nlasa;
            cout << "Amount=" << Nlasa * lasa << endl;
            totalamt = totalamt + Nlasa * lasa;
            break;

        case 8:
            // Order Pasta
            cout << "\nYour order is Pasta..." << endl;
            cout << endl;
            cout << "Select number of items:";
            cin >> Npas;
            cout << "Amount=" << Npas * pas << endl;
            totalamt = totalamt + Npas * pas;
            break;

        case 9:
            // Skip order
            cout << "No order selected:\nClick any key to move forward";
            break;

        case 0:
            // Exit the program
            exit(0);

        default:
            // Handle invalid input
            cout << "\n\nInvalid Choice!!...Please Select The Correct Option:\n\n" << endl;
            goto e;
    }

    _getch();
    system("cls");  // Clear the screen

    // Drinks menu loop
    f:
    // Display drinks menu
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    cout << "@@      Choose your Drinks       @@ \n";
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl << endl;
    cout << "1.Coke  =Rs.90" << endl;
    cout << "2.Dew   =Rs.90" << endl;
    cout << "3.Sting =Rs.90" << endl;
    cout << "4.7up   =Rs.90" << endl;
    cout << "5.Skip" << endl;
    cout << "0.Exit\n\n";
    cout << "\nSelect your drink: ";
    cin >> b;

    // Process the user's drink order
    switch (b) {
        case 1:
            // Order Coke
            cout << "\nYour choice is Coke..." << endl;
            cout << endl;
            cout << "Select number of items:";
            cin >> co; 
            cout << "Amount=" << co * 90 << endl;
            totalamt = totalamt + co * 90;
            break;

        case 2:
            // Order Dew
            cout << "\nYour choice is Dew..." << endl;
            cout << endl;
            cout << "Select number of items:";
            cin >> dw;
            cout << "Amount=" << dw * 90 << endl;
            totalamt = totalamt + dw * 90;
            break;

        case 3:
            // Order Sting
            cout << "\nYour choice is Sting..." << endl;
            cout << endl;
            cout << "Select number of items:";
            cin >> st;
            cout << "Amount=" << st * 90 << endl;
            totalamt = totalamt + st * 90;
            break;

        case 4:
            // Order 7up
            cout << "\nYour choice is 7up..." << endl;
            cout << endl;
            cout << "Select number of items:";
            cin >> svnup;
            cout << "Amount=" << svnup * 90 << endl;
            totalamt = totalamt + svnup * 90;
            break;

        case 5:
            // Skip drink order
            cout << "No drink selected:\nClick any key to move forward";
            break;

        case 0:
            // Exit the program
            exit(0);

        default:
            // Handle invalid input
            cout << "\n\nInvalid Choice!!...Please Select The Correct Option:\n\n" << endl;
            goto f;
    }

    _getch();
    system("cls");  // Clear the screen

    // Desserts menu loop
    g:
    // Display desserts menu
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    cout << "@@      Choose your Favourite Dessert       @@ \n";
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl << endl;
    cout << "1.Vanilla ice-cream   =Rs.100" << endl;
    cout << "2.Chocolate ice-cream =Rs.100" << endl;
    cout << "3.Strawberry ice-cream=Rs.100" << endl;
    cout << "4.Mango ice-cream     =Rs.100" << endl;
    cout << "5.Skip" << endl;
    cout << "0.Exit\n\n";
    cout << "\nSelect your favourite dessert: ";
    cin >> c;

    // Process the user's dessert order
    switch (c) {
        case 1:
            // Order Vanilla ice-cream
            cout << "\nYour favourite is Vanilla ice-cream..." << endl;
            cout << endl;
            cout << "Select number of items:";
            cin >> vna;
            cout << "Amount=" << vna * 100 << endl;
            totalamt = totalamt + vna * 100;
            break;

        case 2:
            // Order Chocolate ice-cream
            cout << "\nYour favourite is Chocolate ice-cream..." << endl;
            cout << endl;
            cout << "Select number of items:";
            cin >> cho;
            cout << "Amount=" << cho * 100 << endl;
            totalamt = totalamt + cho * 100;
            break;

        case 3:
            // Order Strawberry ice-cream
            cout << "\nYour favourite is Strawberry ice-cream..." << endl;
            cout << endl;
            cout << "Select number of items:";
            cin >> stra;
            cout << "Amount=" << stra * 100 << endl;
            totalamt = totalamt + stra * 100;
            break;

        case 4:
            // Order Mango ice-cream
            cout << "\nYour favourite is Mango ice-cream..." << endl;
            cout << endl;
            cout << "Select number of items:";
            cin >> mang;
            cout << "Amount=" << mang * 100 << endl;
            totalamt = totalamt + mang * 100;
            break;

        case 5:
            // Skip dessert order
            cout << "No dessert selected:\nClick any key to move forward";
            break;

        case 0:
            // Exit the program
            exit(0);

        default:
            // Handle invalid input
            cout << "\n\nInvalid Choice!!...Please Select The Correct Option:\n\n" << endl;
            goto g;
    }

    // Print a couple of blank lines for spacing
	cout << "\n\n\n";
	
	// Print the receipt header
	cout << "\t\t\t\t*************************************************\n";
	cout << "\t\t\t\t*                  RECEIPT                      *\n";
	cout << "\t\t\t\t*************************************************\n";
	
	// If the total amount is greater than or equal to 5000 apply a discount
	if (totalamt >= 5000) {
		cout << "\t\t\t\t*                                               *\n";  
	    // Total bill amount before discount
	    cout << "\t\t\t\t   Your Total Bill:         " << setw(10) << "Rs." << totalamt << endl;
	    cout << "\t\t\t\t*  You Get a Discount of 20%:                   *\n";
	    // 20% discount applied on the total amount
	    totalamt = totalamt - (totalamt * 20 / 100);
	    cout << "\t\t\t\t   Your New Bill:           " << setw(10) << "Rs." << totalamt << endl;
	    cout << "\t\t\t\t*                                               *\n";
	    cout << "\t\t\t\t*************************************************\n";
	}

	cout << "\t\t\t\t   Total Amount To Pay:     " << setw(10) << "Rs." << totalamt << endl;
	cout << "\t\t\t\t*************************************************\n\n";
	
	// Wait for a key press from the user
	_getch();
	
	// Clear the screen
	system("cls");
	
	// Print a thank you message
	cout << "\n\n\t\t\t\t\t\tThank You!";
	// Print a message wishing the user a good day
	cout << "\n\n\t\t\t\t\t(:****Have a good day****:)\n\n";


    // Exit the program
    return 0;
}