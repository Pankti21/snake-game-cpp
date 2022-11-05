#include<iostream>

using namespace std;

bool gameOver;

//map dimensions
const int width = 40; 
const int height = 20;

//snake head and fruit position variables 
int x, y, fruitX, fruitY;

//snake direction
enum eDirection {
    STOP,
    LEFT,
    RIGHT,
    UP,
    DOWN
};

eDirection dir;

int score;

void Setup(){
    gameOver = false;
    dir = STOP; //snake does not move until we start moving

    //set snake initial position to center of the screen
    x = width / 2;
    y = height /2;

    //set random fruit position
    fruitX = rand() % width;
    fruitY = rand() % height;
}

void Draw(){
    //clear the screen
    system("cls");

    //display top map wall
    for(int i=0; i<width; i++){
        cout << "=" ;
    }

    cout << endl; 

    //print map
    for(int i=0; i<height; i++){
        for(int j=0; j<width; j++){
            if(j==0 || j==width-1){
                cout << "|";
            }
            else{
                cout<<" ";
            }
        }
        cout << endl;
    }

    //display bottom map wall
    for(int i=0; i<width; i++){
        cout << "=";
    }
}
void Input(){

}
void Logic(){

}

int main(){
    Setup();
    while(!gameOver){
        Draw();
        Input();
        Logic();
        gameOver = true;
    }

    return 0;
}