
int main(){
    int n;
    printf("enter no. of lines u want to get printed");
    scanf("%d", &n);

    for(int i=65; i<65+n; i++)
    {
        for(int j=65; j<=i; j++)
        {
            printf("%c", i);
        }
        printf("\n");

    }


return 0;
}