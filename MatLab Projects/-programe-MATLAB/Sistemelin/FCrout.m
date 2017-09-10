%Rezolvarea unui sistem superior triunghiular
n=input(' n = ')
a=[];
b=[];
l=[];
u=[];
for i=1:n
   for j=1:n
      fprintf(' a ( %d , %d ) = ',i,j)
      a(i,j)=input(' ')
   end
end
for k=1:n
   u(k,k)=1;
end
for k=1:n
   for i=k:n
      sum=0;
      for s=1:k-1
         sum=sum+l(i,s)*u(s,k);
      end
      l(i,k)=a(i,k)-sum;
   end
  for j=k+1:n
      sum=0;
      for s=1:k-1
         sum=sum+l(k,s)*u(s,j);
      end
      u(k,j)=(a(k,j)-sum)/l(k,k);
   end
end
for i=1:n
   for j=1:n
      fprintf(' l ( %d  %d )= %f \n',i,j,l(i,j));
   end
end
for i=1:n
   for j=1:n
      fprintf(' u ( %d  %d )= %f \n',i,j,u(i,j));
   end
end
fprintf(' Matricea L este \n');
disp(l);
fprintf(' Matricea U este \n');
disp(u);
      