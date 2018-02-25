/* Utkarsh's Solution*/

import java.io.*; 
import java.util.*;
import java.text.*;
import java.math.*; 
import java.util.regex.*;
public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger a = new BigInteger(sc.next());
        BigInteger b = new BigInteger(sc.next());
        BigInteger sum,mul;
        sum = a.add(b);
        mul = a.multiply(b);
        System.out.println(sum);
        System.out.println(mul);
        
    }
}