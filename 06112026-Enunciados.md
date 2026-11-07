Exemplo 1: Engenharia Civil — Mapa de Resistência Geotécnica do Solo
Contextualização

Na engenharia de fundações e contenções geotécnicas, o canteiro de obras é discretizado em uma malha ortogonal regular de perfurações de sondagem (ensaios SPT). Os engenheiros civis registram a capacidade de suporte de carga do terreno (expressa em MPa) em cada coordenada da grade. A equipe técnica necessita calcular a resistência média global da área analisada e determinar a coordenada espacial exata (linha,coluna) da quadrícula de menor resistência mecânica para dimensionar a necessidade de estacas profundas de reforço.

Enunciado

Escreva um programa em linguagem C (padrão C11) que declare e leia uma matriz de ponto flutuante (float) de ordem 3×3, representando as medições de capacidade de suporte de uma malha geotécnica. O programa deve exibir o mapa bidimensional alinhado em linhas e colunas, calcular a média de resistência da fundação e identificar as coordenadas (i,j) da área com a menor resistência mecânica registrada.

--------------------------------------------------------------------------
Exemplo 2: Logística — Matriz de Custos de Frete Intermodal
Contextualização

Na gestão de cadeias de suprimentos (supply chain), centros de distribuição (CDs) operam interconectados por malhas rodoviárias e ferroviárias. Para calcular despesas operacionais e definir fluxos de transferências entre filiais, analistas logísticos organizam tabelas tarifárias em matrizes quadradas de origens e destinos. O custo de frete de um entreposto para ele mesmo é nulo (diagonal principal igual a zero), e a gerência precisa calcular o custo acumulado de despacho a partir de cada ponto de origem para todos os demais destinos cadastrados.

Enunciado

Desenvolva um programa em linguagem C que declare e manipule uma matriz de números reais de dimensões 4×4, representando o custo de envio de cargas (em milhares de reais) entre 4 centros logísticos integrados. O programa deve receber os valores via teclado, garantindo que a rota interna (M[i][i]) seja sempre zero. Em seguida, utilizando laços aninhados, deve imprimir a tabela formatada e calcular um vetor unidimensional contendo o custo total de expedição gerado por cada centro de distribuição (somatório de cada linha).

---------------------------------------------------------------------------------------------

Exemplo 3: Enfermagem — Mapa de Ocupação e Complexidade de Leitos de UTI
Contextualização

Na supervisão hospitalar e governança clínica de Unidades de Terapia Intensiva (UTI), os leitos são organizados espacialmente em setores (alas e boxes). A escala NAS (Nursing Activities Score, simplificada de 0 a 5) gradua o nível de atenção assistencial requerido pelo paciente, em que 0 representa leito desocupado e 5 denota paciente crítico em falência de múltiplos órgãos sob cuidados intensivos ininterruptos. A chefia de enfermagem utiliza essa grade para balancear o dimensionamento técnico das escalas de plantão.

Enunciado

Implemente um programa em linguagem C que declare uma matriz de inteiros de dimensões 3×3, correspondendo aos leitos de uma ala intensiva. O sistema deve coletar os escores de gravidade de cada célula, validar para que permaneçam no intervalo de 0 a 5, exibir o mapa visual de ocupação do setor hospitalar, calcular a porcentagem global de leitos ocupados e alertar as coordenadas dos leitos em nível de atenção máxima (escore igual a 5).