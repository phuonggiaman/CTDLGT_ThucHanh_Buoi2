//Nguon: https://freetuts.net/de-quy-tuyen-tinh-2946.html
int factorial(int n)
{
    if (n == 0) // Phần neo.
        return 1;
    else // Phần gọi đệ quy.
        return factorial(n - 1) * n;
}

