#include<iostream>

using namespace std;

struct node{
    int value;
    node* next;
};

node* head = NULL;

void Insertion(int n){
    node* temp = new node;

    if(head == NULL){
        temp->value = n;
        temp->next = NULL;
        head = temp;
    }
    else{
        temp->value = n;
        temp->next = head;
        head = temp;
    }
    cout<<endl<<n<<" is inserted successfully!"<<endl;
}

void Searching(int n){
    node* temp = head;

    while(temp != NULL){
        if(temp->value == n){
            cout<<endl<<n<<" is present is the list!"<<endl;
            return;
        }
        temp = temp->next;
    }

    cout<<endl<<n<<" is not present is the list!"<<endl;
}

void Deletion(int n){
    node *temp = head, *prev = head;

    while(temp != NULL){
        if(temp->value == n){
            if(temp == head) head = temp->next;
            else prev->next = temp->next;
            delete temp;
            cout<< endl <<n<<" is successfully deleted from the list!"<<endl;
            return;
        }
        prev = temp;
        temp = temp->next;
    }

    cout<< endl <<n<<" is not present in the list. So deletion is not possible!"<<endl;
}

void show_list()
{
    cout<<"LIST: ";
    node* temp = head;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<< endl;
}


int main()
{
    int n, value;
    cout<<"------------MENU-----------" << endl;
    cout << "\t1.Insertion." << endl;
    cout << "\t2.Searching." << endl;
    cout << "\t3.Deletion." << endl;
    cout<<"Enter your option any integer number from 1 to 4: ";
    cin >> n;

    switch(n)
    {
    case 1:
        cout << "Enter value which you want to Inset: ";
        cin >> value;
        Insertion(value);
        show_list();
        break;
    case 2:
        cout << "Enter value which you want to Search: ";
        cin >> value;
        Searching(value);
        show_list();
        break;
    case 3:
        cout << "Enter value which you want to Delete: ";
        cin >> value;
        Deletion(value);
        show_list();
        break;
    default:
        cout << "You entered an invalid number. Please ry to give valid number.!\a" << endl;
    }

    return 0;
}
