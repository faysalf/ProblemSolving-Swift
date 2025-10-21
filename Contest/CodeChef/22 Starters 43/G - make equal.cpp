int64_t A, B, C;
void tc()
{
    cin >> A >> B >> C;
    if (A == B && B == C)
    {
        cout << "YES" << endl;
        return;
    }

    int64_t p2 = 1;
    for (int i = 1; i <= 60; i++)
    {
        int cnt1 = ((A & p2) + (B & p2) + (C & p2))/p2;
        int cnt0 = 3-cnt1;
        if (cnt0 == 0 || cnt0 == 3)
        {
            cout << "NO" << endl;
            return;
        }
        else if (cnt0 == 1)
        {
            if ((A & p2) == 0)
            {
                A += p2;
            }
            else if ((B & p2) == 0)
            {
                B += p2;
            }
            else
            {
                C += p2;
            }
            
        }
        else if (cnt0 == 2)
        {
            if ((A & p2) > 0)
            {
                A += p2;
            }
            else if ((B & p2) > 0)
            {
                B += p2;
            }
            else
            {
                C += p2;
            }
        }

        if (A == B && B == C)
        {
            cout << "YES" << endl;
            return;
        }

        p2 *= 2;
    }

    cout << "NO" << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while (t--) tc();
}