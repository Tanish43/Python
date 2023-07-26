# 1
# include <bits/stdc++.h>
using namespace std;

class node
{
private:
    int id;
    int semester;
    string name;
    node *next;

public:
    void insertNode(node *head);
    void traversal(node *head);
};
void node::insertNode(node *head)
{
    node *usernode = new node();
    int i;
    int s;
    char str[50];
    cout << "Enter name , id no. and semester number for new student" << endl;
    fflush(stdin);
    cin >> str;
    fflush(stdin);
    cin >> i;
    cin >> s;
    usernode->name = str;
    usernode->id = i;
    usernode->semester = s;
    node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = usernode;
    usernode->next = NULL;
}

void node::traversal(node *head)
{
    node *ptr = head->next;
    cout << "Displaying data!!" << endl;
    while (ptr != NULL)
    {
        cout << "Student id : " << ptr->id << endl;
        cout << " Name : " << ptr->name << endl;
        cout << " semester : " << ptr->semester << endl;

        ptr = ptr->next;
    }
}

int main()
{
    node *head = new node();
    int choice = 1;
    while (choice == 1)
    {
        cout << "Press 1 if you want to add a new node and anything else to traverse it" << endl;
        cin >> choice;
        if (choice == 1)
        {
            head->insertNode(head);
        }
    }
    head->traversal(head);
    return 0;
}