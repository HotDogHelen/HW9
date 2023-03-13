//
//
//
#include<sstream>
#include<iomanip>
#include <string>
#include <ctime>
#include <vector>
#include<fstream>
#include<numeric>
//#include <cmath>
//#include<iterator>

#include <chrono>
#include <stack>
#include <queue>
#include <iostream>

using namespace std;

//class Term {
//public:
//    int data;
//    int data2;
//    Term* next;
//
//    // Default constructor
//    Term()
//    {
//        data = 0;
//        next = NULL;
//    }
//
//    // Parameterised Constructor
//    Term(int data, int data2)
//    {
//        this->data = data;
//        this->next = NULL;
//    }
//};
class Iterator;
class List;

class Term{
public:
    int get_power(){
        return power;
    }
    int get_coefficient(){
        return coefficient;
    }
    Term* get_next(){
        return next;
    }
    Term(int data1, int data2){
         power=data2;
         coefficient=data1;
    };
    private:
    int power;
    int coefficient;
   //  int temp;
    Term* previous;
    Term* next;
    friend class Polynomial;
    friend class Iterator;
};
class Polynomial
{
public:
    Polynomial(){
        first=nullptr;
        last=nullptr;
    }
    Polynomial(Term Slay){
        Polynomial();
        Term* Hero = new Term(Slay);
        this->add(Hero);
//        first=&Slay;
//        last=&Slay;
//        Slay.previous=nullptr;
//        Slay.next=nullptr;
    }
//    void push_back(string element);
//    void insert(Iterator iter, string element);
//    Iterator erase(Iterator iter);
//    Iterator begin();
//    Iterator end();
    void add(Term Jill){
        this->add(&Jill);
    }
    void add(Term* John){
        Term *temp=last;
        if(first==nullptr){
            first=John;
        } else {
            last->next=John;
        }
        last=John;
        John->previous=temp;
        John->next=nullptr;
        
        //TODO: Add coefficients if Term w/new term's power already exists within polynomial
        //if (John.power==new John ){
        //  ...
        //}
    }
    Polynomial addition(Polynomial Ringo){
        return Ringo; //TODO: make this do addition
    }
    void print(Term Paul); //make print
    void print(){
        Term* my_next = first;
        for (int i = 0 ; ; i++){
            if (my_next==nullptr){
                break;
            }
            cout << "Position " << i << " Address: " << my_next << endl;
            cout << "Position " << i << " Coefficient: " << my_next->get_coefficient()<< endl;
            cout << "Position " << i << " Power: " << my_next->get_power()<< endl;
            my_next = my_next->get_next();
        }
    }; //make print
    
    private:
    Term* first;
    Term* last;
    friend class Iterator;
};
//class Iterator
//{
//    public:
//    Iterator();
//    string get() const;
//    void next();
//    void previous();
//    bool equals(Iterator other) const;
//    private:
//    Term* position;
//    Polynomial* container;
//    friend class Polynomial;
//};

int main(){
    Polynomial p(Term(-2, 0));//p=-2
    //p.print();
    p.add(Term(1, 1));//p=x-2
    p.print();
    // p.add(Term(2, 2));//p=2*x^2+x-2
    // Polynomial q(Term(2, 0));//q=2
    // q.add(Term(-1, 1));//q=-x+2
    // q.add(Term(1, 3));//q=x^3-x+2
  //  Polynomial h=p.addition(p);
   // h.print();
  //  h=p.addition(q);
  //  h.print();
    cout<<"Helen Morris, 3-12-2023"<<endl;
    return 0;
}
