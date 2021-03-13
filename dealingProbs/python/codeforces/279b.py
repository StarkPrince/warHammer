'''B. Books
time limit per test2 seconds
memory limit per test256 megabytes
input standard input
output standard output
When Valera has got some free time, he goes to the library to read some books. Today he's got t free minutes to read. That's why Valera took n books in the library and for each book he estimated the time he is going to need to read it. Let's number the books by integers from 1 to n. Valera needs a i minutes to read the i-th book.

Valera decided to choose an arbitrary book with number i and read the books one by one, starting from this book. In other words, he will first read book number i, then book number i + 1, then book number i + 2 and so on. He continues the process until he either runs out of the free time or finishes reading the n-th book. Valera reads each book up to the end, that is, he doesn't start reading the book if he doesn't have enough free time to finish reading it.

Print the maximum number of books Valera can read.

Input
The first line contains two integers n and t (1 ≤ n ≤ 105; 1 ≤ t ≤ 109) — the number of books and the number of free minutes Valera's got. The second line contains a sequence of n integers a 1, a 2, ..., a n (1 ≤ a i ≤ 104), where number a i shows the number of minutes that the boy needs to read the i-th book.

Output
Print a single integer — the maximum number of books Valera can read.'''

a = list(int(x) for x in input().split())
b = list(int(x) for x in input().split())
b.sort()
no_of_books = a[0]
books_read = 0
while(len(b)!=no_of_books):
    b=list (int (x) for x in input ().split ())
    continue
time = a[1]
for i in range(no_of_books):
    if time>=b[i]:
        time -= b[i]
        books_read += 1
    else:
        break
print(books_read)