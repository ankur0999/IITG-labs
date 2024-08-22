
% implementing Newton-Raphson-Method to find smallest positive root of
% equation f(x) = 0 where f(x) = e^-x - sin(x)

clearvars, clc, close all;
syms x;
f = @(x) exp(-x) -sin(x);
a = 0;
b = 1;
c = a + (b-a)/2;

for i=1:3
    if f(a)*f(c)<0
        b = c;
    else
        a = c;
    end

    c = a + (b-a)/2;
end
x0 = c;

df = diff(f,x);
dfx = inline(df);
n = 6;
Variables = {'Iter', 'x', 'f_x0'};
iter = 1;

err = abs(f(x0));
tol = 5*10^(-n-1);
itermax = 70;
HG = [];
if abs(dfx(x0)) < 10^(-9)
    disp('Wrong Choice of initial guess');
else
    while (iter <=itermax && err>tol)
        x1 = x0 - f(x0)/dfx(x0);
        err = abs(x1-x0);
        HG = [HG; iter x0 f(x0)];
        iter = iter + 1;
        x0 = x1;
    end
end

disp('=====================================')
disp('Output Table with iteration wise')
Result = array2table(HG);
Result.Properties.VariableNames(1:size(HG,2)) = Variables;
Result
x0 = x0 - rem(x0, 10^-n);
fprintf('Converged solution after %d iteration \n', iter);
fprintf('Root is %2.6f \n', x0);
x0 = c



if iter >=3
   x1 = x0 - f(x0)/dfx(x0);
   x2 = x1 - f(x1)/dfx(x1);
   x3 = x2 - f(x2)/dfx(x2);
   p = log(abs((x3-x2)/(x2-x1)))/log(abs((x2-x1)/(x1-x0)));
   fprintf('Estimated order of convergence : p = %f\n', p);
else
    fprintf('Insufficient iteratons to estimate the order of convergence.\n');
end

