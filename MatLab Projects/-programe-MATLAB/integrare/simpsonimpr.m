function simpsimpr
% Metoda Simpson pentru integrale improprii cu domeniul de integrare infint
% Date de intrare: [a,b] intervalul de integrare
%                  n numarul de diviziuni a intervalului de integrare
%                  eps eroarea impusa
% Introducere date
fprintf('	a = ');
a=input(' ');
fprintf('	b = ');
b=input(' ');
fprintf('	n = ');
n=input(' ');
fprintf('	eps = ');
eps=input(' ');
a1=a;
b1=b;
% Calculul integralei pe intervalul [b,2b]
a=b;
b=2*b;
h=(b-a)/(2*n);
int=fimp(a)+fimp(b);
sum=0;
for i=1:n
   sum=sum+4*fimp(a+h*(2*i-1));
end;
int=int+sum;
sum=0;
for i=1:n-1
   sum=sum+2*fimp(a+h*2*i);
end;
int=(int+sum)*h/3;
if abs(int)<eps/2
% Calculul integralei pe intervalul [a,b]
   a=a1;
   b=b1;
   h=(b-a)/(2*n);
   int=fimp(a)+fimp(b);
   sum=0;
   for i=1:n
      sum=sum+4*fimp(a+h*(2*i-1));
   end;
   int=int+sum;
   sum=0;
   for i=1:n-1
      sum=sum+2*fimp(a+h*2*i);
   end;
   int=(int+sum)*h/3;
   fprintf(' Valoarea integralei este %f \n',int);
   else    fprintf(' Valoarea lui b = %f nu este convenabil aleasa \n',b1);
end;
function y=fimp(x)
y=exp(-x)*log(x);
