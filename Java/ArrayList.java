/*Utkarsh Solutions*/
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
public class Solution {

    public static void main(String[] args) {
       int n;
        Scanner sc = new Scanner(System.in);
        n= sc.nextInt();
        ArrayList<ArrayList<Integer>> rows = new ArrayList<>(n);
        for(int i=0;i<n;i++)
        {
            int d = sc.nextInt();
            ArrayList<Integer> col = new ArrayList<>();
            for(int j=0;j<d;j++)
            {
                col.add(sc.nextInt());
            }
            rows.add(col);
        }
        int q = sc.nextInt();
        for (int  k=0;k<q;k++)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            try{
                System.out.println(rows.get(a-1).get(b-1));
            }
            catch(IndexOutOfBoundsException e){
                System.out.println("ERROR!");
            }
        }
    }
}