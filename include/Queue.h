namespace queuetest
{
    class Queue
    {
        public:
            Queue():Top(nullptr){};
            ~Queue();

            void push(int data);
            int pull();

        private:
            struct Node
            {
                Node(int data):Data(data){};

                Node* NextNode;
                int Data;
            };

            Node* Top;
    };
}