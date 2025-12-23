#include <iostream>
#include <string>
#include<cctype>
using namespace std;

class Airline {
public:
    string name;
    string destination;
    int seatsAvailable;
    string type; // Domestic or International
    string passportNumber;
    string visaNumber;
    string passengerName;
    string seatNumber;
    int phoneNumber;
    string emailId;
    int age;
    string sourceLocation;
    string flightSchedule;
    int numSeats;

};

class Airport {
public:
    Airline airline;
    void addAirline();
    void bookReservation();
    void viewReservation();
    void verificationProcess();
    void conformation();
    void showDetails();
};

void Airport::addAirline() {
    cout << "Select travel type:\n";
    cout << "1. Domestic\n";
    cout << "2. International\n";
    int type;
    cin >> type;
    if (type == 1) {
        cout << "Select airline:\n";
        cout << "1. IndiGo\n";
        cout << "2. SpiceJet\n";
        cout << "3. Air India\n";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                airline.name = "IndiGo";
                break;
            case 2:
                airline.name = "SpiceJet";
                break;
            case 3:
                airline.name = "Air India";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
        int classChoice;
        cout << "Select class:\n";
    cout << "1. Business\n";
    cout << "2. Economy\n";
    cin >> classChoice;
    if (classChoice == 1) {
      airline.type = "Business";
    } else if (classChoice == 2) {
      airline.type = "Economy";
    } else {
      cout << "Invalid choice. Please try again.\n";
}
        cout << "Select destination:\n";
        cout << "1. Mumbai\n";
        cout << "2. Delhi\n";
        cout << "3. Bangalore\n";
        cout << "4. Chennai\n";
        cout << "5. Hyderabad\n";
        cout << "6. Kolkata\n";
        cout << "7. Pune\n";
        cin >> choice;
        switch (choice) {
            case 1:
                airline.destination = "Mumbai";
                break;
            case 2:
                airline.destination = "Delhi";
                break;
            case 3:
                airline.destination = "Bangalore";
                break;
            case 4:
                airline.destination = "Chennai";
                break;
            case 5:
                airline.destination = "Hyderabad";
                break;
            case 6:
                airline.destination = "Kolkata";
                break;
            case 7:
                airline.destination = "Pune";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
        cout << "Select flight schedule:\n";
    cout << "1. 09:00\n";
    cout << "2. 12:30\n";
    cout << "3. 15:45\n";
    cout << "4. 20:00\n";
    int schedule;
    cin >> schedule;
    switch (schedule) {
        case 1:
            airline.flightSchedule = "09:00";
            break;
        case 2:
            airline.flightSchedule = "12:30";
            break;
        case 3:
            airline.flightSchedule = "15:45";
            break;
        case 4:
            airline.flightSchedule = "20:00";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
    }
}

    else if (type == 2) {
        cout << "Select airline:\n";
        cout << "1. Emirates\n";
        cout << "2. Singapore Airlines\n";
        cout << "3. British Airways\n";
        cout << "4. Lufthansa\n";
        cout << "5. Cathay Pacific\n";
        cout << "6. Japan Airlines\n";
        cout << "7. Qantas\n";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                airline.name = "Emirates";
                break;
            case 2:
                airline.name = "Singapore Airlines";
                break;
            case 3:
                airline.name = "British Airways";
                break;
            case 4:
                airline.name = "Lufthansa";
                break;
            case 5:
                airline.name = "Cathay Pacific";
                break;
            case 6:
                airline.name = "Japan Airlines";
                break;
            case 7:
                airline.name = "Qantas";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
        cout << "Select class:\n";
    cout << "1. Business\n";
    cout << "2. Economy\n";
    int classChoice;
    cin >> classChoice;
    if (classChoice == 1) {
      airline.type = "Business";
    } else if (classChoice == 2) {
      airline.type = "Economy";
    } else {
      cout << "Invalid choice. Please try again.\n";
}
        cout << "Select destination:\n";
        cout << "1. Dubai\n";
        cout << "2. Singapore\n";
        cout << "3. London\n";
        cout << "4. New York\n";
        cout << "5. Paris\n";
        cout << "6. Beijing\n";
        cout << "7. Tokyo\n";
        cin >> choice;
        switch (choice) {
            case 1:
                airline.destination = "Dubai";
                break;
            case 2:
                airline.destination = "Singapore";
                break;
            case 3:
                airline.destination = "London";
                break;
            case 4:
                airline.destination = "New York";
                break;
            case 5:
                airline.destination = "Paris";
                break;
            case 6:
                airline.destination = "Beijing";
                break;
            case 7:
                airline.destination = "Tokyo";
default:
cout<<"Invalid choice!! Please enter the correct choice\n";
}
cout << "Select flight schedule:\n";
    cout << "1. 09:00\n";
    cout << "2. 12:30\n";
    cout << "3. 15:45\n";
    cout << "4. 20:00\n";
    int schedule;
    cin >> schedule;
    switch (schedule) {
        case 1:
            airline.flightSchedule = "09:00";
            break;
        case 2:
            airline.flightSchedule = "12:30";
            break;
        case 3:
            airline.flightSchedule = "15:45";
            break;
        case 4:
            airline.flightSchedule = "20:00";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
    }
}
}

void Airport::bookReservation() {
    cout << "Enter passenger name: ";
    cin >> airline.passengerName;
    cout << "Enter age: ";
    cin >> airline.age;
    cout << "Enter phone number: ";
    cin >> airline.phoneNumber;
    cout << "Enter email id: ";
    cin >> airline.emailId;
    cout << "Enter source location: ";
    cin >> airline.sourceLocation;
}

void Airport::viewReservation() {
    int numSeats;
    cout << "Enter number of seats needed: ";
    cin >> numSeats;
    airline.seatsAvailable=60;
    airline.seatsAvailable -= numSeats;
    airline.seatNumber = "A" + to_string(airline.seatsAvailable - numSeats + 1);
    cout << "Remaining seats: " << airline.seatsAvailable << "\n";
}

void Airport::verificationProcess() {
    cout << "Verification process initiated...\n";
    cout << "Select travel type:\n";
    cout << "1. Domestic\n";
    cout << "2. International\n";
    int type;
    cin >> type;
    if (type == 1) {
        cout << "Enter aadhaar or pan or passport number: ";
        cin >> airline.passportNumber;
    } else if (type == 2) {
        while(true){
        cout << "Enter passport number: ";
        cin >> airline.passportNumber;
        if(airline.passportNumber.length()==12 && isalpha(airline.passportNumber[0])){
        break;
        }
        else{
        cout << "Invalid passport number.Please try again\n";
        }
        }
        string visaType;
        cout<<"Enter the type of visa(Work/Education/Tourism/Medical)\n";
        cin>>visaType;
        cout << "Enter visa number: ";
        cin >> airline.visaNumber;
}
}

void Airport::conformation(){
    int amount = 0;
    if (airline.destination == "Mumbai") {
        amount = 3000;
    } else if (airline.destination == "Delhi") {
        amount = 4000;
    } else if (airline.destination == "Bangalore") {
        amount = 3500;
    }
     else if(airline.destination=="Chennai"){
   amount=2000;
   }
    else if(airline.destination=="Hyderabad"){
     amount=3500;
    }
   else if(airline.destination=="Kolkata"){
   amount=5000;
   }
    else if(airline.destination=="Pune"){
    amount=3500;
    }
    else if(airline.destination=="Dubai"){
    amount=25000;
    }
    else if(airline.destination=="Singapore"){
    amount=35000;
   }

   else if(airline.destination=="London"){
   amount=50000;
   }
   else if(airline.destination=="New York"){
   amount=75000;
  }
  else if(airline.destination=="Paris"){
  amount=70000;
 }
  else if(airline.destination=="Beijing"){
  amount=70000;
  }

  else if(airline.destination=="Tokyo"){
  amount=85000;
  }
  int numSeats;
    cout << "Enter number of seats needed: ";
    cin >> numSeats;
    int totalAmount = amount * numSeats;
    cout << "Total amount: " << totalAmount<<"\n";
}

void Airport::showDetails() {
    cout << "PASSENGER NAME: " << airline.passengerName << "\n";
    cout << "PASSENGER AGE: " << airline.age << "\n";
    cout << "AIRLINE NAME: " << airline.name << "\n";
    cout << "DESTINATION: " << airline.destination << "\n";
    cout << "FLIGHT SCHEDULE: " << airline.flightSchedule << "\n";
    cout << "SEAT NUMBER: " << airline.seatNumber << "\n";

}

int main(){
    Airport airport;

    int choice;
    do {
        cout << "  *** AIRPORT RESERVATION SYSTEM ***\n";
        cout << "1. Type of Airlines\n";
        cout << "2. Book Seats\n";
        cout << "3. Verification process\n";
        cout << "4. Conformation\n";
        cout << "5. Show Details\n";
        cout << "6. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                airport.addAirline();
                break;
            case 2:
               airport.bookReservation();
               airport.viewReservation();
                break;
            case 3:
                airport.verificationProcess();
                break;
            case 4:
                airport.conformation();
                break;
            case 5:
                airport.showDetails();
                break;
            case 6:
               cout<<"Thank you...Have a great day!!!\n";
               break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 6);

return 0;
}
