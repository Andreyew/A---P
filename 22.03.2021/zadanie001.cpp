// narysuj taki kształt z możliwościa wyboru znaku rysowania pomiędzy
// znaki = %, $, #, @
// kształt :
//       #
//      ###
//     #####
//    #######
//      ###
//     #####
//    #######
//   #########
//  ###########
// #############

#include <iostream>

using namespace std;

int main()
{
    int width = 13,
        height = 10;

    char space = ' ',
         point = '#';

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= width; j++)
        {
            // if (j == width / 2 + 1)
            //     cout << point;
            if (j >= (width / 2 + 1) - (i - 1) && j <= (width / 2 + 1) + (i - 1) && i <= 4)
                cout << point;
            else if (j >= (width / 2 + 1) - (i - 4) && j <= (width / 2 + 1) + (i - 4) && i > 4)
                cout << point;
            else
                cout << space;
        }
        cout << endl;
    }
}
