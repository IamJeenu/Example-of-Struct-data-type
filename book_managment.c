#include<stdio.h>
struct book{
	int book_id;
	char book_name[100];
	float book_price;	
};

struct book input(){
	struct book b1;
	printf("\n\n\tInformation of Book Managment\n\n");
	printf("\n\n\tEnter BookID,BookName and BookPrice:\n");
	scanf("%d",&b1.book_id);
	fflush(stdin);
	gets(&b1.book_name);
	scanf("%f",&b1.book_price);
	return (b1);
}

void display(struct book bb){
	printf("\n%d",bb.book_id);
		printf("\n%s",bb.book_name);
	printf("\n%.2lf",bb.book_price);

}

int main(){
	printf("\n\n\tLittle project of book managment Liberary using c lang\n");
	// creating object of struct
	struct book book_one;
	book_one = input();
	display(book_one);


	return 0;
}
