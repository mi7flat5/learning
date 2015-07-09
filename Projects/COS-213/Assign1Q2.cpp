#include<iostream>

void analyse(char d);

using namespace std;

int main (void)
{
   char c;

        while (c !='q')
           {
            cout<<"\nPlease Enter a  number 0-9 or Q/q to quit: ";
            cin >>c;
            c= tolower(c);
            analyse(c);
           }
        cout<<"\nGoodbye. \n";
   return 0;
}

void analyse(char d)
{
        cout <<'\n';
        if (isdigit(d)){
                switch(d){
                    case '0' : cout<<"You Entered Zero\n";
                            break;
                    case '1' : cout<<"You Entered One\n";
                            break;
                    case '2' : cout<<"You Entered Two\n" ;
                            break;
                    case '3' : cout<<"You Entered Three\n";
                            break;
                    case '4' : cout<<"You Entered Four\n" ;
                            break;
                    case '5' : cout<<"You Entered Five\n" ;
                            break;
                    case '6' : cout<<"You Entered Six\n" ;
                            break;
                    case '7' :cout<<"You Entered Seven\n" ;
                            break;
                    case '8' : cout<<"You Entered Eight\n" ;
                            break;
                    case '9' : cout<< "You Entered Nine\n" ;
                            break;}
                            }
                else if (d!='q')
                    {
                    cout<<"Oops! I did't understand!\n";
                    }
            return;
}
