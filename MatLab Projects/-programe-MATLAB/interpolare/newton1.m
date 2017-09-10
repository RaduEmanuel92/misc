function newton1
% Polinomul Newton de speta I 
% Date de intrare: n - numarul nodurilor de interpolare
%                  x0 - nodul initial de interpolare
%                  h - pasul de interpolare
%                  y - vectorul valorilor functiei f
%                  t - punctul in care se calculeaza f
% Introducere date
fprintf(' Numarul de noduri de interpolare \n ');
n=input(' n = ');
fprintf(' Nodul initial de interpolare : \n');
x0=input(' x0 = ');
fprintf(' Pasul de interpolare : \n');
h=input(' h = ');
fprintf(' Valorile functiei : \n');
for i=1:n+1
   fprintf(' y(%d)= ',i-1);
   y(i)=input(' ');
end;
fprintf(' Valoarea in care se calculeaza functia :');
t=input(' ');
for i=1:n+1 x(i)=x0+i*h; end;
q=(t-x0)/h;
p=0;
for i=0:n
   Q=1;
   for j=1:i
      Q=Q*(q-j+1);
   end;
   d=0;
for k=0:i
   d=d+((-1)^k)*(fact(i)/(fact(k)*fact(i-k)))*y(i-k+1);
end;
   p=p+Q*d/fact(i);
end;
fprintf(' Valoarea functiei in punctul %f este %f \n',t,p);

function n=fact(k)
n=1;
for i=2:k
   n=n*i;
end;

      
