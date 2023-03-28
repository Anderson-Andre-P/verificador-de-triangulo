#include <iostream> 

using namespace std; 

class Triangulo{ 

private: 

    float ladoa; 

    float ladob; 

    float ladoc; 

    float anguloa; 

    float angulob; 

    float anguloc; 

public: 

    float GetAnguloa(){ 

        return anguloa; 

    } 

    void SetAnguloa(float anguloa) { 

        this->anguloa = anguloa; 

    } 

    float GetAngulob(){ 

        return angulob; 

    } 

    void SetAngulob(float angulob) { 

        this->angulob = angulob; 

    } 

    float GetAnguloc(){ 

        return anguloc; 

    } 

    void SetAnguloc(float anguloc) { 

        this->anguloc = anguloc; 

    } 

    float GetLadoa(){ 

        return ladoa; 

    } 

 

    void SetLadoa(float ladoa) { 

        this->ladoa = ladoa; 

    } 

    float GetLadob(){ 

        return ladob; 

    } 

    void SetLadob(float ladob) { 

        this->ladob = ladob; 

    } 

    float GetLadoc(){ 

        return ladoc; 

    } 

    void SetLadoc(float ladoc) { 

        this->ladoc = ladoc; 

    } 

    Triangulo(){ 

        this->ladoa = 0; 

        this->ladob = 0; 

        this->ladoc = 0; 

        this->anguloa = 0; 

        this->angulob = 0; 

        this->anguloc = 0; 

    } 

    Triangulo(Triangulo& tri){ 

        this->ladoa = tri.GetLadoa(); 

        this->ladob = tri.GetLadob(); 

        this->ladoc = tri.GetLadoc(); 

        this->anguloa = tri.GetAnguloa(); 

        this->angulob = tri.GetAnguloa(); 

        this->anguloc = tri.GetAnguloa(); 

    } 

    ~Triangulo(){ 

        cout << "Triangulo destruido!" << endl; 

    } 

    bool ehTriangulo(){ 

        float somaAng; 

        somaAng = this->anguloa + this->angulob + this->anguloc; 

        if(somaAng == 180){ 

            return true; 

        }else{ 

            return false; 

        } 

    }

    string tipoTriangulo(){ 

        if(this->ladoa == this->ladob && this->ladoa == this->ladoc){ 

            return "equilatero"; 

        }else{ 

            if(this->ladoa != this->ladob && this->ladoa != this->ladoc){ 

                return "escaleno"; 

            }else{ 

                return "isosceles"; 

            } 

        } 

    } 

}; 

int main(){ 

    Triangulo *t = new Triangulo(); 

    t->SetLadoa(0); 

    t->SetLadob(0); 

    t->SetLadoc(0); 

    t->SetAnguloa(0); 

    t->SetAngulob(0); 

    t->SetAnguloc(0); 

    if(t->ehTriangulo()){
        
        cout << "Triângulo " << t->tipoTriangulo() << endl; 
        
    } else {
        
        cout << "Não é triângulo." << endl; 
        
    } 

    return 0; 

}
