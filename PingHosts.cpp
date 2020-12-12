// PingHosts.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus"); // корректное отображение Кириллицы
    char buff[1000]; // буфер промежуточного хранения считываемого из файла текста
    ifstream fin("host_list.txt"); // открыли файл для чтения
    string command = "start cmd /k ping -t ";

    while (!fin.eof()) {
        fin.getline(buff, 1000);
        //cout << buff << endl; // напечатали эту строку
        string tmp_command = command + string(buff);
        cout << tmp_command << endl;
        system(tmp_command.c_str());
        
    }
    fin.close();
    
    return 0;
}
