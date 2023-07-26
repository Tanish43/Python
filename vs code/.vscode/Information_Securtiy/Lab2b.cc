int r = 0;
int w = 0;
int p = 0;
int ans = 0;
int first = 0;
int second = 0;
for (int i = 0; i < row1.length(); i++)
{
    if (row1[i] == 'R')
    {
        r++;
    }
    else if (row1[i] == 'W')
    {
        w++;
    }
    else
    {
        p++;
    }
}
int a = max(r, w);

ans = abs(r - w);
if (ans > p)
{
    return -1;
}
first = p - ans;
r = 0, w = 0, p = 0;
for (int i = 0; i < row2.length(); i++)
{
    if (row2[i] == 'R')
    {
        r++;
    }
    else if (row2[i] == 'W')
    {
        w++;
    }
    else
    {
        p++;
    }
}
int b = max(r, w);
if (abs(r - w) > p)
{
    return -1;
}
second = p - abs(r - w);
ans += abs(r - w);
if (a > b && abs(a - b) > second)
{
    return -1;
}
if (b > a && abs(a - b) > first)
{
    return -1;
}
ans = ans + 2 * (abs(a - b));
}