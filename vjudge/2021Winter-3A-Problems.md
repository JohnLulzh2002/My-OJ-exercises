## A - Candies

During the  kindergarten days, flymouse was the monitor of his class. Occasionally  the head-teacher brought the kids of flymouse’s class a large bag of  candies and had flymouse distribute them. All the kids loved candies  very much and often compared the numbers of candies they got with  others. A kid A could had the idea that though it might be the case that another kid B was better than him in some aspect and therefore had a  reason for deserving more candies than he did, he should never get a  certain number of candies fewer than B did no matter how many candies he actually got, otherwise he would feel dissatisfied and go to the  head-teacher to complain about flymouse’s biased distribution.snoopy shared class with flymouse at that time. flymouse always compared the  number of his candies with that of snoopy’s. He wanted to make the  difference between the numbers as large as possible while keeping every  kid satisfied. Now he had just got another bag of candies from the  head-teacher, what was the largest difference he could make out of it?

Input

The input contains a single test cases. The test cases starts with a line with two integers *N* and *M* not exceeding 30 000 and 150 000 respectively. *N* is the number of kids in the class and the kids were numbered 1 through *N*. snoopy and flymouse were always numbered 1 and *N*. Then follow *M* lines each holding three integers *A*, *B* and *c* in order, meaning that kid *A* believed that kid *B* should never get over *c* candies more than he did.

Output

Output one line with only the largest difference desired. The difference is guaranteed to be finite.

Sample Input

```
2 2
1 2 5
2 1 4
```

Sample Output

```
5
```

Hint

32-bit signed integer type is capable of doing all arithmetic.

---

## B - Jungle Roads

![img](https://vj.z180.cn/e7d66346fc0b337fad5f85d5fa5ce673?v=1612126662) 
The Head Elder of the tropical island of Lagrishan has a problem. A  burst of foreign aid money was spent on extra roads between villages  some years ago. But the jungle overtakes roads relentlessly, so the  large road network is too expensive to maintain. The Council of Elders  must choose to stop maintaining some roads. The map above on the left  shows all the roads in use now and the cost in aacms per month to  maintain them. Of course there needs to be some way to get between all  the villages on maintained roads, even if the route is not as short as  before. The Chief Elder would like to tell the Council of Elders what  would be the smallest amount they could spend in aacms per month to  maintain roads that would connect all the villages. The villages are  labeled A through I in the maps above. The map on the right shows the  roads that could be maintained most cheaply, for 216 aacms per month.  Your task is to write a program that will solve such problems.  


Input

The input consists of one to 100 data sets, followed by a final line containing  only 0. Each data set starts with a line containing only a number n,  which is the number of villages, 1 < n < 27, and the villages are  labeled with the first n letters of the alphabet, capitalized. Each data set is completed with n-1 lines that start with village labels in  alphabetical order. There is no line for the last village. Each line for a village starts with the village label followed by a number, k, of  roads from this village to villages with labels later in the alphabet.  If k is greater than 0, the line continues with data for each of the k  roads. The data for each road is the village label for the other end of  the road followed by the monthly maintenance cost in aacms for the road. Maintenance costs will be positive integers less than 100. All data  fields in the row are separated by single blanks. The road network will  always allow travel between all the villages. The network will never  have more than 75 roads. No village will have more than 15 roads going  to other villages (before or after in the alphabet). In the sample input below, the first data set goes with the map above.  

Output

The  output is one integer per line for each data set: the minimum cost in  aacms per month to maintain a road system that connect all the villages. Caution: A brute force solution that examines every possible set of  roads will not finish within the one minute time limit.  

Sample Input

```
9
A 2 B 12 I 25
B 3 C 10 H 40 I 8
C 2 D 18 G 55
D 1 E 44
E 2 F 60 G 38
F 0
G 1 H 35
H 1 I 35
3
A 2 B 10 C 40
B 1 C 20
0
```

Sample Output

```
216
30
```

---

## C - Tokitsukaze and Rescue

Claris, a  powerful evil magician, wants to monopolize CJB for the extraordinary  beauty of her. Due to the power limitation of CJB, she can't escape from Claris without any assistance. The alchemist Tokitsukaze has heard this savage act and wants to rescue the princess CJB. 

There are *n* cities numbered from 1 to *n* in the kingdom Adalet. Because of the excellent transportation, there  is exactly a two-way road between any two cites. Tokitsukaze lives in  city 1. The Magician Claris lives in city *n*. Since the exam will be held soon, Tokitsukaze wants to rescue CJB as  fast as possible, so she will choose the shortest path to reach city *n*. 

Claris has also heard this news and is afraid of being punished, so he decides to slow Tokitsukaze down by making an explosion on *k* roads he chose and causing these roads to lose their capability of  two-way transportation, since it can pave the way for having enough time to prepare his powerful magic against Tokitsukaze. 

Tokitsukaze knows some roads will be destroyed and can immediately  recognize where they are, but she has no approach to prevent this  explosion, so she chooses just to move along the shortest path after  Claris completes his explosion. 

Now Claris wants to know, after finishing his explosion, what the longest possible length is of the shortest path from city 1 to city *n*

. 

Input

There are several test cases. 

The first line contains an integer *T*

(1≤*T*≤100), denoting the number of test cases. Then follow all the test cases. 

For each test case, the first line contains two integers *n* and *k*(3≤*n*≤50,1≤*k*≤min(*n*−2,5)), denoting the number of cities and the number of roads being exploded, respectively. 

The next *n*(*n*−1)2 lines describe all the roads, where each line contains three integers *u*, *v* and *w*(1≤*u*,*v*≤*n*,*u*≠*v*,1≤*w*≤104), representing a two-way road of length *w* between city *u* and city *v*. It is guaranteed that for every two cities, there exists exactly one road whose length is randomly distributed between 1 and 104

. 

Output

For each case, output in one line an integer, denoting the longest possible length of the shortest path after the explosion. 

Sample Input

```
3
5 1
1 2 2990
1 3 2414
1 4 4018
1 5 6216
2 3 9140
2 4 4169
2 5 550
3 4 6618
3 5 3206
4 5 105
5 2
1 2 2990
1 3 2414
1 4 4018
1 5 6216
2 3 9140
2 4 4169
2 5 550
3 4 6618
3 5 3206
4 5 105
5 3
1 2 2990
1 3 2414
1 4 4018
1 5 6216
2 3 9140
2 4 4169
2 5 550
3 4 6618
3 5 3206
4 5 105
```

Sample Output

```
4123
5620
6216
```

---

## D - Little W and Contest

There are *n* members in our ACM club. Little W wants to select three persons from  our club to form a new team taking part in provincial ACM contests, as  it is known by all of us that any ACM contest requires a normal team to  have three members. 

Little W has divided our club members into two role groups. The  first group contains only readers who dedicate themselves to reading  problems during contests, though sometimes they may also prepare  drinking and food for the team. For the sake of measurement, we define  the power of a reader as 1. The second part contains only coders who code and test programs all the time, and similarly, we define the power of a coder as 2. 

Little W thinks it will be a tremendous disaster when a team has  two readers because in that case, the total power of this team is less  than 5 and thus it has a high risk to fail the contest. To avoid that, Little W thinks a new team must have at least two coders. 

Additionally, Little W defines the relationship between club members with transitivity. That is, for every three members *A*, *B*, and *C*, if *A* is familiar with *B*, and *B* is familiar with *C*, then *A* will be familiar with *C* through *B* instantly. Based on the definition, it is forbidden for the team to have any two members familiar with each other. 

At first, no member of our club is familiar with any other, and  then Little W will repeatedly make an introduction between two members  who are currently strangers to each other until each member is familiar  with all the others. During this process, there will be exactly (*n*−1) introductions. 

Now, for *i*=1,2,…,*n*, Little W wants you to count the combinations of three club members that can form a new team after the first (*i*−1) introductions have been made. However, the numbers of combinations may  be quite gigantic, so you just need to report each number in modulo (109+7)

. 

Input

There are several test cases. 

The first line contains an integer *T*

 (1≤*T*≤10), denoting the number of test cases. Then follow all the test cases. 

For each test case, the first line contains an integer *n*(1≤*n*≤105), denoting the number of members in this club. 

The second line contains *n* integers consisting of only 1 and 2, where the *i*-th integer represents the power of the *i*-th member. 

The next (*n*−1) lines describe all introductions in chronological order of occurrence, where each line contains two integers *u* and *v*(1≤*u*,*v*≤*n*,*u*≠*v*), representing an introduction between the *u*-th member and the *v*-th member, who are currently strangers to each other. 

It is guaranteed that the sum of *n* is no larger than 106

. 

Output

For each test case, output *n*

 lines, where the *i*-th line contains an integer, denoting the number of combinations of three club members, in modulo (109+7), that can form a new team after the first (*i*−1)

 introductions have been made. 

Sample Input

```
1
5
2 2 2 1 1
4 5
1 4
2 1
3 2
```

Sample Output

```
7
7
3
0
0
```

---

## E - Deliver the Cake

It is Zhang3's birthday! Zhang3 has bought a birthday cake and now it's time to take it home. 

There are *n* villages, labeled 1,2,…,*n*. There are *m* bidirectional roads, the *i*th of which connects village *a**i*, *b**i* and it is *d**i* meter(s) long. 

The bakery locates at village *s* and Zhang3's home locates at village *t*. So Zhang3 wants to carry the cake from *s* to *t*. She can carry the cake either with her left hand or with her right  hand. She can switch to the other hand during the trip, which takes  extra *x* second(s) each time (when she's performing this action, she must stay  in her place). Switching is allowed at any place, including the middle  of the roads. She can do this as many times as she like, or don't do it  at all.  

Some villages are LEFT. When Zhang3 is at a LEFT village, she must  carry the cake with her left hand at the moment. In the same way, some  other villages are RIGHT, she must carry with her right hand when she's  at these villages. The rest villages are called MIDDLE. There's no  special rules at MIDDLE villages. 

Zhang3 can start and finish with any hand carrying the cake. However, if *s* or *t*

 is not MIDDLE, their special rules must be followed. 

Please help Zhang3 find a way to take the cake home, with the minimum amount of spent time. 

Input

The first line of the input gives the number of test cases, *T*(1≤*T*≤100)

. *T* test cases follow. 

For each test case, the first line contains five integers *n*,*m*,*s*,*t*,*x*(1≤*n*≤105,1≤*m*≤2×105,1≤*x*≤109), representing the number of villages, the number of roads, the bakery's  location, home's location, and the time spent for each switching. 

The next line contains a string of length *n*, describing the type of each village. The *i*th character is either L representing village *i* is LEFT, or M representing MIDDLE, or R representing RIGHT. 

Finally, *m* lines follow, the *i*th of which contains three integers *a**i*,*b**i*,*d**i*(1≤*d**i*≤109), denoting a road connecting village *a**i* and *b**i* of length *d**i*. 

It is guaranteed that *t* can be reached from *s*. 

The sum of *n* in all test cases doesn't exceed 2×105. The sum of *m* doesn't exceed 4×105

. 

Output

For each test case, print a line with an integer, representing the minimum amount of spent time (in seconds). 

Sample Input

```
1
3 3 1 3 100
LRM
1 2 10
2 3 10
1 3 100
```

Sample Output

```
100
```

---

## F - Heavy Transportation

Background 
Hugo Heavy is happy. After the breakdown of the Cargolifter project  he can now expand business. But he needs a clever man who tells him  whether there really is a way from the place his customer has build his  giant steel crane to the place where it is needed on which all streets  can carry the weight. 
Fortunately he already has a plan of the city with all streets and  bridges and all the allowed weights.Unfortunately he has no idea how to  find the the maximum weight capacity in order to tell his customer how  heavy the crane may become. But you surely know. 

Problem 
You are given the plan of the city, described by the streets (with  weight limits) between the crossings, which are numbered from 1 to n.  Your task is to find the maximum weight that can be transported from  crossing 1 (Hugo's place) to crossing n (the customer's place). You may  assume that there is at least one path. All streets can be travelled in  both directions.

Input

The first line contains the number of scenarios (city plans). For each city the number n of street crossings (1 <= n <= 1000) and number m of streets are given on the first line. The following m lines contain  triples of integers specifying start and end crossing of the street and  the maximum allowed weight, which is positive and not larger than  1000000. There will be at most one street between each pair of  crossings.

Output

The output for every scenario begins with a line containing "Scenario #i:", where i is the number of the scenario starting at 1. Then print a  single line containing the maximum allowed weight that Hugo can  transport to the customer. Terminate the output for the scenario with a  blank line.

Sample Input

```
1
3 3
1 2 3
1 3 4
2 3 5
```

Sample Output

```
Scenario #1:
4
```

---

## G - Wormholes

While exploring his many farms,  Farmer John has discovered a number of amazing wormholes. A wormhole is  very peculiar because it is a one-way path that delivers you to its  destination at a time that is BEFORE you entered the wormhole! Each of  FJ's farms comprises *N* (1 ≤ *N* ≤ 500) fields conveniently numbered 1..*N*, *M* (1 ≤ *M* ≤ 2500) paths, and *W* (1 ≤ *W* ≤ 200) wormholes.

As FJ is an avid time-traveling fan, he wants to do the following: start  at some field, travel through some paths and wormholes, and return to  the starting field a time before his initial departure. Perhaps he will  be able to meet himself :) .

To help FJ find out whether this is possible or not, he will supply you with complete maps to *F* (1 ≤ *F* ≤ 5) of his farms. No paths will take longer than 10,000 seconds to  travel and no wormhole can bring FJ back in time by more than 10,000  seconds.

Input

Line 1: A single integer, *F*. *F* farm descriptions follow. 
Line 1 of each farm: Three space-separated integers respectively: *N*, *M*, and *W* 
Lines 2..*M*+1 of each farm: Three space-separated numbers (*S*, *E*, *T*) that describe, respectively: a bidirectional path between *S* and *E* that requires *T* seconds to traverse. Two fields might be connected by more than one path. 
Lines *M*+2..*M*+*W*+1 of each farm: Three space-separated numbers (*S*, *E*, *T*) that describe, respectively: A one way path from *S* to *E* that also moves the traveler back *T* seconds.

Output

Lines 1..*F*: For each farm, output "YES" if FJ can achieve his goal, otherwise output "NO" (do not include the quotes).

Sample Input

```
2
3 3 1
1 2 2
1 3 4
2 3 1
3 1 3
3 2 1
1 2 3
2 3 4
3 1 8
```

Sample Output

```
NO
YES
```

Hint

For farm 1, FJ cannot travel back in time. 
For farm 2, FJ could travel back in time by the cycle  1->2->3->1, arriving back at his starting location 1 second  before he leaves. He could start from anywhere on the cycle to  accomplish this.

---

## H - Frogger

Freddy Frog is sitting on a stone in  the middle of a lake. Suddenly he notices Fiona Frog who is sitting on  another stone. He plans to visit her, but since the water is dirty and  full of tourists' sunscreen, he wants to avoid swimming and instead  reach her by jumping.  
Unfortunately Fiona's stone is out of his jump range. Therefore  Freddy considers to use other stones as intermediate stops and reach her by a sequence of several small jumps.  
To execute a given sequence of jumps, a frog's jump range obviously  must be at least as long as the longest jump occuring in the sequence.  
The frog distance (humans also call it minimax distance) between two stones therefore is defined as the minimum necessary jump range over  all possible paths between the two stones.  

You are given the coordinates of Freddy's stone, Fiona's stone and  all other stones in the lake. Your job is to compute the frog distance  between Freddy's and Fiona's stone. 

Input

The input will contain one or more test cases. The first line of each test case  will contain the number of stones n (2<=n<=200). The next n lines  each contain two integers xi,yi (0 <= xi,yi <= 1000) representing  the coordinates of stone #i. Stone #1 is Freddy's stone, stone #2 is  Fiona's stone, the other n-2 stones are unoccupied. There's a blank line following each test case. Input is terminated by a value of zero (0)  for n. 

Output

For  each test case, print a line saying "Scenario #x" and a line saying  "Frog Distance = y" where x is replaced by the test case number (they  are numbered from 1) and y is replaced by the appropriate real number,  printed to three decimals. Put a blank line after each test case, even  after the last one. 

Sample Input

```
2
0 0
3 4

3
17 4
19 4
18 5

0
```

Sample Output

```
Scenario #1
Frog Distance = 5.000

Scenario #2
Frog Distance = 1.414
```

---

## I - Subway

You have just moved from a quiet  Waterloo neighbourhood to a big, noisy city. Instead of getting to ride  your bike to school every day, you now get to walk and take the subway.  Because you don't want to be late for class, you want to know how long  it will take you to get to school.  
You walk at a speed of 10 km/h. The subway travels at 40 km/h.  Assume that you are lucky, and whenever you arrive at a subway station, a train is there that you can board immediately. You may get on and off  the subway any number of times, and you may switch between different  subway lines if you wish. All subway lines go in both directions.

Input

Input consists of the x,y coordinates of your home and your school, followed  by specifications of several subway lines. Each subway line consists of  the non-negative integer x,y coordinates of each stop on the line, in  order. You may assume the subway runs in a straight line between  adjacent stops, and the coordinates represent an integral number of  metres. Each line has at least two stops. The end of each subway line is followed by the dummy coordinate pair -1,-1. In total there are at most 200 subway stops in the city. 

Output

Output is the number of minutes it will take you to get to school, rounded to the nearest minute, taking the fastest route.

Sample Input

```
0 0 10000 1000
0 200 5000 200 7000 200 -1 -1 
2000 600 5000 600 10000 600 -1 -1
```

Sample Output

```
21
```

---

## J - Highways

The island nation of Flatopia is  perfectly flat. Unfortunately, Flatopia has a very poor system of public highways. The Flatopian government is aware of this problem and has  already constructed a number of highways connecting some of the most  important towns. However, there are still some towns that you can't  reach via a highway. It is necessary to build more highways so that it  will be possible to drive between any pair of towns without leaving the  highway system.  

Flatopian towns are numbered from 1 to N and town i has a position  given by the Cartesian coordinates (xi, yi). Each highway connects  exaclty two towns. All highways (both the original ones and the ones  that are to be built) follow straight lines, and thus their length is  equal to Cartesian distance between towns. All highways can be used in  both directions. Highways can freely cross each other, but a driver can  only switch between highways at a town that is located at the end of  both highways.  

The Flatopian government wants to minimize the cost of building new  highways. However, they want to guarantee that every town is  highway-reachable from every other town. Since Flatopia is so flat, the  cost of a highway is always proportional to its length. Thus, the least  expensive highway system will be the one that minimizes the total  highways length. 

Input

The input consists of two parts. The first part describes all towns in the  country, and the second part describes all of the highways that have  already been built.  

The first line of the input file contains a single integer N (1  <= N <= 750), representing the number of towns. The next N lines  each contain two integers, xi and yi separated by a space. These values  give the coordinates of ith town (for i from 1 to N). Coordinates will have an absolute value no greater than 10000. Every town has a unique location.  

The next line contains a single integer M (0 <= M <= 1000),  representing the number of existing highways. The next M lines each  contain a pair of integers separated by a space. These two integers give a pair of town numbers which are already connected by a highway. Each  pair of towns is connected by at most one highway.  

Output

Write to the output a single line for each new highway that should be built in  order to connect all towns with minimal possible total length of new  highways. Each highway should be presented by printing town numbers that this highway connects, separated by a space.  

If no new highways need to be built (all towns are already  connected), then the output file should be created but it should be  empty.  

Sample Input

```
9
1 5
0 0 
3 2
4 5
5 1
0 4
5 2
1 2
5 3
3
1 3
9 7
1 2
```

Sample Output

```
1 6
3 7
4 9
5 7
8 3
```

---

## K - Lilypad Pond

FJ has installed a beautiful pond for his cows' aesthetic enjoyment and exercise.

The rectangular pond has been partitioned into square cells of *M* rows and *N* columns (1 ≤ *M* ≤ 30; 1 ≤ *N* ≤ 30). Some of the cells have astonishingly sturdy lilypads; others  have rocks; the remainder are just beautiful, cool, blue water.

Bessie is practicing her ballet moves by jumping from one lilypad to another  and is currently located at one of the lilypads. She wants to travel to  another lilypad in the pond by jumping from one lilypad to another.

Surprising only to the uninitiated, Bessie's jumps between lilypads always appear  as a chess-knight's move: one move in one direction and then two more in the orthogonal direction (or perhaps two in one direction and then one  in the orthogonal direction).

Farmer John is observing Bessie's  ballet drill and realizes that sometimes she might not be able to jump  to her destination lilypad because intermediary lilypads are missing.

Ever thrifty, he wants to place additional lilypads so she can complete her  quest (perhaps quickly, perhaps by using a large number of intermediate  lilypads). Of course, lilypads cannot be placed where rocks already  intrude on a cell.

Help Farmer John determine the minimum number  of additional lilypads he has to place, and in how many ways he can  place that minimum number.

Input

Line 1: Two space-separated integers: *M* and *N* 
Lines 2..*M*+1: Line *i*+1 describes row i of the pond using *N* space-separated integers with these values: 0 indicates empty water; 1  indicates a lilypad in place; 2 indicates rock in place; 3 indicates the lilypad Bessie starts on; 4 indicates the lilypad Bessie wants to  travel to.

Output

Line 1: One integer: the minimum number of additional lilypads required. If  it is not possible to help Bessie jump to her destination, print -1. 
Line 2: One integer: the total number of possible ways the  additional lilypads can be positioned.  This number is guaranteed to fit into a single 64-bit signed integer. Do not output this line if line 1  contains -1.

Sample Input

```
4 5
1 0 0 0 0
3 0 0 0 0
0 0 2 0 0
0 0 0 4 0
```

Sample Output

```
2
3
```

Hint

Two  lilypads are required. There are three ways to place them: row 4 column 2 and row 2 column 3; row 1 column 3 and row 3 column 2; or row 1 column 3 and row 2 column 5:

```
R1C2,R2C3       R1C3,R3C2       R1C3,R2C5
1 0 0 0 0       1 0 X 0 0       1 0 X 0 0
3 0 X 0 0       3 0 0 0 0       3 0 0 0 X
0 0 2 0 0       0 X 2 0 0       0 0 2 0 0
0 X 0 4 0       0 0 0 4 0       0 0 0 4 0
```

---

## L - Silver Cow Party

One cow from each of *N* farms (1 ≤ *N* ≤ 1000) conveniently numbered 1..*N* is going to attend the big cow party to be held at farm #*X* (1 ≤ *X* ≤ *N*). A total of *M* (1 ≤ *M* ≤ 100,000) unidirectional (one-way) roads connects pairs of farms; road *i* requires *Ti* (1 ≤ *Ti* ≤ 100) units of time to traverse.

Each cow must walk to the party and, when the party is over, return to her  farm. Each cow is lazy and thus picks an optimal route with the shortest time. A cow's return route might be different from her original route  to the party since roads are one-way.

Of all the cows, what is the longest amount of time a cow must spend walking to the party and back?

Input

Line 1: Three space-separated integers, respectively: *N*, *M*, and *X* 
Lines 2..*M*+1: Line *i*+1 describes road *i* with three space-separated integers: *Ai*, *Bi*, and *Ti*. The described road runs from farm *Ai* to farm *Bi*,  requiring *Ti* time units to traverse.

Output

Line 1: One integer: the maximum of time any one cow must walk.

Sample Input

```
4 8 2
1 2 4
1 3 2
1 4 7
2 1 1
2 3 5
3 1 2
3 4 4
4 2 3
```

Sample Output

```
10
```

Hint

Cow 4 proceeds directly to the party (3 units) and returns via farms 1 and 3 (7 units), for a total of 10 time units.