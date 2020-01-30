import java.util.*;
class postfix
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		Stack<Integer> stack=new Stack<>();
		String str=sc.next();
		for(int i=0;i<str.length();i++)
		{
			char c =str.charAt(i);
			if(Character.isDigit(c))
			{
				stack.push(c-'0');
			}
			else
			{
				int a=stack.pop();
				int b = stack.pop();
				if(str.charAt(i)=='+')
				{
					b+=a;
					stack.push(b);
				}
				else if(str.charAt(i)=='-')
				{
					b-=a;
					stack.push(b);
				}
				else if(str.charAt(i)=='*')
				{
					b*=a;
					stack.push(b);
				}
				else if(str.charAt(i)=='/')
				{
					b/=a;
					stack.push(b);
				}
			}
		}
		System.out.println(stack.pop());
	}
}