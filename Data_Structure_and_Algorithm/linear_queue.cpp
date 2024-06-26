#include <iostream>
#define MAX 5
using namespace std;
int main()
{
    int n;
    int queue[MAX];
    int rear = -1, front = -1;
    int data;
    bool quit{ false };
    while (!quit)
    {
        cout << "1 - Insert Data\n";
        cout << "2 - Out Data\n";
        cout << "3 - Display\n";

        cout << "Opt: ";
        cin >> n;
        switch (n)
        {
            case 1:
                if (rear == MAX -1)
                {
                    cout << "queue is overflow\n";
                }
                else
                {
                    cout << "Data: ";
                    cin >> data;
                    rear += 1;
                    if (front == -1)
                    {
                        front += 1;
                    }
                    queue[rear] = data;
                    cout << "data inserted!\n";
                }
                break;


            case 2:
                if (front == -1 || front > rear)
                {
                    front = -1;
                    rear = -1;
                    cout << "queue is underflow or empty!\n";
                    break;
                }
                else
                {
                    data = queue[front];
                    cout << "the dequeued data is: " << data <<'\n';
                    front += 1;
                }
                break;
            case 3:
                if (rear == -1)
                {
                    cout << "no data!\n";
                    break;
                }
                for (int i = front; i <= rear; i++)
                {
                    cout << queue[i] << '\t';
                }
                cout << '\n';
                break;
        }
    }
    return 0;
}
