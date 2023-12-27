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
