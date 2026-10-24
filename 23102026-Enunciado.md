1. Farmacologia: Monitoramento de Dosagem Terapêutica

Contextualização: No tratamento de pacientes críticos, certos antibióticos exigem monitoramento estrito da concentração sérica (em µg/mL). Se a concentração estiver abaixo da faixa terapêutica, o tratamento perde eficácia; se exceder o limite seguro, há risco iminente de toxicidade renal e hepática.

Enunciado: Escreva um programa em C que receba a concentração sérica de um fármaco no sangue de um paciente. Utilizando uma estrutura condicional encadeada (if / else if / else), o programa deve classificar a medição:

Menor que 10.0 µg/mL: "Subterapêutico (Aumentar dosagem)"

De 10.0 a 25.0 µg/mL: "Faixa Terapêutica Adequada"

Acima de 25.0 µg/mL: "Nível Tóxico (Suspender administração)"

---------------------------------------------------------
2. Engenharia Civil: Ensaio de Compressão em Concreto

Contextualização: Durante a execução de obras de edificação, corpos de prova cilíndricos de concreto são submetidos a ensaios de compressão axial para verificar se atingem a resistência característica projetada f_ck, medida em MPa).

Enunciado: Desenvolva um programa em C que utilize um laço for para coletar o resultado de ruptura de 4 corpos de prova de um mesmo lote. O algoritmo deve calcular a média das resistências e, caso a média seja inferior a 30.0 MPa, emitir um parecer de "Lote Reprovado"; caso contrário, exibir "Lote Homologado".

--------------------------------------------------------
3. Logística e Gestão de Portos: Tarifação por Categoria de Carga

Contextualização: Portos alfandegários categorizam os contêineres recebidos por meio de identificadores padronizados (G para Carga Geral, R para Carga Refrigerada, P para Produtos Perigosos e E para Excesso de Carga). Cada categoria possui uma taxa base diferenciada por diária de armazenagem.

Enunciado: Crie um programa em C que leia o caractere correspondente à categoria de um contêiner (G, R, P ou E) e a quantidade de dias retido no pátio. Utilizando o comando de seleção múltipla switch, calcule e imprima a taxa diária correspondente e o custo total estimado:

'G': R$ 120,00/dia

'R': R$ 250,00/dia

'P': R$ 400,00/dia

'E': R$ 320,00/dia

Contemple a cláusula default para categorias não cadastradas.

----------------------------------------------------------

4. Agronomia: Balanço Hídrico em Solo Agrícola

Contextualização: Sistemas de irrigação de precisão monitoram a perda hídrica por evapotranspiração para determinar quando ligar os pivôs centrais. O reservatório de água do solo inicia cheio e perde um volume diário variável até atingir o limite crítico de murcha permanente.

Enunciado: Elabore um programa em C que receba a capacidade inicial de água no solo (em mm) e o limite mínimo crítico de irrigação. Utilizando uma estrutura de repetição while, leia a perda hídrica diária (em mm) e decremente do reservatório até que o volume fique igual ou abaixo do nível crítico. Ao final, informe quantos dias a lavoura suportou antes da necessidade de irrigação forçada.