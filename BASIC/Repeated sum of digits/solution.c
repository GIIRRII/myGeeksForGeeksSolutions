import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int T, N, sum =0;
		T = sc.nextInt();
		while(T>0)
		{
		    N = sc.nextInt();
		    System.out.println((N%9==0)?9:(N%9));
		    T--;
		}
}
}