function coefnedet
% Metoda coeficientilor nedeterminati
% Date de intrare: matricea A
A=[];Cn=[];
% Introducere date
n=input(' n = ')
for i=1:n
   for j=1:n
      fprintf(' A ( %d , %d ) = ',i,j)
      A(i,j)=input(' ') 
   end
end
% Generarea matricei Cn
for k=1:(n-1)
for i=1:n-1 
   y(i)=i^(n-k);
   Cn(i,k)=y(i);
end;
end;
fprintf(' Matricea Cn este \n');
disp(Cn);
% Generarea vectorului D
for k=1:(n-1)
   D(k)=det(k*eye(n)-A)-det((k-1)*eye(n)-A)-k^n;
end;
fprintf(' Vectorul D este \n');
disp(D);
% Determinarea vectorului p
p=inv(Cn)*transpose(D);
% Listarea coeficientilor polinomului caracteristic
for i=1:n-1
   fprintf(' p%d = %f \n',i,p(i));
end;
A=-A;
pn=det(A);
fprintf(' p%d = %f \n',n,pn);
