#include <iostream>
using namespace std;

void charTOasci();
void asciToChar();

int main()
{
    int exit;
    do
    {
        char inputT;
        do
        {
            cout << "enter [A] for Asci; \t [C] for character , " << endl;
            cin >> inputT;
            if (inputT == char(0))
                return 1;
        } while (inputT != 'A' && inputT != 'C');

        if (inputT == 'A')
        {
            asciToChar();
        }
        else
        {
            charTOasci();
        }
        cout << "CLICK '1' IF YOU Want to continue and any key to exit \n";
        cin >> exit;

    } while (exit == 1);
}

void charTOasci()
{
    char character;
    cout << "insert a character" << endl;
    cin >> character;
    cout << "the ASCI of the character [" << character << "]:==>  is [" << int(character) << "]" << endl;
}

void asciToChar()
{
    int item;
    cout << "insert a Asci code" << endl;
    cin >> item;
    cout << "the character of the asci :" << item << " :==> is "
         << "[" << char(item) << "]" << endl;
}