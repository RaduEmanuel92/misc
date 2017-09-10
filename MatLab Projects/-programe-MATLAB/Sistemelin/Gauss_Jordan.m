% Gauss-Jordan
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
      disp(' Sistemul este rau conditionat. ')
      pause
      exit
   end;
end;
% Diagonalizare
for k=1:n
   fprintf(' Matricea A la pasul %d este \n',k);
   disp(A);
   pause;
   pivot=A(k,k);
   A(k,:)=A(k,:)/pivot;
   for i=1:n
      if i~=k
      factor=A(i,k);
      A(i,:)=A(i,:)-factor*A(k,:);
      end;
   end;
end;
fprintf(' Matricea A diagonalizata este \n');
disp(A);
% Determinarea solutiei
x=A(:,n+1);
fprintf(' Solutia este: \n');
for i=1:n
   fprintf(' x ( %d ) = %f \n',i,x(i));
end;
