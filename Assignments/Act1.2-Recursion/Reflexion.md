### ¿En qué casos notaste que la versión recursiva fue más lenta o usó más memoria que la iterativa? ¿A qué se debió?

La versión recursiva fue mucho más lenta en Fibonacci porque recomputa los mismos valores repetidamente. Además, consumió más memoria debido a que cada llamada acumula un marco en la pila del sistema, mientras que la versión iterativa reutiliza las mismas variables en cada vuelta del ciclo para mantener un uso de memoria constante.

### Para la suma 1..n, sumFormula resuelve en un solo paso lo que a sumIterative y sumRecursive les toma n pasos. ¿Qué te dice esto sobre buscar una fórmula antes de escribir código?

Esto demuestra que el análisis matemático siempre supera a la fuerza bruta antes de programar. Utilizar una fórmula matemática reduce un proceso que tomaría n iteraciones a una sola operación aritmética instantánea, optimizando drásticamente el tiempo de ejecución y el procesador sin importar qué tan grande sea la variable de entrada.

### Si bacteriasRecursive tuviera que calcular n = 100,000 días, ¿qué problema esperarías encontrar y cómo lo resolverías?

Con 100,000 llamadas acumuladas, el programa sufrirá un desbordamiento de pila (stack overflow) al agotar la memoria asignada a las funciones, además de un desbordamiento de entero por el crecimiento exponencial de la población. La solución directa es cambiar la función recursiva por la versión iterativa usando un ciclo for o while, lo que mantiene el consumo de memoria en un nivel constante y seguro.