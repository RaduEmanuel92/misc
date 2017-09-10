function metdirpow
% Metoda directa a puterii
% Date de intrare: matricea A
%                  eroarea eps
%                  aproximatia initiala x0
A=[];
% Introducere date
n=input(' n = ')
for i=1:n
   for j=1:n
      fprintf(' A ( %d , %d ) = ',i,j);
      A(i,j)=input(' ') 
   end
end
fprintf(' Aproximatia initiala x0:\n');
for i=1:n
   fprintf(' x0 ( %d ) = ',i);
   x0(i)=input(' ');
end;
fprintf(' Eroarea eps: ');
eps=input(' ');
k=0;
norm=norma(n,x0);
for i=1:n x0(i)=x0(i)/norm; end;
sw=1;
while sw==1
   k=k+1;
   for i=1:n
      x(i)=0;
      for j=1:n x(i)=x(i)+A(i,j)*x0(j); end; end;
   norm=norma(n,x);
   r=norm;
   for i=1:n x(i)=x(i)/norm; end;
   for i=1:n z(i)=x(i)-x0(i); end;
   e=norma(n,z);
   fprintf('\n Iteratia %d \n x%d = \n',k,k);
   disp(transpose(x));
   fprintf(' ||x%d-x%d|| = %f \n',k,k-1,e);
   x0=x;
   if e<=eps sw=0; end;
   pause;
end;
fprintf('\n Valoarea proprie dominanta dupa %d iteratii este : %f \n',k,r);
fprintf('\n Vectorul propriu corespunzator este: \n');
for i=1:n fprintf(' v ( %d ) = %f \n',i,x(i)); 
end;

function n=norma(k,x)
s=abs(x(1));
for i=2:k 
   if abs(x(i))>s s=abs(x(i)); end;
end;
n=s;

   
   
