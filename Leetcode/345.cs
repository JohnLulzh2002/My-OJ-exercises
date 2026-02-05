public class Solution
{
	public string ReverseVowels(string s)
	{
		Stack<char> stack=new();
		char[] ans=new char[s.Length];
		bool[] isVowel=new bool[s.Length];
		char[] vowel=['a','e','i','o','u','A','E','I','O','U'];
		for (int i = 0; i < s.Length; i++)
		{
			char c=s[i];
			if (vowel.Contains(c))
			{
				stack.Push(c);
				isVowel[i]=true;
			}else
			{
				ans[i]=c;
				isVowel[i] = false;
			}
		}
		for (int i = 0; i < s.Length; i++)
		{
			if (isVowel[i])
			{
				ans[i]=stack.Pop();
			}
		}
		return new string(ans);
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.ReverseVowels("IceCreAm"));
	}
}