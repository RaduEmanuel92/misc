%Rezolvarea unui sistem inferior triunghiular
n=input(' n = ')
a=[];
b=[];
for i=1:n
   for j=1:n
      fprintf(' a ( %d , %d ) = ',i,j)
      a(i,j)=input(' ')
   end
end
for i=1:n
   fprintf(' b ( %d ) = ',i)
   b(i)=input(' ')
end
x=b;
for i=1:n
   for j=1:i-1
      x(i)=x(i)-a(i,j)*x(j);
   end
   x(i)=x(i)/a(i,i);
end
for i=1:n
   fprintf(' x ( %d ) = %f \n',i,x(i));
end
