// xxx.cpp: 定义控制台应用程序的入口点。
// don't kid me.

#include "stdafx.h"


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

void question1();
double respond(double x);
double respondGoods(const double x, const std::string &unitName, const std::string &goodsName, const double price);


int main() {                                //HI 童少！
    double Numbatch = 0.0;                       //现在运行这个程序会出现：You need to make: 2 batches of cookies，对应respond(int x)
    int people = 0;                         //我设想的是之后的方程也会输出字符串，例如：2 pounds of butter
    //但respond(int x) 之后的方程无法输出字符串，而且每个方程内的数值异常。我不明白问题出在哪里
    //respond 1-8里 return cost...可以忽略，是我之后需要进一步完成的步骤。
    
    question1();
    
    cin >> people;           // input the number of peope needed to serve
    cout << endl;             // start a new line to input
    Numbatch = ceil(people / 12.0);
    respond(Numbatch);         // respond the number of batches of cookies needed to make
    cout << "Shopping List for \"Best Ever\" Chocolate Chip Cookies" << endl;
    cout << endl;
    respondGoods(Numbatch, "cup", "flour", 59.0f);
    respondGoods(Numbatch, "cup", "grant sugars", 59.0f);
    respondGoods(Numbatch, "cup", "brwon sugars", 59.0f);
    respondGoods(Numbatch, "cup", "red sugars", 59.0f);
    respondGoods(Numbatch, "box", "cream cheese", 59.0f);
    respondGoods(Numbatch, "dozen", "eggs", 59.0f);
    respondGoods(Numbatch, "oz", "vanilla", 59.0f);
    respondGoods(Numbatch, "cup", "chickens", 59.0f);
    
    return 0;
}

void question1() {
    cout << "How many people do you need to serve?" << endl;
}

double respond(const double x) {
    cout << "You need to make: ";
    cout << x << " " << pluralize("batch", "batches", static_cast<int>(x)) << " of cookies" << endl;
    return 0;
}

double respondGoods(const double x, const std::string &unitName, const std::string &goodsName, const double price)
{
    const double goods = 0.75;
    const double numflour = ceil(goods * x);
    std::string unit = unitName;
    if (numflour > 1.0)
    {
        unit.append("s");
    }
    
    std::cout << numflour << " " << unit << " of " << goodsName << std::endl;
    
    double cost = price * numflour;
    return cost;
}
