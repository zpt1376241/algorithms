#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<bool> students, temp;
vector<int> Avector, Bvector, Cvector;
bool initial()
{
    int n;
    cin >> n;
    if (!n)
        return 0;
    else
    {
        for (int i = 0; i < n; i++)
        {
            students.push_back(0);
            temp.push_back(0);
            int A, B, C;
            cin >> A >> B >> C;
            Avector.push_back(A);
            Bvector.push_back(B);
            Cvector.push_back(C);
        }
        return 1;
    }
}

int main()
{
    int times = 1;
    while (initial())
    {
        vector<int> CvectorBegin = Cvector;
        int t = 1;
        for (int i = 0; i < students.size(); i++)
        {
            students[i] = (Cvector[i] > Avector[i]);
        }
        t++;
        temp = students;
        while (1)
        {
            if (t > 2 && CvectorBegin == Cvector)
            {
                cout << "Case " << times << ": " << -1 << endl;
                break;
            }
            bool allAwake = 1;
            for (int i = 0; i < students.size(); i++)
            {
                if (students[i] == 1)
                {
                    allAwake = 0;
                    break;
                }
            }
            if (allAwake == 1)
            {
                cout << "Case " << times << ": " << t - 1 << endl;
                break;
            }
            int number = 0;
            for (int j = 0; j < students.size(); j++)
            {
                if (students[j] == 1)
                    number++;
            }
            for (int i = 0; i < students.size(); i++)
            {
                if (students[i] == 1) 
                {
                    if ((Cvector[i] + 1) > (Avector[i] + Bvector[i]))
                        Cvector[i] = (Cvector[i] + 1) % (Avector[i] + Bvector[i]);
                    else
                        Cvector[i]++;
                    if (Cvector[i] <= Avector[i])
                        temp[i] = 0; 
                }
                else if (students[i] == 0) 
                {
                    if ((Cvector[i] + 1) > (Avector[i] + Bvector[i]))
                        Cvector[i] = (Cvector[i] + 1) % (Avector[i] + Bvector[i]);
                    else
                        Cvector[i]++;
                    if (Cvector[i] > Avector[i] && number > (students.size() / 2))
                    {
                        temp[i] = 1;
                    }
                    else if (Cvector[i] > Avector[i] && number <= (students.size() / 2))
                    {
                        temp[i] = 0;
                        Cvector[i] = 0;
                    }
                }
            }
            students = temp;
            t++;
        }
        students.clear();
        temp.clear();
        Avector.clear();
        Bvector.clear();
        Cvector.clear();
        times++;
    }
    return 0;
}