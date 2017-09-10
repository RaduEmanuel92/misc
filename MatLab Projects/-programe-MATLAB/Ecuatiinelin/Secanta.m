% Metoda secantei
% x radacina lui f
% [a,b] intervalul in care se cauta radacina
% eps eroarea cu care se calculeaza radacina
% Introducere date
fprintf('	a = ');
a=input(' ');
fprintf('	b = ');
b=input(' ');
fprintf('	eroarea = ');
eps=input(' ');
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
% Determinarea iterativa a solutiei
xv=b;
er=1;
n=0;
while er>=eps
   xn=b-f(b)*(b-a)/(f(b)-f(a));
   fprintf(' Radacina aproximativa la iteratia %d este %f \n',n,xn);
   pause;
   n=n+1;
   er=abs((xn-xv)/xn)*100;
   b=xn;
   a=xv;
   xv=xn;
end;
x=xn;
fprintf(' \n Radacina aproximativa a ecuatiei obtinuta dupa %d iteratii este %f \n',n,x);





