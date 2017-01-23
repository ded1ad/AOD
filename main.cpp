#include <iostream>
#include "soldier.h"
#include "commander.h"
#include "gun.h"
#include "list.h"
#include <string>

using std::string;
using std::cout;
using std::cin;

int main()
{
    LinkedList linkedlist;
    Soldier *soldier;

    int id;
    string name_surname;
    string call_signal;
    string character;
	string rank;
	string admission;
    for (int i = 0; i < 3; i++)
    {
    cout << "vk id " ;
    cin >> id;
    cout << "Name and Last name: ";
    cin >> name_surname;
    cout << "call - signal: ";
    cin >> call_signal;
	cout << "rank: ";
	cin >> rank;
    cout << "character " << ": ";
    cin >> character;
    cout << "admission " << ": ";
    cin >> admission;
    student = new Student(id, name_surname, call_signal, rank, character, admission);
    linkedlist.add(soldier);
    }

    linkedlist.printList();



    int id_gun;
    cout << "official gun id ";
    cin >> id_gun;

    string type_gun;
    cout << "type of the gun ";
    cin >> type_gun;

    float speed;
    cout << "speed of ball " ;
    cin >> speed;

    Subject gun(id_gun, name_subject, grade);

    cout << "\nGun name: " << gun.getgunName() << "\n speed: "
    << gunt.getspeed() << "\n ************************** \n";

//********************************************************************

    cout << "comrader id " ;
    cin >> comrader_id;
    cout << "name_surname ";
    cin >> name_surname;
    cout << "call-signal";
    cin >> call - signal;
    cout << "character in team";
    cin >> character;
    cout << "When was chosen";
    cin >> date;
	cout << "global order statistics";
	cin >> global_id;
    

    GoodStudent ñommander(comrader_id, name_surname, call - signal, character, date, global_id);
    cout  << ñommander.getñommanderInfo()
    return 0;
}
