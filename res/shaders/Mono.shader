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

//in vec3 fragPos;
out vec4 fragColor;

void main()
{
   //vec3 normalizedPos = fragPos * 1 + 0.5;
   fragColor = vec4(0.0, 1.0, 0.0, 1.0);
};