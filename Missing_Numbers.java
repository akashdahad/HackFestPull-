import java.util.*;
public class Missing_Numbers {

    public static void main(String[] args) {
        // TODO Auto-generated method stub
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         int m=sc.nextInt();
        //ArrayList<Integer> arr=new ArrayList<Integer>();
        //ArrayList<Integer> brr=new ArrayList<Integer>();
        //HashSet<Integer> set=new HashSet<Integer>(); 
        //ArrayList<Integer> brr1=new ArrayList<Integer>();
        int arr[];
        int brr[];
        int arr[]=new arr[n];
        int brr[]=new brr[m];
        for (int i = 0; i < n; i++)
            //arr.add(sc.nextInt());
            
        for (int j = 0; j < m; j++)
            brr.add(sc.nextInt());
        for(int j=0;j<n;j++)
        {
            for(int i=0;i<m;i++)
            {
                if(arr.get(j)== brr.get(i))
                {
                    // System.out.println(arr.get(j)+" "+brr.get(i));
                    // System.out.println("------------------");
                    set.add(brr.get(i));
                }
            }       
        }
        //System.out.println(set);
        for (int t : set) 
            brr1.add(t); 
        for(int i=0;i<brr1.size();i++)
        {
            brr.removeAll(set);
        }
        for(int i=0;i<brr.size();i++)
        {
            System.out.println(brr.get(i));
        }
    }
}