% Metoda generalizata a coardei
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
if abs(f(a))<eps x=a; 
else
   if abs(f(b))<eps x=b; 
   	else
         x=(a*f(b)-b*f(a))/(f(b)-f(a));
         n=0;
         dx=1.;
   		while dx>=eps & abs(f(x))>=eps
            x=(a*f(b)-b*f(a))/(f(b)-f(a));
            fprintf(' Radacina aproximativa la iteratia %d este %f \n',n,x);
            pause;
      		n=n+1;
      		if f(a)*f(x)<0
         		dx=abs(b-x);
         		b=x;
      		else
         		dx=abs(x-a);
         		a=x;
      		end;
         end;
      end;
   end;
fprintf(' \n Radacina aproximativa a ecuatiei obtinuta dupa %d iteratii este %f \n',n,x);


