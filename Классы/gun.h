#ifndef GUN_H_INCLUDED
#define GUN_H_INCLUDED
#include <string>

using std::string;

class gun{

    public:
        gun()
        {
            id_gun = "";
            type_gun = "";
            speed = 0.0; 
        }
        
        gun(int id_gun, string type_gun, float speed)
        {
            this -> id_gun = id_gun;
            this -> type_gun = type_gun;
            this -> speed = speed;
        }
      void setIdGun(int id_gun)
        {
            id_gun = id_gun;
        }
        
        int getIdGun()
        {
            return id_gun;
        }
        
        void settypegun(string type_gun)
        {
            type_gun = type_gun;
        }
        
        string gettypegun()
        {
            return type_gun;
        }
           
		void setSpeed(float speed)
        {
            speed = speed;
        }
        
        float getSpeed()
        {
            return speed;
        }
    private:
        int id_gun;
        string type_gun;
        float speed;
};
#endif 
