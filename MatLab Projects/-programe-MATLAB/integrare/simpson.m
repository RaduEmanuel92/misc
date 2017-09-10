function simpson
% Metoda Simpson
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
h=(b-a)/(2*n);
int=f(a)+f(b);
sum=0;
for i=1:n
   sum=sum+4*f(a+h*(2*i-1));
end;
int=int+sum;
sum=0;
for i=1:n-1
   sum=sum+2*f(a+h*2*i);
end;
int=(int+sum)*h/3;
fprintf(' Valoarea integralei este %f \n',int);
function y=f(x)
y=1/sqrt(x+2);
