clc, clearvars, close all;

g = @(x) sqrt(x+2);
tol = 10^-3;
f = @(x) x^(2) - x - 2;

x0 = 0;
fprintf("xn|  f(xn)  | Error\n");
for i=1:20
    if abs(f(x0))<tol
        break
    end
    x1 = g(x0);
    fprintf("%d | %.5f | %.5f\n",i,x1,2-x1);
    if abs(x1-x0)/abs(x0) < tol 
        break
    end
    x0 = x1;
end