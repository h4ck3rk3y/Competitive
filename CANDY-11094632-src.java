import java.io.*;
import java.math.* ;
 public class Main
 {    


public static void main(String[] args) throws IOException {


int s ;
BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
int r = Integer.parseInt(bi.readLine());
int total =0;
while(r!=-1){total = 0;
int fucker[] = new int[r];
for(int x = 1;x<=r;x++){
s = Integer.parseInt(bi.readLine());
fucker[x-1]=s;
total = total + s;
}
if(total%r!=0){
System.out.println("-1");}
if(total%r==0){
s=total/r;
System.out.println(func(s,fucker,r));}
r = Integer.parseInt(bi.readLine());

}


}





public static int func(int a,int r[],int c )
{int moves=0;
 c= c-1;
 while(c>=0){

if(r[c]>a){
moves = moves + r[c] - a;
}
c--;
}
return moves;
}


} 