% Metoda Newton pentru sisteme neliniare de doua ecuatii
% x,y solutia sistemului
% [a,b]x [c,d] domeniul in care se cauta solutia aproximativa
% eps eroarea cu care se calculeaza solutia sistemului
% x0,y0 aproximatia initiala a solutiei
% Introducere date
function newtonsistnel
fprintf('	a = ');
a=input(' ');
fprintf('	b = ');
b=input(' ');
fprintf('	c = ');
c=input(' ');
fprintf('	d = ');
d=input(' ');
fprintf('	eroarea = ');
eps=input(' ');
fprintf('	aproximatia initiala x0 = ');
x0=input(' ');
fprintf('	aproximatia initiala y0 = ');
y0=input(' ');
n=0;
x=x0;
y=y0;
max=1;
while max>=eps
   d=df1x(x,y)*df2y(x,y)-df1y(x,y)*df2x(x,y);
   a=f1(x,y)*df2y(x,y)-f2(x,y)*df1y(x,y);
   b=f2(x,y)*df1x(x,y)-f1(x,y)*df2x(x,y);
   x=x-(a/d);
   y=y-(b/d);
   dx=abs(a/d);
   dy=abs(b/d);
   if dx<dy max=dy; else max=dx;
   end;
   fprintf(' Solutia aproximativa la iteratia %d este x= %f y= %f \n',n,x,y);
   pause;
   n=n+1;
end;
fprintf(' \n Solutia aproximativa a sistemului obtinuta dupa %d iteratii este \n x= %f y= %f \n',n,x,y);

function z=f1(x,y)
z=(x*x)/4+y-1;
function z=f2(x,y)
z=x*x-y;
function z=df1x(x,y)
z=x/2;
function z=df1y(x,y)
z=1;
function z=df2x(x,y)
z=2*x;
function z=df2y(x,y)
z=-1;


