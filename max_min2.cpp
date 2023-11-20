#include <iostream>
using namespace std;
int arr[] = {1, 2, 8, 3, 5};
int maxi, mini;

int mid;
void min_max(int l, int h)
{
    int tmin, tmax;
    if (h == l)
    {
        mini = maxi = arr[l];
    }
    else if (l == h - 1)
    {
        if (arr[l] > arr[h])
        {
            maxi = arr[l];
            mini = arr[h];
        }
        else
        {
            maxi = arr[h];
            mini = arr[l];
        }
    }
    else
    {

        mid = (l + h) / 2;
        min_max(l, mid);
        tmax = maxi;
        tmin = mini;
        min_max(mid + 1, h);
        if (tmax > maxi)
        {

            maxi = tmax;
        }
        if (tmin < mini)
        {
            mini = tmin;
        }
    }
}

int main()
{

    int l = 0, h = 4;
    maxi = mini = arr[0];
    min_max(l, h);
    cout << "Max " << maxi << " Min " << mini << endl;

    return 0;
}