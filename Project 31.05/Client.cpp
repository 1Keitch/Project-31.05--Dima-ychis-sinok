#include"Client.h"// ���������� h ���� 
#include<iostream>

Client::Client(int id)
{
    _id = id; // ������� �� ���� � �������� ������������


}


void Client::ShowId() //��������� ��� ���� ������� ����������� ������
{
    std::cout << "Id " << _id << '\n';





}

