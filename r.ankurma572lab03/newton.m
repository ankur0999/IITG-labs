close all; clearvars; clc;
% finding root via newton's method
root = 1.1;
syms x;
f = @(x) (x-1.1)^(2)*(x+1);
df = diff(f,x);
dfx = inline(df);
x0 = 1;
iter = 1;
itermax = 100;
tol = 10^(-3);
NA = [];
while (iter <= itermax && abs(root-x0) > tol)
    x1 = x0 - f(x0)/dfx(x0);
    NA = [NA; iter x0 f(x0)];
    iter = iter + 1;
    x0 = x1;
end
if iter > 3
y0 = NA(iter-3,2);
end

disp('====================================================')
disp('Newtons methods Output Table with iteration wise')

Result1 = array2table(NA, 'VariableNames',{'Iter', 'x', 'f_x0'})

fprintf('the approximated root is the %2.5f\n\n',x0);
if iter > 3
   y1 = y0 - f(y0)/dfx(y0);
   y2 = y1 - f(y1)/dfx(y1);
  
   p = log(abs((root - y2)/(root-y1)))/log(abs(root-y1)/abs(root-y0));
   fprintf('Estimated order of convergence : p = %f\n\n',p);
else 
    fprintf('Insufficent iteration to find order of convergence.\n');
end







% using modified newtons formula
% m = multiplicity of roots
% Xn+1 = Xn - mf(Xn)/f'(Xn);
m = 2;
x0 = 1;
iter = 1;

tol = 10^(-3);

MNA = [];
while (iter <= itermax && abs(root-x0) > tol)
    x1 = x0 - (m*f(x0))/dfx(x0);
    
    MNA = [MNA; iter x0 f(x0)];
    iter = iter + 1;
    x0 = x1;
end

if iter > 3
    y0 = MNA(iter-3,2);
end
disp('====================================================')
disp('Modified Newtons method Output Table with iteration wise');
Result2 = array2table(MNA, 'VariableNames',{'Iter', 'x', 'f_x0'})

fprintf('the approximated root is the %2.5f\n\n',x0);

if iter > 3
   y1 = y0 - f(y0)/dfx(y0);
   y2 = y1 - f(y1)/dfx(y1);
  
   p = log(abs((root - y2)/(root-y1)))/log(abs(root-y1)/abs(root-y0));
   fprintf('Estimated order of convergence : p = %f\n\n',p);
else 
    fprintf('Insufficent iteration to find order of convergence.\n');
end
