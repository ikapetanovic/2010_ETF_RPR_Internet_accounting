#pragma once
#include "About.h"
#include "Pretraga.h"
#include "UnosKorisnika.h"
#include "RacunNaplata.h"
#include "RacunPrint.h"

#include "KorisnikOsoba.h"
#include "KorisnikFirma.h"
#include "Paket.h"
#include "Racun.h"
#include "RacunPrint.h"


namespace DZ3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			korisnici = gcnew ArrayList ();
			racuni = gcnew ArrayList ();
			paketi = gcnew ArrayList ();
			paketi->Add (gcnew Paket ("Economic", "7 GB", "1250/128 kbps", 15));
			paketi->Add (gcnew Paket ("Standard", "18 GB", "2048/256 kbps", 25));
			paketi->Add (gcnew Paket ("Flat", "NeograniŔeno", "3072/1024 kbps", 65));
		}

	private:
		ArrayList ^korisnici;
		ArrayList ^paketi;
		ArrayList ^racuni;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  korisnikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  noviKorisnikToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^  pretragaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pomoŠToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  izlazToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  pomoŠToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  uVeziSaSabilyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÜtampajToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  naplataToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  januarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  februarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  martToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aprilToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  majToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  juniToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  juliToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  augustToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  septembarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oktobarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  novembarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  decembarToolStripMenuItem;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->korisnikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->noviKorisnikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pretragaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->izlazToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomoŠToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÜtampajToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->januarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->februarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->martToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aprilToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->majToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->juniToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->juliToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->augustToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->septembarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oktobarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->novembarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->decembarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->naplataToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomoŠToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uVeziSaSabilyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->korisnikToolStripMenuItem, 
				this->pomoŠToolStripMenuItem, this->pomoŠToolStripMenuItem1});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(362, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// korisnikToolStripMenuItem
			// 
			this->korisnikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->noviKorisnikToolStripMenuItem, 
				this->pretragaToolStripMenuItem, this->izlazToolStripMenuItem});
			this->korisnikToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"korisnikToolStripMenuItem.Image")));
			this->korisnikToolStripMenuItem->Name = L"korisnikToolStripMenuItem";
			this->korisnikToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->korisnikToolStripMenuItem->Text = L"Korisnik";
			// 
			// noviKorisnikToolStripMenuItem
			// 
			this->noviKorisnikToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"noviKorisnikToolStripMenuItem.Image")));
			this->noviKorisnikToolStripMenuItem->Name = L"noviKorisnikToolStripMenuItem";
			this->noviKorisnikToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->noviKorisnikToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->noviKorisnikToolStripMenuItem->Text = L"Novi korisnik...";
			this->noviKorisnikToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::noviKorisnikToolStripMenuItem_Click);
			// 
			// pretragaToolStripMenuItem
			// 
			this->pretragaToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pretragaToolStripMenuItem.Image")));
			this->pretragaToolStripMenuItem->Name = L"pretragaToolStripMenuItem";
			this->pretragaToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F));
			this->pretragaToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->pretragaToolStripMenuItem->Text = L"Pretraga...";
			this->pretragaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::pretragaToolStripMenuItem_Click);
			// 
			// izlazToolStripMenuItem
			// 
			this->izlazToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"izlazToolStripMenuItem.Image")));
			this->izlazToolStripMenuItem->Name = L"izlazToolStripMenuItem";
			this->izlazToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Q));
			this->izlazToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			this->izlazToolStripMenuItem->Text = L"Izlaz";
			this->izlazToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::izlazToolStripMenuItem_Click_1);
			// 
			// pomoŠToolStripMenuItem
			// 
			this->pomoŠToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->ÜtampajToolStripMenuItem, 
				this->naplataToolStripMenuItem});
			this->pomoŠToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pomoŠToolStripMenuItem.Image")));
			this->pomoŠToolStripMenuItem->Name = L"pomoŠToolStripMenuItem";
			this->pomoŠToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->pomoŠToolStripMenuItem->Text = L"RaŔun";
			// 
			// ÜtampajToolStripMenuItem
			// 
			this->ÜtampajToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {this->januarToolStripMenuItem, 
				this->februarToolStripMenuItem, this->martToolStripMenuItem, this->aprilToolStripMenuItem, this->majToolStripMenuItem, this->juniToolStripMenuItem, 
				this->juliToolStripMenuItem, this->augustToolStripMenuItem, this->septembarToolStripMenuItem, this->oktobarToolStripMenuItem, 
				this->novembarToolStripMenuItem, this->decembarToolStripMenuItem});
			this->ÜtampajToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ÜtampajToolStripMenuItem.Image")));
			this->ÜtampajToolStripMenuItem->Name = L"ÜtampajToolStripMenuItem";
			this->ÜtampajToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
			this->ÜtampajToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->ÜtampajToolStripMenuItem->Text = L"Izdavanje";
			// 
			// januarToolStripMenuItem
			// 
			this->januarToolStripMenuItem->Name = L"januarToolStripMenuItem";
			this->januarToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->januarToolStripMenuItem->Text = L"Januar";
			this->januarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::januarToolStripMenuItem_Click);
			// 
			// februarToolStripMenuItem
			// 
			this->februarToolStripMenuItem->Name = L"februarToolStripMenuItem";
			this->februarToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->februarToolStripMenuItem->Text = L"Februar";
			// 
			// martToolStripMenuItem
			// 
			this->martToolStripMenuItem->Name = L"martToolStripMenuItem";
			this->martToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->martToolStripMenuItem->Text = L"Mart";
			// 
			// aprilToolStripMenuItem
			// 
			this->aprilToolStripMenuItem->Name = L"aprilToolStripMenuItem";
			this->aprilToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->aprilToolStripMenuItem->Text = L"April";
			// 
			// majToolStripMenuItem
			// 
			this->majToolStripMenuItem->Name = L"majToolStripMenuItem";
			this->majToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->majToolStripMenuItem->Text = L"Maj";
			// 
			// juniToolStripMenuItem
			// 
			this->juniToolStripMenuItem->Name = L"juniToolStripMenuItem";
			this->juniToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->juniToolStripMenuItem->Text = L"Juni";
			// 
			// juliToolStripMenuItem
			// 
			this->juliToolStripMenuItem->Name = L"juliToolStripMenuItem";
			this->juliToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->juliToolStripMenuItem->Text = L"Juli";
			// 
			// augustToolStripMenuItem
			// 
			this->augustToolStripMenuItem->Name = L"augustToolStripMenuItem";
			this->augustToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->augustToolStripMenuItem->Text = L"August";
			// 
			// septembarToolStripMenuItem
			// 
			this->septembarToolStripMenuItem->Name = L"septembarToolStripMenuItem";
			this->septembarToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->septembarToolStripMenuItem->Text = L"Septembar";
			// 
			// oktobarToolStripMenuItem
			// 
			this->oktobarToolStripMenuItem->Name = L"oktobarToolStripMenuItem";
			this->oktobarToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->oktobarToolStripMenuItem->Text = L"Oktobar";
			// 
			// novembarToolStripMenuItem
			// 
			this->novembarToolStripMenuItem->Name = L"novembarToolStripMenuItem";
			this->novembarToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->novembarToolStripMenuItem->Text = L"Novembar";
			// 
			// decembarToolStripMenuItem
			// 
			this->decembarToolStripMenuItem->Name = L"decembarToolStripMenuItem";
			this->decembarToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->decembarToolStripMenuItem->Text = L"Decembar";
			// 
			// naplataToolStripMenuItem
			// 
			this->naplataToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"naplataToolStripMenuItem.Image")));
			this->naplataToolStripMenuItem->Name = L"naplataToolStripMenuItem";
			this->naplataToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->naplataToolStripMenuItem->Text = L"Naplata...";
			this->naplataToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::naplataToolStripMenuItem_Click);
			// 
			// pomoŠToolStripMenuItem1
			// 
			this->pomoŠToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->uVeziSaSabilyToolStripMenuItem});
			this->pomoŠToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pomoŠToolStripMenuItem1.Image")));
			this->pomoŠToolStripMenuItem1->Name = L"pomoŠToolStripMenuItem1";
			this->pomoŠToolStripMenuItem1->Size = System::Drawing::Size(73, 20);
			this->pomoŠToolStripMenuItem1->Text = L"PomoŠ";
			// 
			// uVeziSaSabilyToolStripMenuItem
			// 
			this->uVeziSaSabilyToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"uVeziSaSabilyToolStripMenuItem.Image")));
			this->uVeziSaSabilyToolStripMenuItem->Name = L"uVeziSaSabilyToolStripMenuItem";
			this->uVeziSaSabilyToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->uVeziSaSabilyToolStripMenuItem->Text = L"U vezi sa Sabily";
			this->uVeziSaSabilyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::uVeziSaSabilyToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(362, 249);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(362, 273);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Sabily";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void izlazToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void uVeziSaSabilyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 About ^a = gcnew About ();
			 a->ShowDialog ();			 
		 }
private: System::Void izlazToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit ();
		 }


private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }


private: System::Void pretragaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 Pretraga ^p = gcnew Pretraga ();
			 p->Show ();
		 }
private: System::Void noviKorisnikToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnosKorisnika ^uk = gcnew UnosKorisnika ();
			 uk->Show ();
		 }
private: System::Void naplataToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 RacunNaplata ^rn = gcnew RacunNaplata ();
			 rn->Show ();
		 }
private: System::Void januarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			RacunPrint ^rp = gcnew RacunPrint ();
			//rp->r_mjesec->Text = "Januar";
			rp->ShowDialog ();

		 }
};
}

