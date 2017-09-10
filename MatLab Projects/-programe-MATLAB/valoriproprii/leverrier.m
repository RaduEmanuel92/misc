function leverrier
% Metoda Leverrier
% Date de intrare : matricea A
n=input(' n = ')
A=[];unit=[];s=[];p=[];
% Introducere date
for i=1:n
   for j=1:n
      fprintf(' A ( %d , %d ) = ',i,j)
      A(i,j)=input(' ')
   end
end
% Generare matrice unitate
for i=1:n
   for j=1:n
      if i==j unit(i,j)=1; else unit(i,j)=0;
      end;
   end;
end;
% Calculul puterilor lui A
for i=1:n
   A=A*unit;
   if i>1 fprintf('\n A la puterea %d este: \n',i);
      for j=1:n
         for k=1:n
            fprintf(' %d  ',A(j,k));
         end;
         fprintf(' \n');
      end;
   end;
      s(i)=trace(A);
      fprintf('\n Urma lui A la puterea %d este %f \n',i,s(i));
      unit=A;
      pause;
end;
% Determinarea coeficientilor polinomului caracteristic
   p(1)=1;
   for k=1:n
      sl=0;
      for j=1:k-1
         sl=sl+p(j)*s(k-j);
      end;
      p(k)=-(1/k)*(s(k)+sl);
   end;
   fprintf('\n Coeficientii polinomului caracteristic sunt : \n');
   for i=1:n
      fprintf(' p ( %d ) = %f \n',i,p(i));
   end;
