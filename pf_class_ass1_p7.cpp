#include <iostream>
using namespace std;
int main()
{
    int n;
    float tmarks;
    float marks;
    float t_t_marks = 0;
    float t_o_marks = 0;
    cout << "Enter numbers of tests" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter total marks of test " << i << endl;
        cin >> tmarks;
        cout << "Enter obtain marks of test " << i << endl;
        cin >> marks;
        float percentage = (marks * 100) / tmarks;
        if (percentage >= 90 && percentage < 101)
        {
            cout << "A+" << endl;
        }
        else if (percentage >= 80)
        {
            cout << "A" << endl;
        }
        else if (percentage >= 60)
        {
            cout << "B" << endl;
        }
        else if (percentage >= 50)
        {
            cout << "C" << endl;
        }
        else if (percentage >= 40)
        {
            cout << "D" << endl;
        }
        else if (percentage >= 30)
        {
            cout << "E" << endl;
        }
        else
            cout << "fail" << endl;

        t_t_marks = t_t_marks + tmarks;
        t_o_marks = t_o_marks + marks;
    }
    cout << "Total marks in all papers: " << t_t_marks << endl;
    cout << "Obtained marks in all papers: " << t_o_marks << endl;
    float overall_p = (t_o_marks * 100) / t_t_marks;
    cout << "over all percentage: " << overall_p << endl;
    if (overall_p >= 90 && overall_p < 101)
    {
        cout << "A+" << endl;
    }
    else if (overall_p >= 80)
    {
        cout << "A" << endl;
    }
    else if (overall_p >= 60)
    {
        cout << "B" << endl;
    }
    else if (overall_p >= 50)
    {
        cout << "C" << endl;
    }
    else if (overall_p >= 40)
    {
        cout << "D" << endl;
    }
    else if (overall_p >= 30)
    {
        cout << "E" << endl; 
    }
    else
    {
        cout << "fail" << endl;
    }
}
