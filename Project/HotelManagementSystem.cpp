#include <iostream>
using namespace std;
int main()
{
  string choice;
  int option;
  int Qty_rooms = 0, Qty_Idli = 0, Qty_Dose = 0, Qty_palav = 0, Qty_Biryani = 0;
  float price_rooms = 0, price_Idli = 0, price_Dose = 0, price_palav = 0, price_Biryani = 0;
  string name;

  cout << "\tWelcome to the hotel" << endl;
  cout << "***************************************" << endl;

  while (true)
  {
    cout << "Enter you are 'owner' or 'customer' (or 'exit' to quit)" << endl;
    cin >> choice;

    if (choice == "owner")
    {
      option = 1;
    }
    else if (choice == "customer")
    {
      option = 2;
    }
    else if (choice == "exit")
    {
      cout << "Thank you for visiting the hotel" << endl;
      break;
    }
    else
    {
      option = 0;
    }

    switch (option)
    {
    case 1:
    {
      int items;
      int update_rooms = 0, update_Idli = 0, update_Dose = 0, update_palav = 0, update_Biryani = 0;
      string choice;
      cout << "\tWelcome to owner Dashboard" << endl;
      cout << "*********************************************************" << endl;
      cout << "Enter the choice -> initial_items -> update_items " << endl;
      cin >> choice;
      if (choice == "initial_items")
      {
        items = 11;
      }
      else if (choice == "update_items")
      {
        items = 22;
      }
      else
      {
        cout << "Invalid input" << endl;
      }
      switch (items)
      {
      case 11:
        cout << "Enter the Quantity of items available in the hotel" << endl;
        cout << "Enter the number of rooms available : ";
        cin >> Qty_rooms;
        cout << "Enter the Quantity of Idli available : ";
        cin >> Qty_Idli;
        cout << "Enter the Quantity of Dose available : ";
        cin >> Qty_Dose;
        cout << "Enter the Quantity of Palav available : ";
        cin >> Qty_palav;
        cout << "Enter the Quantity of Biryani available : ";
        cin >> Qty_Biryani;
        cout << endl;

        cout << "Price of items available in the hotel" << endl;
        cout << "Enter the price of rooms : ";
        cin >> price_rooms;
        cout << "Enter the price of Idli : ";
        cin >> price_Idli;
        cout << "Enter the price of Dose : ";
        cin >> price_Dose;
        cout << "Enter the price of Palav : ";
        cin >> price_palav;
        cout << "Enter the price of Biryani : ";
        cin >> price_Biryani;
        cout << endl;
        break;
      case 22:
        cout << "Enter the Quantity of items available in the hotel" << endl;
        cout << "Enter the number of rooms available : ";
        cin >> update_rooms;
        Qty_rooms = Qty_rooms + update_rooms;
        cout << "Enter the Quantity of Idli available : ";
        cin >> update_Idli;
        Qty_Idli = Qty_Idli + update_Idli;
        cout << "Enter the Quantity of Dose available : ";
        cin >> update_Dose;
        Qty_Dose = Qty_Dose + update_Dose;
        cout << "Enter the Quantity of Palav available : ";
        cin >> update_palav;
        Qty_palav = Qty_palav + update_palav;
        cout << "Enter the Quantity of Biryani available : ";
        cin >> update_Biryani;
        Qty_Biryani = Qty_Biryani + update_Biryani;
        break;
      }
      break;
    }
    case 2:
    {
      int sold_rooms = 0, sold_Idli = 0, sold_Dose = 0, sold_palav = 0, sold_Biryani = 0;
      int total_amount = 0;
      cout << "Enter the name of customer : ";
      cin >> name;
      cout << "Welcome to Customer Dashboard - '" << name << "'" << endl;
      cout << "*********************************************************" << endl;
      cout << "\tMenu of the hotel" << endl;

      cout << "Select the items you want to buy" << endl;
      cout << "*********************************************************" << endl;
      cout << "  items  \t" << "Quantity\t" << "Price" << endl;
      cout << "1.Rooms  \t" << Qty_rooms << "\t\t" << price_rooms << endl
           << "2.Idli   \t" << Qty_Idli << "\t\t" << price_Idli << endl
           << "3.Dose   \t" << Qty_Dose << "\t\t" << price_Dose << endl
           << "4.Palav  \t" << Qty_palav << "\t\t" << price_palav << endl
           << "5.Biryani\t" << Qty_Biryani << "\t\t" << price_Biryani << endl;
      cout << endl;

      cout << "Enter the number of rooms you want to buy : ";
      if (Qty_rooms == 0)
      {
        cout << "Sorry! Rooms are not available" << endl;
      }
      else
      {
        cin >> sold_rooms;
        while (sold_rooms > Qty_rooms || sold_rooms < 0)
        {
          cout << "Sorry! Only " << Qty_rooms << " rooms are available. Enter within the quantity : ";
          cin >> sold_rooms;
        }
        Qty_rooms = Qty_rooms - sold_rooms;
      }

      cout << "Enter the quantity of Idli you want to buy: ";
      if (Qty_Idli == 0)
      {
        cout << "Sorry! Idli is not available" << endl;
      }
      else
      {
        cin >> sold_Idli;
        while (sold_Idli > Qty_Idli || sold_Idli < 0)
        {
          cout << "Sorry! Only " << Qty_Idli << " Idlis are available. Enter within the quantity: ";
          cin >> sold_Idli;
        }
        Qty_Idli = Qty_Idli - sold_Idli;
      }

      cout << "Enter the quantity of Dose you want to buy: ";
      if (Qty_Dose == 0)
      {
        cout << "Sorry! Dose is not available" << endl;
      }
      else
      {
        cin >> sold_Dose;
        while (sold_Dose > Qty_Dose || sold_Dose < 0)
        {

          cout << "Sorry! Only " << Qty_Dose << " Doses are available. Enter within the quantity: ";
          cin >> sold_Dose;
        }
        Qty_Dose = Qty_Dose - sold_Dose;
      }

      cout << "Enter the quantity of Palav you want to buy: ";
      if (Qty_palav == 0)
      {
        cout << "Sorry! Palav is not available" << endl;
      }
      else
      {
        cin >> sold_palav;
        while (sold_palav > Qty_palav || sold_palav < 0)
        {

          cout << "Sorry! Only " << Qty_palav << " Palavs are available. Enter within the quantity: ";
          cin >> sold_palav;
        }
        Qty_palav = Qty_palav - sold_palav;
      }

      cout << "Enter the quantity of Biryani you want to buy: ";
      if (Qty_Biryani == 0)
      {
        cout << "Sorry! Biryani is not available" << endl;
      }
      else
      {
        cin >> sold_Biryani;
        while (sold_Biryani > Qty_Biryani || sold_Biryani < 0)
        {
          cout << "Sorry! Only " << Qty_Biryani << " Biryanis are available. Enter within the quantity: ";
          cin >> sold_Biryani;
        }
        Qty_Biryani = Qty_Biryani - sold_Biryani;
      }

      cout << "\nTotla Bill is : ";
      total_amount = (sold_rooms * price_rooms) + (sold_Idli * price_Idli) + (sold_Dose * price_Dose) + (sold_palav * price_palav) + (sold_Biryani * price_Biryani);
      cout << total_amount << "Rs." << endl;

      if (Qty_rooms == 0 && Qty_Idli == 0 && Qty_Dose == 0 && Qty_palav == 0 && Qty_Biryani == 0)
      {
        cout << "Sorry! All items are sold out." << endl;
        cout << "Thank you '" << name << "'.for visiting the hotel" << endl;
        break;
      }
      cout << "\n*****Thank you '" << name << "'.For visiting the hotel*****" << endl;
      break;
    }
    default:
      cout << "Invalid input" << endl;
      break;
    }
    cout << endl;
  }
  return 0;
}