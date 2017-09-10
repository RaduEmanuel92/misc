%Factorizare Cholesky
n=input(' n = ')
a=[];
b=[];
l=[];
lt=[];
for i=1:n
   for j=1:n
      fprintf(' a ( %d , %d ) = ',i,j)
      a(i,j)=input(' ')
   end
end
l(1,1)=sqrt(a(1,1));
for i=2:n
   l(i,1)=a(1,i)/l(1,1);
end
for k=2:n
   sum=a(k,k);
      for s=1:k-1
         sum=sum-l(k,s)*l(k,s);
      end
      l(k,k)=sqrt(sum);
for i=k+1:n
      sum=a(i,k);
    for s=1:k-1
      	sum=sum-l(i,s)*l(k,s);
    end
    l(i,k)=sum/l(k,k);
 end
end
for i=1:n
   for j=1:n
      fprintf(' L ( %d  %d )= %f \n',i,j,l(i,j));
   end
end
for i=1:n
   for j=1:n
      lt(i,j)=l(j,i);
   end
end
for i=1:n
   for j=1:n
      fprintf(' LT ( %d  %d )= %f \n',i,j,l(i,j));
   end
end
fprintf(' Matricea L este \n');
disp(l);
fprintf(' Matricea LT este \n');
disp(lt);

      