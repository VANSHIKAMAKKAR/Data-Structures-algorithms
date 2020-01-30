import java.net.*;
import java.io.*;
class networkk
{
	public static void main(String args[]) throws Exception
	{
	Socket s=new Socket("Internic.net",42);
	InputStream i=s.getInputStream();
	OutputStream o=s.getOutputStream();
    String name="rediff.com";
    o.write(name.getBytes());
    while(true)
    {
    	int x=i.read();
    	if(x==-1)
    	{
    		break;
    	}
    	System.out.println((char)x);
    }
    s.close();
	}
}