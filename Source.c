//Program to demonstrate DIJKSTRA'S ALGORITHM in C....

//Headerfiles...

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//Global variable 
#define INF 9999

int main()
{
	int arr[4][4];      //this array represents the array of weights of                                                                              //the vertices in the graph
	int cost[4][4] = { 7, 5, 0, 0, 7, 0, 0, 2, 0, 3, 0, 0, 4, 0, 1, 0 };      // 0's in this matrix are the distances which are                                                                             // still need to be calculated..
  int i, j, k, n = 4;   //looping variables (n is the sizing variables)
	
	system("cls");    //For clearing the screen

  //the initiallization loop for the array arr[][]
	for (i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			if (cost[i][j] == 0)
			{
				arr[i][j] = INF;
			}
			else
			{
				arr[i][j] = cost[i][j];
			}
		}
	}
	
	printf("Adjency matrix of cost of edges : \n");
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}

	for (k = 0; k < n; k++)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (arr[i][j] > (arr[i][k] + arr[k][j]))
				{
					arr[i][j] = arr[i][k] + arr[k][j];
				}
			}
		}
	}
	
	printf("\n");
	printf("Adjency matrix of lowest cost between the vertices:\n");

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	system("pause");
}
