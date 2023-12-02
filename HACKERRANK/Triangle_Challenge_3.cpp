#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pi 3.1415
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    //optimize();
    int n;cin>>n;
    float x = (float)n/3;
    float equilateral_triangle = ((sqrt(3)*x*x)/4);
    float a_2 = x/2;
    float circle_radius = a_2/sqrt(3);
    float circle_area = pi*circle_radius*circle_radius;
    float result = equilateral_triangle-circle_area;
    printf("%.4f",result);
}