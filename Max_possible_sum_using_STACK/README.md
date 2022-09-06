<h1> DAA - Class Assignment </h1>

Name : Prathamesh Rajendra Rajbhoj <br>
Sec  : 5A <br>
Roll : 53 <br>

<hr>

<h3> Problem Name : <u> Possible Maximum Sum of Three Stacks </u> ( Stack Implementation ) </h3>

<br>

Problem Statement : Given three stacks of the positive numbers, the task is to find the possible equal maximum sum of the stacks with the removal of top elements allowed

<ul>
<li>Code 1 : Implementation Using C++ Inbuilt Stacks </li>
<li>Code 2 : Implementation Using Arrays </li>
</ul>

<hr>

Logic :

<ul style="list-style-type:square;">
  <li>Find stack with maximum sum and then Remove top element of it</li>
  <li>If sum of all 3 becomes equal exit, else calculate new sum and repeat above process</li>
</ul>

<hr>

Algorithm :

<ol style="list-style-type:square;">
  <li> Take input for all 3 stacks & while taking input calculate and store sum of all 3 stacks</li>
  <li> Check if sum of all 3 stacks are equal or not</li>
  <li> If sum1==sum2==sum3, then Possible maximum sum is sum1. Exit</li>
  <li> If any 1 of the stack becomes empty, then Possible maximum sum is 0. Exit</li>
  <li> Otherwise, pop the top element of stack having maximum sum</li>
  <li> Update sum for that stack</li>
  <li> Repeat step 2, 3, 4, 5, 6</li> 
  <li> Exit</li>
</ol>

<hr>

<h2> TEST CASES </h2>

// 1st value of array will be pushed down in stack <br>
// last value of array will be top of stack <br><br>

INPUT 1 : 

Enter Size of 1st Stack : 3 <br>
Enter values to be pushed in Stack 1 : 3 2 1 <br>
Enter Size of 2nd stack : 3<br>
Enter values to be pushed in Stack 2 : 4 1 2<br>
Enter Size of 3rd stack : 4<br>
Enter values to be pushed in Stack 3 : 1 2 2 2<br>
<br>
OUTUT 1<br>

MAXIMUM SUM IS POSSIBLE<br>
SUM IS : 5<br>

<hr>


INPUT 2 : 

Enter Size of 1st Stack : 3 <br>
Enter values to be pushed in Stack 1 : 3 5 8 <br>
Enter Size of 2nd stack : 5<br>
Enter values to be pushed in Stack 2 : 2 2 4 9 9<br>
Enter Size of 3rd stack : 4<br>
Enter values to be pushed in Stack 3 : 2 1 2 3<br>
<br>
OUTUT 2<br>

MAXIMUM SUM IS POSSIBLE<br>
SUM IS : 8<br>
