t0=0;tf=2;
x0=[2. 1.];
[t, x]=ode23('ecdif',t0,tf,x0);
plot(t,x(:,2), '-b',t,x(:,1), '-r');
grid;
pause;
plot(t,1.5*exp(t)-0.5*exp(-t), '-b',t,1.5*exp(t)+0.5*exp(-t), '-r');
grid;