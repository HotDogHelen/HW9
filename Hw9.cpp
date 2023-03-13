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
    Polynomial(Term initial):Polynomial(){
        Term* copy = new Term(initial);
        this->add(copy);
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
    void add(Term term_obj){
        Term* term_copy = new Term(term_obj);
        this->add(term_copy);
    }
    void add(Term* to_add){
        Term *temp=last; // Stash the last pointer into a temp variable
        // If the first entry is a null pointer, make this Term the first term
        if(first==nullptr){
            first=to_add;
        }
        // Otherwise, take the existing latest pointer and update it to point to to_add as its next Term
        else {
            last->next=to_add;
        }
        // Set the Polynomial's last entry to be to_add
        last=to_add;
        // Update to_add to be the end of the list
        to_add->previous=temp;
        to_add->next=nullptr;
        
        
        
        //TODO: Add coefficients if Term w/new term's power already exists within polynomial
        if (to_add->power==new to_add->power ){
          
        }
    }
    Polynomial addition(Polynomial Ringo){
        //merge sort will go here
        //putting together two polynomials just requires the melding of like terms and making them in order based on the size of the coefficients
        return Ringo; //TODO: make this do addition
    }
//    void print(Term Paul){
//        Polynomial
//    }
    //make print
    void print(){
        
        Term* my_next = first;
        for (int i = 0 ; ; i++){
            if (my_next==nullptr){
                break;
            }
            cout<<
//            cout << "Position " << i << " Address: " << my_next << endl;
            my_next->get_coefficient();
           
                
            }
           // << endl;
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
   // p.print();
    p.add(Term(1, 1));//p=x-2
  //  p.print();
    p.add(Term(2, 2));//p=2*x^2+x-2
    //p.print();
    Polynomial q(Term(2, 0));//q=2
    q.add(Term(-1, 1));//q=-x+2
    q.add(Term(1, 3));//q=x^3-x+2
    Polynomial h=p.addition(p);
    h.print();
  //  h=p.addition(q);
  //  h.print();
    cout<<"Helen Morris, 3-12-2023"<<endl;
    return 0;
}
