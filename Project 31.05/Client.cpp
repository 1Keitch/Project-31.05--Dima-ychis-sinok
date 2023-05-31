#include"Client.h"// подключаем h файл 
#include<iostream>

Client::Client(int id)
{
    _id = id; // присвом на айди к элементу конструктора


}


void Client::ShowId() //описываем шоу айди которая пренадлежит классу
{
    std::cout << "Id " << _id << '\n';





}

