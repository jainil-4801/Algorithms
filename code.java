import java.util.*;
import java.io.*;
class Main
{
	public static void main(String []args)
	{
		FastScanner KB = new FastScanner();
	    PrintWriter pw = new PrintWriter(System.out);
		StringBuilder out = new StringBuilder();
		long T,i,j,k,N;
		T=KB.nextLong();
		for(k=1;k<=T;k++)
		{
			N=KB.nextLong();
			long sum= ( N*(N+1) )/2;
            if(sum%2==1)
            {
                System.out.println("0");
                continue;
            }
			long key=sum/2;
			
			long cc=0;
	        long l = 1, r = N; 
	        while (l <= r) 
	        { 
	            long mid = (l + r) / 2; 
	            long sumq = (mid * (mid + 1)) / 2; 
	            if (sumq == key) 
	            {   
	            	cc=mid;
	                break;
                }
	            else if (sumq > key) 
	            {    
                    r = mid - 1; 
	            }
	            else
	            {   
	            	l = mid + 1; 
	            	cc=l-1; 
                }
	        } 	        
	        
	        long ans = (N-cc);
			long count=0;
			if((cc*(cc+1))/2 == key)
			{
				count = ans + (cc*(cc-1))/2 + (ans*(ans-1))/2;
			}
			else
			{ 
				count=ans;
			}
			System.out.println(count);	
		}
		pw.print(out.toString());
		pw.flush();
	}
	
	static class FastScanner {
		public BufferedReader reader;
		public StringTokenizer tokenizer;
		public FastScanner() {
			reader = new BufferedReader(new InputStreamReader(System.in), 32768);
			tokenizer = null;
		}
		public String next() {
			while (tokenizer == null || !tokenizer.hasMoreTokens()) {
				try {
					tokenizer = new StringTokenizer(reader.readLine());
				} catch (IOException e) {
					throw new RuntimeException(e);
				}
			}
			return tokenizer.nextToken();
		}
		public int nextInt() {
			return Integer.parseInt(next());
		}
		public long nextLong() {
			return Long.parseLong(next());
		}
		public double nextDouble() {
			return Double.parseDouble(next());
		}
		public String nextLine() {
			try {
				return reader.readLine();
			} catch(IOException e) {
				throw new RuntimeException(e);
			}
		}
	}
}
