int i,j,dem=1;
float c[100];
for(i=2;i<=m;i+2)
{
	a[dem]=1;
	for(j=1;j<=n;j++)
	{
		a[dem]=a[dem]*a[i][j];
	}
	dem++;
}
