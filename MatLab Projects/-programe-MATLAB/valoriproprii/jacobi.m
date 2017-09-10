% Metoda Jacobi de determinare a valorilor proprii
% Date de intrare: matricea A
%                  eroarea eps
A=[];b=[];u=[];
% Introducere date
n=input(' n = ')
for i=1:n
   for j=1:n
      fprintf(' A ( %d , %d ) = ',i,j);
      A(i,j)=input(' ') 
   end
end
fprintf(' Eroarea eps: ');
eps=input(' ');
k=0;
max=1;
while max>eps
   k=k+1;
   p=1;q=2;max=abs(A(1,2));
   for i=1:n-1
      for j=i+1:n
         if max<abs(A(i,j))
            p=i;q=j;max=abs(A(i,j));
         end;
      end;
   end;
   fprintf(' Iteratia %d \n',k);
   fprintf(' p = %d q = %d \n',p,q);
   fprintf(' A ( %d , %d ) = %f \n',p,p,A(p,p));
   fprintf(' A ( %d , %d ) = %f \n',q,q,A(q,q));
   fprintf(' A ( %d , %d ) = %f \n',p,q,A(p,q));
   fprintf(' A ( %d , %d ) = %f \n',q,p,A(q,p));
   if A(p,p)==A(q,q) teta=pi/4;
   end;
   if A(p,p)~=A(q,q)
      teta=atan(2*A(p,q)/(A(p,p)-A(q,q)))/2;
      if abs(teta)<=eps teta=0.;
      end;
   end;
   fprintf(' teta = %f radiani \n',teta);
   c=cos(teta);s=sin(teta);
   for i=1:n
      for j=1:n
         if i==j u(i,j)=1; else u(i,j)=0;
         end;
         u(p,p)=c;
         u(p,q)=-s;
         u(q,p)=s;
         u(q,q)=c;
      end;
   end;
   fprintf(' Matricea de rotatie R%d%d ( %f ) este \n',p,q,teta);
   disp(u);
   b=A*u;
   u(p,q)=s;
   u(q,p)=-s;
   A=u*b;
   for i=1:n
      for j=1:n
         if abs(A(i,j))<=eps A(i,j)=0;
         end;
      end;
   end;
   fprintf(' Matricea B%d este \n',k);
   disp(A);
   pause;
end;
for i=1:n v(i)=A(i,i);
end;
fprintf('\n Valorile proprii ale matricei A dupa %d iteratii sunt : \n',k);
for i=1:n fprintf(' lambda%d = %f \n',i,v(i)); 
end;

   
   
