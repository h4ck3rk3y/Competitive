import java.io.*;
import java.math.* ;
 public class Main
 {    


public static void main(String[] args) throws IOException {
BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
int flag = 0 ;
double j,k,l;
int term  = 0;
String b = "";
while(flag!=1){


b = bi.readLine();


j = Double.parseDouble(b.substring(0,b.indexOf(" ")));

k = Double.parseDouble(b.substring(b.indexOf(" ")+1,(b.lastIndexOf(" "))));

l = Double.parseDouble(b.substring(b.lastIndexOf(" ")+1,b.length()));
	
if(l == 0 && j == 0 && k == 0){
flag = 1;
break;}

if(type(j,k,l)== 0){

term =(int) (l + (k-j));
System.out.println("AP "+term);
}
else
{term =(int) (l*(k/j));
System.out.println("GP "+ term);

}




}








}


public static int type(double a, double b,double c)
{if((a+c)/2==b){
return  0 ;}
 else {
return  1;}







}


 } 