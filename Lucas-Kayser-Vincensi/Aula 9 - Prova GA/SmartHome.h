#ifndef SMARTHOME_H
#define SMARTHOME_H

#include <iostream>
#include <vector>
#include <string>

// ComponenteRede: Entidade base abstrata
class ComponenteRede 
{
public:
    std::string ip;
    ComponenteRede(std::string i, int s);
    virtual ~ComponenteRede() = default;

protected:
    int nivelSinal;
};

// DispositivoSmart: Herdeiro de ComponenteRede
class DispositivoSmart : public ComponenteRede 
{
protected:
    std::string nome;
public:
    DispositivoSmart(std::string i, int s, std::string n);
    virtual void ligar() = 0;
    std::string getNome() const { return nome; }
};

class LuzInteligente : public DispositivoSmart 
{
public:
    LuzInteligente(std::string i, int s, std::string n);
    void ligar() override;
};

class CaixaDeSom : public DispositivoSmart 
{
public:
    CaixaDeSom(std::string i, int s, std::string n);
    void ligar() override; 
};

class InterfaceTela 
{
public:
    virtual void exibirImagem() = 0;
    virtual ~InterfaceTela() = default;
};

class SmartTV : public DispositivoSmart, public InterfaceTela 
{
public:
    SmartTV(std::string i, int s, std::string n);
    void ligar() override;
    void exibirImagem() override;
};

// CameraSeguranca: Herança protegida para evitar acesso externo ao IP
class CameraSeguranca : protected ComponenteRede 
{
private:
    std::string localizacao;
public:
    CameraSeguranca(std::string i, int s, std::string loc);
    void monitorar();
};

class Comodo 
{
private:
    std::string nomeComodo;
    std::vector<DispositivoSmart*> dispositivos;
public:
    Comodo(std::string n);
    void adicionarDispositivo(DispositivoSmart* disp);
    void ativarCena();
};

class HubIA 
{
public:
    HubIA();
    ~HubIA();
    void processarRotina();
};

class CasaInteligente 
{
private:
    HubIA* processadorCentral;
public:
    CasaInteligente();
    ~CasaInteligente();
    void gerenciarCasa();
};

class Morador 
{
private:
    std::string nome;
public:
    Morador(std::string n);
    void usarDispositivo(DispositivoSmart* disp);
};

#endif