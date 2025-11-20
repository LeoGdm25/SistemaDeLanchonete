#include <iostream>
#include <string>
#include <queue>
#include <iomanip>

using namespace std;

struct Pedido {
    int id;
    string descricao;
    double valorTotal;
};

int main() {
 
    cout << fixed << setprecision(2);

    queue<Pedido> filaPedidos;

 
    Pedido primeiroPedido = {101, "Sanduiche de Frango", 22.50};
    Pedido segundoPedido = {102, "Batata Frita Grande", 12.00};
    Pedido terceiroPedido = {103, "Combo Familia", 45.90};

    cout << "===== Sistema para Gerenciar Pedidos =====\n";
    cout << "\nPedidos\n";

    
    filaPedidos.push(primeiroPedido);
    cout << "Pedido " << primeiroPedido.id << " adicionado.\n";

    filaPedidos.push(segundoPedido);
    cout << "Pedido " << segundoPedido.id << " adicionado.\n";

    filaPedidos.push(terceiroPedido);
    cout << "Pedido " << terceiroPedido.id << " adicionado.\n";

    cout << "\n======================================================\n" << endl;

    
    cout << "Ver o Proximo Pedido\n";
    
    
    Pedido &proximoPedido = filaPedidos.front();
    Pedido &ultimoPedido = filaPedidos.back(); 

    
    cout << "O proximo pedido e: \n";
    cout << "ID: " << proximoPedido.id 
         << " | Descricao: " << proximoPedido.descricao 
         << " | Valor Total: R$" << proximoPedido.valorTotal << endl;

    cout << "\n======================================================\n" << endl;

    
    cout << "Entregar o Primeiro Pedido \n";

    
    cout << "O pedido ID " << proximoPedido.id << " esta sendo entregue ao cliente...\n";
    
    filaPedidos.pop(); 
    
    cout << "CONFIRMACAO DA ENTREGA: Pedido ID " << proximoPedido.id << " removido.\n";

    cout << "\n======================================================\n" << endl;

    
    cout << "Ver a Fila Novamente \n";
    
    if (!filaPedidos.empty()) {
        
        const Pedido& novoProximo = filaPedidos.front();
        
        cout << "O novo proximo pedido (FRONT) e:\n";
        cout << "ID: " << novoProximo.id  << " | Descricao: " << novoProximo.descricao << " | Valor Total: R$" << novoProximo.valorTotal << endl;
             
        cout << "\nTamanho atual da fila: " << filaPedidos.size() << endl;
    } else {
        cout << "A fila esta vazia.\n";
    }
    
    return 0;
}
