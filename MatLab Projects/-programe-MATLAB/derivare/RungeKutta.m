% Metoda Runge-Kutta de ordin 4 pentru aproximarea solutiei problemei Cauchy
% Date de intrare: [a,b] intervalul de integrare
%                  h pasul de integrare
%                  y0=y(a)
% Date de iesire:  y solutia aproximativa
% Introducere date
fprintf('	a = ');
a=input(' ');
fprintf('	b = ');
b=input(' ');
fprintf('	h = ');
h=input(' ');
fprintf('	y0 = ');
y0=input(' ');
n=(b-a)/h;
for i=1:n 
   y(i)=0;
   yt(i)=0;
   x(i)=0;
end;
y(1)=y0;
x(1)=a;
c=y0*fc(a);
fprintf('\n 	Valorile aproximative 			Valorile exacte \n\n');
fprintf('	y( %f ) = %f 		y( %f ) = %f \n',x(1),y(1),x(1),fe(x(1),y(1),c));
for j=2:n+1
   k0=h*f(x(j-1),y(j-1));
   k1=h*f(x(j-1)+h/2,y(j-1)+k0/2);
   k2=h*f(x(j-1)+h/2,y(j-1)+k1/2);
   k3=h*f(x(j-1)+h,y(j-1)+k2);
   y(j)=y(j-1)+(k0+2*k1+2*k2+k3)/6;
   x(j)=x(j-1)+h;
   fprintf('	y( %f ) = %f 		y( %f ) = %f \n',x(j),y(j),x(j),fe(x(j),y(j),c));
end;
