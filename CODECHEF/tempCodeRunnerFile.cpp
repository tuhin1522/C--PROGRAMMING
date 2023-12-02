for(int i=n;i>=1;i--)
        {
            backward[i] = __gcd(backward[i+1],a[i]);
        }