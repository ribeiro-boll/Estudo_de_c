cmake_minimum_required(VERSION 3.30)
project(Estudo_de_c C)

set(CMAKE_C_STANDARD 11)

# Use file(GLOB) para encontrar automaticamente todos os arquivos .c na pasta "Estudo_doido"
file(GLOB
        "Estudo_doido/" CONFIGURE_DEPENDS
        "*.h" "*.cpp"
)

add_executable(execs ${SOURCES}
        Estudo_doido/modulo_7/Exercicio_2.c
        Estudo_doido/modulo_7/Exercicio_3.c
        Estudo_doido/modulo_7/Exercicio_6.c
        Estudo_doido/modulo_7/Exercicio_1.c
        Estudo_doido/modulo_7/Exercicio_7.c
        Estudo_doido/modulo_7/Exercicio_8.c
        Estudo_doido/modulo_7/Exercicio_9.c
        Estudo_doido/modulo_7/Exercicio_11.c
        Estudo_doido/modulo_7/Exercicio_12.c
        Estudo_doido/modulo_7/Exercicio_13.c)