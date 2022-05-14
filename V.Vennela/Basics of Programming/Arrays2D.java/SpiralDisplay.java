import java.io.*;
import java.util.*;

public class SpiralDisplay {

    public static void main(String[] args) throws Exception {
        // write your code here
        Scanner sc = new Scanner(System.in);
    int r = sc.nextInt();
    int c = sc.nextInt();
    int a[][] = new int[r][c];
    for(int i=0;i<r;i++)
    {
         for(int j=0;j<c;j++)
        {
            a[i][j]=sc.nextInt();
        }
    }
    int minrow=0;
    int mincol=0;
    int maxrow=r-1;
    int maxcol=c-1;
    int count=0;
    int x=r*c;
    while(count<x)
    {
        if(count<x)
        {
            for(int i=minrow;i<=maxrow;i++)
            {
                System.out.println(a[i][mincol]);
                count++;
            }
        }
        mincol++;
        if(count<x)
        {
            for(int i=mincol;i<=maxcol;i++)
            {
                System.out.println(a[maxrow][i]);
                count++;
            }
        }
        maxrow--;
        if(count<x)
        {
            for(int i=maxrow;i>=minrow;i--)
            {
                System.out.println(a[i][maxcol]);
                count++;
            }
        }
        maxcol--;
        if(count<x)
        {
            for(int i=maxcol;i>=mincol;i--)
            {
                System.out.println(a[minrow][i]);
                count++;
            }
        }
        minrow++;
    }
    
    }

}
