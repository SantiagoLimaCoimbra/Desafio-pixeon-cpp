# Desafio Pixeon

Este desafio foi feito pela Pixeon para a vaga de desenvolvedor Junior C++.

O desafio consiste em desenvolver uma aplicação utilizando Qt e C++ que permita visualizar um arquivo de imagem.

- A imagem deve ser no formato BMP, PNG ou JPEG e deve ser exibida na aplicação;
- Como bônus a aplicação deve permitir selecionar uma imagem do computador;
- Como bônus a aplicação deve permitir a visualização de mais de uma imagem ao mesmo tempo;
- Como bônus a aplicação deve possuir controles para alterações sobre a imagem como zoom, pan (deslocamento em x, y), rotação e brilho/contraste;

<br>

## Sobre o projeto

O projeto foi desenvolvido com o Qt Creator e possui as funcionalidades de visualização de imagem, escolha da imagem a ser visualizada (apenas PNG) e a possibilidade de abrir mais de uma imagem para ser visualizada.

>Video de exibição do projeto: [Desafio Pixeon](https://youtu.be/YFK8ktfRaPU)

Neste repositório, eu deixei a pasta que possui o arquivo visualizador_de_imagem.pro para que ele possa ser rodado com o qmake e a de build do projeto, pois como não consegui rodar o projeto por linha de comando nem com o qmake nem com o cmake, em ultimos casos, da para utilizar esta pasta e rodar os arquivos pelo Qt Creator.

<br>

## Processo do desenvolvimento

A primeira coisa que eu comecei a fazer foi estudar sobre as tecnologias exigidas do desafio, e passei algum tempo pesquisando sobre, Qt, Qmake, Cmake e C++.

Assim que instalei o Qt Creator criei um projeto simples apenas com uma janela e uma label de texto para testar e tentei fazer o build dele por linha de comando com o qmake e o cmake, pois queria ver a possibilidade de rodar o projeto sem ter que abrir o programa do Qt, mas não obtive sucesso com nenhum dos dois programas.

A primeira parte a ser desenvolvida foi a de exibir uma imagem no programa.
Comecei crinado uma label pela interface do QT Creator e um objeto QPixmap e adicionei o caminho da imagem. Adicionei também um tamanho padrão para a imagem de 500 por 500 através do método set_pixmap.

A segunda parte a ser desenvolvida foi a de escolher um arquivo de imagem para abrir, para isso, adicionei no elemento de UI um botão, e no método clicked dele adicionei a lógica utilizada para exibir a imagem que havia feito antes, porém, onde ficava o caminho da imagem eu substitui pela variável pathFileName, que armazena o caminho da imagem selecionada pelo usuário através do QFileDialog.

![Logica da imagem](/img/proj/cap1.png)

Para fazer com que mais de uma imagem fosse exibida na tela do programa escolhi utilizar um TabWidget, e abaixo dele coloquei um botão para adicionar novas tabs, também configurei as tabs para que pudessem ser excluídas.

![Logica das janelas](/img/proj/cap2.png)

Fiz também com que as tabs fossem enumeradas para melhor visualização.

Para que as tabs abertas pudessem exibir imagens de maneira independente, criei uma classe chamada form_image e um form na interface. Esta classe é utilizada para suportar a lógica de exibição de imagens, e a cada ves que uma janela é aberta um novo formulário é criado podendo exibir novas imagens.

Dando uma revisada no código e no documento do desafio lembrei da restrição enquanto ao tipo de imagem suportada e vi que, da forma em que implementei, o projeto permitia abrir qualquer tipo de arquivo.

Para resolver isso, dentro do form_image, criei uma variável chamada filter, nela adicionei a extensão *.png, depois disso foi só passar a variável filter como um novo argumento para a variável pathFileName.

![Filtro de tipo de imagem](/img/proj/cap4.png)

<br>

## Desafios e dificuldades

### Documentação oficial
Tive um pouco de dificuldade para entender a documentação oficial do Qt, por conta disso acabei usando muito mais sites e vídeos que achei na internet do que a própria documentação para desenvolver o projeto.

### Build do projeto
Passei muito tempo pesquisando e tentando rodar o projeto sem que fosse pelo Qt Creator, mas não consegui. Utilizei o windows para desenvolver este projeto e isso dificultou um pouco, tentei também rodar tanto o qmake quando o cmake em um macbook, mas também não obtive sucesso. No caso do cmake ele dizia que o CMakeListis não possui dependências do Qt.

Já com o Qt o que entendi é que para rodar o projeto por linha de comando é preciso executar o arquivo.pro, mas isso só é possível com uma licença empresarial do Qt.

Outro problema que tive foi na hora de criar o form, pois para isso o projeto precisa estar sendo executado com o qmake, caso contrário ele não permitirá criar um novo recurso, isso para mim ainda está meio confuso mas depois de um tempo pesquisando descobri que era só criar um projeto utilizando o qmake.

<br>

## Minha avaliação dos resultados

Muito do que eu fiz neste projeto foi através de pesquisa e tutoriais que consegui achar na internet pois não tinha conhecimento sobre Qt e pouco sobre C++, porém, estou contente com o resultado, pois consegui fazer o requisito principal da aplicação e dois requisitos bônus.

Acredito que o requisito bônus de visualizar mais de uma imagem possa não estar implementado da maneira correta, já que elas não são exibidas lado a lado, mas sim em janelas diferentes da aplicação, mas foi a forma que consegui encontrar para atender a este requisito.

Este projeto foi bem desafiador para mim, por se tratar de uma tecnologia que não conhecia e ter que aprender e desenvolver ao mesmo tempo, mas, pode aprender muita coisa com este projeto e pessoalmente estou satisfeito com o resultado.

<br>

## Melhorias futuras

É claro que a primeira melhoria necessária seria desenvolver o requisito de controle e alteração da imagem que não implementei por conta do tempo.

Melhorias no código também seriam bem vindas, já que não tenho conhecimento de boas práticas com C++ então refatorações seriam necessária.
