#ifndef MEDIOTRANSPORTE_H
#define MEDIOTRANSPORTE_H

class MedioTransporte
{
	public:
		// Factory Method:
		static MedioTransporte *seleccionar(int opcion);
		
		virtual void arrancar()=0;
		virtual void parar()=0;
		virtual void pilotar()=0;
};

#endif
