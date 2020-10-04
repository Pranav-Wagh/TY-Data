#include <iostream>
#include <queue>

using namespace std;
struct comp
{
    bool operator()(int l, int r)
    {
        return (l > r);
    }
};

void showpq(priority_queue <int, vector<int>, comp> gq)
{
    priority_queue <int, vector<int>, comp> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}

int main ()
{
    priority_queue <int, vector<int>, comp> gquiz;
    gquiz.push(10);
    gquiz.push(30);
    gquiz.push(20);
    gquiz.push(5);
    gquiz.push(1);

    cout << "The priority queue gquiz is : ";
    showpq(gquiz);
    gquiz.pop();
    gquiz.push(25);
    showpq(gquiz);
    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.top() : " << gquiz.top();


    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showpq(gquiz);

    return 0;
}
