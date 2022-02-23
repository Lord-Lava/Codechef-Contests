#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s)
{
    string hour_string = s.substr(0, 2);
    int hour = stoi(hour_string);
    size_t pos = s.find("PM");
    size_t pos1 = s.find("P");
    if (pos != string::npos)
    {
        if (hour + 12 < 24)
            hour_string = to_string(hour + 12);
    }
    else if (pos1 != string::npos)
    {
        if (hour + 12 < 24)
            hour_string = to_string(hour + 12);
    }
    else
    {
        if (hour == 12)
            hour_string = "00";
    }
    return s.replace(0, 2, hour_string).erase(s.size() - 2);
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string p;
        getline(cin, p);

        string it = timeConversion(p);

        string h_string = it.substr(0, 2);
        int h0 = stoi(h_string);

        string m_string = it.substr(3, 2);
        int m0 = stoi(m_string);

        int n;
        cin >> n;
        cin.ignore();

        string arr[n][2];

        for (int i = 0; i < n; i++)
        {
            getline(cin, arr[i][0], 'M');
            cin.ignore();
            getline(cin, arr[i][1]);
        }

        string ans = "";

        for (int i = 0; i < n; i++)
        {
            string t1 = timeConversion(arr[i][0]);
            string t2 = timeConversion(arr[i][1]);

            h_string = t1.substr(0, 2);
            int h1 = stoi(h_string);

            h_string = t2.substr(0, 2);
            int h2 = stoi(h_string);

            m_string = t1.substr(3, 2);

            int m1 = stoi(m_string);

            m_string = t2.substr(3, 2);
            int m2 = stoi(m_string);

            if (h1 <= h2)
            {
                bool flag = 0;
                if (h0 >= h1 && h0 <= h2)
                {
                    if ((h0 == h1 && m0 < m1) || (h0 == h2 && m0 > m2))
                    {
                        ans += "0";
                        flag = 1;
                    }
                    else
                    {
                        ans += "1";
                        flag = 1;
                    }
                }
                if (flag == 0)
                {
                    ans += "0";
                }
            }

            else
            {
                bool flag = 0;
                for (int i = h1; i <= 24; i++)
                {
                    if (h0 == 0 && i == 24 || h0 == i)
                    {
                        if (h0 == h1 && m0 < m1)
                        {
                            ans += "0";
                            flag = 1;
                            break;
                        }
                        else
                        {
                            ans += "1";
                            flag = 1;
                            break;
                        }
                    }
                }
                for (int i = h2; i > 0; i--)
                {
                    if (h0 == i)
                    {
                        if (h0 == h2 && m0 > m2)
                        {
                            ans += "0";
                            flag = 1;
                            break;
                        }
                        else
                        {
                            ans += "1";
                            flag = 1;
                            break;
                        }
                    }
                }
                if (flag == 0)
                    ans += "0";
            }
        }

        cout << ans << endl;
    }

    return 0;
}