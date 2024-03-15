#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    string article;
    cin >> word;
    getchar();
    getline(cin, article);
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    transform(article.begin(), article.end(), article.begin(), ::tolower);
    word.insert(word.begin(), ' ');
    word.insert(word.end(), ' ');
    article.insert(article.begin(), ' ');
    if (article.find(word) == -1)
    {
        cout << "-1" << endl;
    }
    else
    {
        int sum = 0;
        int n = 0;
        while (article.find(word, n) != -1)
        {
            sum++;
            n = article.find(word, n) + 1;
        }
        cout << sum << " ";
        cout << article.find(word);
    }
    return 0;
}