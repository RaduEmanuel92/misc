% Gauss-Seidel
% A matricea extinsa a sistemului
% x vectorul necunoscutelor
% nit numarul maxim de iteratii efectuate
% epsa eroarea absoluta cu care se determina solutiile
n=input(' n = ')
A=[];
x=[];
s1=[];
nit=input(' Numarul maxim de iteratii = ');
epsa=input(' Eroarea absoluta = ');
% Introducere date
%v=0;
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
%end
for i=1:n
   fprintf(' b ( %d ) = ',i)
   A(i,n+1)=input(' ');
   b(i)=A(i,n+1);
end;
%for i=1:n
   s=0;
   for j=1:n
      s1(i,j)=-A(i,j)/A(i,i);
      s=s+abs(s1(i,j));
   end;
   s1(i,i)=0;
   b(i)=s-1;
end;
max=b(1);
for i=2:n
   if max<b(i)
      max=b(i);
   end;
end;
   if max>=1
      fprintf(' Norma lui A este %f \n',max);
      fprintf(' Metoda Gauss-Seidel nu converge \n');
      % break;
   end;
   fprintf(' Norma lui A este %f \n',max);
   %fprintf(' Metoda Gauss-Seidel converge \n');
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
% Test de conditionare
   if abs(A(k,k))<=1e-10
      fprintf(' Sistem rau conditionat \n');
      break;
   end;
end;
% Calculul iterativ al solutiilor
k=0;
ermax=1;
while (k<nit) & (ermax>epsa)
   k=k+1;
   ermax=0;
   for i=1:n
      dx=(A(i,n+1)-sum(A(i,1:n).*x(1:n)))/A(i,i);
      if abs(dx)>ermax
         ermax=abs(dx);
      end
      x(i)=x(i)+dx;
   end
   end
      if k==nit
   fprintf(' Depasire numar iteratii \n');
   break;
   pause;
end;
% Afisarea solutiei
fprintf(' Solutia dupa %d iteratii este: \n',k);
for i=1:n
   fprintf(' x ( %d ) = %f \n',i,x(i));
end;
