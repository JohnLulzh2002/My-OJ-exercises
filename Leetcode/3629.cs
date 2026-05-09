public class Solution
{
	List<int> Sieve(int m = 1000001)
	{
		List<int> primes = new(100000);
		minFactor = new int[m + 1];
		for (int i = 2; i <= m; i++)
		{
			if (minFactor[i] == 0)
			{
				primes.Add(i);
				minFactor[i] = i;
			}
			foreach (int p in primes)
			{
				if (i * p > m)
					break;
				minFactor[i * p] = p;
			}
		}
		return primes;
	}
	int[] minFactor = null!;
	List<int> primes = null!;

	public int MinJumps(int[] nums)
	{
		primes = Sieve(nums.Max());
		int n = nums.Length;
		// Console.WriteLine(string.Join(", ",primes));
		Dictionary<int, List<int>> primePos = primes.ToDictionary(p => p, p => new List<int>());
		for (int i = 0; i < n; i++)
			if (primePos.TryGetValue(nums[i], out List<int>? value))
				value.Add(i);
		Queue<int> todo = new([n - 1]);
		int ans = 0;
		bool[] visited = new bool[n + 1];
		while (todo.Count > 0)
		{
			int c = todo.Count;
			for (int i = 0; i < c; i++)
			{
				int a = todo.Dequeue();
				if (a == 0)
					return ans;
				void TryEnqueue(int item)
				{
					if (item >= 0 && item < n && !visited[item])
					{
						visited[item] = true;
						todo.Enqueue(item);
					}
				}
				TryEnqueue(a - 1);
				TryEnqueue(a + 1);
				while (nums[a] > 1)
				{
					int p = minFactor[nums[a]];
					while (nums[a] % p == 0)
						nums[a] /= p;//只访问一次，所以修改原数组
					foreach (int pos in primePos[p])
						TryEnqueue(pos);
				}
			}
			ans++;
		}
		return -1;
	}
	static void Main()
	{
		Solution s = new();
		var ans = s.MinJumps([1, 2, 4, 6]);
		Console.WriteLine(ans);
		// Console.WriteLine(string.Join(' ', ans));
		// Console.WriteLine(string.Join("\n", ans.Select(row => new string(row))));
	}
}