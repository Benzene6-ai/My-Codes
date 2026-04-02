#import numpy as np
#import matplotlib.pyplot as plt

#x = np.linspace(-2*np.pi, 2*np.pi, 400)
#for k in range(-2, 3):  # a few integer shifts
    #plt.plot(x, x + 2*k*np.pi, 'r', lw=1)          # y = x + 2kπ
    #plt.plot(x, -x + 2*k*np.pi, 'b', lw=1)         # y = -x + 2kπ
    #plt.plot(x, np.pi + x + 2*k*np.pi, 'r--', lw=1)  # y = π + x + 2kπ
    #plt.plot(x, np.pi - x + 2*k*np.pi, 'b--', lw=1)  # y = π - x + 2kπ

#plt.xlabel(r"$x_0$")
#plt.ylabel(r"$y$")
#plt.title(r"Solutions of $\sin y = \pm \sin x_0$")
#plt.grid(True)
#plt.axhline(0, color='k', lw=0.8)
#plt.axvline(0, color='k', lw=0.8)
#plt.show()

import numpy as np
import matplotlib.pyplot as plt

# Given complex number
z = -4 + 4*np.sqrt(3)*1j

# Compute magnitude and argument
r = abs(z)
theta = np.angle(z)

# Cube roots have magnitude r^(1/3)
root_radius = r**(1/3)

# Compute the 3 cube roots
roots = []
for k in range(3):
    angle = (theta + 2*np.pi*k) / 3
    w = root_radius * (np.cos(angle) + 1j*np.sin(angle))
    roots.append(w)

# Extract real and imaginary parts
xs = [w.real for w in roots]
ys = [w.imag for w in roots]

# Plotting
plt.figure(figsize=(7,7))

# Plot the circle of radius 2
circle_theta = np.linspace(0, 2*np.pi, 400)
plt.plot(2*np.cos(circle_theta), 2*np.sin(circle_theta), 'lightgray')

# Plot the 3 roots
plt.scatter(xs, ys, color='red', s=80, label="Cube roots")

# Connect the points with lines
for i in range(3):
    x_vals = [xs[i], xs[(i+1) % 3]]
    y_vals = [ys[i], ys[(i+1) % 3]]
    plt.plot(x_vals, y_vals, 'blue')

# Label the roots
for i, w in enumerate(roots):
    plt.text(w.real + 0.1, w.imag + 0.1, f"w{i}", fontsize=12)

# Axes and formatting
plt.axhline(0, color='black', linewidth=0.8)
plt.axvline(0, color='black', linewidth=0.8)
plt.gca().set_aspect('equal', adjustable='box')
plt.grid(True)
plt.title("Cube Roots of -4 + 4√3 i")
plt.xlabel("Re")
plt.ylabel("Im")
plt.legend()

plt.show()








