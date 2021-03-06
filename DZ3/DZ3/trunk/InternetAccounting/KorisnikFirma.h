#pragma once
#include "Korisnik.h"
using namespace System;
using namespace System::Xml::Serialization;

[Serializable]
public ref class KorisnikFirma : Korisnik
{
public:
	[ XmlElement( ElementName = "Naziv_firme" )]
	String ^_naziv;
	[ XmlElement( ElementName = "PDV_broj" )]
	String ^_PDV_broj;
public:
	KorisnikFirma () {}
	KorisnikFirma (bool modem, String ^username, String ^naziv_paketa, String ^adresa, String ^password, String ^telefon, String ^naziv, String ^PDV_broj) 
		: Korisnik (modem, username, naziv_paketa, adresa, password, telefon), _naziv (naziv), _PDV_broj (PDV_broj) {}

	String ^Naziv () { return _naziv; }
	void Naziv (String ^val) { _naziv = val; }

	String ^PDV_broj () { return _PDV_broj; }
	void PDV_broj (String ^val) { _PDV_broj = val; }

	virtual String ^Print () override;
};