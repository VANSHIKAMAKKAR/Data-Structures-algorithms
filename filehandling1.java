import pkg.file;
import java.io.*;
class filehandling1
{
	public static void main(String args[])  throws Exception
	{
		file f=new file();
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String x=br.readLine();
		f.create(x);

	}
}