% Jacobi
% A matricea coeficientilor necunoscutelor
% x vectorul necunoscutelor
% eps eroarea absoluta cu care se determina solutiile
n=input(' n = ')
A=[];
b=[];
x0=[];x=[];
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
l=1;
for k=1:n
%Se cauta pe coloana k elementul cu modulul maxim
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
for i=1:n b(i)=A(i,n+1); end;
% Calculul normei lui J(A)
for i=1:n
   t(i)=b(i)/A(i,i);
   s0=0;
   for j=1:n
      s(i,j)=-A(i,j)/A(i,i);
      s0=s0+abs(s(i,j));
   end;
   s(i,i)=0;
   b(i)=s0-1;
end;
m=b(1);
for i=2:n
   if m<b(i)
      m=b(i);
   end;
end;
   if m>=1
      fprintf(' Norma lui J(A) este %f \n',m);
      fprintf(' Metoda Jacobi nu converge \n');
      break;
   end;
   if m<1
   fprintf(' Norma lui J(A) este %f \n',m);
   fprintf(' Metoda Jacobi converge \n');
% Determinarea iterativa a solutiei
m=m/(1-m);
k=0;
max=1;
while (m*max>eps)
   k=k+1;
   for i=1:n
      s0=0;
      for j=1:n
         s0=s0+s(i,j)*x0(j);
      end;
      x(i)=t(i)+s0;
      b(i)=abs(x(i)-x0(i));
   end;
   max=b(1);
for i=2:n
   if max<b(i)
      max=b(i);
   end;
end;
for i=1:n x0(i)=x(i); end;
fprintf(' Solutia dupa iteratia %d este: \n',k);
for i=1:n
   fprintf(' x ( %d ) = %f \n',i,x(i));
end;
pause;
end;
fprintf(' \n Solutia dupa %d iteratii este: \n',k);
for i=1:n
   fprintf(' x ( %d ) = %f \n',i,x(i));
end;
end;
