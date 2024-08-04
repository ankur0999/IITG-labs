% program to calculate root of function using bisection method
% f(x) = e^(-x) -sin(x);
% find the smallest positive roots
% to print approximation roots upto five decimal palces
clc, clearvars, close all;
x = linspace(0, 1, 100);
f = @(x) exp(-x) - sin(x);

a = 0;
b = 1;
c = a + (b - a)/2;
tol = 5 * 10^(-6);
i = 0;
while abs(f(c))> tol
    i = i+1;
    fprintf('\n iteration %d -> %f', i, c); 
    if f(a)*f(c)<0
        b = c;
    else 
        a = c;
    end
    
    c = a + (b-a)/2;
end

fprintf('\n\nthe solution is %.5f\n',c);


    



