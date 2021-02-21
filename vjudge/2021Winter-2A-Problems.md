## A - Road

There are n villages along a high way, and divided the high way into n-1 segments. Each segment would charge a certain amount of money for being open for one day, and you can open or close an arbitrary segment in an  arbitrary day, but you can open or close the segment for just one time,  because the workers would be angry if you told them to work multiple  period.  

We know the transport plan in the next m days, each day there is one cargo need to transport from village $a_i$ to village $b_i$, and you need to guarantee that the segments between $a_i$ and $b_i$

 are open in the i-th day. Your boss wants to minimize the total cost of the next m days, and you need to tell him the charge for each day.  

(At the beginning, all the segments are closed.)  


#### Input

Multiple test case. For each test case,  begins with two integers n, m(1<=n,m<=200000), next line contains  n-1 integers. The i-th integer $w_i$

(1<=$w_i$<=1000) indicates the charge for the segment between village i and village i+1  being open for one day. Next m lines, each line contains two integers $a_i$,$b_i$(1≤$a_i$,$b_i$<=$n$,$a_i$!=$b_i$)

#### Output

For each test case, #### Output m lines, each line contains the charge for the i-th day.

#### Sample Input

```
4 3
1 2 3
1 3
3 4
2 4
```

#### Sample Output

```
3
5
5
```

---

## B - Minimum Inversion Number

  The inversion number of a given number sequence a1, a2, ..., an is the number of pairs (ai, aj) that satisfy i < j and ai > aj.  

For a given sequence of numbers a1, a2, ..., an, if we move the  first m >= 0 numbers to the end of the seqence, we will obtain  another sequence. There are totally n such sequences as the following:  

a1, a2, ..., an-1, an (where m = 0 - the initial seqence)  
a2, a3, ..., an, a1 (where m = 1)  
a3, a4, ..., an, a1, a2 (where m = 2)  
...  
an, a1, a2, ..., an-1 (where m = n-1)  

You are asked to write a program to find the minimum inversion number out of the above sequences.  


#### Input

The #### Input consists of a number of test  cases. Each case consists of two lines: the first line contains a  positive integer n (n <= 5000); the next line contains a permutation  of the n integers from 0 to n-1.  

#### Output

For each case, Output the minimum inversion number on a single line.  

#### Sample Input

```
10
1 3 6 9 0 8 5 7 4 2
```

#### Sample Output

```
16
```
---

## C - Mayor's posters

The citizens of Bytetown, AB, could  not stand that the candidates in the mayoral election campaign have been placing their electoral posters at all places at their whim. The city  council has finally decided to build an electoral wall for placing the  posters and introduce the following rules:  

- Every candidate can place exactly one poster on the wall.  
- All posters are of the same height equal to the height of  the wall; the width of a poster can be any integer number of bytes (byte is the unit of length in Bytetown).  
- The wall is divided into segments and the width of each segment is one byte.  
- Each poster must completely cover a contiguous number of wall segments. 


They have built a wall 10000000 bytes long (such that there is  enough place for all candidates). When the electoral campaign was  restarted, the candidates were placing their posters on the wall and  their posters differed widely in width. Moreover, the candidates started placing their posters on wall segments already occupied by other  posters. Everyone in Bytetown was curious whose posters will be visible  (entirely or in part) on the last day before elections. 
Your task is to find the number of visible posters when all the  posters are placed given the information about posters' size, their  place and order of placement on the electoral wall.  

#### Input

The first line of input contains a number c giving the number of cases that  follow. The first line of data for a single case contains number 1 <= n <= 10000. The subsequent n lines describe the posters in the order in which they were placed. The i-th line among the n lines contains two integer numbers li and ri which are the number of the wall  segment occupied by the left end and the right end of the i-th poster,  respectively. We know that for each 1 <= i <= n, 1 <= li <= ri <= 10000000. After the i-th poster is placed, it entirely covers all wall segments numbered li, li+1 ,... , ri. 

#### Output

For each input data set print the number of visible posters after all the posters are placed. 

The picture below illustrates the case of the sample input. 
![img](https://vj.z180.cn/85d8df2191db8df82ba259ebe2bfe93e?v=1611687746)

#### Sample Input

```
1
5
1 4
2 6
8 10
3 4
7 10
```

#### Sample Output

```
4
```

---

## D - 敌兵布阵

   C国的死对头A国这段时间正在进行军事演习，所以C国间谍头子Derek和他手下Tidy又开始忙乎了。A国在海岸线沿直线布置了N个工兵营地,Derek和Tidy的任务就是要监视这些工兵营地的活动情况。由于采取了某种先进的监测手段，所以每个工兵营地的人数C国都掌握的一清二楚,每个工兵营地的人数都有可能发生变动，可能增加或减少若干人手,但这些都逃不过C国的监视。  
中央情报局要研究敌人究竟演习什么战术,所以Tidy要随时向Derek汇报某一段连续的工兵营地一共有多少人,例如Derek问:“Tidy,马上汇报第3个营地到第10个营地共有多少人!”Tidy就要马上开始计算这一段的总人数并汇报。但敌兵营地的人数经常变动，而Derek每次询问的段都不一样，所以Tidy不得不每次都一个一个营地的去数，很快就精疲力尽了，Derek对Tidy的计算速度越来越不满:"你个死肥仔，算得这么慢，我炒你鱿鱼!”Tidy想：“你自己来算算看，这可真是一项累人的工作!我恨不得你炒我鱿鱼呢!”无奈之下，Tidy只好打电话向计算机专家Windbreaker求救,Windbreaker说：“死肥仔，叫你平时做多点acm题和看多点算法书，现在尝到苦果了吧!”Tidy说："我知错了。。。"但Windbreaker已经挂掉电话了。Tidy很苦恼，这么算他真的会崩溃的，聪明的读者，你能写个程序帮他完成这项工作吗？不过如果你的程序效率不够高的话，Tidy还是会受到Derek的责骂的.  


#### Input

第一行一个整数T，表示有T组数据。  
每组数据第一行一个正整数N（N<=50000）,表示敌人有N个工兵营地，接下来有N个正整数,第i个正整数ai代表第i个工兵营地里开始时有ai个人（1<=ai<=50）。  
接下来每行有一条命令，命令有4种形式：  
(1) Add i j,i和j为正整数,表示第i个营地增加j个人（j不超过30）  
(2)Sub i j ,i和j为正整数,表示第i个营地减少j个人（j不超过30）;  
(3)Query i j ,i和j为正整数,i<=j，表示询问第i到第j个营地的总人数;  
(4)End 表示结束，这条命令在每组数据最后出现;  
 每组数据最多有40000条命令  

#### Output

对第i组数据,首先输出“Case i:”和回车,  
对于每个Query询问，输出一个整数并回车,表示询问的段中的总人数,这个数保持在int以内。  

#### Sample Input

```
1
10
1 2 3 4 5 6 7 8 9 10
Query 1 3
Add 3 6
Query 2 7
Sub 10 2
Add 6 3
Query 3 10
End 
```

#### Sample Output

```
Case 1:
6
33
59
```

---

## E - I Hate It

  很多学校流行一种比较的习惯。老师们很喜欢询问，从某某到某某当中，分数最高的是多少。  
这让很多学生很反感。  

不管你喜不喜欢，现在需要你做的是，就是按照老师的要求，写一个程序，模拟老师的询问。当然，老师有时候需要更新某位同学的成绩。 

#### Input

本题目包含多组测试，请处理到文件结束。  
在每个测试的第一行，有两个正整数 N 和 M ( 0<N<=200000,0<M<5000 )，分别代表学生的数目和操作的数目。  
学生ID编号分别从1编到N。  
第二行包含N个整数，代表这N个学生的初始成绩，其中第i个数代表ID为i的学生的成绩。  
接下来有M行。每一行有一个字符 C (只取'Q'或'U') ，和两个正整数A，B。  
当C为'Q'的时候，表示这是一条询问操作，它询问ID从A到B(包括A,B)的学生当中，成绩最高的是多少。  
当C为'U'的时候，表示这是一条更新操作，要求把ID为A的学生的成绩更改为B。  

#### Output

对于每一次询问操作，在一行里面输出最高成绩。

#### Sample Input

```
5 6
1 2 3 4 5
Q 1 5
U 3 6
Q 3 4
Q 4 5
U 2 9
Q 1 5
```

#### Sample Output

```
5
6
5
9


        
  
```

Hint

```
Huge #### Input,the C function scanf() will work better than cin
```

---

## F - Just a Hook

  In the game of DotA, Pudge’s meat hook is actually the most horrible  thing for most of the heroes. The hook is made up of several consecutive metallic sticks which are of the same length.  

​     ![img](https://vj.z180.cn/779a6c86f4db19106cba2c46a7dafe46?v=1611637457)    

Now Pudge wants to do some operations on the hook.  

Let us number the consecutive metallic sticks of the hook from 1 to N. For each operation, Pudge can change the consecutive metallic  sticks, numbered from X to Y, into cupreous sticks, silver sticks or  golden sticks.  
The total value of the hook is calculated as the sum of values of N metallic sticks. More precisely, the value for each kind of stick is  calculated as follows:  

For each cupreous stick, the value is 1.  
For each silver stick, the value is 2.  
For each golden stick, the value is 3.  

Pudge wants to know the total value of the hook after performing the operations.  
You may consider the original hook is made up of cupreous sticks.  

#### Input

The #### Input consists of several test cases.  The first line of the #### Input is the number of the cases. There are no  more than 10 cases.  
For each case, the first line contains an integer N,  1<=N<=100,000, which is the number of the sticks of Pudge’s meat  hook and the second line contains an integer Q, 0<=Q<=100,000,  which is the number of the operations.  
Next Q lines, each line contains three integers X, Y,  1<=X<=Y<=N, Z, 1<=Z<=3, which defines an operation:  change the sticks numbered from X to Y into the metal kind Z, where Z=1  represents the cupreous kind, Z=2 represents the silver kind and Z=3  represents the golden kind.  

#### Output

For each case, print a number in a line  representing the total value of the hook after the operations. Use the  format in the example.  

#### Sample Input

```
1
10
2
1 5 2
5 9 3
```

#### Sample Output

```
Case 1: The total value of the hook is 24.
```

---

## G - Count Color

Chosen Problem Solving and Program  design as an optional course, you are required to solve all kinds of  problems. Here, we get a new problem. 

There is a very long board with length L centimeter, L is a positive integer, so we can evenly divide the board into L segments, and they  are labeled by 1, 2, ... L from left to right, each is 1 centimeter  long. Now we have to color the board - one segment with only one color.  We can do following two operations on the board: 

\1. "C A B C" Color the board from segment A to segment B with color C.  
\2. "P A B" Output the number of different colors painted between segment A and segment B (including). 

In our daily life, we have very few words to describe a color (red,  green, blue, yellow…), so you may assume that the total number of  different colors T is very small. To make it simple, we express the  names of colors as color 1, color 2, ... color T. At the beginning, the  board was painted in color 1. Now the rest of problem is left to your. 

#### Input

First  line of input contains L (1 <= L <= 100000), T (1 <= T <=  30) and O (1 <= O <= 100000). Here O denotes the number of  operations. Following O lines, each contains "C A B C" or "P A B" (here  A, B, C are integers, and A may be larger than B) as an operation  defined previously.

#### Output

Output results of the output operation in order, each line contains a number.

#### Sample Input

```
2 2 4
C 1 1 2
P 1 2
C 2 2 2
P 1 2
```

#### Sample Output

```
2
1
```