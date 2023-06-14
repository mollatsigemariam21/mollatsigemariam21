#include<iostream>
#include<string>
using namespace std ;
struct ticketService {
    char firstName[25];
    char middleName[25];
    char lastName[25];
    char departurePlace[25];
    char destinationPlace[25];
    double ticketPrice;
    char IdNumber[20];
    char signature[10];
};
string fullName (string, string,string);//funtion prototype
int main() {
	
    ticketService persons[10];//structure variable declaration
    cout<<"\tWelcome To Our Ticket Service\n";
    for(int i=0; i<10; i++) {
        cout<<"Enter Your First Name:\n";
        cin>>persons[i].firstName;
        cout<<"Enter Your Middle Name:\n";
        cin>>persons[i].middleName;
        cout<<"Enter Your Last Name:\n";
        cin>>persons[i].lastName;
        cout<<"Enter The departure Place:\n";
        cin>>persons[i].departurePlace;
        cout<<"Enter The Destination Place:\n";
        cin>>persons[i].destinationPlace;
        cout<<"Enter The Ticke price or Payment:\n";
        cin>>persons[i].ticketPrice;
        cout<<"Enter Your Id number\n";
        cin>>persons[i].IdNumber;
        cout<<"Enter Owner Signature\n";
        cin>>persons[i].signature;
    }
    for(int i=0; i <10; i++) {
        cout<<"\tDear Customer Here is Your Ticket\n";
        cout<<"Your Full Name......\t\t"<<fullName(persons[i].firstName,persons[i].middleName,persons[i].lastName);
        cout<<"\nYour departure Place...........\t"<<persons[i].departurePlace;
        cout<<"\nYour Destination Place.......\t"<<persons[i].destinationPlace;
        cout<<"\nOur Ticket Price.....\t\t"<<persons[i].ticketPrice;
        cout<<"\nYour Id Number.....\t"<<persons[i].IdNumber;
        cout<<"\nOur Signature.......\t\t"<<persons[i].signature;
    }
    return 0;
}
string fullName(string firstName,string middleName, string lastName ) {

    return firstName +"  "+middleName+ " " + lastName;
}
