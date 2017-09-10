function main
global d0
fprintf(' Reprezentare q(t) 1 / r(t) 2 ');
rasp=input(' ')
if rasp==1 grafic(1);end;
if rasp==2 grafic(2);end;

function s=grafic(opt)
global d0
s=opt;
d0=20; 
t0=0;
tf=0.4;
qde0=0;       
rde0=0.8;    
x0=[qde0 rde0];
if s==1
   [t, x]=ode23('ec',[t0 tf],x0);
   ty1=t;
   y1=x(:,1);
end;
if s==2
   [t, x]=ode23('ec',[t0 tf],x0);
   tz1=t;
   z1=x(:,2);
end;
d0=30;
if s==1
   [t, x]=ode23('ec',[t0 tf],x0);
   ty2=t;
   y2=x(:,1);
end;
if s==2
   [t, x]=ode23('ec',[t0 tf],x0);
   tz2=t;
   z2=x(:,2);
end;
d0=40;
if s==1
   [t, x]=ode23('ec',[t0 tf],x0);
   ty3=t;
   y3=x(:,1);
end;
if s==2
   [t, x]=ode23('ec',[t0 tf],x0);
   tz3=t;
   z3=x(:,2);
end;

if s==1
   plot(ty1,y1, '-b',ty2,y2, '-r',ty3,y3, '-g');
   title(' Graficul lui q(t)');
   ylabel('  q(t) [m3/s] ');
   legend('q(t) d0=20','q(t) d0=30','q(t) d0=40');
   xlabel(' Timp [s] ');
   grid;
end;
if s==2
   plot(tz1,z1, '-b',tz2,z2, '-r',tz3,z3, '-g');
   title(' Graficul lui r(t)');
   ylabel('  r(t)  [m] ');
   legend('r(t) d0=20','r(t) d0=30','r(t) d0=40');
   xlabel(' Timp [s] ');
   grid;
end;
   
