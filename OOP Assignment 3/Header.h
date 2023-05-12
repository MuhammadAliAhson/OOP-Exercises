#pragma once
#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<stack>
#include<queue>
#include<cmath>
using namespace std;
const int Max = 1000;
//Stack made for specific functions of string
class stackstring {
public:
	int top;
	string str[Max];

	stackstring()
	{
		top = -1;
	}
	void push1(string inp)
	{

		if (top > Max)
		{
			cout << "overflow" << endl;
		}
		else
		{
			top++;
			str[top] = inp;
		}
	}
	string pop1()
	{
		string a = "";
		if (top > -1)
		{
			a = str[top];
			top--;
		}
		return a;
	}
	string top1()
	{
		return str[top];
	}
	bool isempty()
	{
		if (top == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
//function to convert expression into postfix
string postexp(string input)
{
	stack<char> oper;
	string output = "";
	int count = 0;
	count = input.length();
	int counter = 0;
	for (int i = 0; i < count; i++)
	{
		char check = input[i];
		if ((check > 64 && check < 91) || (check > 96 && check < 123) || (check > 48 && check < 58))
		{
			output += check;
		}
		else if (check == '(')
		{
			oper.push(check);
		}
		else if (check == ')')
		{
			while (oper.empty() != true)
			{
				char op;
				if (oper.empty() != true)
				{
					op = oper.top();
					oper.pop();
				}
				int a = op;
				//opening donot append and break out of while loop
				if (a == 40)
				{
					break;
				}
				else
				{
					output += op;
				}
			}
		}
		else if (input[i] != '^' && input[i] != '*' && input[i] != '/' && input[i] != '+' && input[i] != '-' && input[i] != '%')
		{
			oper.push(input[i]);
		}
		else if (input[i] == '^' || input[i] == '%')
		{

			char op = '\0';
			if (oper.empty() != true)
			{
				op = oper.top();
			}
			if (op == '^' || op == '*' || op == '/' || op == '+' || op == '-' || op == '%')
			{
				if (oper.empty() != true)
				{
					output += oper.top();
					oper.pop();
				}
				oper.push(input[i]);

			}
			else
			{
				oper.push(input[i]);
			}
		}
		//if operator
		else if (input[i] == '*' || input[i] == '/' || input[i] == '^' || input[i] == '%')
		{
			char op = '\0';
			if (oper.empty() != true)
			{
				op = oper.top();
			}
			if (op == '^' || op == '*' || op == '/' || op == '%')
			{
				if (oper.empty() != true)
				{
					output += oper.top();
					oper.pop();
				}
				oper.push(input[i]);

			}
			else
			{
				oper.push(input[i]);
			}
		}
		else if (input[i] == '-' || input[i] == '+')
		{
			char op = '\0';
			if (oper.empty() != true)
			{
				op = oper.top();
			}

			if (op == '*' || op == '/' || op == '+' || op == '-')
			{

				if (oper.empty() != true)
				{
					if (oper.top() != '(')
					{
						output += oper.top();
					}
					oper.pop();
				}
				oper.push(input[i]);

			}
			else
			{
				oper.push(input[i]);
			}
		}

	}
	while (oper.empty() != true)
	{

		if (oper.empty() != true)
		{
			if (oper.top() != '(')
			{
				output += oper.top();
			}
			oper.pop();
		}
	}
	return output;

}
//function to convert expression into prefix
string preexp(string input)
{
	string output;
	int n = input.length();
	for (int i = 0; i < n / 2; i++)
		swap(input[i], input[n - i - 1]);

	for (int i = 0; i < n; i++)
	{
		if (input[i] == '(')
		{
			input[i] = ')';
		}

		else if (input[i] == ')')
		{
			input[i] = '(';
		}
	}
	output = postexp(input);

	int m = output.length();

	for (int i = 0; i < m / 2; i++)
		swap(output[i], output[m - i - 1]);

	return output;
}
//function to calculate different operators from solution
int calculate(int a, int b, char exp)
{
	if (exp == '+')
	{
		return (a + b);
	}
	else if (exp == '-')
	{
		return (a - b);
	}
	else if (exp == '*')
	{
		return (a * b);
	}
	else if (exp == '/')
	{
		return (a / b);
	}
	else if (exp == '^')
	{
		return pow(a, b);
	}
	else if (exp == '%')
	{
		return (a % b);
	}

}
//function to solve an infix expression if it has only integers
int solution(string input)
{
	int a = 0;
	int b = 0;
	int c = 0;
	stack<int> expstack;
	string post = postexp(input);
	int size = post.length();
	input = post;
	for (int i = 0; i < size; i++)
	{
		if ((input[i] >= 48 && input[i] <= 58))
		{
			expstack.push((input[i]) - 48);
		}
		else
		{

			if (expstack.empty() != true)
			{
				a = expstack.top();
				expstack.pop();

			}

			if (expstack.empty() != true)
			{

				b = expstack.top();
				expstack.pop();
			}
			c = calculate(b, a, input[i]);
			expstack.push(c);
		}
	}


	return (expstack.top());
}
//function to convert postfix expression directly into prefix expression
string post_to_inf(string input)
{
	stackstring infstack;
	string output = "";
	string temp;
	int size = input.length();
	string a = "";
	for (int i = 0; i < size; i++)
	{
		if ((input[i] > 64 && input[i] < 91) || (input[i] > 96 && input[i] < 123) || (input[i] > 48 && input[i] < 58) || (input[i] > 48 && input[i] < 58))
		{
			a = "";
			a += input[i];
			infstack.push1(a);
		}
		else
		{
			output += "(";
			temp = "";
			temp += infstack.pop1();
			output += infstack.pop1();
			output += input[i];
			output += temp;
			output += ")";
			infstack.push1(output);
			output = "";
		}
	}
	output = infstack.pop1();
	return output;
}
//function which takes file name and reads the file and convert into stack after adding spaces
stack<string> reader(string file)
{
	string a = "";
	string c = "";
	stack<string> send;
	stack<string> send1;
	fstream myfile(file);
	while (!myfile.eof())
	{
		myfile >> c;
		if (c == "|tab||\\tab|")
		{
			c = "	";
		}
		int size = c.length();
		int a = 0;
		bool flag = true;
		bool flag2 = true;
		bool flag5 = true;
		bool flag4 = true;
		string two = "";
		for (int i = 0; i < size; i++)
		{
			if (c[i] == '|')
			{
				flag5 = false;
				break;
			}
		}
		if (!flag5)
		{
			for (int i = 0; i < size; i++)
			{
				if (c[0] == '|' && c[size - 1] == '|')
				{
					send1.push(c);
					send1.push(" ");
					break;
				}
				else if (c[i] == '|' && flag)
				{
					string one = "";

					while (a != i)
					{
						one += c[a];
						a++;
					}
					flag = false;


					send1.push(one);
					send1.push(" ");
				}
				else if (c[i] == '|' && !flag && flag2)
				{
					string one = "";

					while (a != i + 1)
					{
						one += c[a];
						a++;
					}
					//i++;
					flag2 = false;

					send1.push(one);
					send1.push(" ");
				}
				else if (!flag && !flag2)
				{
					two += c[i];

					flag4 = false;

				}
			}
			if (!flag4)
			{
				send1.push(two);
				send1.push(" ");
			}
		}
		else
		{
			send1.push(c);
			send1.push(" ");
		}
	}
	while (send1.empty() != true)
	{

		string a = send1.top();
		send.push(a);
		send1.pop();

	}
	return send;
}
//function to check if there are extra tags and replace them with syntax error
stack<string> syntaxcorrec(stack<string> ss, stack<string> out)
{
	int acount = 0;
	stack<string> output;
	string strr[1000] = { "" };
	string sets[10000];
	while (out.empty() != true)
	{
		strr[acount] = out.top();
		out.pop();
		acount++;
	}
	int size = ss.size();
	for (int i = 0; i < size; i++)
	{
		if (ss.empty() != true)
		{
			sets[i] = ss.top();
			ss.pop();
		}
	}

	for (int i = 0; i < acount; i++)
	{
		int count = 0;
		int count1 = 0;
		string check = "";
		if ((strr[i])[strr[i].length() - 1] != '|')
		{
			count = (strr[i])[strr[i].length() - 1] - 48;
			for (int j = 0; j < strr[i].length() - 1; j++)
			{
				check += (strr[i])[j];
			}
		}
		else
		{
			check = strr[i];
		}


		for (int j = 0; j < size; j++)
		{
			if (count == count1 && check == sets[j])
			{
				sets[j] = "syntax error";
				break;
			}
			if (check == sets[j])
			{
				count1++;
			}

		}
	}
	for (int i = size - 1; i >= 0; i--)
	{
		output.push(sets[i]);
	}
	return output;
}
//function which finds extra tags and store them seprately
stack<string> errror(stack<string> ss)
{
	stack<string> temp = ss;
	stack<string> error;
	string start[1000];
	string end1[1000];
	string end[1000];
	int cstart = 0;
	int cend = 0;
	int max = 0;
	int countend = 0;
	int countstart = 0;
	int one = 0;
	while (ss.empty() != true)
	{

		string a = ss.top();
		ss.pop();
		if (a[0] == '|' && a[1] == '\\' && a[a.length() - 1] == '|')
		{

			string temp = "|";

			for (int i = 2; i < a.length(); i++)
			{
				temp += a[i];
			}
			end1[cend] = temp;
			cend++;
		}
		else if (a[0] == '|' && a[a.length() - 1] == '|')
		{
			start[cstart] = a;
			cstart++;
		}
	}
	for (int i = 0; i < cend; i++)
	{
		end[i] = end1[i];
	}
	int see = 0;
	for (int i = 0; i < cend; i++)
	{
		see = 0;
		for (int j = 0; j < cend; j++)
		{
			if (end[i] == end[j])
			{
				if (see > 0)
				{
					end[j] += see + 48;

				}
				see++;
				//cout << see;
			}
		}
	}

	for (int i = 0; i < cstart; i++)
	{
		see = 0;
		for (int j = 0; j < cstart; j++)
		{
			if (start[i] == start[j])
			{
				if (see > 0)
				{
					start[j] += see + 48;

				}
				see++;
				//cout << see;
			}
		}
	}





	if (cstart == cend)
	{
		for (int i = 0; i < cstart; i++)
		{

			for (int j = 0; j < cstart; j++)
			{
				if (start[i] == end[j])
				{
					start[i] = "";
					end[j] = "";
					break;
				}
			}
		}
	}
	else
	{
		if (cstart > cend)
		{
			for (int i = 0; i < cend; i++)
			{

				for (int j = 0; j < cstart; j++)
				{
					if (start[j] == end[i])
					{
						start[j] = "";
						end[i] = "";
						break;
					}
				}
			}


		}
		else
		{
			for (int i = 0; i < cstart; i++)
			{

				for (int j = 0; j < cend; j++)
				{
					if (start[i] == end[j])
					{
						start[i] = "";
						end[j] = "";
						break;
					}
				}
			}
		}
	}

	for (int i = 0; i < cstart; i++)
	{
		if ((start[i])[0] != '\0')
		{
			error.push(start[i]);
		}
	}

	for (int i = 0; i < cend; i++)
	{
		if ((end[i])[0] != '\0')
		{
			string a = "|\\";
			for (int j = 1; j < end[i].length(); j++)
			{
				a += (end[i])[j];
			}
			error.push(a);
		}
	}

	stack<string> error1 = syntaxcorrec(temp, error);
	return error1;
}
//function to check if there is any expression error
bool check(string a)
{
	int size = a.length();
	int c1 = 0;
	int c2 = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] == 40)
		{
			c1++;
		}
		else if (a[i] == 41)
		{
			c2++;
		}
	}
	if (c1 == c2)
	{
		c1 = 0;
		c2 = 0;
		for (int i = 0; i < size; i++)
		{
			char check = a[i];
			if ((check > 64 && check < 91) || (check > 96 && check < 123) || (check > 48 && check < 58))
			{
				c1++;
			}
			else if (check != 40 && check != 41)
			{
				c2++;
			}
		}
		if (c2 < c1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
//this is to convert string into itneger
int conv(string ss)
{
	int a = 0;
	int b = 0;
	for (int i = 0; i < ss.length(); i++)
	{
		a = ss[i];
		a = a - 48;
		if (i == 0)
		{
			b = a;
		}
		else
		{
			b = b * 10;
			b = b + a;
		}
	}
	//cout << b << endl;
	return b;
}
//int type queue to set priority
queue<int> prio;
int hit = 0;
int fault = 0;
void setprio(int ps)
{
	bool flagss = false;
	int arrrr[4];
	for (int i = 0; i < 4; i++)
	{
		if (prio.empty() != true)
		{
			arrrr[i] = prio.front();
			prio.pop();
		}

	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = i; j < 4; j++)
		{
			if (arrrr[i] > arrrr[j])
			{
				int temp = arrrr[i];
				arrrr[i] = arrrr[j];
				arrrr[j] = temp;
			}
		}
		if (arrrr[i] == ps)
		{
			flagss = true;
			hit++;
		}
	}
	if (flagss == false)
	{
		fault++;
	}
	for (int i = 0; i < 4; i++)
	{
		prio.push(arrrr[i]);
	}
	prio.pop();
	prio.push(ps);

}
//function to calculate hits and faults
void comp(int nn)
{
	bool flagg = false;
	queue<int> teempp = prio;
	int arrrr[4];
	for (int i = 0; i < teempp.size(); i++)
	{
		if (teempp.empty() != true)
		{
			arrrr[i] = teempp.front();
			teempp.pop();
		}
		if (arrrr[i] == nn)
		{
			flagg = true;
			hit++;
		}
	}
	if (!flagg)
	{
		fault++;
	}
}


//function which identifies the tags and do implimentation by using above functions
string run(string file)
{
	string strr[1000];
	string output = "";
	stack<string> text = reader(file);
	stack<string> tags;
	stack<string>   out = errror(text);

	bool flag = false;
	text = out;
	while (text.empty() != true)
	{
		string temp = "";
		string a = text.top();
		text.pop();
		int size = a.length();
		if (a == "|start|")
		{
			flag = true;
			if (text.empty() != true)
			{
				a = text.top();
				text.pop();
			}
		}

		if (flag)
		{
			if (a == "|priorty|")
			{
				string charint = "";
				if (text.empty() != true)
				{
					a = text.top();
					text.pop();
				}
				while (a[0] != '|')
				{
					if (a != " " && a != "\n")
					{
						charint += a;
					}
					if (text.empty() != true)
					{
						a = text.top();
						text.pop();
					}

				}
				int pr = conv(charint);
				if (prio.size() < 4)
				{
					comp(pr);
					prio.push(pr);

				}
				else
				{
					setprio(pr);
				}
			}
			else if (a == "|\\priorty|")
			{
				output += "\n";
			}

			else if (a == "|\\head|")
			{
				output += "\n";
			}

			else if (a == "|tab||\\tab|")
			{
				temp = "   ";
				output += temp;
			}
			else if (a == "|src|")
			{
				string name = "";
				if (text.empty() != true)
				{
					a = text.top();
					text.pop();
				}
				while (a[0] != '|')
				{
					if (text.empty() != true)
					{
						if (a != " ")
						{
							name += a;
						}
						a = text.top();
						text.pop();


					}
				}
				if (a == "|\\src|")
				{
					char asn = srctag(name);
					output += asn;
				}
			}
			else  if (a == "|pre_exp|")
			{
				string exp = "";
				if (text.empty() != true)
				{
					a = text.top();
				}
				while (a[0] != '|')
				{
					if (text.empty() != true)
					{
						text.pop();
					}
					if (a != " " && a != "\n")
					{
						exp += a;
					}
					a = text.top();
				}
				if (a == "|\\pre_exp|")
				{
					if (text.empty() != true)
					{
						text.pop();
						a = text.top();
					}
					temp += exp;
					if (check(exp))
					{
						output += preexp(exp);
					}
					else
					{
						output += "Expression error";
					}

				}
			}
			else  if (a == "|post_exp|")
			{
				string exp = "";
				a = text.top();

				while (a[0] != '|' && a != "syntax error")
				{
					if (text.empty() != true)
					{
						text.pop();
					}
					if (a != " " && a != "\n")
					{
						exp += a;
					}
					a = text.top();

				}
				if (a == "|\\post_exp|")
				{
					if (text.empty() != true)
					{
						text.pop();
						a = text.top();
					}
					temp += exp;
					if (check(exp))
					{
						output += postexp(exp);
					}
					else
					{
						output += "Expression error";
					}
				}
			}
			else  if (a == "|sol_exp|")
			{
				tags.push("sol_exp");
				string exp = "";
				if (text.empty() != true)
				{
					a = text.top();
				}
				while (a[0] != '|')
				{
					if (text.empty() != true)
					{
						text.pop();
					}
					if (a != " " && a != "\n")
					{
						exp += a;
					}
					a = text.top();

				}
				if (a == "|\\sol_exp|")
				{
					if (text.empty() != true)
					{
						text.pop();
						a = text.top();
					}
					temp += exp;
					if (check(exp))
					{
						bool fl = false;
						for (int k = 0; k < exp.length(); k++)
						{
							if (exp[k] >= 48 && exp[k] < 58)
							{
								fl = true;
								break;
							}
						}
						if (!fl)
						{
							output += post_to_inf(exp);
						}
						else
						{
							int tempp = solution(exp);
							if (tempp > 9)
							{
								int mm = tempp / 10;
								output += mm + 48;
								mm = mm * 10;
								mm = tempp - mm;
								output += mm + 48;
							}
							else
							{
								output += tempp + 48;
							}

						}
					}
					else
					{
						output += "Expression error";
					}


				}
			}

			else if (a[0] == '|' && a[size - 1] == '|' && a[1] == '\\')
			{

			}

			else if (a[0] == '|' && a[size - 1] == '|')
			{
				string x = "";
				a = text.top();
				while (a[0] != '|')
				{
					if (text.empty() != true)
					{
						text.pop();
						x += a;
						a = text.top();
					}

				}
				output += x;
			}
			else
			{
				output += a;

			}

		}
		else
		{
			cout << "no start tag found\n";
			break;
		}



	}
	return output;
}

