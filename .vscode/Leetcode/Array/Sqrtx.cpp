#include <bits/stdc++.h>
using namespace std;
int main()

{
    int target = 8;
    int s = 0;
    int e = target - 1;
    float ans = -1;
    float factor = 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        // mid = mid + 0.01;

        if ((mid * mid) == target)
        {
            ans = mid;
            cout << ans;
            return ans;
        }
        else if ((mid * mid) > target)
        {
            e = mid - 1;
        }
        else if ((mid * mid) < target)
        {
            ans = mid;
            s = mid + 1;
            // cout << ans << " ";
        }
    }

    // Giving precision in (for loop condition -> 3)
    for (int i = 0; i < 3; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < target; j = j + factor)
        {
            ans = j;
        }
    }

    cout << ans;
    return 0;
}