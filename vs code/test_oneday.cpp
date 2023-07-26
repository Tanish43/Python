#include <iostream>
using namespace std;
/* In this programme we need to tally the number of 11 players in oneday 
    and test match format and perform the following task 
    1) Total score of the match
    2) sum of scores in both the matches together
    3) player with highest scores 
    Note : make oneday and test match as separate class.*/

class test{
    int players[11];
    public:
    void record_scores(){
        for(int i = 0; i<= 10; i++){
            cout << "\nEnter the scores of player" <<i + 1<<" : " ;
            cin >> players[i];
        }
    }
    void diplay_data(){
        for(int i = 0; i<= 10; i++){
            cout << "the scores of player" <<i + 1<<" is : " << endl;
            cout << players[i];
        }
    }    
    void highest_scorer(){
        for(int i = 1;i < 10; ++i) {

    // Change < to > if you want to find the smallest element
    if(players[0] < players[i])
      players[0] = players[i];
  }

  cout << endl << "Largest element = " << players[0];
    }
};
class oneday{
    int players[11];
    public:
    void record_scores(){
        for(int i = 0; i<= 10; i++){
            cout << "Enter the scores of player" <<i + 1<<" : " << endl;
            cin >> players[i];
        }
    }
    void diplay_data(){
        for(int i = 0; i<= 10; i++){
            cout << "the scores of player" <<i + 1<<" is : " << endl;
            cout << players[i];
        }
    }
    void highest_scorer(){
        for(int i = 1;i < 10; ++i) {

    // Change < to > if you want to find the smallest element
    if(players[0] < players[i])
      players[0] = players[i];
  }

  cout << endl << "Largest element = " << players[0];
    }
};
int main (){
    test t1;
    oneday o1;
    t1.record_scores();
    t1.diplay_data();
    t1.highest_scorer();
    o1.record_scores();
    o1.diplay_data();
    o1.highest_scorer();
    return 0;
}