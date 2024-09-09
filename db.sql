CREATE TABLE Estado (
    id INT PRIMARY KEY AUTO_INCREMENT,
    codigo VARCHAR(2) NOT NULL UNIQUE,
    nome VARCHAR(100) NOT NULL
);

CREATE TABLE TipoTelefone (
    id INT PRIMARY KEY AUTO_INCREMENT,
    descricao VARCHAR(50) NOT NULL
);

CREATE TABLE Cliente (
    id INT PRIMARY KEY AUTO_INCREMENT,
    razao_social VARCHAR(255) NOT NULL,
    estado_id INT,
    FOREIGN KEY (estado_id) REFERENCES Estado(id)
);

CREATE TABLE Telefone (
    id INT PRIMARY KEY AUTO_INCREMENT,
    numero VARCHAR(20) NOT NULL,
    tipo_telefone_id INT,
    cliente_id INT,
    FOREIGN KEY (tipo_telefone_id) REFERENCES TipoTelefone(id),
    FOREIGN KEY (cliente_id) REFERENCES Cliente(id)
);

INSERT INTO TipoTelefone (descricao) VALUES ('Residencial'), ('Comercial'), ('Celular');

INSERT INTO Estado (codigo, nome) VALUES ('SP', 'São Paulo'), ('RJ', 'Rio de Janeiro'), ('MG', 'Minas Gerais');
