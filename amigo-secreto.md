```mermaid
erDiagram
    MAE ||--|{ BEBE : "possui"
    MEDICO ||--|{ BEBE : "realiza_parto"

    MAE {
        Nome atributo
        Endereco atributo
        Telefone atributo
        Data_Nascimento atributo
    }

    BEBE {
        Nome atributo
        Data_Nascimento atributo
        Peso_Nascimento atributo
        Altura atributo
    }

    MEDICO {
        CRM atributo
        Nome atributo
        Telefone_Celular atributo
        Especialidade atributo
    }
```