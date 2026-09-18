#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n; //number of pages
    std::cin >> n;

    int q; //number of questions
    std::cin >> q;

    std::vector<int> Pwords(n); //number of words on each page

    for (int i = 0; i < n; ++i)
    {
        std::cin >> Pwords[i];
    }

    std::vector<int> answers = {}; //answers to the questions

    for (int i = 0; i < q; ++i)
    {
        int page;
        std::cin >> page;
        answers.push_back(Pwords[page - 1]);
    }

    for (int i = 0; i < q; i++)
    {
        std::cout << answers[i] << std::endl;
    }


}
