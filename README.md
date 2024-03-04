# DHT---Atividade

Descrição de 5 casos de teste para as principais funcionalidades de uma DHT com pré-condição, etapas do teste e pós-condição.

## Teste caso 1:
- Pré-condição: A DHT está inicialmente vazia.
- Etapas do Teste: Adiciona um valor à DHT usando dht.put("chave1", "valor").
- Pós-condição: A DHT contém o par chave-valor "chave1"-"valor".

## Teste caso 2:
- Pré-condição: A DHT contém o par chave-valor "chave1"-"valor".
- Etapas do Teste: Atualiza o valor associado à chave "chave1" usando dht.update("chave1", "novo_valor").
- Pós-condição: O valor associado à chave "chave1" na DHT é "novo_valor".

## Teste caso 3:
- Pré-condição: A DHT contém o par chave-valor "chave1"-"novo_valor".
- Etapas do Teste: Verifica se a DHT contém a chave "chave1" usando dht.contains("chave1").
- Pós-condição: A DHT ainda contém o par chave-valor "chave1"-"novo_valor".

## Teste caso 4:
- Pré-condição: A DHT contém o par chave-valor "chave1"-"novo_valor".
- Etapas do Teste: Remove o par chave-valor associado à chave "chave1" usando dht.remove("chave1").
- Pós-condição: A DHT não contém mais o par chave-valor associado à chave "chave1".

## Teste caso 5:
- Pré-condição: A DHT não contém a chave "chave2".
- Etapas do Teste:Verifica se a DHT contém a chave "chave2" usando dht.contains("chave2").
- Pós-condição: A DHT ainda não contém a chave "chave2".
