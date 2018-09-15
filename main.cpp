//
//  main.cpp
//  EECS project
//
//  Created by John on 2018/9/13.
//  Copyright © 2018年 John. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string pluralize(string singular, string plural, int Numbatch) {
    if (Numbatch == 1) {
        return singular;
    }
    return plural;
}


int main() {                                //HI 童少！
    int Numbatch = 0;                       //现在运行这个程序会出现：You need to make: 2 batches of cookies，对应respond(int x)
    int people = 0;                         //我设想的是之后的方程也会输出字符串，例如：2 pounds of butter
    void question1();                       //但respond(int x) 之后的方程无法输出字符串，而且每个方程内的数值异常。我不明白问题出在哪里
    int respond(int x);                     //respond 1-8里 return cost...可以忽略，是我之后需要进一步完成的步骤。
    int respond1(int x);
    int respond2(int x);
    int respond3(int x);
    int respond4(int x);
    int respond5(int x);
    int respond6(int x);
    int respond7(int x);
    int respond8(int x);
    
    question1();            // ask the user for the number of people needed to serve
    cin>> people;           // input the number of peope needed to serve
    cout<<endl;             // start a new line to input
    Numbatch = ceil (people / 12.0);
    respond(Numbatch);         // respond the number of batches of cookies needed to make
    cout<< "Shopping List for \"Best Ever\" Chocolate Chip Cookies"<<endl;
    cout<<endl;
    respond1(Numbatch);
    respond2(Numbatch);
    respond3(Numbatch);
    respond4(Numbatch);
    respond5(Numbatch);
    respond6(Numbatch);
    respond7(Numbatch);
    respond8(Numbatch);
    
    return 0;
}

void question1(){
    cout<<"How many people do you need to serve?"<<endl;
}

int respond(int x){
    cout<<"You need to make: ";
    cout << x << " "<< pluralize("batch", "batches", x) << " of cookies" << endl;
    return 0;
}

int respond1(int x){
    const double flour = 0.75;
    int numflour = ceil(flour * x);
    cout<<numflour << " "<< pluralize("cup", "cups", numflour) << " of flour" << endl;
    float costflour = (2.69/20) * numflour;
    
    return costflour;
}

int respond2(int x){
    const double gransugar = 0.75;
    int numgransugar = ceil(gransugar * x);
    cout<<numgransugar << " "<< pluralize("cup", "cups", numgransugar) << " of granulated sugar" << endl;
    float costgransugar = (3.99/10) * numgransugar;
    
    return costgransugar;
}


int respond3(int x){
    const double brownsugar = 0.75;
    int numbrownsugar = ceil(brownsugar * x);
    cout<<numbrownsugar << " "<< pluralize("cup", "cups", numbrownsugar) << " of brown sugar" << endl;
    float costbrownsugar = (2.29/4.5) * numbrownsugar;
    
    return costbrownsugar;
}

int respond4(int x){
    const double unsbutter = 0.5;
    int numunsbutter = ceil(unsbutter * x);
    cout<<numunsbutter<<" "<< pluralize("cup", "cups", numunsbutter) << " of brown sugar" << endl;
    float costunsbutter = (2.79/2) * numunsbutter;
    
    return costunsbutter;
}

int respond5(int x){
    const double CC = 0.5;
    int numCC = ceil(CC * x);
    cout<<numCC<<" "<< pluralize("box", "boxes", numCC) << " of Cream Cheese" << endl;
    float costCC = 2.49 * numCC;
    
    return costCC;
}

int respond6(int x){
    const double Eggs = 2;
    int numEggs = ceil(Eggs * x);
    cout<<numEggs<<" "<< pluralize("dozen", "dozens", numEggs) << " of Eggs" << endl;
    float costEggs = (1.99/12) * numEggs;
    
    return costEggs;
}

int respond7(int x){
    const double Van = 2;
    int numVan = ceil(Van * x);
    cout<<numVan<<" "<< pluralize("oz", "oz", numVan) << " of Vanilla" << endl;
    float costVan = (6.79/12) * numVan;
    
    return costVan;
}

int respond8(int x){
    const double DCC = 2;
    int numDCC = ceil(DCC * x);
    cout<<numDCC<<" "<< pluralize("cup", "cups", numDCC) << " of brown sugar" << endl;
    float costDCC = (2.39/12) * numDCC;
    
    return costDCC;
}







