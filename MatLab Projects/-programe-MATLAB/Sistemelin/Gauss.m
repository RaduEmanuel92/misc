% Gauss
% A matricea extinsa a sistemului
% x vectorul necunoscutelor
n=input(' n = ')
m=n+1;
A=[];
x=[];
% Introducere date
for i=1:n
   for j=1:m-1
      fprintf(' A ( %d , %d ) = ',i,j)
      A(i,j)=input(' ')
   end
      fprintf(' b ( %d ) = ',i)
      A(i,m)=input(' ')
end
[n,m]=size(A);
% Pivotare partiala
for k=1:n
   [M,l]=max(abs(A(k:n,k)));
   l=l+k-1;
   if l~=k
      linia=A(l,:);
      A(l,:)=A(k,:);
      A(k,:)=linia;
   end;
% Test de conditionare
   if abs(A(k,k))<=1e-10
      disp(' Sistemul este rau conditionat ')
      pause
      exit
   end;
end;
% Triangularizare
for k=1:n
   fprintf(' Matricea A la pasul %d este \n',k);
   disp(A);
   pause;
   pivot=A(k,k);
   A(k,:)=A(k,:)/pivot;
   for i=k+1:n
      factor=A(i,k);
      A(i,:)=A(i,:)-factor*A(k,:);
   end;
end;
fprintf(' Matricea superior triunghiulara este \n',k);
disp(A);
% Determinarea solutiei
x(n)=A(n,n+1);
for k=1:(n-1)
   i=n-k;
   x(i)=A(i,n+1)-sum(A(i,i+1:n).*x(i+1:n));
end;
 fprintf(' Solutia este: \n');
for i=1:n
   fprintf(' x ( %d ) = %f \n',i,x(i));
end;
