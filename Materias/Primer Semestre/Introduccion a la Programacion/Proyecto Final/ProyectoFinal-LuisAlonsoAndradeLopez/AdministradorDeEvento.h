class AdministradorDeEvento {
public: 
    AdministradorDeEvento();
    void setNombreDelEvento(string ne);
    string getNombreDelEvento();
    void setFechaDeInicio(string fe); 
    string getFechaDeInicio();
    void setDiasDeDuracion(string ddd);
    string getDiasDeDuracion();
    void setNombreDelResponsableDeLaOrganizacion(string ndrdlo);
    string getNombreDelResponsableDeLaOrganizacion();
    void setLugarDelEvento(string lde);
    string getLugarDelEvento();
    void setClave(string clave);
    string getClave();
    void GeneradorDeClave();
    void GeneradorDeClaveSiEsRepetida();
private: 
    string NombreDelEvento;
    string FechaDeInicio;
    string DiasDeDuracion;
    string NombreDelResponsableDeLaOrganizacion;
    string LugarDelEvento;
    string Clave;
};
