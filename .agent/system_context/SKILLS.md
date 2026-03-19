# Sistema de Controle de Captação de Clientes

## Descrição do Problema
Você foi contratado para desenvolver uma aplicação em C para controle de captação de clientes de uma empresa. O processo de captação inicia com o cadastro dos dados de contato (nome, telefone, email e data de captação) do potencial cliente.

Após o cadastro, a equipe de venda realiza o contato e oferece o produto da empresa:
- Se o cliente comprar o produto, torna-se um cliente efetivo, e as informações de data de nascimento, endereço completo (rua, número, bairro, cidade, estado e CEP) e CPF devem ser solicitadas e cadastradas.
- Se o cliente não comprar o produto, a equipe deve perguntar se seus dados podem ser arquivados para contato futuro ou se devem ser excluídos definitivamente.

A aplicação deve, além de controlar esse fluxo, fornecer os seguintes relatórios:
1. Informar o número de clientes que estão aguardando contato.
2. Listar os clientes aguardando contato, juntamente com o número de dias desde a data de captação.

Para implementar a aplicação, você deverá utilizar três estruturas de dados distintas:
1. Uma para clientes aguardando contato.
2. Uma para clientes que compraram o produto.
3. Uma para clientes que não compraram, mas permitiram arquivamento.

A escolha do tipo de estrutura estudada no curso (lista simplesmente encadeada, lista duplamente encadeada, lista circular, fila ou pilha) é parte essencial da atividade e deverá ser justificada na documentação.

## Funcionalidades Obrigatórias

### Menu Principal
A tela inicial da aplicação deve apresentar as seguintes opções:
1. Cadastrar cliente
2. Realizar contato
3. Relatórios
4. Sair

### Cadastrar Cliente
Deve permitir o cadastro dos dados básicos do potencial cliente: nome, telefone, email e data de captação.

### Realizar Contato
Ao selecionar essa opção o cliente cadastrado há mais tempo deve ser exibido na tela.
O sistema deve permitir que as seguintes ações sejam tomadas pelo usuário:
1. Exibir o próximo cliente
2. Exibir o cliente anterior
3. Buscar um cliente pelo nome (correspondência exata; caso não exista, permanece no cliente atual)
4. Finalizar atendimento

### Finalizar Atendimento
Ao finalizar:
1. Perguntar se o cliente comprou o produto.
   - Se sim, solicitar ao usuário que digite os dados adicionais (data de nascimento, endereço e CPF) e remover o cliente para a estrutura de clientes compradores para que a equipe de logística faça o envio do produto. Cliente que compra primeiro tem seu pedido processado para envio primeiro.
2. Se não comprou, perguntar se deseja arquivar ou excluir.
   - **Arquivar** → mover o cliente para a estrutura correspondente.
   - **Excluir** → remover completamente do sistema.

### Relatórios
A opção "Relatórios" deve permitir escolher:
1. Número de clientes aguardando contato.
2. Lista de clientes aguardando contato com o número de dias aguardando (diferença entre a data atual e a data de captação).