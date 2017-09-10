function trapez
% Metoda trapezelor
% Date de intrare: [a,b] intervalul de integrare
%                  n numarul de diviziuni a intervalului de integrare
% Introducere date
fprintf('	a = ');
a=input(' ');
fprintf('	b = ');
b=input(' ');
fprintf('	n = ');
n=input(' ');
% Calculul integralei
h=(b-a)/n;
int=0;
for i=1:n-1
   int=int+f(a+h*i);
end;
int=h*(0.5*(f(a)+f(b))+int);
fprintf(' Valoarea integralei este %f \n',int);
function y=f(x)
y=1/sqrt(x+2);
