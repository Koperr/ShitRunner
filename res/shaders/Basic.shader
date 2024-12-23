#shader vertex
#version 330 core

layout(location = 0) in vec3 aPos;
out vec3 fragPos;

void main()
{
   fragPos = aPos;
   gl_Position = vec4(aPos, 1.0);
};

#shader fragment
#version 330 core

in vec3 fragPos;
layout(location = 0) out vec4 color;

uniform vec4 u_Color;

void main()
{
   vec3 normalizedPos = fragPos * 1 + 0.5;
   color = vec4(normalizedPos, 1.0);
   //color = u_Color;
};