#include <unistd.h>

//Função para desenhar um retângulo de largura x e altura y!

void rush(int x, int y)
{
	//Desenhando a parte superior do retângulo
	write(1, "A", 1);
	for (int i = 0; i < x - 2; i++)
    	{
        	write(1, "B", 1);
    	}

    	if (x > 1)
    	{
        	write(1, "C", 1);
    	}
    		write(1, "\n", 1);

	//Desenhando as linhas imtermediárias do retângulo
	for (int i = 0; i < y - 2; i++)
    	{
        	write(1, "B", 1);
	for (int s = 0; s < x - 2; s++)
        {
            write(1, " ", 1);
        }

        if (x > 1)
        {
            	write(1, "B", 1);
        }	
        	write(1, "\n", 1);
    	}

	//Desenhando a parte inferior do retângulo
	if (y > 1)
	{
		  write(1, "C", 1);

	       for (int i = 0; i < x - 2; i++)
           	{
			write(1, "B", 1);
		}
	        if (x > 1)
		{
			write(1, "A", 1);
		}
	  		write(1, "\n", 1);
	}
}

int main()
{
	rush(5, 3); //test1
	rush(5, 1); //test2
	rush(1, 1); //test3
	rush(1, 5); //test4
	rush(4, 4); //test5
	return 0;
}
