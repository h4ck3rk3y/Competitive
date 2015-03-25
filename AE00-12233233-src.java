import java.io.*;
import java.math.* ; 
import java.util.*;
  public class Main
 {    


public static void main(String[] args) throws IOException {
BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
String line =bi.readLine();
int n = Integer.parseInt(line);
int i,j,c=0;
for(i=1;i<=(int)Math.sqrt(n);i++){
	
	for(j=i+1;i*j<=n;j++){
		
		c++;
	}
}

c = c + (int)Math.sqrt(n);
System.out.println(c);



}}









