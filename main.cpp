#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;

class PizzaIng{
public:
    int NumOfIng;
    list<string> Ingredients;
    PizzaIng(int NumOfIng,list<string> Ingredients){
        this->NumOfIng = NumOfIng;
        this->Ingredients = Ingredients;
    }
};

class EvenMorePizza{
    public:
        int AvailablePizza;
        int Team2ppl;
        int Team3ppl;
        int Team4ppl;
        list<PizzaIng> PizzaIng;
        EvenMorePizza(int AvailablePizza,int Team2ppl,int Team3ppl,int Team4ppl,list<PizzaIng> PizzaIng){
            this->AvailablePizza = AvailablePizza;
            this->Team2ppl = Team2ppl;
            this->Team3ppl = Team3ppl;
            this->Team4ppl = Team4ppl;
            this->PizzaIng = PizzaIng;
        }
};

EvenMorePizza ReadInputFile(string filenamE){
    list<EvenMorePizza> emplist = new list<EvenMorePizza>();
    int aPizza=0,T2=0,T3=0,T4=0;
    std::string line;
    std::ifstream file(filenamE);
    int q=0;
    list<PizzaIng> pings = new list<PizzaIng>();
    while (std::getline(file, line)) {
    if(q==0){
        vector <string> tokens;
        stringstream check1(line);
        string intermediate;
        while(getline(check1, intermediate, ' '))
        {
            tokens.push_back(intermediate);
        }
            aPizza = stoi(tokens[0]);
            T2 = stoi(tokens[1]);
            T3 = stoi(tokens[2]);
            T4 = stoi(token[3]);
            q++;
    }
    else{
        vector <string> tokens1;
        stringstream check1(line);
        string intermediate;
        while(getline(check1, intermediate, ' '))
        {
            tokens1.push_back(intermediate);
        }

        PizzaIng ping = new PizzaIng(stoi(tokens1[0])});
        pings.Add(ping);
    }

}
  EvenMorePizza emp = new EvenMorePizza(aPizza,T2,T3,T4,pings);
  return emp;
}

int main(){
   list<EvenMorePizza> EvenMorePizza = ReadInputFile("a_example.in");
    return 0;
}
