% Metoda dreptunghilui
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
int=0;
for i=0:n-1
   int=int+2*h*f(a+h*(1+2*i));
end;
fprintf(' Valoarea integralei este %f \n',int);

