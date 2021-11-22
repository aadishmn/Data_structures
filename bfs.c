#define true 1
#define false 0
#include <stdio.h>
int a[20][20], q[20], visited[20], n, i,j,front=0, rear = -1;
void bfs(int v1)
{
  int v2;
  visited[v1] = true;
  front = rear = -1;
  q[++rear] = v1;
  while (front != rear)
    {
      v1 = q[++front];
      printf ("%d\n", v1);
      for (v2 = 0; v2 < n; v2++)
	{
	  if (a[v1][v2] == 1 && visited[v2] == 0)
	    {
	      q[++rear] = v2;
	      visited[v2] = 1;
	    }
	}
    }
}

void main ()
{
  int v;
  printf("enter the number of vertices:");
  scanf ("%d", &n);
  for(i = 0; i <= n; i++)
    {
      q[i] = 0;
      visited[i] = 0;
    }
  printf("enter graph data in matrix form :\n");
  for(i = 1; i < n; i++)
    {
      for (j = 0; j <= n; j++)
	scanf ("%d", &a[i][j]);
    }


printf("\n enter the starting vertex:");
scanf("%d", &v);
bfs (v);


}
/*
output:
enter the number of vetices:2
enter graph data in matrix form :
12
24
1

 enter the starting vertex:12
 12
 */
 




