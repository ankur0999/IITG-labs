% Compute square root of a prime number of your own choice using bisection
% method upto six decimal places

clc , clearvars, close all;
i = input('Enter a prime number:');
% i will choose prime number 2

x = linspace(1,i);
f = @(x) x*x - i;
a = 0;
b = i;
c = a + (b-a)/2;
tol = 5*10^(-7);
cnt=0;
while abs(f(c)) > tol
    cnt = cnt+1;
    if f(c)*f(a)<0
        b = c;
    else 
        a = c;
    end
    c = a + (b-a)/2;
end
fprintf(' the root of %d is %.6f\n',i,c);
fprintf(' iteration no. is %d\n',cnt);