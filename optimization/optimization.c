
1. Code Motion or Frequency Reduction :
 
a = 200;
while(a>0)
{
	b = x + y;
	if (a % b == 0)
	printf(“%d”, a);
}


//This code can be further optimized as
a = 200;
b = x + y;
while(a>0)
{
	if (a % b == 0}
	printf(“%d”, a);
}

2. Loop Jamming :

 // Before loop jamming
for(int k=0;k<10;k++)
{
x = k*2;
}

for(int k=0;k<10;k++)
{
y = k+3;
}

//After loop jamming
for(int k=0;k<10;k++)
{
x = k*2;
y = k+3;
}

3. Loop Unrolling : 

//Before Loop Unrolling

for(int i=0;i<2;i++)
{
printf("Hello");
}

//After Loop Unrolling

printf("Hello");
printf("Hello");
