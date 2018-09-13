#include <stdio.h>

int main(){		
	int x;
	int y;
	int xPos;
	int yPos;
	int Q;	
	int ctr = 0;
	char choice;
	int x1;
	int y1;
	int x2;
	int y2;
	int min;
	int max;
	int xCtr;
	int yCtr;
	int xCor;
	int yCor;
	int value;

	scanf("%d", &x);
	scanf("%d", &y);

	if((0 <= x && x <= 500) && (0 <= y && y <= 500)){
		int table [x][y];
		
		for(xPos = 0; xPos < x; xPos++){
			for(yPos = 0; yPos < y; yPos++){
				scanf("%d", &table[xPos][yPos]);
			}
		}
			
		scanf("%d", &Q);
		
		if(Q <= 40000){
			
			while(ctr < Q){
				scanf("%c", &choice);
				if(choice == 'q'){
					scanf("%d", &x1);
					scanf("%d", &y1);
					scanf("%d", &x2);
					scanf("%d", &y2);	
						
					min = table[x1-1][y1-1];
					max = table[x1-1][y1-1];
						
					for(xCtr = x1-1; xCtr < x2; xCtr++){
						for(yCtr = y1-1; yCtr < y2; yCtr++){
							if(table[xCtr][yCtr] < min)
								min = table[xCtr][yCtr];
							else if(table[xCtr][yCtr] > max)
								max = table[xCtr][yCtr];
						}
					}
						
					printf("%d %d\n", max, min);
					ctr++;
				}
					
				else if(choice == 'c'){
					scanf("%d", &xCor);
					scanf("%d", &yCor);
					scanf("%d", &value);
					table[xCor-1][yCor-1] = value;
					ctr++;
				}
			}
		}
	}
	
	return 0;
}

