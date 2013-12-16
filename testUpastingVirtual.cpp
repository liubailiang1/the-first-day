//: c15: instrument2.cpp
// inheritance & upcasting 
#include<iostream>
#include<stdlib.h>
using namespace std;
enum note{middleC,Csharp,Eflat};//etc

class Instrument{

public:
        virtual void play(note) const {
             cout<<"instrument :: play " <<endl;
        }       
};

//wind objects are Instruments
//because they have the same interface:
class Wind:public Instrument {
      public :
      //redefine interface function:
      void play(note) const {
           cout<<"wind :: play" <<endl;
      }
};

void tune(Instrument& i){
     i.play(middleC);
}

int main(){
    Wind flute;
   /* 输出wind :: play 
   这里会发生Wind到 Instrument的向上类型转换，会使得Wind的接口变窄，但Wind是public继承Instrument，所以Instrument的接口，Wind 都有
   */ 
    tune(flute);//upcasting    
    system("pause");
}
