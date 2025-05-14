struct Car {
 char plate[11]; // max 10 characters + null terminator
 char brand[31]; // max 30 characters + null terminator
 int year;
 float price;
 int status; // 0 = Available, 1 = Rented
};

void listAvailableCars(struct Car *cars, int n) {
   printf("\nAvailable Cars:\n");
     for (int i = 0; i < n; i++) {
       if (cars[i].status == 0) {
       printf("Plate: %s, Brand: %s, Year: %d, Price: %.2f\n",
       cars[i].plate, cars[i].brand, cars[i].year, cars[i].price);
     }
   }
}

int main() {
   int n, i;
   printf("Enter the number of cars: ");
   scanf("%d", &n);
   getchar(); // Clear newline from buffer
   struct Car *cars = (struct Car *)malloc(n * sizeof(struct Car));
   if (cars == NULL) {
   printf("Memory allocation failed.\n");
   return 1;
 }
