public class Solution
{
	public int[] CountMentions(int numberOfUsers, IList<IList<string>> events)
	{
		int[] ans = new int[numberOfUsers];
		SortedSet<int>[] offlineTimes = new SortedSet<int>[numberOfUsers];
		for (int i = 0; i < numberOfUsers; i++)
		{
			offlineTimes[i]= [];
		}
		var MESSAGE = events.Where(x => "MESSAGE".Equals(x[0]))
			.Select(x => (int.Parse(x[1]), x[2]));
		var OFFLINE = events.Where(x => "OFFLINE".Equals(x[0]))
			.Select(x => (int.Parse(x[1]), int.Parse(x[2])));
		foreach ((int timestamp, int id) in OFFLINE)
		{
			offlineTimes[id].Add(timestamp);
		}
		foreach ((int timestamp, string s) in MESSAGE)
		{
			switch (s[0])
			{
				case 'A':
					for (int i = 0; i < numberOfUsers; i++)
					{
						ans[i]++;
					}
					break;
				case 'H':
					for (int i = 0; i < numberOfUsers; i++)
					{
						var set = offlineTimes[i];
						if (set.Count > 0 && set.Min<=timestamp)
						{
							var view = set.GetViewBetween(set.Min, timestamp);
							int? m = view.Count > 0 ? view.Max : null;
							if (m is int && m + 60 > timestamp)
								continue;
						}
						;
						ans[i]++;
					}
					break;
				case 'i':
					var ids = s.Split(' ').Select(x => int.Parse(x.Substring(2)));
					foreach (int i in ids)
					{
						ans[i]++;
					}
					break;
			}
		}
		return ans;
	}
	public static void Main()
	{
		Solution s = new();
		// Console.WriteLine(string.Join(' ',s.CountMentions(2, [["MESSAGE", "10", "id1 id0"], ["OFFLINE", "11", "0"], ["MESSAGE", "71", "HERE"]])));
		Console.WriteLine(string.Join(' ',s.CountMentions(4, [["MESSAGE", "5", "id1 id2"], ["OFFLINE", "10", "1"], ["MESSAGE", "20", "HERE"], ["OFFLINE", "30", "2"], ["MESSAGE", "35", "HERE"]])));
	}
}