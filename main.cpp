//Authors: Hailey Silveira, Benji Millar, Ali Alneyadi

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
        vector<string> grocery_list; //vector for grocery items
        char input;
        string item;
        string item_rem;
        do
        {
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (S)how grocery list";
                cout<<"\n (Q)uit";
                cout<<"\n (R)emove an item";
                cout<<"\nYour choice (A/S/Q/R): ";
                cin>>input;
                if (input=='A'||input=='a')
                {
                        cout<<"What is the name of the item?"<<endl;
                        cin>>item;
                        grocery_list.push_back(item);
                }
                if (input=='S'||input=='s')
                {
                        for (int i=0; i<grocery_list.size(); i++)
                        {
                                cout<<i+1<<". "<<grocery_list[i]<<endl;
                        }
                }
                if (input=='R'||input=='r')
                {
                        cout<<"What item would you like to remove?"<<endl;
                        cin>>item_rem;


                }
        } while (input !='Q'&&input !='q');
        return 0;
}
