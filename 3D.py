import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D                         # 3d graph
from mpl_toolkits.mplot3d import proj3d                         # 3d graph
fig = plt.figure(figsize=[5,6])
ax = fig.gca(projection='3d')
ax.text(0, 0, 8.8, '$z$', 'z')    
plt.show()