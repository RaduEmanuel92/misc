% Metoda contractiei pentru sisteme neliniare de doua ecuatii
% x,y solutia sistemului
% [a,b]x [c,d] domeniul in care se cauta solutia aproximativa
% eps eroarea cu care se calculeaza solutia sistemului
% x0,y0 aproximatia initiala a solutiei
% alfa coeficientul de contractie
% Introducere date
function contrsisnel
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
fprintf('	coeficientul de contractie alfa = ');
alfa=input(' ');
n=0;
max=1;
while max>=eps
   x=fc1(x0,y0);
	y=fc2(x0,y0);
   dx=abs(x-x0);
   dy=abs(y-y0);
   r1=alfa*dx/(1.-alfa);
   r2=alfa*dy/(1.-alfa);
   if r1<r2 max=r2; else max=r1;
   end;
   fprintf(' Solutia aproximativa la iteratia %d este x= %f y= %f \n',n,x,y);
   pause;
   n=n+1;
   x0=x;
   y0=y;
end;
fprintf(' \n Solutia aproximativa a sistemului obtinuta dupa %d iteratii este \n x= %f y= %f \n',n,x,y);

function z=fc1(x,y)
z=sqrt(y);
function z=fc2(x,y)
z=1-(x*x)/4;


