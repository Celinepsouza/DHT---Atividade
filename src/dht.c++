#include <iostream>
#include <map>
#include <string>

class DHT {
private:
    std::map<std::string, std::string> data;

public:
    // Função para adicionar um par chave-valor a DHT
    void put(const std::string& key, const std::string& value) {
        data[key] = value;  // Inserindo ou atualizando o valor associado à chave
    }

    // Função para recuperar o valor associado a uma chave na DHT
    std::string get(const std::string& key) {
        return data[key]; // Retornando o valor associado à chave
    }

    // Função para verificar se a DHT contém uma chave específica
    bool contains(const std::string& key) {
        return data.find(key) != data.end(); // Verificando se a chave está presente no mapa
    }

    // Função para remover um par chave-valor da DHT
    void remove(const std::string& key) {
        data.erase(key); // Removendo o par chave-valor associado à chave
    }

    // Função para atualizar o valor associado a uma chave na DHT
    void update(const std::string& key, const std::string& newValue) {
        // Verifica se a chave existe antes de tentar atualizar
        if (contains(key)) {
            data[key] = newValue; // Atualizando o valor associado à chave
        } else {
            std::cout << "Chave nao encontrada" << std::endl;
        }
    }
};

int main() {
    DHT dht;

    // Teste caso 1: Adicionar um valor à DHT
    dht.put("chave1", "valor");
    std::cout << "Teste caso 1: " << dht.get("chave1") << std::endl;

    // Teste caso 2: Atualizar o valor associado a uma chave
    dht.update("chave1", "novoValor");
    std::cout << "Teste caso 2: " << dht.get("chave1") << std::endl;

    // Teste caso 3: Verificar se a DHT contém uma chave específica
    std::cout << "Teste caso 3: " << (dht.contains("chave1") ? "Existe" : "Nao existe") << std::endl;

    // Teste caso 4: Remover um valor da DHT
    dht.remove("chave1");
    std::cout << "Teste caso 4: " << (dht.contains("chave1") ? "Chave nao removida" : "Chave removida") << std::endl;

    // Teste caso 5: Tentar recuperar um valor inexistente
    std::cout << "Teste caso 5: " << (dht.contains("chave2") ? "Valor existente" : "Valor inexistente") << std::endl;

    return 0;
}