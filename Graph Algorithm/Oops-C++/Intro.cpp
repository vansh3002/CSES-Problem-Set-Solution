// #include<bits/stdc++.h>
// // #include "Hero.cpp"
// using namespace std;
// class Hero{

//     public://all data member inside class can be accessed anywhere either in class or out of class
//     int health;
//     char level;
//     // private: // all data member can be accessed only within class default modifier will be private 
//     // char level;
//     // void print(){
//     //     cout<<level;
//     // } 
// };
// int main(){
//     Hero h1;
//     // Empty class have size=1 , 1 bit is allocated to keep track of element
//     // "." is used to access data member
//     h1.health=70;
//     h1.level='A';
//     cout<<h1.health;
//     cout<<h1.level;
// }

// Getter/Setter

// #include<bits/stdc++.h>
// // #include "Hero.cpp"
// using namespace std;
// class Hero{
//     private:
//     int health;
//     public:
//     char level;

//     //Getter
//     int gethealth() {
//         return health;
//     }
//     char getlevel(){
//         return level;
//     }

//     //Setter
//     void sethealth(int h){
//         health=h;
//     }
//     void setlevel(char c,string passcode){
//         if(passcode=="ABC"){
//             level=c;
//         }
//     }
//     // private: // all data member can be accessed only within class default modifier will be private 
//     // char level;
//     // void print(){
//     //     cout<<level;
//     // } 
// };
// int main(){
//     Hero h1;
//     // Empty class have size=1 , 1 bit is allocated to keep track of element
//     // "." is used to access data member
//    // h1.health=70; -->throw error
//    h1.sethealth(70); //-->setter is used
//    h1.setlevel('B',"ABC");
//    // cout<<h1.health;-->throw error
//    cout<<h1.level;
//    cout<<h1.gethealth(); //-->getter is used
// }

//What's happening inside memory
// #include<bits/stdc++.h>
// // #include "Hero.cpp"
// using namespace std;
// class Hero{
//     private:
//     int health;
//     public:
//     char level;

//     //Getter
//     int gethealth() {
//         return health;
//     }
//     char getlevel(){
//         return level;
//     }

//     //Setter
//     void sethealth(int h){
//         health=h;
//     }
//     void setlevel(char c,string passcode){
//         if(passcode=="ABC"){
//             level=c;
//         }
//     }
//     // private: // all data member can be accessed only within class default modifier will be private 
//     // char level;
//     // void print(){
//     //     cout<<level;
//     // } 
// };
// int main(){
//     //static allocation
//     Hero h1;
//     cout<<sizeof(h1);
//     // instead of 5 it will giving output equal to 8
//     //Because of padding and greedy allignment
// }

// Dynamic Allocation 
// #include<bits/stdc++.h>
// // #include "Hero.cpp"
// using namespace std;
// class Hero{
//     private:
//     int health;
//     public:
//     char level;

//     //Getter
//     int gethealth() {
//         return health;
//     }
//     char getlevel(){
//         return level;
//     }

//     //Setter
//     void sethealth(int h){
//         health=h;
//     }
//     void setlevel(char c,string passcode){
//         if(passcode=="ABC"){
//             level=c;
//         }
//     }
//     // private: // all data member can be accessed only within class default modifier will be private 
//     // char level;
//     // void print(){
//     //     cout<<level;
//     // } 
// };
// int main(){
//     //-->Dynamic allocation
//     Hero *h=new Hero;
//     h->setlevel('A',"ABC");
//     (*h).sethealth(60);
//     //(*b).level also used in place of above
//     cout<<(*h).getlevel();
//     cout<<h->gethealth();
//     // cout<<sizeof(h1);
//     // instead of 5 it will giving output equal to 8
//     //Because of padding and greedy allignment
// }

//[Constructer] 
/*
#include<bits/stdc++.h>
// #include "Hero.cpp"
using namespace std;
class Hero{
    private:
    int health;
    public:
    char level;
    // Custom constructer is created if not made then by dafaul it will treat whole class as constructer
    Hero(){
        cout<<"VANSH";
    }

    //Getter
    int gethealth() {
        return health;
    }
    char getlevel(){
        return level;
    }

    //Setter
    void sethealth(int h){
        health=h;
    }
    void setlevel(char c,string passcode){
        if(passcode=="ABC"){
            level=c;
        }
    }
    // private: // all data member can be accessed only within class default modifier will be private 
    // char level;
    // void print(){
    //     cout<<level;
    // } 
};
int main(){
    //static allocation
    cout<<1;
    Hero h1;//-->Constructer called Ramesh.Hero();
    cout<<2;
    // instead of 5 it will giving output equal to 8
    //Because of padding and greedy allignment
}

*/

//[Parametrized Constructer]
/*
#include<bits/stdc++.h>
// #include "Hero.cpp"
using namespace std;
class Hero{
    private:
    int health;
    public:
    char level;

    //Paramtrized Constructer
    Hero(int health){
        //-->Acess Object health using "this" keyoword which basically pointing to object 
        (*this).health=health;
        cout<<this<<endl;
    }
    int gethealth(){
        return health;
    }
};
int main(){
    //static allocation
    Hero h1(10);
    cout<<&h1<<endl;
    cout<<h1.gethealth()<<endl;

    //-->As new contructer is created the default constructer get dead
}
*/

//[Copy Constructer]

/*

#include<bits/stdc++.h>
// #include "Hero.cpp"
using namespace std;
class Hero{
    private:
    int health;
    public:
    char level;
    Hero(){
        cout<<"vansh"<<endl;
    }
    //Also crated by creating cronstructer that is basically created 
    //passed by reference used to avoid infinite loop 
    Hero (Hero &temp){
        this->level=temp.level;
        this->health=temp.health;
    }
    void sethealth(int h){
        health=h;
    }
    void setlevel(char c){
        level=c;
    }
    void print(){
        cout<<health<<endl;
        cout<<level;
    }
};
int main(){
    Hero h1; //---> static allocation
    h1.sethealth(10);
    h1.setlevel('A');
    
    Hero h2(h1); // Calling  Copy Constructer after that default copy constructer get dead
    //[copy properties  of object h1 to h2]

    h2.print();//Through this we can also print private data member
    //[Ouput-->vansh,-10,A]

}

*/
 /*

 //[Shallow Copy]

#include<bits/stdc++.h>
// #include "Hero.cpp"
using namespace std;
class Hero{
    private:
    int health;
    public:
    char *name;
    char level;
    Hero(){
        cout<<"vansh"<<endl;
        name=new char[100];
    } 
    // Hero (Hero &temp){
    //     this->level=temp.level;
    //     this->health=temp.health;
    // }
    void sethealth(int h){
        health=h;
    }
    void setlevel(char c){
        level=c;
    }
    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
        cout<<name;
    }
    void setname(char name[]){
        strcpy(this->name,name);// copy the name
    }
};
int main(){
    Hero h1;
    h1.sethealth(10);
    h1.level='A';
    char name[7]="VANSH";
    h1.setname(name);
    h1.print();
    

    //Use default copy constructer to make h2
    Hero h2(h1); //also written as Hero h2=h1;
    cout<<endl;
    h2.print();

    //Now change the name of h1 first letter
    h1.name[0]='K';
    h1.print();
    h2.print();
    //[here we changed the name of h1 but changes also reflected in h2]
}

*/

//[Deep Copy]

#include<bits/stdc++.h>
// #include "Hero.cpp"
using namespace std;
class Hero{
    private:
    int health;
    public:
    char *name;
    char level;
    Hero(){
        cout<<"vansh"<<endl;
        name=new char[100];
    } 
    Hero (Hero &temp){
        char* ch =new char[strlen(temp.name+1)];
        //Memory allocation for name array is different for other object h2 hence now when we make changes in h1 doesn't reflect over h2 this is basically deep copy
        strcpy(ch,temp.name);
        this->name=ch;
        this->level=temp.level;
        this->health=temp.health;
    }
    void sethealth(int h){
        health=h;
    }
    void setlevel(char c){
        level=c;
    }
    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
        cout<<name;
    }
    void setname(char name[]){
        strcpy(this->name,name);// copy the name
    }
};
int main(){
    Hero h1;
    h1.sethealth(10);
    h1.level='A';
    char name[7]="VANSH";
    h1.setname(name);
    // h1.print();
    

    //Use default copy constructer to make h2
    Hero h2(h1); //also written as Hero h2=h1;
    cout<<endl;
    // h2.print();

    //Now change the name of h1 first letter
    h1.name[0]='K';
    h1.print();
    h2.print();
    //[here we changed the name of h1 but changes also reflected in h2]
}

