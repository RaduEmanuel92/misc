function fadeev
% Metoda Fadeev
% Date de intrare : matricea A
n=input(' n = ')
A=[];b=[];p=[];d=[];
% Introducere date
for i=1:n
   for j=1:n
      fprintf(' A ( %d , %d ) = ',i,j)
      A(i,j)=input(' ')
   end;
end;
p(1)=1;
for i=1:n
   for j=1:n
      if i==j b(i,j)=1; else b(i,j)=0; end;
   end;
end;
% Determinarea sirurilor Ak,pk,Bk
for k=1:n
         d=A*b;
         fprintf(' Matricea A%d este :\n',k);
         disp(d);
         pause;
         p(k)=-trace(d)/k;
         if k<n
            for i=1:n
               for j=1:n
                  if i==j b(i,j)=d(i,j)+p(k); else b(i,j)=d(i,j); end;
               end;
            end;
                  fprintf(' Matricea B%d este :\n',k);
                  disp(b);
                  pause;
         end;
         if k==n & p(n)~=0 
            fprintf(' Inversa matricei A este : \n');
            disp(-b/p(n));
            pause;
         end;
      end;
   fprintf('\n Coeficientii polinomului caracteristic sunt : \n');
   for i=1:n
      fprintf(' p ( %d ) = %f \n',i,p(i));
   end;
