#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
	int bookId;
	char title[100];
	char author[50];
	int year;
	int status;//1 is borrowed 0 is available
} Book;
Book collectBookInfo()//section c
{
	Book book;
	printf("Enter book Id:");
	scanf("%d",&book.bookId);
	fflush(stdin);
	printf("Enter title:");
	fgets(book.title,100,stdin);
	fflush(stdin);
	printf("Enter Author name:");
	fgets(book.author,50,stdin);
	fflush(stdin);
	printf("Enter Publication year:");
	scanf("%d",&book.year);
	fflush(stdin);
	book.status=0;
	return book;
}
void printBook(Book book)
{
	printf("%d\t%s\t%s\t%d\t%d\n",book.bookId,book.title,book.author,book.year,book.status);
	return;
}
Book findOldestBook(Book book[], int n)
{
	int i;
	Book temp;
	int year=book[0].year;
	temp=book[0];
	for(i=1;i<n;i++) 
	   if(book[i].year<=year) 
	   {
	   	  year=book[i].year;
	   	  temp=book[i];
	   }
	return temp;   
}
void listBookInfo(Book book[],int n)
{
	int i;
	for(i=0;i<n;i++)
	   if(book[i].status==1) printBook(book[i]);
}
int main()
{
	Book book[100];//section a
	Book oldest;
	int n,i;
	printf("Enter number of books:");
	scanf("%d",&n);//section b
	for(i=0;i<n;i++)
	    book[i]=collectBookInfo();
    listBookInfo(book,n);
    oldest=findOldestBook(book,n);
    printBook(oldest);
    return 0;
}
