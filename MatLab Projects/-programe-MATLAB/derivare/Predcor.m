function predcor
% Metoda predictor-corector pentru aproximarea solutiei problemei Cauchy
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
   x(j)=x(j-1)+h;
   yt(j)=y(j-1)+h*f(x(j-1),y(j-1));
   y(j)=yt(j)+(h/2)*(f(x(j),yt(j))-f(x(j-1),y(j-1)));
   fprintf('	y( %f ) = %f 		y( %f ) = %f \n',x(j),y(j),x(j),fe(x(j),y(j),c));
end;
function z=f(x,y)
z=x*y;
function z=fe(x,y,c)
z=c*exp((x*x)/2);
function z=fc(x)
z=exp(-(x*x)/2);
