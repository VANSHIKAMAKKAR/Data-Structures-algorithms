import java.io.*;
class Data implements Serializable
{
	String name;
	int age;
	void read(String name,int age)
	{
		this.name=name;
		this.age=age;
	}
	public String toString()
	{
		return (name+" "+age);
	}
}
class filehandling2
{
	public static void main(String args[]) throws Exception
	{
		Data d=new Data();
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String name=br.readLine();
		int age=Integer.parseInt(br.readLine());
		d.read(name,age);
		FileOutputStream fs=new FileOutputStream("abc.doc");
		ObjectOutputStream os=new ObjectOutputStream(fs);
		os.writeObject(d);
		os.flush();
		os.close();
		fs.close();
		FileInputStream fis=new FileInputStream("abc.doc");
		ObjectInputStream ois=new ObjectIntputStream(fis);
		Data dl=(Data)ois.readObject(dl);
		ois.flush();
		ois.close();
		fis.close();
	}
}