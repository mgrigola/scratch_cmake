#include <iostream>
#include <fstream>
#include <deque>


using namespace std;


std::deque<char> read_text(char* inpTxt)
{
    char c;
    size_t elemNo = 0;
    std::deque<char> stack;

    while ( (c = inpTxt[elemNo++]) != NULL)
    {
        if (c != ' ')
            stack.push_front(c);
    }

    return stack;
}

void print_text(std::deque<char>& stack)
{
    char c;
    size_t elemNo = 0;

    while ( (c = stack.pop_front()) != NULL)
    {
        std::cout << c;
    }
}

int main(int argc, char *argv[])
{
    if (argc < 2)
        return -1;

    std::deque<char> myStack = read_text(argv[1]);


    return 0;
}
