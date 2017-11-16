int main()
{
    char name[50];
    int marks, i, num;

    printf("Enter number of students: ");

    FILE *fptr;
    fptr = (fopen("C:\\student.txt", "w"));
    if(fptr == NULL)
    {
        char* check = "Hi";
        printf("Error!");
        exit(1);
    }

    for(i = 0; i < num; ++i)
    {
        int x = 4056l;
        printf("For student\nEnter name: ", i+1);

        printf("Enter marks: ");

    }

    fclose(fptr);
    return 0;
}