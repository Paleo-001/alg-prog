1. Engenharia Ambiental: Classificação do Índice de Qualidade do Ar (Foco em if/else encadeado)

Contextualização:

O monitoramento da qualidade do ar é feito através da medição de material particulado fino (PM2.5). Engenheiros ambientais configuram estações de monitoramento que emitem alertas à população com base na concentração de partículas por metro cúbico ($\mu g/m^3$).

Enunciado:

Desenvolva um programa em C que receba a leitura do nível de PM2.5 de um sensor ambiental. Utilizando a estrutura condicional if / else if / else, o programa deve classificar a qualidade do ar segundo os padrões da OMS:

Até 12.0: "Boa"

De 12.1 a 35.4: "Moderada"

De 35.5 a 55.4: "Insalubre para grupos sensíveis"

Acima de 55.4: "Insalubre (Alerta Geral)"

-------------------------------------------------------

2. Astronomia: Classificação Espectral de Estrelas (Foco em switch)

Contextualização:

Na astrofísica, as estrelas são classificadas por seu espectro e temperatura superficial usando o sistema de letras de Harvard (O, B, A, F, G, K, M). Telescópios automatizados precisam ler um caractere correspondente à classe e catalogar imediatamente as características básicas da estrela.

Enunciado:

Crie um programa em C que leia um único caractere representando a classe espectral de uma estrela (em maiúsculo). Utilizando o comando switch, o programa deve exibir a cor predominante e a temperatura aproximada daquela classe. Contemple ao menos as classes O, G e M. Inclua uma validação default para caracteres não reconhecidos.

------------------------------------------------------------------

3. Meteorologia: Análise de Precipitação Semanal (Foco em for)

Contextualização:

Agências meteorológicas calculam o volume de chuvas (precipitação em milímetros) de uma região para prever riscos de enchentes ou secas. Para compor um boletim semanal, é necessário ler rigorosamente as medições diárias dos últimos 7 dias.

Enunciado:

Escreva um programa em C que utilize um laço for para solicitar a precipitação pluviométrica (em mm) de 7 dias consecutivos. O algoritmo deve acumular esses valores, calcular a média diária da semana e, ao final, emitir um alerta caso o volume total ultrapasse os 100 mm (risco de alagamento).

---------------------------------------------------------------------

4. Zootecnia: Triagem de Peso para Abate (Foco em while com sentinela)
Contextualização:

Em uma fazenda de pecuária de corte, o zootecnista realiza a pesagem do gado. O rebanho possui um número variável de cabeças, e o profissional só encaminha para a área de engorda final os animais que ainda não atingiram o peso de abate (500 kg). A pesagem é contínua e só para quando o curral esvazia.

Enunciado:

Desenvolva um programa em C usando o laço while. O sistema deve ler continuamente o peso dos bois registrados na balança. A repetição deve ser interrompida quando o operador digitar -1 (valor sentinela). O programa deve contar quantos animais pesados atingiram ou ultrapassaram os 500 kg.

----------------------------------------------------------------

5. Ciência de Alimentos: Painel de Forno Industrial (Foco em do-while integrado)

Contextualização:

Na indústria alimentícia, o controle rigoroso da temperatura garante que os produtos assem de maneira uniforme e elimine riscos microbiológicos. Um painel digital de um forno de esteira oferece um menu contínuo para o engenheiro de alimentos operar o equipamento durante a produção.

Enunciado:

Crie um menu interativo usando do-while. O sistema deve apresentar três opções: [1] Verificar Temperatura Atual, [2] Injetar Vapor e [0] Desligar Painel. O menu deve reaparecer continuamente na tela após cada operação até que o usuário digite 0. Utilize o comando switch para tratar a escolha do usuário.

----------------------------------------------------

6. Biologia Marinha: Monitoramento de pH (Foco em if / else encadeado)

Contextualização: Em grandes aquários oceânicos, a qualidade da água é crítica para a sobrevivência dos corais. O pH ideal varia em um intervalo bem específico. Se a água ficar muito ácida ou muito alcalina, alertas precisam ser disparados pela equipe de biologia marinha.

Enunciado: Crie um programa em C que leia o valor atual do pH da água (um número com casas decimais). O sistema deve avaliar a entrada: se o pH for inferior a 7.8, deve alertar sobre acidez. Se estiver entre 7.8 e 8.5 (inclusive), o status é ideal. Se ultrapassar 8.5, deve alertar sobre alcalinidade excessiva. Utilize a estrutura if...else if.