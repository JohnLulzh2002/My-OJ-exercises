public class Solution
{
	public bool IsTrionic(int[] nums)
	{
		int i = 0, haveIndice = 0, indiceCount = 0;
		for (; i < nums.Length - 1; i++)
			if (nums[i] >= nums[i + 1])
				break;
			else
				haveIndice = 1;
		indiceCount += haveIndice;
		haveIndice = 0;
		for (; i < nums.Length - 1; i++)
			if (nums[i] <= nums[i + 1])
				break;
			else
				haveIndice = 1;
		indiceCount += haveIndice;
		haveIndice = 0;
		for (; i < nums.Length - 1; i++)
			if (nums[i] >= nums[i + 1])
				break;
			else
				haveIndice = 1;
		indiceCount += haveIndice;
		return indiceCount == 3 && i == nums.Length - 1;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.IsTrionic([1, 3, 5, 4, 2, 6]));
	}
}