void rain()
{
    int j, x, y, z;
    for (j = 0; j < 80; j++)
    {
        x = random(600);
        y = random(400);
        z = random(50);
        for (float a = 0; a < 2; a += 0.5)
            circle(x + a, y + a, z);
        delay(50);
    }
    delay(250);
}