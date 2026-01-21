public class Solution
{
	public int[] MinBitwiseArray(IList<int> nums)
	{
		int[] ans=new int[nums.Count];
		for (int i = 0; i < nums.Count; i++)
		{
			int a=-1;
			for (int j = 1; j < nums[i]; j++)
			
				if ((j|(j+1))==nums[i])
				{
					a=j;
					break;
				}
			ans[i]=a;
		}
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(string.Join(' ',s.MinBitwiseArray([2, 3, 5, 7])));
	}
}