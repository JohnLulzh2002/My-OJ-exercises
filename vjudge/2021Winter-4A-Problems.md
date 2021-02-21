## A - Common Subsequence

 A subsequence of a given sequence is the given sequence with some  elements (possible none) left out. Given a sequence X = <x1, x2, ..., xm> another sequence Z = <z1, z2, ..., zk> is a subsequence of X if there exists a strictly increasing sequence <i1, i2, ...,  ik> of indices of X such that for all j = 1,2,...,k, xij = zj. For  example, Z = <a, b, f, c> is a subsequence of X = <a, b, c, f,  b, c> with index sequence <1, 2, 4, 6>. Given two sequences X  and Y the problem is to find the length of the maximum-length common  subsequence of X and Y.  
The program input is from a text file. Each data set in the file  contains two strings representing the given sequences. The sequences are separated by any number of white spaces. The input data are correct.  For each set of data the program prints on the standard output the  length of the maximum-length common subsequence from the beginning of a  separate line.  

#### Input

```
abcfbc abfcab
programming contest 
abcd mnp
```

#### Output

```
4
2
0
```

#### Sample Input

```
abcfbc abfcab
programming contest 
abcd mnp
```

#### Sample Output

```
4
2
0
```

---

## B - Longest Ordered Subsequence

A numeric sequence of *ai* is ordered if *a1* < *a2* < ... < *aN*. Let the subsequence of the given numeric sequence (*a1*, *a2*, ..., *aN*) be any sequence (*ai1*, *ai2*, ..., *aiK*), where 1 <= *i1* < *i2* < ... < *iK* <= *N*. For example, sequence (1, 7, 3, 5, 9, 4, 8) has ordered subsequences,  e. g., (1, 7), (3, 4, 8) and many others. All longest ordered  subsequences are of length 4, e. g., (1, 3, 5, 8).

Your program, when given the numeric sequence, must find the length of its longest ordered subsequence.

#### Input

The first line of input file contains the length of sequence N. The second  line contains the elements of sequence - N integers in the range from 0  to 10000 each, separated by spaces. 1 <= N <= 1000 

#### Output

Output file must contain a single integer - the length of the longest ordered subsequence of the given sequence. 

#### Sample Input

```
7
1 7 3 5 9 4 8
```

#### Sample Output

```
4
```

---

## C - 最少拦截系统

  某国为了防御敌国的导弹袭击,发展出一种导弹拦截系统.但是这种导弹拦截系统有一个缺陷:虽然它的第一发炮弹能够到达任意的高度,但是以后每一发炮弹都不能超过前一发的高度.某天,雷达捕捉到敌国的导弹来袭.由于该系统还在试用阶段,所以只有一套系统,因此有可能不能拦截所有的导弹. 
怎么办呢?多搞几套系统呗!你说说倒蛮容易,成本呢?成本是个大问题啊.所以俺就到这里来求救了,请帮助计算一下最少需要多少套拦截系统. 

#### Input

输入若干组数据.每组数据包括:导弹总个数(正整数),导弹依此飞来的高度(雷达给出的高度数据是不大于30000的正整数,用空格分隔) 

#### Output

对应每组数据输出拦截所有导弹最少要配备多少套这种导弹拦截系统. 

#### Sample Input

```
8 389 207 155 300 299 170 158 65
```

#### Sample Output

```
2
```

---

## D - Super Jumping! Jumping! Jumping!

 Nowadays, a kind of chess game called “Super Jumping! Jumping!  Jumping!” is very popular in HDU. Maybe you are a good boy, and know  little about this game, so I introduce it to you now. 

   ![img](https://vj.z180.cn/b69a36fbfe92ef60e13d861294653386?v=1612589866)  

The game can be played by two or more than two players. It consists of a chessboard（棋盘）and some chessmen（棋子）, and all chessmen are marked  by a positive integer or “start” or “end”. The player starts from  start-point and must jumps into end-point finally. In the course of  jumping, the player will visit the chessmen in the path, but everyone  must jumps from one chessman to another absolutely bigger (you can  assume start-point is a minimum and end-point is a maximum.). And all  players cannot go backwards. One jumping can go from a chessman to next, also can go across many chessmen, and even you can straightly get to  end-point from start-point. Of course you get zero point in this  situation. A player is a winner if and only if he can get a bigger score according to his jumping solution. Note that your score comes from the  sum of value on the chessmen in you jumping path. 
Your task is to output the maximum value according to the given chessmen list. 

#### Input

Input contains multiple test cases. Each test case is described in a line as follow: 
N value_1 value_2 …value_N  
It is guarantied that N is not more than 1000 and all value_i are in the range of 32-int. 
A test case starting with 0 terminates the input and this test case is not to be processed. 

#### Output

For each case, print the maximum according to rules, and one line one case. 

#### Sample Input

```
3 1 3 2
4 1 2 3 4
4 3 3 2 1
0
```

#### Sample Output

```
4
10
3
```