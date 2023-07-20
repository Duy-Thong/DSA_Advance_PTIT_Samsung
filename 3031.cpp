#include <bits/stdc++.h>
using namespace std;
struct hcn
{
    int cao;
    int rong;
};
bool check1(hcn ds[])
{
    if (ds[0].rong == ds[1].rong && ds[1].rong == ds[2].rong)
    {
        if (ds[0].cao + ds[1].cao + ds[2].cao == ds[1].rong)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return false;
}
bool check2(hcn ds[])
{
    if (ds[0].rong - ds[0].cao == ds[1].cao || ds[0].rong - ds[0].cao == ds[1].rong)
    {
        if (ds[0].rong - ds[0].cao == ds[2].cao || ds[0].rong - ds[0].cao == ds[2].rong)
        {
            return true;
        }
        return false;
    }
    return false;
}
bool cmp(hcn a, hcn b)
{
    return a.rong > b.rong;
}
int main()
{
    hcn ds[3];
    float s = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> ds[i].rong >> ds[i].cao;
        if (ds[i].cao > ds[i].rong)
        {
            swap(ds[i].cao, ds[i].rong);
        }
        s += ds[i].cao * ds[i].rong;
    }
    sort(ds, ds + 3, cmp);
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << ds[i].rong << ds[i].cao << endl;
    // }
    int canh = (int)sqrt(s);
    if (canh * canh != s)
    {
        cout << "NO";
    }
    else
    {
        if (check1(ds) || check2(ds))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}