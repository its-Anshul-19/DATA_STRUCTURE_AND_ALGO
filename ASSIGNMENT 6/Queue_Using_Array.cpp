#include <cstdlib>
#include <iostream.h>
#include <string.h>
#include <ctype.h>
#include <process.h>

class Queue
{

    public:

        int rear, front;
        int ele;
        int q[size];

    Queue()
    {

        rear = front = 0;

    }

    void Insert_Q();
    void Delete_Q();
    void Display_Q();

};



void Queue::Insert_Q()
{

    cout << "Input Queue Element:";
    cin>> ele;

    if(rear < size)
    {

        rear++; 
        q[rear] = ele;

        if(front == 0)
        {

            front=1; 

        }
        else
        {

            cout << "Queue is Full\n";

         } 

    } 

} 


void Queue::Delete_Q()
{


    if(front == 0) 
    {

        cout << "Queuy is Empty. Nothing to Delete!" << endl;
        return;

    }
    else
    {

        ele = q[front]; 
        cout << "Element Deleted :" << ele << endl;

    }

    if(front == rear)
    {

        front = 0;
        rear = 0;

    }
    else
    {

        front = front + 1;

    }

}



void Queue::Display_Q() 
{

    if(front == 0)

        return;

    for(int i=front;i<=rear;i++)
    {

        cout << " " << q[i];

    }
        cout << "\n\n";
}


using namespace std;

int main()
{

    Queue Q;

    int k = 0;

    char choice;

do
{

    cout <<"Insert -> I Delete -> D Quit -> Q " << endl;
    cout <<"Input the choice:"<< endl;

    do
    {
        cin >> choice;
        choice = tolower(choice);

    }while(strchr("idq",choice)==NULL);

    cout << "Your choice is -> " << choice << endl;

    switch(choice)
    {

        case 'i':
            Q.Insert_Q();
            cout <<"Queue after Insertion:";
            Q.Display_Q();
            break;

        case 'd':
            Q.Delete_Q();
            cout <<"Queue after Deletion"<< endl;
            Q.Display_Q();
            break;
        case 'q':
            k=1;
    }

}while(!k);

system("PAUSE");
return EXIT_SUCCESS;
}
