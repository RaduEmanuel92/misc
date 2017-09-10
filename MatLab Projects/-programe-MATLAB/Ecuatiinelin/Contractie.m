% Metoda contractiei
% x radacina lui f
% alfa coeficient de contractie
% [a,b] intervalul in care se cauta radacina
% eps eroarea cu care se calculeaza radacina
% x0 aproximatia initiala a radacinii
% Introducere date
function contractie
fprintf('	a = ');
a=input(' ');
fprintf('	b = ');
b=input(' ');
fprintf('	eroarea = ');
eps=input(' ');
fprintf(' coeficientul de contractie = ');
alfa=input(' ');
fprintf('	aproximatia initiala x0 = ');
x0=input(' ');
if f(a)*f(b)>0. fprintf(' In intervalul [ %f , %f ] ecuatia nu are radacini reale. \n',a,b);
   break;
	end;
   if fc(a)==0 
      fprintf(' Radacina exacta este %f \n',a);
      break;
   end;
      if fc(b)==0 
      fprintf(' Radacina exacta este %f \n',b);
      break;
   end;
if abs(fc(a))<eps x=a; 
else
% Determinarea iterativa a solutiei
   if abs(fc(b))<eps x=b; 
   	else
         x=fc(x0);
         n=0;
         dx=1.;
   		while dx>=eps & abs(fc(x))>=eps
            x=fc(x0);
            dx=alfa*abs(x-x0)/(1.-alfa);
            fprintf(' Radacina aproximativa la iteratia %d este %f \n',n,x);
            pause;
            n=n+1;
            x0=x;
         end;
      end;
   end;
fprintf(' \n Radacina aproximativa a ecuatiei obtinuta dupa %d iteratii este %f \n',n,x);

function y=f(x)
y=x^3-3*x+1;
function y=fc(x)
y=(3*x-1)^(1./3.);


