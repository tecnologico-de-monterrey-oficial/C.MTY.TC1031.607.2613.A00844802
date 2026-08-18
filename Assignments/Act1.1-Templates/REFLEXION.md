## 1. ¿Qué ventaja concreta notaste al usar templates en tu clase Lista, comparado con haberla hecho solo para un tipo de dato (por ejemplo, solo enteros)? Da un ejemplo de tu propio código.

## La ventaja más clara es que escribí la clase una sola vez y la pude usar con int, string y double sin cambiar ni una línea de List.h. Si la hubiera hecho solo para enteros, en cuanto necesitara una lista de strings tendría que copiar toda la clase y cambiar int por string a mano, y si después necesitara otra para double sería lo mismo otra vez.

## 2. ¿Qué parte de la actividad —ya sea el uso de templates o el reto de insertAt/removeAt— te costó más trabajo entender o depurar? ¿Qué hiciste para resolverlo?

## Lo que más trabajo me costó fue insertAt, específicamente el orden en que hay que recorrer los elementos para no sobreescribir datos. Al principio intenté recorrer el vector de izquierda a derecha empezando desde pos, pero así iba pisando valores antes de moverlos (el elemento en pos+1 se sobreescribía con el de pos antes de guardarlo en otro lado). Lo resolví recorriendo de derecha a izquierda, empezando desde el final de la lista hacia pos, así primero muevo el último elemento a la nueva última posición.

## 3. Si tuvieras que explicarle a un compañero qué es un template en C++ usando tus propias palabras, sin tecnicismos, ¿qué le dirías?

## Le diría que un template es como una plantilla de un documento tú haces el diseño una sola vez, y esa plantilla se acomoda al tipo de dato que le mandes, sin que tengas que rehacer el documento entero cada vez que cambia el contenido.