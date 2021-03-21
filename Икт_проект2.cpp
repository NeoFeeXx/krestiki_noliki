	#include <stdio.h>
	#include<windows.h>
	
	int main()
	{
		SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i,j,p,u,o,g,draw,y;
	char player1[80];
	char player2[80];
	float score1, score2; 
	u=0;
	draw=0;
	y=0;
	score1=0;
	score2=0;
	printf ("Правила игры: Игра идёт до 3-х очков. Если Игрок победил, то ему присуждается 1 балл, если оказалась ничья, то по 0,5; После первой игры, соперники должны поменяться знаками. Размеры поля от 0 до 2х. Если хотите поставить знак, то напишите сначала где он должен находиться по вертикали, а потом по горизонтали");
	printf ("\n");
	printf ("Игрок1, введите ваш никнейм:");
	scanf ("%s",&player1);
	printf ("\n");
	printf ("Игрок2, введите ваш никнейм:");
	scanf ("%s",&player2);
	const int n=3;
	const int k=3;
	printf ("\n");
	char A[n][k];
	
	while (1!=0)
	{
		printf ("\n");
		if (score1==3)
		break;
		if (score2==3)
		break;
			if (score1>3)
		break;
		if (score2>3)
		break;
		for ( i = 0; i < n; i ++ )
	for ( j = 0; j < k; j ++ )
	A[i][j] = '*';
	for ( i = 0; i < n; i ++ )
	{
	for ( j = 0; j < k; j ++ )
	{
	printf ("%c", A[i][j]);
	}
	printf ("\n");
	}
	while (u<9)
	{
	if (A[0][0]==A[0][1] && A[0][1]==A[0][2] && A[0][1]!='*')
	{
	draw++;
	break;
	}
	else if (A[1][0]==A[1][1] && A[1][1]==A[1][2] && A[1][1]!='*')
	{
		draw++;
	break;
	}
	else if (A[0][0]==A[1][0] && A[1][0]==A[2][0] && A[1][0]!='*')
	{
		draw++;
	break;
	}
	else if (A[0][1]==A[1][1] && A[1][1]==A[2][1] && A[1][1]!='*')
	{
		draw++;
	break;
	}
	else if (A[2][0]==A[2][1] && A[2][1]==A[2][2] && A[2][1]!='*')
	{
		draw++;
	break;
	}
	else if (A[0][2]==A[1][2] && A[1][2]==A[2][2] && A[1][2]!='*')
	{
		draw++;
	break;
	}
	else if (A[0][0]==A[1][1] && A[1][1]==A[2][2] && A[1][1]!='*')
	{
		draw++;
	break;
	}
	else if (A[2][0]==A[1][1] && A[1][1]==A[0][2] && A[0][2]!='*')
	{
		draw++;
	break;
	}
	if (u%2==0){
	scanf ("%d",&o);
	scanf ("%d",&g);
	A[o][g]='x';
	for ( i = 0; i < k; i ++ )
	{
	for ( j = 0; j < n; j ++ )
	{
	printf ("%c", A[i][j]);
	}
	printf ("\n");
	}
	u++;
	}
	else
	{
	scanf ("%d",&o);
	scanf ("%d",&g);
	A[o][g]='o';
	for ( i = 0; i < k; i ++ )
	{
	for ( j = 0; j < n; j ++ )
	{
	printf ("%c", A[i][j]);
	}
	printf ("\n");
	}
	u++;
	}
	}
	if (y%2==0)
	{
		if (A[0][0]=='x' && A[0][1]=='x' && A[0][2]=='x')
		score1=score1 + 1;
		else if (A[1][0]=='x' && A[1][1]=='x' && A[1][2]=='x')
		score1=score1 + 1;
		else if (A[0][0]=='x' && A[1][0]=='x' && A[2][0]=='x')
		score1=score1 + 1;
		else if (A[0][1]=='x' && A[1][1]=='x' && A[2][1]=='x')
		score1=score1 + 1;
		else if (A[2][0]=='x' && A[2][1]=='x' && A[2][2]=='x')
		score1=score1 + 1;		
		else if (A[0][2]=='x' && A[1][2]=='x' && A[2][2]=='x')
		score1=score1 + 1;
		else if (A[0][0]=='x' && A[1][1]=='x' && A[2][2]=='x')
		score1=score1 + 1;
		else if (A[2][1]=='x' && A[2][2]=='x' && A[1][2]=='x')
		score1=score1 + 1;
		if (A[0][0]=='o' && A[0][1]=='o' && A[0][2]=='o')
		score2=score2 + 1;
		else if (A[1][0]=='o' && A[1][1]=='o' && A[1][2]=='o')
		score2=score2 + 1;
		else if (A[0][0]=='o' && A[1][0]=='o' && A[2][0]=='o')
		score2=score2 + 1;
		else if (A[0][1]=='o' && A[1][1]=='o' && A[2][1]=='o')
		score2=score2 + 1;
		else if (A[2][0]=='o' && A[2][1]=='o' && A[2][2]=='o')
		score2=score2 + 1;
		else if (A[0][2]=='o' && A[1][2]=='o' && A[2][2]=='o')
		score2=score2 + 1;
		else if (A[0][0]=='o' && A[1][1]=='o' && A[2][2]=='o')
		score2=score2 + 1;
		else if (A[2][0]=='o' && A[1][1]=='o' && A[0][2]=='o')
		score2=score2 + 1;
	}
	else
	{
		if (A[0][0]=='x' && A[0][1]=='x' && A[0][2]=='x')
		score2=score2 + 1;
		else if (A[1][0]=='x' && A[1][1]=='x' && A[1][2]=='x')
		score2=score2 + 1;
		else if (A[0][0]=='x' && A[1][0]=='x' && A[2][0]=='x')
		score2=score2 + 1;
		else if (A[0][1]=='x' && A[1][1]=='x' && A[2][1]=='x')
		score2=score2 + 1;
		else if (A[2][0]=='x' && A[2][1]=='x' && A[2][2]=='x')
		score2=score2 + 1;		
		else if (A[0][2]=='x' && A[1][2]=='x' && A[2][2]=='x')
		score2=score2 + 1;
		else if (A[0][0]=='x' && A[1][1]=='x' && A[2][2]=='x')
		score2=score2 + 1;
		else if (A[2][1]=='x' && A[2][2]=='x' && A[1][2]=='x')
		score2=score2 + 1;
		if (A[0][0]=='o' && A[0][1]=='o' && A[0][2]=='o')
		score1=score1 + 1;
		else if (A[1][0]=='o' && A[1][1]=='o' && A[1][2]=='o')
		score1=score1 + 1;
		else if (A[0][0]=='o' && A[1][0]=='o' && A[2][0]=='o')
		score1=score1 + 1;
		else if (A[0][1]=='o' && A[1][1]=='o' && A[2][1]=='o')
		score1=score1 + 1;
		else if (A[2][0]=='o' && A[2][1]=='o' && A[2][2]=='o')
		score1=score1 + 1;
		else if (A[0][2]=='o' && A[1][2]=='o' && A[2][2]=='o')
		score1=score1 + 1;
		else if (A[0][0]=='o' && A[1][1]=='o' && A[2][2]=='o')
		score1=score1 + 1;
		else if (A[2][0]=='o' && A[1][1]=='o' && A[0][2]=='o')
		score1=score1 + 1;
	}
	y++;
	if (draw==0) 
	{
		score1=score1+0.5;
		score2=score2+0.5;
		
	}
	draw=0;
	printf ("\n");
	printf ("Счет: ");
	printf ("\n");
	printf ("%s", player1);
	printf (" ");
	printf ("%f", score1);
	printf ("\n");
	
	printf ("%s", player2);
	printf (" ");
	printf ("%f",score2);
	u=0;
	}
	printf ("\n");
	if (score1==3)
	{
		printf ("Победил ");
		printf ("%s",player1);
	}
			if (score1>3)
			{
		printf ("Победил ");
		printf ("%s",player1);
		}
	if (score2>3)
	{
		printf ("Победил ");
		printf ("%s",player2);
		}
		if (score1==3 && score2==3)
		printf ("Ничья");
	return 0;
	}
