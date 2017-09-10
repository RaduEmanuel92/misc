% Sirul lui Sturm
% Date de intrare:
%                [a,b] intervalul in care se cauta radacinile reale
%                h pasul de cautare a radacinilor reale 
% Date de iesire:
%                nr(i) numarul de radacini reale din intervalul (x(i),x(i+1)) 
% Introducere date
p3=1;
fprintf('	a = ');
a=input(' ');
fprintf('	b = ');
b=input(' ');
fprintf('	h = ');
h=input(' ');
n1=ceil((b-a)/h)+1;
for i=1:n1 
   i1=0;
   c=a+(i-1)*h;
   if p0(c)*p1(c)<0 i1=1; end;
   if p0(c)*p1(c)==0
      if p0(c)*p2(c)<0 i1=1;end;
      if p2(c)*p3<0 i1=i1+1; end;
   end;
   if p1(c)*p2(c)<0 i1=i1+1; end;
   if p2(c)*p3<0 i1=i1+1; end;
   n(i)=i1;
   fprintf(' n [ %d ] = %d \n',i,n(i));
end;
n2(1)=a;
for i=1:n1-1
   nr(i)=n(i)-n(i+1);
   n2(i+1)=n2(i)+h;
   fprintf(' Numarul de radacini reale din intervalul [ %f , %f ] = %d \n',n2(i),n2(i+1),nr(i));
end;

      