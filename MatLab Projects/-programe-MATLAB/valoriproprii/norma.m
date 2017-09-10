function n=norma(k,x)
s=abs(x(1));
for i=2:k 
   if abs(x(i))>s s=abs(x(i)); end;
end;
n=s;
