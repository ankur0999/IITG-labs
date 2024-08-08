clearvars, clc, close all;
syms x;
f = @(x) exp(-x) -sin(x);
a = 0;
b = 1;
c = a + (b-a)/2;
tol = 5 * 10^(-6);
for i=1:3
    if f(a)*f(c)<0
        b = c;
    else
        a = c;
    end

    c = a + (b-a)/2;
end
x0 = 0;
df = diff(f,x);
dfx = inline(df);
n = 6;
Variables = {'Iter', 'x', 'f_x0', 'Error'};
iter = 1;
err = abs(f(x0));
tol = 5*10^(-n-1);
itermax = 70;
HG = [];
if dfx(x0)<10^(-9)
    disp('Wrong Choice of initial guess');
else
    while (iter <=itermax && err>tol)
        x1 = x0 - f(x0)/dfx(x0);
        err = abs(f(x0));
        HG = [HG; iter x0 f(x0) err];
        iter = iter + 1;
        x0 = x1;
    end
end

disp('=====================================')
disp('Output Table with iteration wise')
Result = array2table(HG);
Result.Properties.VariableNames(1:size(HG,2)) = Variables
x0 = x0 - rem(x0, 10^-n);
fprintf('Converged solution after %d iteration \n', iter);
fprintf('Root is %2.9f \n', x0);