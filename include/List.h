namespace listtest
{
    class List
    {
        public:
            List(List* previousNode, int data);
            List(const List& list) = delete;
            List& operator=(const List& list) = delete;

            void addElement(int data);
            static List* createList(int data);

        private:
            List* PreviousNode;
            List* NextNode;
            int Data;
    };
}