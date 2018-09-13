import java.util.*;

public class Main{
	public static void main(String[]args){
		Scanner scan = new Scanner(System.in);
		
		int x = scan.nextInt();
		int y = scan.nextInt();
		
		if((0 <= x && x <= 500) && (0 <= y && y <= 500)){
			int table [][] = new int [x][y];
		
			for(int xPos = 0; xPos < x; xPos++){
				for(int yPos = 0; yPos < y; yPos++){
					table[xPos][yPos] = scan.nextInt();
				}
			}
			
			int Q = scan.nextInt();
			
			if(Q <= 40000){
				for(int ctr = 0; ctr < Q; ctr++){
					char choice = scan.next().charAt(0);
					
					if(choice == 'q'){
						int x1 = scan.nextInt();
						int y1 = scan.nextInt();
						int x2 = scan.nextInt();
						int y2 = scan.nextInt();
						
						int min = table[x1-1][y1-1];
						int max = table[x1-1][y1-1];
						
						for(int xCtr = x1; xCtr < x2; xCtr++){
							for(int yCtr = y1-1; yCtr < y2; yCtr++){
								if(table[xCtr][yCtr] < min)
									min = table[xCtr][yCtr];
								else if(table[xCtr][yCtr] > max)
									max = table[xCtr][yCtr];
							}
						}
						
						System.out.println(max + " " + min);
					}
					
					else if(choice == 'c'){
						int xCor = scan.nextInt();
						int yCor = scan.nextInt();
						int value = scan.nextInt();
						
						table[xCor-1][yCor-1] = value;
					}
				}
			}
		}
	}
}