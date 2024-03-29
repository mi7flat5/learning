#include<iostream>
#include"stack.h"
#include<string>
#include<fstream>
using namespace std;
int main()
{
    stack stack1;
    stack stack2;
    stack stack3;
    stack stack4;
    auto lineCount = 0;

       char myChar;
       bool error = false;

        ifstream infile("textinput.txt");
            if (!infile.is_open())
            {
                infile.close();
                cout << "File not found, exiting program.\n\n";
                exit(1);
            }

            while (!infile.eof())
            {
                infile.get(myChar);
                if(myChar == '\n')
                    ++lineCount;
                if (myChar=='{')
                    stack1.pushTop(myChar);
                if (myChar=='}')
                    stack2.pushTop(myChar);

            }
            if (stack1.size()!=stack2.size())
            cout << "\n\nError, missing { or }:"<< "\n\n";
            stack1.makeEmpty();
            stack2.makeEmpty();
            infile.clear();
            infile.seekg(0, infile.beg);

            while (!infile.eof())
            {
                infile.get(myChar);
                if(myChar == '\n')
                    ++lineCount;
                if (myChar=='(')
                    stack1.pushTop(myChar);
                if (myChar==')')
                    stack2.pushTop(myChar);

            }
            if (stack1.size()!=stack2.size())
            cout << "\n\nError, missing ( or ):"<< "\n\n";
            stack1.makeEmpty();
            stack2.makeEmpty();
            infile.clear();
            infile.seekg(0, infile.beg);

            while (!infile.eof())
            {
                infile.get(myChar);
                if(myChar == '\n')
                    ++lineCount;
                if (myChar=='[')
                    stack1.pushTop(myChar);
                if (myChar==']')
                    stack2.pushTop(myChar);

            }
            if (stack1.size()!=stack2.size())
            cout << "\n\nError, missing [ or ]:"<< "\n\n";
            stack1.makeEmpty();
            stack2.makeEmpty();
            infile.clear();
            infile.seekg(0, infile.beg);

            while (!infile.eof())
            {
                infile.get(myChar);

                if (myChar=='/')
                    stack1.pushTop(myChar);
                if (myChar == '*' && stack1.getTop()== '/' )
                {   stack1.popTop();
                    stack1.pushTop('1');
                    myChar = 'b';
                }
                else if(myChar == '*' && stack1.getTop()!= '/') {stack1.popTop();}

                if (myChar=='*')
                    stack2.pushTop(myChar);
                if (myChar == '/' && stack2.getTop()== '*' )
                {   stack2.popTop();
                    stack2.pushTop('1');
                    myChar = 'b';
                }
                else if (myChar == '/' && stack2.getTop()!= '*') {stack2.popTop();}

            }
            if (stack1.size()!=stack2.size())
            cout << "\n\nError, missing /* or */: "<< "\n\n";




    return 0;
}

