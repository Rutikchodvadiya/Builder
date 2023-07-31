#include<iostream>
using namespace std;

class Hotel {
    private:
        int id;
        string name;
        string type;
        int staff_size;
        int room_size;
        int establish_year;
        string address;
        string rating_type;
        string website;
    
    public:
        int getId() {
            return this->id;
        }
      
        void setId(int id) {
            this->id = id;
        }
      
        string getName() {
            return this->name;
        }
      
        void setName(string name) {
            this->name = name;
        }
      
   
};

int main() {
    Hotel hotel;
  
  
    hotel.setId(101);
    hotel.setName("Hotel ABC");
  
    cout << "ID: " << hotel.getId() << endl;
    cout << "Name: " << hotel.getName() << endl;


    return 0;
}
