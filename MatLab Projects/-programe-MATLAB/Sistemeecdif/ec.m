function qrprim=ec(x,qr)
global d0
gama=2.9;
p0=19*10^6;
r0=0.75;
g=9.81;
ro=1000;
qrprim=zeros(2,1);
qrprim(1)=-(p0/ro)*(r0^(3*gama))*(qr(2).^(1-3*gama))-(qr(1).^2)/(2*(qr(2).^3))+g*d0*qr(2);
qrprim(2)=-qr(1)./(qr(2).^2);
% qrprim(1)=q(t)
% qrprim(2)=r(t)
