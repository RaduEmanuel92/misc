% Gauss-Seidel
% A matricea coeficientilor necunoscutelor
% x vectorul necunoscutelor
% eps eroarea absoluta cu care se determina solutiile
n=input(' n = ')
A=[];
b=[];c=[];
x0=[];x=[];
bgs=[];d=[];e=[];f=[];de=[];mod=[];
eps=input(' Eroarea absoluta = ');
% Introducere date
v=0;
for i=1:n
   s=0;
   for j=1:n
      fprintf(' A ( %d , %d ) = ',i,j)
      A(i,j)=input(' ')
      if i~=j 
         s=s+abs(A(i,j));
      end;
   end
   if A(i,i)==0 | abs(A(i,i))<=s  
      v=1;
   end
end
if v~=0
   fprintf(' Matricea A nu este strict diagonal dominanta \n');
end
if v==0
   fprintf(' Matricea A este strict diagonal dominanta \n');
end
for i=1:n
   fprintf(' b ( %d ) = ',i)
   b(i)=input(' ');
   A(i,n+1)=b(i);
end;
fprintf(' Aproximatia initiala x0 : \n');
for i=1:n
   fprintf(' x0 ( %d ) = ',i)
   x0(i)=input(' ');
end;
% Pivotare 
for k=1:n
% Se cauta pe coloana k elementul cu modulul maxim
   [M,l]=max(abs(A(k:n,k)));
   l=l+k-1;
   if l~=k
      linia=A(l,:);
      A(l,:)=A(k,:);
      A(k,:)=linia;
   end;
end;
fprintf(' Matricea extinsa dupa pivotare este \n');
disp(A);
%for i=1:n b(i)=A(i,n+1); end;
% Determinarea matricei BGS
d=diag(diag(A));
e=-tril(A);
for i=1:n e(i,i)=0;end;
f=-triu(A);
for i=1:n f(i,i)=0;end;
for i=1:n
   for j=1:n
      de(i,j)=d(i,j)-e(i,j);
   end;
end;
de=inv(de);
bgs=de*f;
% Calculul normei lui G(A)
q(1)=0.0;
for j=2:n
   q(1)=q(1)+abs(bgs(1,j));
end;
for i=2:n
   q(i)=0.0;
   for j=1:i-1
      q(i)=q(i)+abs(bgs(i,j))*q(j);
   end;
   for j=i+1:n
      q(i)=q(i)+abs(bgs(i,j));
   end;
end;
m=q(1);
for i=2:n
   if m<q(i)
      m=q(i);
   end;
end;
   if m>=1
      fprintf(' Norma lui GS(A) este %f \n',m);
      fprintf(' Metoda Gauss-Seidel nu converge \n');
      break;
   end;
   if m<1
   fprintf(' Norma lui GS(A) este %f \n',m);
   fprintf(' Metoda Gauss-Seidel converge \n');
% Determinarea iterativa a solutiei
for i=1:n
   t=-1.0/A(i,i);
   c(i)=b(i)/A(i,i);
   for j=1:n
      A(i,j)=A(i,j)*t;
   end;
end;
m=m/(1-m);
k=0;
max=1.;
for i=1:n x(i)=x0(i);end;
while (m*max>eps)
   k=k+1;
   for i=1:n
      t=c(i);
      for j=1:n
         t=t+A(i,j)*x0(j);
      end;
         x0(i)=x0(i)+t;
   end;
fprintf(' Solutia dupa iteratia %d este: \n',k);
for i=1:n
   fprintf(' x ( %d ) = %f \n',i,x0(i));
end;
pause;
for i=1:n mod(i)=abs(x(i)-x0(i));end;
   max=mod(1);
for i=2:n
   if max<mod(i)
      max=mod(i);
   end;
end;
for i=1:n x(i)=x0(i); end;
end;
fprintf(' \n Solutia dupa %d iteratii este: \n',k);
for i=1:n
   fprintf(' x ( %d ) = %f \n',i,x(i));
end;
end;
