# POO-20261
Repositório de Programação Orientada a Objetos
Este repositório centraliza as atividades práticas da disciplina. Utilizaremos um fluxo de trabalho profissional baseado em **Pull Requests** e **Integração Contínua (CI)** para automatizar a validação das entregas.

---

## Configurações de Software
### Linguagem de Programação
* gcc version 14.2.0 (Rev2, Built by MSYS2 project)

# Guia de Contribuição e Boas Práticas

Para manter a qualidade, coesão e legibilidade do nosso código, adotamos as seguintes convenções e práticas de arquitetura de software para os exercícios e desafios deste repositório.

---

## 1. Convenções de Nomenclatura (Padrão C++) ☕

Seguimos as convenções oficiais da linguagem para garantir que o código seja idiomático:

* **Classes e Interfaces:** Devem utilizar `PascalCase` (ex: `CalculadoraDeEstoque`, `Pagamento`). O nome do arquivo `.java` deve ser exatamente igual ao da classe pública.
* **Métodos e Atributos:** Devem utilizar `camelCase`, iniciando com a primeira letra minúscula (ex: `mostrarDetalhes()`, `valorDiaria`).
* **Constantes:** Escritas em `UPPER_SNAKE_CASE` e declaradas como `static final` (ex: `TAXA_A_RETER`).
* **Pacotes (Packages):** Escritos totalmente em letras minúsculas, utilizando o domínio reverso (ex: `br.com.empresa.projeto`) para evitar ambiguidade.

## 📂 2. Organização de Diretórios

Para que o corretor automático identifique sua entrega, a estrutura de pastas deve seguir rigorosamente este padrão:

### Entregas Individuais
Devem estar dentro de uma pasta com seu **Nome Completo** (substitua espaços por hífen e evite acentos).
* `Nome-Completo/exercicio1/`
* `Nome-Completo/exercicio2/`

### Trabalhos em Grupo
Devem ser colocados em uma pasta específica na **raiz do repositório**.
* `/Trabalho-Grupo-01/`
* `/Projeto-Final/`

---

## 🌿 3. Fluxo de Trabalho (GitFlow)

Siga estes passos para cada nova atividade:

1.  **Crie uma branch a partir da main para suas tarefas:**
    * *Individual:* `git checkout -b nome-aluno`
    * *Grupo:* `git checkout -b nome-do-grupo`

2.  **Sincronize seu repositório local:**
    ```bash
    git checkout entrega
    git pull origin entrega
    ```
3.  **Desenvolva e Commite:** Certifique-se de que seu código compila localmente.
4.  **Envie para o GitHub:**
    ```bash
    git push origin sua-branch-de-entrega
    ```
5.  **Abra um Pull Request (PR):** No GitHub, solicite o merge da sua branch para a branch **`entrega`**.

---