# MySolar - Solar System animation in OpenGL
The project's goal is to develop an interactive, three-dimensional solar system simulator that can be assembled. The software intended to be able to simulate intriguing celestial occurrences as well as genuine and artificial solar systems.


## Features
- Texture.
- Lighting.
- Camera moves.
- Moon, sun, and the planets.
- Planets' speeds are adjusted  with respect to distance from the sun.
- Angle of orbit and axis tilt (Visualizing the formation of midnight sun).



## Lighting
Lighting is implemented with glLightfv(), a point light source positioned at the center of sun. This lighting is not implemented on the sun because it itself is a light emitting source.
To know more about lighting in OpenGL- https://docs.microsoft.com/en-us/windows/win32/opengl/gllightfv


## Rendering:->
The method a computer employs to produce a picture from a data file is known as rendering. The majority of 3D graphics tools are unable to instantly render an entire picture complete with all of its colours, textures, lighting, and shading. Instead, a mesh—a crude representation of an object—is handled by the user. The user produces the image when he is happy with the mesh.


## Glimpse of working project

![MySolar.gif](https://github.com/mansi4444/MySolar/blob/main/animation.gif)


## To Do List for the project
 - [] lessen the memory usage
 - [] camera travel
 - [x] other planets
 - [] Saturn's ring
 - [] bgm
 - [] add information about planets
