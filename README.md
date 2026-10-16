# Sistema de alarme

# 🚨 Simulador de Sistema de Alarme Industrial

Projeto desenvolvido para a disciplina **Projeto Integrador I**, do curso de Engenharia de Computação da Universidade Federal do Pampa (UNIPAMPA), Campus Bagé.

O projeto consiste no desenvolvimento de um sistema de monitoramento de segurança industrial, utilizando lógica digital, álgebra booleana, Assembly MIPS e simulação de circuitos digitais.

## 📌 Objetivo

Implementar um sistema de alarme capaz de monitorar uma área restrita por meio de três entradas lógicas: abertura de porta, detecção de movimento e ativação do sistema.

O alarme deve ser acionado somente quando o sistema estiver ligado e houver pelo menos uma situação de risco.

## ⚙️ Funcionamento do sistema

O sistema utiliza três entradas e uma saída:

| Variável | Descrição | Valor 0 | Valor 1 |
|---|---|---|---|
| A | Sensor da porta | Porta fechada | Porta aberta |
| B | Sensor de movimento | Sem movimento | Movimento detectado |
| C | Ativação do sistema | Sistema desligado | Sistema ligado |
| S | Saída do alarme | Alarme desligado | Alarme ligado |

### Expressão booleana

A lógica do sistema é representada pela seguinte expressão:

**S = C · (A + B)**

Onde:
- `·` representa a operação lógica AND (E).
- `+` representa a operação lógica OR (OU).

Assim, o alarme é acionado quando `C = 1` e pelo menos uma das entradas `A` ou `B` estiver em `1`.

### Tabela verdade

| A | B | C | S |
|---|---|---|---|
| 0 | 0 | 0 | 0 |
| 0 | 0 | 1 | 0 |
| 0 | 1 | 0 | 0 |
| 0 | 1 | 1 | 1 |
| 1 | 0 | 0 | 0 |
| 1 | 0 | 1 | 1 |
| 1 | 1 | 0 | 0 |
| 1 | 1 | 1 | 1 |

## 🛠️ Tecnologias e ferramentas

- **Assembly MIPS:** implementação da lógica do sistema.
- **MARS:** simulador utilizado para executar o programa Assembly.
- **Logisim:** desenvolvimento e simulação do circuito digital.
- **Git e GitHub:** versionamento e disponibilização do projeto.

## 📂 Estrutura do repositório

```text
simulador-alarme-industrial/
├── README.md
├── alarme.asm
├── alarme.circ
└── relatorio.pdf
```

- `README.md`: documentação do projeto.
- `alarme.asm`: código-fonte em Assembly MIPS.
- `alarme.circ`: circuito digital desenvolvido no Logisim.
- `relatorio.pdf`: relatório técnico do projeto.

*Os nomes dos arquivos acima são sugestões de organização e devem ser ajustados aos nomes utilizados no repositório.*

## ▶️ Como executar

### 1. Programa Assembly MIPS

1. Instale ou abra o simulador MARS.
2. Abra o arquivo `alarme.asm`.
3. Monte o programa utilizando a opção **Assemble**.
4. Execute o programa com **Go**.
5. Informe os valores das entradas A, B e C conforme solicitado.
6. Verifique o resultado apresentado para o estado do alarme.

### 2. Circuito digital

1. Abra o Logisim.
2. Carregue o arquivo `alarme.circ`.
3. Altere os valores das entradas A, B e C.
4. Observe o LED de saída, que representa o estado do alarme.
5. Teste todas as oito combinações possíveis das entradas.

## 🧪 Testes

Os testes devem contemplar todas as combinações possíveis das três entradas, verificando se o resultado do programa Assembly corresponde ao comportamento do circuito digital.

O resultado esperado é o acionamento do alarme apenas quando o sistema estiver ativado e houver detecção de porta aberta ou movimento.

## 📚 Conteúdos abordados

- Lógica digital e portas lógicas.
- Tabelas verdade.
- Álgebra booleana e simplificação de expressões.
- Arquitetura MIPS.
- Programação em Assembly.
- Simulação de circuitos digitais.

## 🎓 Contexto acadêmico

**Instituição:** Universidade Federal do Pampa (UNIPAMPA)  
**Campus:** Bagé – RS  
**Curso:** Engenharia de Computação  
**Disciplina:** Projeto Integrador I  
**Projeto:** Projeto II – Simulador de Sistema de Alarme Industrial

---

Desenvolvido como atividade acadêmica para integração de conceitos de lógica digital, programação Assembly MIPS e simulação de circuitos.
