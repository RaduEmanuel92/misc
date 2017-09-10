% Metoda tangentei ( Newton )
% x radacina lui f
% [a,b] intervalul in care se cauta radacina
% eps eroarea cu care se calculeaza radacina
% x0 aproximatia initiala a radacinii
% Introducere date
function newton
fprintf('	a = ');
a=input(' ');
fprintf('	b = ');
b=input(' ');
fprintf('	eroarea = ');
eps=input(' ');
fprintf('	aproximatia initiala x0 = ');
x0=input(' ');
% Testul conditiei de convergenta a metodei tangentei
if f(x0)*d2f(x0)<=0
   fprintf(' Conditia lui Fourier nu este indeplinita pentru x0 = %f \n',x0);
   fprintf(' Metoda tangentei a lui Newton nu poate fi aplicata\n');
   break;
else
     fprintf(' Metoda tangentei a lui Newton este convergenta \n'); 
if f(a)*f(b)>0. fprintf(' In intervalul [ %f , %f ] ecuatia nu are radacini reale. \n',a,b);
   break;
	end;
   if f(a)==0 
      fprintf(' Radacina exacta este %f \n',a);
      break;
   end;
      if f(b)==0 
      fprintf(' Radacina exacta este %f \n',b);
      break;
   end;
if abs(f(a))<eps x=a; 
else
% Determinarea iterativa a solutiei
   if abs(f(b))<eps x=b; 
   	else
         x=(a*f(b)-b*f(a))/(f(b)-f(a));
         n=0;
         dx=1.;
   		while dx>=eps & abs(f(x))>=eps
            x=x0-f(x0)/d1f(x0);
            dx=abs(x-x0);
            fprintf(' Radacina aproximativa la iteratia %d este %f \n',n,x);
            pause;
            n=n+1;
            x0=x;
         end;
      end;
   end;
fprintf(' \n Radacina aproximativa a ecuatiei obtinuta dupa %d iteratii este %f \n',n,x);
end;

function y=f(x)
y=x^3-3*x+1;
function y=d1f(x)
y=3*x^2-3;
function y=d2f(x)
y=6*x;


