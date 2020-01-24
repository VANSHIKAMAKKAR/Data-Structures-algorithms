import java.util.Scanner;
class queue
{
	static int n=0;
	static int f=-1,r=-1;
	static void addVal(int arr[],int t)
	{
		if(f==-1&&r==-1)
		{
			f++;
			r++;
			arr[r] = t;
		}
		else if(r==n-1&&f==0)
		{
			System.out.println("OverFlow: Value cannot be inserted");
		}
		else if(r==n-1&&f!=0)
		{
			r=0;
			arr[r]=t;
		}
		else if(r+1==f)
		{
			System.out.println("OverFlow: Value cannot be inserted");
		}
		else
		{
			r++;
			arr[r] = t;
		}
	}
	static void deleteFront(int arr[])
	{
		if(f==-1&&r==-1)
		{
			System.out.println("UnderFlow: empty queue");
		}
		else if(f==r)
		{
			System.out.println("popped out "+arr[f]+" value at "+f);
			f=-1;
			r=-1;

		}
		else if(f==n-1)
		{
			System.out.println("popped out "+arr[f]+" value at "+f);
			f=0;
		}
		else
		{
			System.out.println("popped out "+arr[f]+" value at "+f);
			f++;
		}
	}
	static void showFront(int arr[])
	{
		if(f==-1&&r==-1)
		{
			System.out.println("Empty array");
		}
		else
		{
			System.out.println("value at front "+arr[f]);
		}
	}
	static void showRear(int arr[])
	{
		if(f==-1&&r==-1)
		{
			System.out.println("Empty array");
		}
		else
		{
			System.out.println("value at rear "+arr[r]);
		}
	}
	static void printArr(int arr[])
	{
		for(int i=0;i<n;i++)
		{
			System.out.print(arr[i]+" ");
		}
		System.out.println();
	}
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		int arr[] = new int[n];
		while(true)
		{
			System.out.println("Press\n1. Addvalue\n2. DeleteFront\n3. Show front\n4. Show Rear\n5. PrintArr\n6. Endloop");
			int g = sc.nextInt();
			if(g==1)
			{
				int t= sc.nextInt();
				addVal(arr,t);
			}
			if(g==2)
			{
				deleteFront(arr);
			}
			if(g==3)
			{
				showFront(arr);
			}
			if(g==4)
			{
				showRear(arr);
			}
			if(g==5)
			{
				printArr(arr);
			}
			if(g==6)
			{
				break;
			}
		}		
	}
}