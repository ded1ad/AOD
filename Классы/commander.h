#ifndef COMMANDER_H_INCLUDED
#define COMMANDER_H_INCLUDED
#include "Students.h"
#include <string>

class Commander : public Soldier {
    public:
        Commander(): Soldier()
 
        Commander(int id, string name_surname, string call_signal, string character, string date, string global_id): Student(id, name_surname, call_signal, character, rank, admission)


        string getGoodStudentInfo()
        {
            std::stringstream out_str;
            out_str << "comrader id: " << id << "\n"
                    << "name_surname: " << name_surname << "\n"
                    << "call-signal: " << call - signal << "\n"
                    << "character in team: " << character << "\n"
                    << "When was chosen: " << date << "\n"
                    << "global order statistics: " << global_id << "\n";

            return out_str.str();
        }


};
#endif 
