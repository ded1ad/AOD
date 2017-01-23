#ifndef SOLDIERS_H
#define SOLDIERS_H
#include <string>
#include <stream>


using std::string;

class Soldier{
    public:
        Soldier()
        {
            id = 0;
            name_surname = "";
            call_signal = "";
            character = "";
			rank = "";
			admission = "";
        }
        Soldier(int id, string name_surname, string call_signal, string character, string rank, string admission)
        {
            this -> id = id;
            this -> name_surname = name_surname;
            this -> call_signal = call_signal;
            this -> character = character;
			this->rank = rank;
            this ->admission = admission;
        }
		void setIdSoldier(int id)
        {
            id = id;
        }
        int getIdSoldier()
        {
            return id;
        }
        void setname_surname(string Soldier_name)
        {
            name_surname = Soldier_name;
        }
        string getname_surname()
        {
            return name_surname;
        }
        void setcall_signal(string Soldier_call_signal)
        {
            call_signal = Soldier_call_signal;
        }
        string getcall_signal()
        {
            return call_signal;
        }
        void setcharacter(string Soldier_character)
        {
            character = Soldier_character;
        }
		string getcharacter()
        {
         return character;
		}
		void setrank(string Soldier_rank)
		{
			rank = Soldier_rank;
		}
		string getrank()
		{
			return rank;
		}
        }
        void setadmission(string Soldier_admission)
        {
            admission = Soldier_admission;
        }
		string getadmission()
        {
         return admission;
        }
        
        string getSoldierInfo()
        {
            std::stringstream out_str;
            out_str <<"vk id : " << id << "\n"
                    << "Name and Last name:  " << call_signal << "\n"
                    << "call - signal: " << name_surname << "\n"
                    << "character: " << character << "\n";
			        << "rank: " << rank << "\n";
                    << "admission: " << admission << "\n";
            return out_str.str();
        }

    protected:
        int id;
        string name_surname;
        string call_signal;
        string character;
		string rank;
        string admission;
};
#endif
