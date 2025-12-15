public class Solution
{
	public long GetDescentPeriods(int[] prices)
	{
		long ans=0,pre= long.MaxValue,len=0;
		foreach (int i in prices)
		{
			if(i==pre-1)
				len++;
			else
			{
				ans+=len*(len+1)/2;
				len=1;
			}
			pre=i;
		}
		ans += len * (len + 1) / 2;
		return ans;
	}
	public static void Main()
	{
		Solution s=new();
		Console.WriteLine(s.GetDescentPeriods([3, 2, 1, 4]));
	}
}