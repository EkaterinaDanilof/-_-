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
        cout << "������������! ����� �������� �� ������ ����������? ���������� - ������� \"s\", ������������ - \"d\"!" << endl;
        char otv1;
        cin >> otv1;
        if (otv1 == 's' || otv1 == 'd') {
            cout << "����� ����� ����� ������?" << endl;
            int dlina;
            cin >> dlina;
            
            cout << "������� ������" << endl;
            string stroka;
            cin>>stroka;
            
            cout << "������� x - ����������� ������" << endl;
            int x;
            cin >> x;
            if (otv1 == 's')
            {
                cout << "��������� ���������� :  ";
                shifr(stroka, dlina, x);
            }
            else
            {
                cout << "��������� ������������ :  ";
                deshifr(stroka, dlina, x);
            }
            
        }
        else
            cout << "�� ��������� ������� ������,�������� ��� ���" << endl;
        char pr;
        cout << "����� ��������� ���� ?  y/ n" << endl;
        cin >> pr;
        if (pr == 'n')
            return 0;
    }

    
    return 0;
}