#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);

     //1.
    /*string userString;

    cout << "Введите строку: ";
    cin >> userString;
    cout << userString.front() << "" << userString.back() << endl;*/

    // 3.
    string firstUserString, secondUserString;

    cout << "Введите первую строку: " ;
    getline(cin, firstUserString);
    cout << "Введите вторую строку: ";
    getline(cin, secondUserString);
    
    int res = firstUserString.compare(secondUserString);
    switch(res)
    {
        case 1: 
            cout << firstUserString << " > " << secondUserString << endl;
            break;
        case 0:
            cout << firstUserString << " = " << secondUserString << endl;
            break;
        case -1:
            cout << firstUserString << " < " << secondUserString << endl;
            break;
    }

    // 2.
    /*string userString, stringTemplate;
    int userChange, indexTemplate, lengthTemplate;

    do {
        userChange = 0;
        cout << "Введите исходную строку: ";
        cin >> userString;
        cout << "Выберите нужный пункт из меню:\n1. insert\n2. erase\n3. replace\n4. find" << endl;
        cin >> userChange;
        switch (userChange)
        {
            case 1:
                cout << "Что нужно вставить: ";
                cin >> stringTemplate;
                cout << "Введите индекс, с которого нужно вставить: ";
                cin >> indexTemplate;
                cout << userString.insert(indexTemplate, stringTemplate) << endl;
                break;
            case 2:
                cout << "Введите индекс, с которого нужно удалить символ: ";
                cin >> indexTemplate;
                cout << "Введите количество символов, которое нужно удалить: ";
                cin >> lengthTemplate;
                cout << userString.erase(indexTemplate, lengthTemplate) << endl;
                break;
            case 3:
                cout << "Введите индекс, с которого нужно заменить символ: ";
                cin >> indexTemplate;
                cout << "Введите количество символов, которое нужно заменить: ";
                cin >> lengthTemplate;
                cout << "Введите  строку, которую нужно подставить вместо символов: ";
                cin >> stringTemplate;
                cout << userString.replace(indexTemplate, lengthTemplate, stringTemplate) << endl;
                break;
            case 4:
                cout << "Введите  строку cимволов, которую нужно найти: ";
                cin >> stringTemplate;
                cout << userString.find(stringTemplate) << endl;
                break;
            case 5:
                break;
        }
    
    } while (userChange != 5);*/

    return 0;
}

