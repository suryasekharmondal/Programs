#include <iostream>
#include <string>
using namespace std;

                      /*The class suports 6 functions - 3 private and 3 public*/

class tolltax{

                     /*The private functions essentially supports the public functions.
                   Operation like returning the tax for each TYPE of car, calculating the
                  total number of cars for which the transaction occurs and also the grand
                         total at the end. They are made private for SECURITY*/

   private:
      float get_tax_rates(int);
      long int add_num_of_cars(int);
      float calc_total_tax(float);
      
                    /*The public functions perform the main operations and are the ones that
                                          interact with the user*/
   public:
      void tax_rates();
      void display_no_of_cars();
      void display_total_amount();
      
};

float tolltax::get_tax_rates(int type){ //returns the various rates of TYPES of vehicles
      if(type==1) return 100;
      else if(type==2) return 200;
      else if(type==3) return 300;
      else return 50;
}

                    /*Keeps track of the total number of cars for every transaction which
                    occurs giving the total number of cars adding all the cars of all the 
                             previous transactions as well as current one*/
                             
long int tolltax::add_num_of_cars(int num_of_vehicles=0){ 
     static long int total_no_of_cars=0; //static so that the member nevers changes value after initialization
     total_no_of_cars+=num_of_vehicles;
     return total_no_of_cars;
}
                      /*Keeps track of the total amount for every transaction which
                    occurs giving the total toll tax adding all the amounts of all the 
                             previous transactions as well as current one*/
                             
float tolltax::calc_total_tax(float amt=0.0){
     static float total_amount=0.0; //static so that the member nevers changes value after initialization
     total_amount+=amt;
     return total_amount;
}
                              /*Interacts with the user during a transaction*/
                              
void tolltax::tax_rates(){
   int car, num_of_vehicles;
   float amount;
   cout<<"1)TYPE 1 VEHICLES(Cars)"<<"\n"<<"2)TYPE 2 VEHICLES(Bus)"<<"\n"<<"TYPE 3 VEHICLES(Trucks)"<<"\n"<<"TYPE 4 VEHICLES(Autos/3-wheel drive)"<<
          "\n"<<"Enter the TYPE of car: ";
   cin>>car;
   switch(car){ //choice to enter the TYPE of car crossing
      case 1:cout<<"Enter the number of cars: ";
             cin>>num_of_vehicles;
             amount=num_of_vehicles*get_tax_rates(1);
             cout<<"The total toll you need to pay is "<<amount<<"\n";
             add_num_of_cars(num_of_vehicles);
             calc_total_tax(amount);
             break;
      case 2:cout<<"Enter the number of buses: ";
             cin>>num_of_vehicles;
             amount=num_of_vehicles*get_tax_rates(2);
             cout<<"The total toll you need to pay is "<<amount<<"\n";
             add_num_of_cars(num_of_vehicles);
             calc_total_tax(amount);
             break;
      case 3:cout<<"Enter the number of trucks: ";
             cin>>num_of_vehicles;
              amount=num_of_vehicles*get_tax_rates(3);
             cout<<"The total toll you need to pay is "<<amount<<"\n";
             add_num_of_cars(num_of_vehicles);
             calc_total_tax(amount);
             break;
      case 4:cout<<"Enter the number of autos: ";
             cin>>num_of_vehicles;
              amount=num_of_vehicles*get_tax_rates(4);
             cout<<"The total toll you need to pay is "<<amount<<"\n";
             add_num_of_cars(num_of_vehicles);
             calc_total_tax(amount);
             break;
      default: cout<<"Wrong Choice";
    }
}

void tolltax::display_no_of_cars(){ //to display the total number of cars which has been calculated in add_num_of_cars()
	cout<<"The total number of cars that have crossed are: "<<add_num_of_cars()<<"\n";
} 

void tolltax::display_total_amount(){ //to display the total toll tax collected which has been calculated in calc_total_tax()
	cout<<"The total toll tax is: "<<calc_total_tax()<<"\n";
}          
                            /*Gives users the three options of Paying Taxes, Displaying
                                   No. of Cars and Displaying total amount*/
int main(void){
    int ch;
    char ch2; //choice for user if they want multiple transactions
    tolltax t;
    do{ //for multiple transactions
    cout<<"1)Enter toll taxes"<<"\n"<<"2)Display number of cars crossing"<<"\n"<<"3)Display total tax"<<"\n"<<"Enter your choice: ";
    cin>>ch;
       switch(ch){
          case 1:t.tax_rates();
                 break;
          case 2:t.display_no_of_cars();
                 break;
          case 3:t.display_total_amount();
                 break;
          default: cout<<"Wrong Choice";
      }
   cout<<"Do you want to repeat the process for more inputs?(y/n)"<<"\n";
   cin>>ch2;
   }while(ch2=='y');
}            
