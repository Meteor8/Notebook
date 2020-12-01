#include <iostream>

using namespace std;

int main()
{
    /*
    int * whatisthat = new int[3];
    int i;
    for(i = 0; i<3; i++)
    {
        cin >> *(whatisthat + i);
    }
    for(i = 0; i<3; i++)
    {
        cout << *(whatisthat + i) << " ";
    }
    cout << endl;
    */

    int (*whatisthis)[3] = new int[2][3];
    int i,j;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cin >> whatisthis[i][j];
        }
    }
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << whatisthis[i][j];
        }
        cout << endl;
    }

    return 1;

}
