public class Solution
{
	public int Compress(char[] chars)
	{
		char last = chars[0];
		int count = 1, l = 0;
		foreach (char c in chars.Skip(1).Append('\0'))
		{
			if (c == last)
				count++;
			else
			{
				chars[l++] = last;
				if (count > 1)
				{
					foreach (char d in count.ToString())
					{
						chars[l++] = d;
					}
				}
				last=c;
				count=1;
			} 
		}
		return l;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.Compress(['a', 'a', 'b', 'b', 'c', 'c', 'c']));
	}
}