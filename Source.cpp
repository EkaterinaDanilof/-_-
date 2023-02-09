#include <iostream>

using namespace std;

void shifr(string s,int d,int c)
{
    string ns;
    for (int i = 0; i< d;++i)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            int raz = abs(s[i] - 'Z');
            if (raz < c)
            {
                s[i] = 64 + (c-raz);
                ns += s[i];
            }
            else {
                
                    s[i] = s[i] + c;
                    ns += s[i];
                }
            
        }
        if (s[i] >= 97 && s[i] <= 122)
           {
            int raz = abs(s[i] - 'z');
            if (raz <= c)
            {
                s[i] = 96 + (c - raz);
                ns += s[i];
            }
            else {
                
                    s[i] = s[i] + c;
                    ns += s[i];
                }
            }
            
        
    }
    cout << ns << endl;
    
}

void deshifr(string s, int d, int c)
{
    string ns;
    for (int i = 0; i < d; ++i)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            int raz = abs(s[i] - 'A');
            if (raz < c)
            {
                s[i] = 91 - (c - raz);
                ns += s[i];
            }
            else {

                s[i] = s[i] - c;
                ns += s[i];
            }

        }
        if (s[i] >= 97 && s[i] <= 122)
        {
            int raz = abs(s[i] - 'a');
            if (raz <= c)
            {
                s[i] = 123 - (c - raz);
                ns += s[i];
            }
            else {

                s[i] = s[i] - c;
                ns += s[i];
            }
        }


    }
    cout << ns << endl;
    
}


int main() {
    setlocale(LC_ALL, "");
    
    while(true)
    {
        cout << "Здравствуйте! Какую операцию вы хотите произвести? Шифрование - нажмите \"s\", дешифрование - \"d\"!" << endl;
        char otv1;
        cin >> otv1;
        if (otv1 == 's' || otv1 == 'd') {
            cout << "Какая будет длина строки?" << endl;
            int dlina;
            cin >> dlina;
            
            cout << "Введите строку" << endl;
            string stroka;
            cin>>stroka;
            
            cout << "Введите x - коэффициент сдвига" << endl;
            int x;
            cin >> x;
            if (otv1 == 's')
            {
                cout << "Результат шифрования :  ";
                shifr(stroka, dlina, x);
            }
            else
            {
                cout << "Результат дешифрования :  ";
                deshifr(stroka, dlina, x);
            }
            
        }
        else
            cout << "Не правильно введены данные,попробуй еще раз" << endl;
        char pr;
        cout << "Нужно разгадать шифр ?  y/ n" << endl;
        cin >> pr;
        if (pr == 'n')
            return 0;
    }

    
    return 0;
}