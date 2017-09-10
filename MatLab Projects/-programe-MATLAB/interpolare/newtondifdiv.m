function newdifdiv
% Polinomul Newton de interpolare cu noduri neechidistante
% Date de intrare: n - numarul nodurilor de interpolare
%                  x - vectorul nodurilor de interpolare
%                  y - vectorul valorilor functiei f
%                  t - punctul in care se calculeaza f
% Introducere date
fprintf(' Numarul de noduri de interpolare \n ');
n=input(' n = ');
for i=1:n+1 x(i)=0; y(i)=0; c(i)=0; end;
fprintf(' Nodurile de interpolare : \n');
for i=1:n+1
   fprintf(' x(%d)= ',i-1);
   x(i)=input(' ');
   fprintf(' y(%d)= ',i-1);
   y(i)=input(' ');
end;
fprintf(' Valoarea in care se calculeaza f :');
t=input(' ');
for i=1:n+1
   q(i,1)=y(i);
end;
for i=2:n+1
   for j=2:i
      q(i,j)=(q(i,j-1)-q(i-1,j-1))/(x(i)-x(i-j+1));   
   end;
end;
fprintf(' Coeficientii polinomului de interpolare Newton ascendent sunt : \n');
for i=1:n+1
   fprintf(' p(%d) = %f \n',i-1,q(i,i));
end;
fprintf(' Coeficientii polinomului de interpolare Newton descendent sunt : \n');
for i=1:n+1
   fprintf(' p(%d) = %f \n',i-1,q(n+1,i));
end;
p=q(n+1,n+1);
for i=n:-1:1
   p=p*(t-x(i))+q(i,i);
end;
fprintf(' Valoarea lui f in punctul %f este %f \n',t,p);
 
            


   
