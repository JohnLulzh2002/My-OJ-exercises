public class Solution
{
	public int SumFourDivisors(int[] nums)
	{
		int ans=0;
		foreach (int a in nums)
		{
			int i=1,s=0,c=0;
			for (; i*i < a; i++)
			{
				if (a%i==0)
				{
					s+=i;
					s+=a/i;
					c+=2;
				}
			}
			if (i*i==a)
			{
				s+=i;
				c++;
			}
			if(c==4)
				ans+=s;
		}
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.SumFourDivisors([21, 4, 7]));
	}
}