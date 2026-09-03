#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int clamp(int value, int min, int max);
float lerp(float a, float b, float t);
int randomRange(int min, int max);
float percentOf(int current, int total);

int main()
{
     int score = 35, total = 100; 
      float percent = percentOf(score, total); 
      printf("score/total เดิม = %d/%d\n", score, total); 
      printf("percent = %.1f%%\n", percent); 
      return 0; 
}
int clamp(int value, int min, int max)
{
    if (value > max)
        value = max;
    if (value < min)
        value = min;
    return value;
}
float lerp(float a, float b, float t)
{
    float result = a + (b - a) * t;
    return result;
}
int randomRange(int min, int max)
{
    return rand() % (max - min + 1) + min;
}
float percentOf(int current, int total) {
     return (float)current / total * 100.0f; 
}