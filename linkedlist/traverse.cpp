#include <iostream>
using namespace std;

// Define the structure for a Node in the linked list
struct Node
{
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

// Define the LinkedList class
class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    // Function to insert a node at the beginning of the list
    void insertAtBeginning(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        cout << "Inserted " << value << " at the beginning." << endl;
    }

    // Function to insert a node at the end of the list
    void insertAtEnd(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "Inserted " << value << " at the end." << endl;
    }

    // Function to delete a node by key
    void deleteNode(int key)
    {
        if (head == nullptr)
        {
            cout << "List is empty. Cannot delete." << endl;
            return;
        }

        Node *temp = head;
        Node *prev = nullptr;

        if (temp != nullptr && temp->data == key)
        {
            head = temp->next;
            delete temp;
            cout << "Deleted " << key << " from the list." << endl;
            return;
        }

        while (temp != nullptr && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr)
        {
            cout << "Key " << key << " not found in the list." << endl;
            return;
        }

        prev->next = temp->next;
        delete temp;
        cout << "Deleted " << key << " from the list." << endl;
    }

    // Function to display the linked list
    void display()
    {
        Node *temp = head;
        if (temp == nullptr)
        {
            cout << "List is empty." << endl;
            return;
        }

        cout << "Linked List: ";
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    // Destructor to free memory
    ~LinkedList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            Node *toDelete = temp;
            temp = temp->next;
            delete toDelete;
        }
        head = nullptr;
    }
};

int main()
{
    LinkedList list;
    int choice, value, key;

    do
    {
        cout << "\n***** MENU *****" << endl;
        cout << "1. Insert at beginning" << endl;
        cout << "2. Insert at end" << endl;
        cout << "3. Delete a node" << endl;
        cout << "4. Display the list" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice; // input the choice

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert at beginning: ";
            cin >> value;
            list.insertAtBeginning(value);
            break;
        case 2:
            cout << "Enter value to insert at end: ";
            cin >> value;
            list.insertAtEnd(value);
            break;
        case 3:
            cout << "Enter key to delete: ";
            cin >> key;
            list.deleteNode(key);
            break;
        case 4:
            list.display();
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
