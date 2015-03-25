import java.io.*;
import java.math.* ;
 public class Main
 {    


public static void main(String[] args) throws IOException {
BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));

String line =bi.readLine();
int i  = Integer.parseInt(line);
for(int x = 1 ;x<=i;x++){
int f = Integer.parseInt(bi.readLine());
System.out.println(func(f));




}




}


public static int func(int a )
{int total = 0;
 int count = 1 ;
int c= 6;
while(c!=0){
c =  (int)  (a/(Math.pow(5,count)));
count = count + 1 ;
total = total+ c;

}


return total;



}


 } 