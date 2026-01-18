int t = int.Parse(System.Console.ReadLine());
for (; t > 0; t--)
{
	List<int> input = System.Console.ReadLine().Split(' ').Select(int.Parse).ToList();
	int n = input[0], m = input[1], h = input[2];
	List<int> a = System.Console.ReadLine().Split(' ').Select(int.Parse).ToList(),
		ori = new(a);
		HashSet<int> bs = [];
	for (; m > 0; m--)
	{
		input = System.Console.ReadLine().Split(' ').Select(int.Parse).ToList();
		int b = input[0] - 1, c = input[1];
		bs.Add(b);
		a[b] += c;
		if (a[b] > h)
		{
			foreach (int pb in bs)
				a[pb] = ori[pb];
			bs.Clear();
		}
		// a = new(ori);
	}
	Console.WriteLine(string.Join(' ', a));
}