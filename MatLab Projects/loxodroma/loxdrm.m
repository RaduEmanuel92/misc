% deplasarea navei pe sfera(relement constant)
coef=0.2;
t=linspace(-10*pi,10*pi,400);
x=cos(t)./sqrt(1+coef^2*t.^2);
y=sin(t)./sqrt(1+coef^2*t.^2); % ecuatiile parametrice ale loxodromei
z=coef*t./sqrt(1+coef^2*t.^2);
loxodrm=plot3(x,y,z);
hold on;
set(loxodrm, 'Color',[0,0,0.78], 'LineWidth',2);% schimbam proprietatile
% cubei, o facem albastra si mai groasa

r=1;
phi=linspace(0,pi,30);
theta=linspace(0,2*pi,30); %vectori pentru meshgrid
[phi,theta]=meshgrid(phi,theta);
x=r*sin(phi).*cos(theta);
y=r*sin(phi).*sin(theta); %coord sfera
z=r*cos(phi);
earth=mesh(x,y,z);
set(earth,...   % imi setez ca sfera sa fie transparenta
'EdgeColor',[0.6,0.6,0.6],... %continui o linie de cod noua pe un alt rand
'EdgeAlpha',0.5,...
'FaceAlpha',0.5)
axis equal % fac axele egale si le inlatur pentru o observare mai frumoasa
           % a plotarii 
axis off
