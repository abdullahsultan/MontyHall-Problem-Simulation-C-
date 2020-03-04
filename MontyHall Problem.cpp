#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char **argv)
{
    srand(time(0)); 
    int no_switch=0;
    int switched=0;
    bool switch_decide = true;
    for(int l=0 ; l < 10000 ; l++)
    {
        
        if(l>=5000)
            switch_decide = false;
        
    
        string door1 = "goat",door2 = "goat",door3 = "goat";
        int car_door = rand()%3 + 1;
        switch(car_door)
        {
                case 1:
                    door1 = "car";
                    break;
                case 2:
                    door2 = "car";
                    break;
                case 3:
                    door3 = "car";
                break;
                 
        }
    
        int choice = rand()%3 + 1;
            int gate_open_goat;
            while(true)
            {
                gate_open_goat = rand() %3+1;
                if(gate_open_goat !=choice && gate_open_goat != car_door)
                    break;
            }
            if(switch_decide == true)
                {
                        for(int x=1;x<=3;x++)
                        {
                        if(x!=choice && x!=gate_open_goat)
                                choice = x;
                    
                        }
                        if(choice == car_door)
                        switched++; 
                }
            else if(switch_decide == false && choice == car_door)
            {
               no_switch++;    
            }
            
    }
        
        
        
        cout<<"Gate switch success rate "<<switched<<endl;
        
        cout<<"No gate switch success rate "<<no_switch<<endl;
        
        if(switched > no_switch)
            cout<<"Switching won"<<endl;
        else
            cout<<"No switching won"<<endl;
    
    
	return 0;
}
