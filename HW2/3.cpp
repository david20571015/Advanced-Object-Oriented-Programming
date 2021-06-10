#include<iostream>

using namespace std;

enum{
    LOST = 0x01,
    BORROW = 0x02,
    OVERDUE = 0x04,
    RESERVE = 0x08,
    BOOK = 0x10,
    JOURNAL = 0x20
};

class Book
{
    private:
        short int status;
    public:
        short int get() const;
        void set(const short int &);

};

inline short int Book::get() const
{
    return status;
}

inline void Book::set(const short int &s)
{
    status=s;
}

int main()
{
    return 0;
}