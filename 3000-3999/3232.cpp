#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int subs, penalty = 0, coun = 0, ACMin = 301, soon;
    cin >> subs;
    vector<int> minutes(subs);
    vector<string> veredict(subs);
    for (int y = 0; y < subs; y++)
    {
        cin >> minutes[y] >> veredict[y];
        if (veredict[y] == "AC")
        {
            if (minutes[y] < ACMin)
            {
                soon = y;
                ACMin = minutes[y];
            }
        }
    }
    if (ACMin != 301)
    {
        for (int z = 0; z < subs; z++)
        {
            if (minutes[z] < ACMin)
            {
                coun++;
            }
        }
        penalty = minutes[soon] + (coun*20);
    }

    cout << penalty << endl;
    return 0;
}