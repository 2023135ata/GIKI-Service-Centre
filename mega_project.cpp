#include <iostream>
#include <string>
#include <cctype>

using namespace std;
char food (char a);
char menu (char b);
char ss (char c);
int cart (int a);
void mm ();
int asrar (int a);
bool login();
void registerUser();
void displayMenu();
void groc ();
void transport ();
int  cartt (int a);
void tickets (int a);
string username = "admin";
string password = "password123";


int main()
{
    bool loggedIn = false;

    while (!loggedIn) {
    cout << "----------------------------------------------------------------------------------"<<endl;
    cout << "|                                                                                |"<<endl;
	cout << "| Welcome to Ghulam Ishaq khan Institute of Engineering Sciences and Technology  |"<< endl;
	cout << "|                                                                                | "<<endl;
	cout << "----------------------------------------------------------------------------------"<<endl;
        
        cout<< "1. Register (sudents and faculty members only)\n";
		cout<< "2. Login\n";
        cout<< "3. Exit\n";
        cout<< "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
        	case 1:
                registerUser();
                break;
            case 2:
                loggedIn = login();
                break;
            case 3:
                cout << "Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    // User is logged in, display the main menu
    displayMenu();

    return 0;
}


void mm ()

{
    int a;

	cout << "Select the option you want: "<<endl;
	cout << "1. Order food" << endl;
	cout << "2. Bus Transport" << endl;
	cout << "3. Upcoming events and tickets" << endl;
    cout << "Selected option: ";
    cin >> a;
	switch (a)
	
	{
		case 1:
			food (a);
			break;
		case 2:
			transport ();
			break;
		case 3:
			tickets (a);
			break;
		default :
			cout << "Enter The Give option , Try Again."<<endl;
			mm();
			break;
		
	}
}



char food (char a)

{
	cout << "select restraunt : " << endl;
	cout << "A. Ayan Gardens"<<endl;
	cout << "B. Hot and Spicy" << endl;
	cout << "C. Raju Restraunt" << endl;
	cout << "D. Asrar Bucks (Bevrages)" << endl;
	cout << "E. Groccery " << endl;
	cout << "F. Main Menu "<< endl;
	cout << "selected option: ";
	cin >> a;
	ss (a);
}

char menu (char b)

{
	cout << "please select your item" << endl;
	cout << "A. Zinger burger , 350 PKR" << endl;
	cout << "B. Pizza, 750 PKR (MEDIUM SIZE)"<<endl;
	cout << "C. chicken sandwich , 400 PKR"<< endl;
	cout << "D. Pasta , 450 PKR" << endl;
	cout << "selected option: ";
	
	cin >> b;
	cart (b);
	
}


char ss (char c)

{
  

    switch (toupper(c))
  {
  	case 'A':
  		menu (c);
  		break;
  	case 'B':
  		menu (c);
  		break;
  	case 'C':
  		menu (c);
  		break;
  	case 'D':
  		asrar (c);
  		break;
    case 'E':
    	groc();
    	break;
    case 'F':
    	mm();
    	break;
  	default :
  		cout << "Enter valid option "<<endl;
		food (c);
  		break;
  }
}
int  cart (int a)

{   int b;
   	char c;
   	double d;
   	double e;
	cout << "enter your Hostel number: " ;
	cin >> b;
	cout << "enter your phone number : " ;
	cin >> d;
	cout << "Your order has been placed!"<<endl;
	cout << "Enter Your bank account number :";
	cin>> e;
	cout << "Easy Paisa (online payment) : 123423424"<<endl;
    cout << "do you wish to order again ?"<<endl;
	cout << "Press Y or y for yes and N or n for No to return to main menu: ";
	cin >> c;
	c = toupper(c);
    

    switch (c)
    
    {
    	case 'Y':
    		food (c);
    		break;
    	case 'N':
    		mm ();
    		break;
    	default :
    		cout << "Invalid option detected returning to main menu"<< endl;
    	    mm();
    	break;
        
	}
	
}
 
	int asrar (int a)
	{
		cout << "Select the beverage you want ";
		cout << endl;
		cout << "1.Cold coffee , 220 PKR"<<endl;
		cout << "2.Oreo Shake , 240 PKR" <<endl;
		cout << "3.Milo shake , 240 PKR" << endl;
		cout << "4.Milo-Oreo shake , 240 PKR"<<endl;
		cout << "5.Orange juice (winter special) , 220 PKR"<<endl;
		cout << "6.Tea , 90 PKR (Regular size)"<<endl;
		cout << "7.Hot Coffee , 90PKR (Regular Size)"<<endl;
		cout << "8. Back"<<endl;
		cout << "selected option : ";
		cin >> a;
		if (a == 8)
		{
			food (a);
		}
		cart (a);
		
	}
	
bool login() {
    string inputUsername;
    string inputPassword;

    cout << "Enter username: ";
    cin >> inputUsername;
    cout << "Enter password: ";
    cin >> inputPassword;

    if (inputUsername == username && inputPassword == password) {
        cout << "Login successful!\n";
        return true;
    } else {
        cout << "Incorrect username or password. Please try again.\n";
        return false;
    }
}
void registerUser() {
    cout << "Enter a new username: ";
    cin >> username;
    cout << "Enter a new password: ";
    cin >> password;
    cout << "Registration successful!\n";
}
void displayMenu() {
    // Add your main menu functionality here
    cout<< "Welcome, " << username << "!\n";
    mm ();
    // Add other menu options and functionality as needed
}
void groc()
   { 
    int a=1;
    char c;
   	string g [5];
   	cout << "So, what do you want today?" << endl;
   	for (int i=0 ; i < 5 ; i++)
   	{
		cout << "enter item " << a << " :";
   		cin >> g[i];
   		a++;
    } 
   	cout << "do you wish to order again ?"<<endl;
   	cout << "Press Y for yes and N and to go back to main menu : ";
   	cin >> c;
   	c = toupper (c);

    switch (c)
    
    {
    	case 'Y':
    		groc ();
    		break;
    	case 'N':
    		cout << "Thank You for ordering. Your order and total bill will be with you shortly."<<endl;
    		cout << "PAY OUR DELIVERY PARTNER WHEN HE ARRIVES"<<endl;
    		mm();
    		break;
    	default :
    		cout << "Invalid option detected returning to main menu"<< endl;
    	    mm();
    	break;
        
	}
   }
void transport() 
{
    char choice;
        // Display main menu
                char option;
                int regNo, destination;
  				cout << "|--------------------------|"<<endl;
  				cout << "|     Transport System     |" <<endl;
  				cout << "|--------------------------|"<<endl;
                cout << "Do you want to book a ticket? (Y/y for Yes, N/n for No)\n";
                cin >> option;

                if (toupper(option)== 'Y') 
				{
                    cout << "Enter your Registration Number: ";
                    cin >> regNo;

                    cout << "Where do you want to go?\n";
                    cout << "1- GIKI to Rawalpindi - 1hr 40min\n";
                    cout << "2- GIKI to Islamabad  - 1hr 41min\n";
                    cout << "3- GIKI to Abbottabad - 1hr 56min\n";
                    cout << "4- GIKI to Peshawar   - 2hr 01min\n";
                    cin >> destination;

                    double price;
                    string transportMode;
                    char choose;

                    switch (destination) 
					{
                        case 1:
                            price = 350.0;
                            transportMode = "Rawalpindi";
                            break;
                        case 2:
                            price = 350.0;
                            transportMode = "Islamabad";
                            break;
                        case 3:
                            price = 350.0;
                            transportMode = "Abbottabad";
                            break;
                        case 4:
                            price = 350.0;
                            transportMode = "Peshawar";
                            break;
                        default:
                            cout << "Invalid destination choice.\n";
                            cout<<"Do you want to try again!!(Y/N)";
                            cin>>choose;
                            if(toupper(choose)=='Y')
                            {
                            	transport();
							}
							else
							{
								mm(); // Go back to the main menu
							}
                            break; 
                    }

                    cout << "Price for " << transportMode << ": PKR" << price << "\n";

                    char confirm;
                    cout << "Do you want to confirm the booking? (Y/N): ";
                    cin >> confirm;

                    if (toupper(confirm) == 'Y') 
					{
                        string phoneNumber;
                        cout << "Enter your phone number: ";
                        cin >> phoneNumber;

                        string accountDetails;
                        cout << "Enter your bank account details for online transfer: ";
                        cin >> accountDetails; // Clear the newline character

                        // Simulate payment (in a real application, this would involve secure payment processing)
                        cout << "Payment successful! Booking confirmed for " << transportMode << ".\n";
                    } 
					else 
					{
                        cout << "Booking canceled.\n";
                    }

                } 
				else 
				{
                    cout << "Booking canceled.\n";
                }

                cout << "Do you want to book again? (Y/N): ";
                cin >> option;
                if (toupper(option) == 'Y') 
				{
                 transport();//Call the function for booking again
                }
                else
				{
                	mm();//Return to main menu
				}
}
int  cartt (int a)

{   double b;
   	char c;
   	string accountDetails;
   	string phoneNumber;
   
	cout << "enter your Reg number: " ;
	cin >> b;
	
	cout << "Enter your phone number: " << endl;
    cin >> phoneNumber;

    cout << "Enter your bank account details for online transfer: " << endl;
    cin >> accountDetails; 

                        
    cout << "Payment successful! Booking confirmed" << endl;;
    cout << "Do you wish to book another ticket ?"<<endl;
	cout << "Press Y or y for yes and N or n for No to return to main menu: ";
	cin >> c;
    c = toupper(c);

    switch (c)
    
    {
    	case 'Y':
    		tickets (c);
    		break;
    	case 'N':
    		mm ();
    		break;
    	default :
    		cout << "Invalid option detected returning to main menu"<< endl;
    	    mm();
    	break;
        
	}
	
}

void tickets (int a)
{
	cout << "|---------------|"<<endl;
	cout << "|    Events:    |" << endl;
	cout << "|---------------|"<<endl;
	cout << "1. Abdul hannan concert (GMS)"<<endl;
	cout << "2. Airex (AIAA)(Upcoming)"<<endl;
	cout << "3. Intra Mimes (Naqsh Arts)"<<endl;
	cout << "3. NEO (National Electronics Olympiad) (IEEE)"<<endl;
	cout << "4. Back to main menu";
	cout << "Selected option : ";
	cin >> a;
	if (a == 5)
	{
		mm();
	}
	cartt (a);
}


