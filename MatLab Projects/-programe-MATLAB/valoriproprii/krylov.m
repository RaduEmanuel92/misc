function krylov
% Metoda Krylov
% Date de intrare : matricea A
%                   vectorul y0
A=[];p=[];y0=[];
n=input(' n = ')
% Introducere date
for i=1:n
   for j=1:n
      fprintf(' A ( %d , %d ) = ',i,j)
      A(i,j)=input(' ')
   end;
end;
sw=0;
while sw==0
for i=1:n
      fprintf(' y0 ( %d ) = ',i);
      y0(i)=input(' ')
end;
   fprintf('\n Vectorul y0 este: \n');
      for j=1:n
            fprintf(' y0 ( %d ) = %f \n',j,y0(j));
      end;
% Calculul vectorilor yk
vy(:,n)=transpose(y0);      
for i=1:n-1
   y=A*transpose(y0);
   vy(:,n-i)=y;
   fprintf('\n Vectorul y%d este: \n',i);
      for j=1:n
            fprintf(' y%d ( %d ) = %f \n',i,j,y(j));
      end;
      y0=y;
      pause;
end;
yn=A*y0;
fprintf('\n Vectorul y%d este: \n',n);
for j=1:n
    fprintf(' y%d ( %d ) = %f \n',n,j,yn(j));
end;
% Determinarea coeficientilor polinomului caracteristic
if det(vy)==0 
   fprintf(' Introduceti un alt vector initial y0 \n');
else
sw=1;
p=-inv(vy)*yn;
fprintf('\n Coeficientii polinomului caracteristic sunt : \n');
   for i=1:n
      fprintf(' p ( %d ) = %f \n',i,p(i));
   end;
end;
end;



