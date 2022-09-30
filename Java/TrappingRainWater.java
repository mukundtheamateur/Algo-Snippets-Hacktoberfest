
package com.pumpkin.basic
 
import java.io.BufferedReader;
import java.io.InputStreamReader;
 
class TestClass {
    public static void main(String args[]) throws Exception {
         
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        String[] str = br.readLine().split(" ");
        int[] arr = new int[n];
        for(int i=0; i<n; i++)
        {
            arr[i] = Integer.parseInt(str[i]);
        }
        int[] left = new int[n];
        int[] right = new int[n];
         
        left[0] = arr[0];
        for(int i=1; i<n; i++)
        {
            left[i] = Math.max(left[i-1],arr[i]);
        }
         
        right[n-1] = arr[n-1];
        for(int i=n-2; i>=0; i--)
        {
            right[i] = Math.max(right[i+1],arr[i]);
        }
         
        int total = 0;
        for(int i=0; i<n; i++)
        {
            total += Math.min(left[i],right[i]) - arr[i];
        }
        System.out.println(total);
    }
}
