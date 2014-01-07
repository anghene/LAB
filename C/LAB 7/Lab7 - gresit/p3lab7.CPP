// 3. Determinati suma, produsul a doua matrice 

# include <stdio.h>
int main ()
{
int x1[10][10],x2[10][10],x3[10][10],x4[10][10];
int i1,j1,n1,m1,i2,j2,n2,m2,i3,j3,m3,n3,s,i4,j4,m4,n4;

printf ("Citirea primei matrici \n");
printf ("Introduceti nr. de linii ");
scanf ("%d",&m1);
printf ("Introduceti nr. de coloane ");
scanf ("%d",&n1);
printf ("Introduceti elementele matricii\n");
for (i1=0;i1<m1;i1++)
for (j1=0;j1<n1;j1++)
	{
	printf ("x[%d,%d]=",i1+1,j1+1);
	scanf ("%d",&x1[i1][j1]);
	}

printf ("Citirea celei de-a 2-a matrici \n");
printf ("Introduceti nr. de linii ");
scanf ("%d",&m2);
printf ("Introduceti nr. de coloane ");
scanf ("%d",&n2);
printf ("Introduceti elementele matricii\n");
for (i2=0;i2<m2;i2++)
for (j2=0;j2<n2;j2++)
	{
	printf ("x[%d,%d]=",i2+1,j2+1);
	scanf ("%d",&x2[i2][j2]);
	}


if ((m1!=m2)||(n1!=n2)) printf ("Nu se poate realiza suma matricilor\n");
	else {
		m3=m1;n3=n1;
		for (i3=0;i3<m3;i3++)
		for (j3=0;j3<n3;j3++)
			x3[i3][j3]=x1[i3][j3]+x2[i3][j3];
		printf ("Matricea suma rezultata este ");
		for (i3=0;i3<m3;i3++)  {
		printf ("\n");
		for (j3=0;j3<n3;j3++)
			printf ("%d ",x3[i3][j3]);
									}
			}

if (n1!=m2) printf ("Nu se poate realiza inmultirea matricilor\n");
	else {
		for (i1=0;i1<m1;i1++)
		{
		j2=0;
		while (j2<n2) {s=0;
			for (i2=0;i2<m2;i2++)
				s+=x1[i1][i2]*x2[i2][j2];
		x4[i1][j2]=s;
		j2++;	}
		}
		m4=m1;
		n4=n2;


		printf ("Mat rezultata este: \n");
		for (i4=0;i4<m4;i4++) {
		printf ("\n");
		for (j4=0;j4<n4;j4++)
		printf ("%d ",x4[i4][j4]);
									}
		}

}
