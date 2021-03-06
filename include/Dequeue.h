#include <iostream>

namespace dequeuetest
{
    template<typename T>
    struct Node
    {
        Node(Node* previousNode, T Data);
        Node(const Node& rhs);
        Node* operator=(const Node& rhs);
        ~Node();

        Node* PreviousNode;
        T Data;
        Node* NextNode;
    };

    template<typename T>
    Node<T>::Node(Node* previousNode, T data):PreviousNode(previousNode), 
                                                          Data(data), 
                                                          NextNode(nullptr)
    {
        std::cout << "Node created (" << this << ") PreviousNode: " << PreviousNode << ", Data: " << Data << "\n";
    }

    template<typename T>
    Node<T>::~Node()
    {
        std::cout << "Node deleted (" << this << ") PreviousNode: " << PreviousNode << ", Data: " << Data << ", NextNode: " << NextNode << "\n";
    }

    template<typename T>
    Node<T>* Node<T>::operator=(const Node<T>& rhs)
    {
        std::cout << "Assignment: " << &rhs << std::endl; 
        return rhs;
    }

    template<typename T>
    class Dequeue
    {
        public:
            Dequeue();
            ~Dequeue();
            void push_back(T data);



        private:
            Node<T>* Head;
            Node<T>* Tail;
    };

    template<typename T>
    Dequeue<T>::Dequeue():Head(nullptr), Tail(nullptr) { }

    template<typename T>
    Dequeue<T>::~Dequeue()
    {
        while(Head != nullptr)
        {
            Node<T>* tmp = Head->NextNode;
            tmp->PreviousNode = nullptr;
            delete Head;
            Head = tmp;
        }
    }

    template<typename T>
    void Dequeue<T>::push_back(T data)
    {
        std::cout << "Push back\n";
        Node<T>* newNode = new Node<T>(Tail, data);
        if(Tail != nullptr)
        {
            Tail->NextNode = newNode;
        }
        Tail = newNode;
        if(Head == nullptr)
        {
            Head = newNode;
        }
    }
}