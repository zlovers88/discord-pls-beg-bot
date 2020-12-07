//This is a free source program, NO COPYRIGHT
//This program maker is zlovers88

//Donation : 
//Ethereum ---->> 0xF01c8E0a57c55b764469DA34716583715de86C0A
//Bitcoin ---->> bc1qefjt7wa4897f0f7g7qrzd6dk538t9huumrunnq
//Dogecoin --->> DSVvzfP4u4ppCYchJWAGCwvcbvR6W65CSb

#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void menu()
{
    cout << "Press 'X' to enable and 'Z' to disable and continue" << endl;

}
void clicker()
{


    bool click = false;


    while (true)
    {
        if (GetKeyState('X'))
        {
            click = true;
        }
        else if (GetKeyState('Y'))
        {
            click = false;
        }
        if (click == true)
        {
            keybd_event('P', 0, 0, 0);
            keybd_event('L', 0, 0, 0);
            keybd_event('S', 0, 0, 0);
            keybd_event(VK_SPACE, 0, 0, 0);
            keybd_event('B', 0, 0, 0);
            keybd_event('E', 0, 0, 0);
            keybd_event('G', 0, 0, 0);
            keybd_event(VK_RETURN, 0, 0, 0);
            Sleep(10);
        }
    }
}
int main()
{

    menu();
    clicker();
    return 0;
}
