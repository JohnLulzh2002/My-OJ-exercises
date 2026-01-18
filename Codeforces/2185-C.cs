int t = int.Parse(System.Console.ReadLine());
for (; t > 0; t--)
{
	int n = int.Parse(System.Console.ReadLine());
	IEnumerable<int> input = System.Console.ReadLine().Split(' ').Select(int.Parse);
	List<int> a = input.Order().Distinct().ToList();
	int last = a.First(), len = 0, ans = 0;
	foreach (int i in a.Skip(1))
	{
		if (i == last + 1)
		{
			len++;
			ans = Math.Max(ans, len);
		}
		else
			len = 0;
		last=i;
	}
	Console.WriteLine($"{ans+1}");
}