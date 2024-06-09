#include "GameManager.hpp"

void GameManager :: addPlayer(Observer* observer){
    //Menggunakan library list dengan menambahkan observer pada bagian belakang/terakhir list
    observers.push_back(observer);
}

void GameManager :: removePlayer(){
    //Menggunakan library list dengan menghapus observer pada bagian belakang/terakhir list
    observers.pop_back();
}

void GameManager :: notifyAllPlayer(){
    //Melakukan looping untuk mengupdate observer sebanyak observer yang dimiliki
    for (Observer* observer : observers)
    {
        observer->update();
    }
    
}
