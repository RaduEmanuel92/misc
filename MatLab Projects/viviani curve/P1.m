r=1;
phi=linspace(0,pi,30);
theta=linspace(0,2*pi,40);
[phi,theta]=meshgrid(phi,theta); %creez meshgridul
x=2*r*sin(phi).*cos(theta); %Coord. sferice
y=2*r*sin(phi).*sin(theta);
z=2*r*cos(phi);
myh=mesh(x,y,z); %plotez sfera
set(myh,'EdgeColor',[0.6,0.6,0.6]); % setez modul de afisaj
axis equal
t=linspace(0,2*pi,40);
z=linspace(-2*r,2*r,20); 
[t,z]=meshgrid(t,z);
x=r+r*cos(t);  %coord cilindrice
y=r*sin(t);
z=z;
hold on;
myh2=mesh(x,y,z);% plotez cilindrul
set (myh2,'EdgeColor',[0.6,0,0]); %setez modul de afisare
view(50,20) %unghiul camerei,view
t=linspace(0,4*pi,200);

x=r+r*cos(t);
y=r*sin(t);      %rezolvand sistemul format din ecuatia sferei si ecuatia 
z=2*r*sin(t/2);   % cilindrului ,se determina curba intersectiei 
vhnd=line(x,y,z);  % rezolvare geometrica a sistemului
hold on

%posibilitati: rezolvarea problemelor de optimizare cu metoda
%multiplicatorilor lui Lagrange 