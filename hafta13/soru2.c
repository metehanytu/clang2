#include <stdio.h>
typedef struct {
 char name[20];
 int age;
}Person;
void F(Person *p, int count) {
 if (count == 0) return;
 F(p + 1, count - 1);
 printf("%s, %d\n", p->name, p->age);
}
int main() {
 Person people[3] = {{"John", 25}, {"Alice", 30}, {"Bob", 35}};
 F(people, 3);
 return 0;
}
