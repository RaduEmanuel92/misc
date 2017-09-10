function lagrange
% Polinomul Lagrange de interpolare
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
   p=1;
   for j=1:n+1
      if j~=i p=p*(x(i)-x(j)); end;
   end;
      c(i)=y(i)/p;
end;
   b=0;
   for i=1:n+1
      p=1;
      for j=1:n+1
         if j~=i p=p*(t-x(j)); end;
      end;
         b=b+p*c(i);
   end;
fprintf(' Coeficientii polinomului de interpolare Lagrange sunt : \n');
for i=1:n+1
   fprintf(' c(%d) = %f \n',i,c(i));
end;
fprintf(' Valoarea lui f in punctul %f este %f \n',t,b);
 
            


   
