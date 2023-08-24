#pragma once
#include "Ejercicio1.h"
#include "Ejercicio2.h"
#include "Ejercicio3.h"
#include <chrono>
#include <iostream>



namespace Lab2DavidMonje1019123 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tbGeneral;
	protected:
	private: System::Windows::Forms::TabPage^ tabEj1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabEj2;
	private: System::Windows::Forms::TabPage^ tabEj3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtnum2Ej1;


	private: System::Windows::Forms::TextBox^ txtnum1Ej1;



	private: System::Windows::Forms::Button^ btnSalir1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtResultadoEj1;
	private: System::Windows::Forms::Button^ btnCalcularEj1;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtPalabra1Ej2;

	private: System::Windows::Forms::CheckBox^ checkPalabra1;
	private: System::Windows::Forms::CheckBox^ checkPalabra2;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtPalabra2Ej2;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::CheckBox^ checkPalabra3;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtPalabra3Ej2;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ btnSalir2;

	private: System::Windows::Forms::Button^ btnRevisarEj2;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::ComboBox^ comboBaseOriginal;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ txtNumOriginalEj3;


	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ btnCalcularEj3;

	private: System::Windows::Forms::ComboBox^ comboBaseConvertir;
	private: System::Windows::Forms::TextBox^ txtResultadoEj3;


	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ btnSalir3;
	private: System::Windows::Forms::Button^ btnLimpiarEj1;
	private: System::Windows::Forms::Button^ btnLimpiarEj2;
	private: System::Windows::Forms::Button^ btnLimpiarEj3;


	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tbGeneral = (gcnew System::Windows::Forms::TabControl());
			this->tabEj1 = (gcnew System::Windows::Forms::TabPage());
			this->btnLimpiarEj1 = (gcnew System::Windows::Forms::Button());
			this->btnSalir1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtResultadoEj1 = (gcnew System::Windows::Forms::TextBox());
			this->btnCalcularEj1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtnum2Ej1 = (gcnew System::Windows::Forms::TextBox());
			this->txtnum1Ej1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabEj2 = (gcnew System::Windows::Forms::TabPage());
			this->btnLimpiarEj2 = (gcnew System::Windows::Forms::Button());
			this->btnSalir2 = (gcnew System::Windows::Forms::Button());
			this->btnRevisarEj2 = (gcnew System::Windows::Forms::Button());
			this->checkPalabra3 = (gcnew System::Windows::Forms::CheckBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtPalabra3Ej2 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->checkPalabra2 = (gcnew System::Windows::Forms::CheckBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtPalabra2Ej2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtPalabra1Ej2 = (gcnew System::Windows::Forms::TextBox());
			this->checkPalabra1 = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabEj3 = (gcnew System::Windows::Forms::TabPage());
			this->btnLimpiarEj3 = (gcnew System::Windows::Forms::Button());
			this->btnSalir3 = (gcnew System::Windows::Forms::Button());
			this->txtResultadoEj3 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->btnCalcularEj3 = (gcnew System::Windows::Forms::Button());
			this->comboBaseConvertir = (gcnew System::Windows::Forms::ComboBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->comboBaseOriginal = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txtNumOriginalEj3 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tbGeneral->SuspendLayout();
			this->tabEj1->SuspendLayout();
			this->tabEj2->SuspendLayout();
			this->tabEj3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tbGeneral
			// 
			this->tbGeneral->Controls->Add(this->tabEj1);
			this->tbGeneral->Controls->Add(this->tabEj2);
			this->tbGeneral->Controls->Add(this->tabEj3);
			this->tbGeneral->Location = System::Drawing::Point(12, 12);
			this->tbGeneral->Name = L"tbGeneral";
			this->tbGeneral->SelectedIndex = 0;
			this->tbGeneral->Size = System::Drawing::Size(451, 369);
			this->tbGeneral->TabIndex = 0;
			// 
			// tabEj1
			// 
			this->tabEj1->Controls->Add(this->btnLimpiarEj1);
			this->tabEj1->Controls->Add(this->btnSalir1);
			this->tabEj1->Controls->Add(this->label5);
			this->tabEj1->Controls->Add(this->txtResultadoEj1);
			this->tabEj1->Controls->Add(this->btnCalcularEj1);
			this->tabEj1->Controls->Add(this->label4);
			this->tabEj1->Controls->Add(this->label3);
			this->tabEj1->Controls->Add(this->txtnum2Ej1);
			this->tabEj1->Controls->Add(this->txtnum1Ej1);
			this->tabEj1->Controls->Add(this->label2);
			this->tabEj1->Controls->Add(this->label1);
			this->tabEj1->Location = System::Drawing::Point(4, 22);
			this->tabEj1->Name = L"tabEj1";
			this->tabEj1->Padding = System::Windows::Forms::Padding(3);
			this->tabEj1->Size = System::Drawing::Size(443, 343);
			this->tabEj1->TabIndex = 0;
			this->tabEj1->Text = L"Ejercicio 1";
			this->tabEj1->UseVisualStyleBackColor = true;
			// 
			// btnLimpiarEj1
			// 
			this->btnLimpiarEj1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnLimpiarEj1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLimpiarEj1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLimpiarEj1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLimpiarEj1->Location = System::Drawing::Point(72, 303);
			this->btnLimpiarEj1->Name = L"btnLimpiarEj1";
			this->btnLimpiarEj1->Size = System::Drawing::Size(75, 23);
			this->btnLimpiarEj1->TabIndex = 10;
			this->btnLimpiarEj1->Text = L"Limpiar";
			this->btnLimpiarEj1->UseVisualStyleBackColor = false;
			this->btnLimpiarEj1->Click += gcnew System::EventHandler(this, &MyForm::btnLimpiarEj1_Click);
			// 
			// btnSalir1
			// 
			this->btnSalir1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnSalir1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSalir1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSalir1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalir1->Location = System::Drawing::Point(306, 303);
			this->btnSalir1->Name = L"btnSalir1";
			this->btnSalir1->Size = System::Drawing::Size(75, 23);
			this->btnSalir1->TabIndex = 9;
			this->btnSalir1->Text = L"Salir";
			this->btnSalir1->UseVisualStyleBackColor = false;
			this->btnSalir1->Click += gcnew System::EventHandler(this, &MyForm::btnSalir1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(187, 237);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Resultado";
			// 
			// txtResultadoEj1
			// 
			this->txtResultadoEj1->Enabled = false;
			this->txtResultadoEj1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtResultadoEj1->Location = System::Drawing::Point(175, 256);
			this->txtResultadoEj1->Name = L"txtResultadoEj1";
			this->txtResultadoEj1->Size = System::Drawing::Size(99, 20);
			this->txtResultadoEj1->TabIndex = 7;
			// 
			// btnCalcularEj1
			// 
			this->btnCalcularEj1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btnCalcularEj1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCalcularEj1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCalcularEj1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCalcularEj1->Location = System::Drawing::Point(189, 189);
			this->btnCalcularEj1->Name = L"btnCalcularEj1";
			this->btnCalcularEj1->Size = System::Drawing::Size(75, 23);
			this->btnCalcularEj1->TabIndex = 6;
			this->btnCalcularEj1->Text = L"Calcular";
			this->btnCalcularEj1->UseVisualStyleBackColor = false;
			this->btnCalcularEj1->Click += gcnew System::EventHandler(this, &MyForm::btnCalcularEj1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(296, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Numero 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(74, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Numero 1";
			// 
			// txtnum2Ej1
			// 
			this->txtnum2Ej1->Location = System::Drawing::Point(281, 145);
			this->txtnum2Ej1->Name = L"txtnum2Ej1";
			this->txtnum2Ej1->Size = System::Drawing::Size(100, 20);
			this->txtnum2Ej1->TabIndex = 3;
			// 
			// txtnum1Ej1
			// 
			this->txtnum1Ej1->Location = System::Drawing::Point(63, 145);
			this->txtnum1Ej1->Name = L"txtnum1Ej1";
			this->txtnum1Ej1->Size = System::Drawing::Size(100, 20);
			this->txtnum1Ej1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(63, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(318, 50);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Escriba dos numeros enteros para poder calcular el\r\nmaximo comun divisor. Estos n"
				L"umeros tienen que\r\nser distintos a 0.\r\n";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(108, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(231, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Calculadora MCD";
			// 
			// tabEj2
			// 
			this->tabEj2->Controls->Add(this->btnLimpiarEj2);
			this->tabEj2->Controls->Add(this->btnSalir2);
			this->tabEj2->Controls->Add(this->btnRevisarEj2);
			this->tabEj2->Controls->Add(this->checkPalabra3);
			this->tabEj2->Controls->Add(this->label13);
			this->tabEj2->Controls->Add(this->txtPalabra3Ej2);
			this->tabEj2->Controls->Add(this->label12);
			this->tabEj2->Controls->Add(this->checkPalabra2);
			this->tabEj2->Controls->Add(this->label11);
			this->tabEj2->Controls->Add(this->txtPalabra2Ej2);
			this->tabEj2->Controls->Add(this->label10);
			this->tabEj2->Controls->Add(this->label9);
			this->tabEj2->Controls->Add(this->label8);
			this->tabEj2->Controls->Add(this->txtPalabra1Ej2);
			this->tabEj2->Controls->Add(this->checkPalabra1);
			this->tabEj2->Controls->Add(this->label7);
			this->tabEj2->Controls->Add(this->label6);
			this->tabEj2->Location = System::Drawing::Point(4, 22);
			this->tabEj2->Name = L"tabEj2";
			this->tabEj2->Padding = System::Windows::Forms::Padding(3);
			this->tabEj2->Size = System::Drawing::Size(443, 343);
			this->tabEj2->TabIndex = 1;
			this->tabEj2->Text = L"Ejercicio 2";
			this->tabEj2->UseVisualStyleBackColor = true;
			// 
			// btnLimpiarEj2
			// 
			this->btnLimpiarEj2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnLimpiarEj2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLimpiarEj2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLimpiarEj2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLimpiarEj2->Location = System::Drawing::Point(6, 307);
			this->btnLimpiarEj2->Name = L"btnLimpiarEj2";
			this->btnLimpiarEj2->Size = System::Drawing::Size(75, 23);
			this->btnLimpiarEj2->TabIndex = 17;
			this->btnLimpiarEj2->Text = L"Limpiar";
			this->btnLimpiarEj2->UseVisualStyleBackColor = false;
			this->btnLimpiarEj2->Click += gcnew System::EventHandler(this, &MyForm::btnLimpiarEj2_Click);
			// 
			// btnSalir2
			// 
			this->btnSalir2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnSalir2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSalir2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSalir2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalir2->Location = System::Drawing::Point(362, 307);
			this->btnSalir2->Name = L"btnSalir2";
			this->btnSalir2->Size = System::Drawing::Size(75, 23);
			this->btnSalir2->TabIndex = 16;
			this->btnSalir2->Text = L"Salir";
			this->btnSalir2->UseVisualStyleBackColor = false;
			this->btnSalir2->Click += gcnew System::EventHandler(this, &MyForm::btnSalir2_Click);
			// 
			// btnRevisarEj2
			// 
			this->btnRevisarEj2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btnRevisarEj2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRevisarEj2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRevisarEj2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRevisarEj2->Location = System::Drawing::Point(191, 307);
			this->btnRevisarEj2->Name = L"btnRevisarEj2";
			this->btnRevisarEj2->Size = System::Drawing::Size(75, 23);
			this->btnRevisarEj2->TabIndex = 15;
			this->btnRevisarEj2->Text = L"Revisar";
			this->btnRevisarEj2->UseVisualStyleBackColor = false;
			this->btnRevisarEj2->Click += gcnew System::EventHandler(this, &MyForm::btnRevisarEj2_Click);
			// 
			// checkPalabra3
			// 
			this->checkPalabra3->AutoSize = true;
			this->checkPalabra3->Enabled = false;
			this->checkPalabra3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkPalabra3->Location = System::Drawing::Point(282, 269);
			this->checkPalabra3->Name = L"checkPalabra3";
			this->checkPalabra3->Size = System::Drawing::Size(105, 20);
			this->checkPalabra3->TabIndex = 14;
			this->checkPalabra3->Text = L"Palindroma";
			this->checkPalabra3->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(176, 272);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(100, 13);
			this->label13->TabIndex = 13;
			this->label13->Text = L"-------------------------------";
			// 
			// txtPalabra3Ej2
			// 
			this->txtPalabra3Ej2->Location = System::Drawing::Point(70, 269);
			this->txtPalabra3Ej2->Name = L"txtPalabra3Ej2";
			this->txtPalabra3Ej2->Size = System::Drawing::Size(100, 20);
			this->txtPalabra3Ej2->TabIndex = 12;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(82, 250);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(74, 16);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Palabra 3";
			// 
			// checkPalabra2
			// 
			this->checkPalabra2->AutoSize = true;
			this->checkPalabra2->Enabled = false;
			this->checkPalabra2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkPalabra2->Location = System::Drawing::Point(282, 210);
			this->checkPalabra2->Name = L"checkPalabra2";
			this->checkPalabra2->Size = System::Drawing::Size(105, 20);
			this->checkPalabra2->TabIndex = 10;
			this->checkPalabra2->Text = L"Palindroma";
			this->checkPalabra2->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(176, 213);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(100, 13);
			this->label11->TabIndex = 9;
			this->label11->Text = L"-------------------------------";
			// 
			// txtPalabra2Ej2
			// 
			this->txtPalabra2Ej2->Location = System::Drawing::Point(70, 210);
			this->txtPalabra2Ej2->Name = L"txtPalabra2Ej2";
			this->txtPalabra2Ej2->Size = System::Drawing::Size(100, 20);
			this->txtPalabra2Ej2->TabIndex = 8;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(83, 191);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 16);
			this->label10->TabIndex = 7;
			this->label10->Text = L"Palabra 2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(176, 154);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(100, 13);
			this->label9->TabIndex = 6;
			this->label9->Text = L"-------------------------------";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(83, 132);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 16);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Palabra 1";
			// 
			// txtPalabra1Ej2
			// 
			this->txtPalabra1Ej2->Location = System::Drawing::Point(70, 151);
			this->txtPalabra1Ej2->Name = L"txtPalabra1Ej2";
			this->txtPalabra1Ej2->Size = System::Drawing::Size(100, 20);
			this->txtPalabra1Ej2->TabIndex = 4;
			// 
			// checkPalabra1
			// 
			this->checkPalabra1->AutoSize = true;
			this->checkPalabra1->Enabled = false;
			this->checkPalabra1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkPalabra1->Location = System::Drawing::Point(284, 151);
			this->checkPalabra1->Name = L"checkPalabra1";
			this->checkPalabra1->Size = System::Drawing::Size(105, 20);
			this->checkPalabra1->TabIndex = 3;
			this->checkPalabra1->Text = L"Palindroma";
			this->checkPalabra1->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(70, 33);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(309, 82);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Escriba palabras en los espacios designados, los\r\ncuales seran tres. Al presionar"
				L" el boton de\r\n\"revisar\", se revisaran las palabras para encontrar\r\nsi son palind"
				L"romas o no. Escribir sin espacios.\r\n\r\n";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(80, 3);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(299, 30);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Palabras palindromas";
			// 
			// tabEj3
			// 
			this->tabEj3->Controls->Add(this->btnLimpiarEj3);
			this->tabEj3->Controls->Add(this->btnSalir3);
			this->tabEj3->Controls->Add(this->txtResultadoEj3);
			this->tabEj3->Controls->Add(this->label19);
			this->tabEj3->Controls->Add(this->btnCalcularEj3);
			this->tabEj3->Controls->Add(this->comboBaseConvertir);
			this->tabEj3->Controls->Add(this->label18);
			this->tabEj3->Controls->Add(this->comboBaseOriginal);
			this->tabEj3->Controls->Add(this->label17);
			this->tabEj3->Controls->Add(this->txtNumOriginalEj3);
			this->tabEj3->Controls->Add(this->label16);
			this->tabEj3->Controls->Add(this->label15);
			this->tabEj3->Controls->Add(this->label14);
			this->tabEj3->Location = System::Drawing::Point(4, 22);
			this->tabEj3->Name = L"tabEj3";
			this->tabEj3->Padding = System::Windows::Forms::Padding(3);
			this->tabEj3->Size = System::Drawing::Size(443, 343);
			this->tabEj3->TabIndex = 2;
			this->tabEj3->Text = L"Ejercicio 3";
			this->tabEj3->UseVisualStyleBackColor = true;
			// 
			// btnLimpiarEj3
			// 
			this->btnLimpiarEj3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnLimpiarEj3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLimpiarEj3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLimpiarEj3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLimpiarEj3->Location = System::Drawing::Point(15, 302);
			this->btnLimpiarEj3->Name = L"btnLimpiarEj3";
			this->btnLimpiarEj3->Size = System::Drawing::Size(75, 23);
			this->btnLimpiarEj3->TabIndex = 20;
			this->btnLimpiarEj3->Text = L"Limpiar";
			this->btnLimpiarEj3->UseVisualStyleBackColor = false;
			this->btnLimpiarEj3->Click += gcnew System::EventHandler(this, &MyForm::btnLimpiarEj3_Click);
			// 
			// btnSalir3
			// 
			this->btnSalir3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnSalir3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSalir3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSalir3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalir3->Location = System::Drawing::Point(353, 302);
			this->btnSalir3->Name = L"btnSalir3";
			this->btnSalir3->Size = System::Drawing::Size(75, 23);
			this->btnSalir3->TabIndex = 19;
			this->btnSalir3->Text = L"Salir";
			this->btnSalir3->UseVisualStyleBackColor = false;
			this->btnSalir3->Click += gcnew System::EventHandler(this, &MyForm::btnSalir3_Click);
			// 
			// txtResultadoEj3
			// 
			this->txtResultadoEj3->Enabled = false;
			this->txtResultadoEj3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtResultadoEj3->Location = System::Drawing::Point(210, 277);
			this->txtResultadoEj3->Name = L"txtResultadoEj3";
			this->txtResultadoEj3->Size = System::Drawing::Size(122, 20);
			this->txtResultadoEj3->TabIndex = 18;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(125, 277);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(78, 16);
			this->label19->TabIndex = 17;
			this->label19->Text = L"Resultado";
			// 
			// btnCalcularEj3
			// 
			this->btnCalcularEj3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btnCalcularEj3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCalcularEj3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCalcularEj3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCalcularEj3->Location = System::Drawing::Point(190, 238);
			this->btnCalcularEj3->Name = L"btnCalcularEj3";
			this->btnCalcularEj3->Size = System::Drawing::Size(75, 23);
			this->btnCalcularEj3->TabIndex = 16;
			this->btnCalcularEj3->Text = L"Calcular";
			this->btnCalcularEj3->UseVisualStyleBackColor = false;
			this->btnCalcularEj3->Click += gcnew System::EventHandler(this, &MyForm::btnCalcularEj3_Click);
			// 
			// comboBaseConvertir
			// 
			this->comboBaseConvertir->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->comboBaseConvertir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBaseConvertir->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBaseConvertir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBaseConvertir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBaseConvertir->ForeColor = System::Drawing::SystemColors::MenuText;
			this->comboBaseConvertir->FormattingEnabled = true;
			this->comboBaseConvertir->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"", L"2", L"8", L"10", L"16" });
			this->comboBaseConvertir->Location = System::Drawing::Point(238, 197);
			this->comboBaseConvertir->Name = L"comboBaseConvertir";
			this->comboBaseConvertir->Size = System::Drawing::Size(94, 20);
			this->comboBaseConvertir->TabIndex = 11;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(22, 198);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(210, 16);
			this->label18->TabIndex = 10;
			this->label18->Text = L"Convertir este numero a base";
			// 
			// comboBaseOriginal
			// 
			this->comboBaseOriginal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->comboBaseOriginal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBaseOriginal->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBaseOriginal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBaseOriginal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBaseOriginal->ForeColor = System::Drawing::SystemColors::MenuText;
			this->comboBaseOriginal->FormattingEnabled = true;
			this->comboBaseOriginal->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"", L"2", L"8", L"10", L"16" });
			this->comboBaseOriginal->Location = System::Drawing::Point(321, 146);
			this->comboBaseOriginal->Name = L"comboBaseOriginal";
			this->comboBaseOriginal->Size = System::Drawing::Size(94, 20);
			this->comboBaseOriginal->TabIndex = 9;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(251, 146);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(64, 16);
			this->label17->TabIndex = 8;
			this->label17->Text = L"En base";
			// 
			// txtNumOriginalEj3
			// 
			this->txtNumOriginalEj3->Location = System::Drawing::Point(145, 145);
			this->txtNumOriginalEj3->Name = L"txtNumOriginalEj3";
			this->txtNumOriginalEj3->Size = System::Drawing::Size(100, 20);
			this->txtNumOriginalEj3->TabIndex = 7;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(22, 145);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(117, 16);
			this->label16->TabIndex = 6;
			this->label16->Text = L"Numero original";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(25, 33);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(390, 77);
			this->label15->TabIndex = 3;
			this->label15->Text = resources->GetString(L"label15.Text");
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(85, 3);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(266, 30);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Conversor de bases";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(471, 388);
			this->Controls->Add(this->tbGeneral);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Laboratorio 2";
			this->tbGeneral->ResumeLayout(false);
			this->tabEj1->ResumeLayout(false);
			this->tabEj1->PerformLayout();
			this->tabEj2->ResumeLayout(false);
			this->tabEj2->PerformLayout();
			this->tabEj3->ResumeLayout(false);
			this->tabEj3->PerformLayout();
			this->ResumeLayout(false);

		}

//Funcion del ejercicio 1
private: System::Void btnCalcularEj1_Click(System::Object^ sender, System::EventArgs^ e) {
	Ejercicio1 ej1;
	int a, b;

	try
	{
		if (txtnum1Ej1->Text->Trim() != "" || txtnum2Ej1->Text->Trim() != "")
		{
			std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
			a = Convert::ToInt32(txtnum1Ej1->Text);
			b = Convert::ToInt32(txtnum2Ej1->Text);

			if (a < 0)
			{
				a = a * -1;
			}
			else if (b < 0) {
				b = b * -1;
			}

			start = std::chrono::high_resolution_clock::now();
			ej1.CalculoMCD(a, b);
			end = std::chrono::high_resolution_clock::now();
			std::chrono::duration<float, std::milli> tiempo1 = end - start;

			start = std::chrono::high_resolution_clock::now();
			ej1.CalculoCicloMCD(a, b);
			end = std::chrono::high_resolution_clock::now();
			std::chrono::duration<float, std::milli> tiempo2 = end - start;

			txtResultadoEj1->Text = Convert::ToString(ej1.CalculoMCD(a, b));

			MessageBox::Show(Convert::ToString("Tiempo en correr por recursividad: " + tiempo1.count() + " ms \nTiempo en correr por Iteracion: " + tiempo2.count() + " ms"));
		}
	}
	catch (...)
	{
		MessageBox::Show("El formato escrito no es correcto, volverlo a ingresar", "Error");
		txtnum1Ej1->Text = "";
		txtnum2Ej1->Text = "";
		txtResultadoEj1->Text = "";
	}
}


//Funcion de cerrar
private: System::Void Cerrar() {
	Application::Exit();
}

	   //Botones de salir que llaman a la funcion cerrar
private: System::Void btnSalir1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Cerrar();
}

private: System::Void btnSalir2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Cerrar();
}

private: System::Void btnSalir3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Cerrar();
}


//Funcion del ejercicio 2
private: System::Void btnRevisarEj2_Click(System::Object^ sender, System::EventArgs^ e) {
	Ejercicio2 ej2;

	try
	{
		std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
		std::chrono::duration<float, std::milli> tiempo1_1, tiempo1_2, tiempo2_1, tiempo2_2, tiempo3_1, tiempo3_2;

		if (txtPalabra1Ej2->Text->Trim() != "")
		{
			String^ palabra = txtPalabra1Ej2->Text->Replace(" ", "")->ToLower();

			start = std::chrono::high_resolution_clock::now();
			ej2.RevisarPalindroma(palabra);
			end = std::chrono::high_resolution_clock::now();
			tiempo1_1 = end - start;

			start = std::chrono::high_resolution_clock::now();
			ej2.RevisarPalindromaIteracion(palabra);
			end = std::chrono::high_resolution_clock::now();
			tiempo1_2 = end - start;

			checkPalabra1->Checked = ej2.RevisarPalindroma(palabra);
		}
		else {
			txtPalabra1Ej2->Text = "";
			checkPalabra1->Checked = false;
		}


		if (txtPalabra2Ej2->Text->Replace(" ", "") != "")
		{
			String^ palabra = txtPalabra2Ej2->Text->Replace(" ", "")->ToLower();

			start = std::chrono::high_resolution_clock::now();
			ej2.RevisarPalindroma(palabra);
			end = std::chrono::high_resolution_clock::now();
			tiempo2_1 = end - start;

			start = std::chrono::high_resolution_clock::now();
			ej2.RevisarPalindromaIteracion(palabra);
			end = std::chrono::high_resolution_clock::now();
			tiempo2_2 = end - start;

			checkPalabra2->Checked = ej2.RevisarPalindroma(palabra);
		}
		else {
			txtPalabra2Ej2->Text = "";
			checkPalabra2->Checked = false;
		}


		if (txtPalabra3Ej2->Text->Replace(" ", "") != "")
		{
			String^ palabra = txtPalabra3Ej2->Text->Replace(" ", "")->ToLower();

			start = std::chrono::high_resolution_clock::now();
			ej2.RevisarPalindroma(palabra);
			end = std::chrono::high_resolution_clock::now();
			tiempo3_1 = end - start;

			start = std::chrono::high_resolution_clock::now();
			ej2.RevisarPalindromaIteracion(palabra);
			end = std::chrono::high_resolution_clock::now();
			tiempo3_2 = end - start;

			checkPalabra3->Checked = ej2.RevisarPalindroma(palabra);
		}
		else {
			txtPalabra3Ej2->Text = "";
			checkPalabra3->Checked = false;
		}
		
		String^ mensaje = "";

		if (tiempo1_1.count() >= 0.000001 && txtPalabra1Ej2->Text->Replace(" ", "") != "")
		{
			mensaje += "Tiempo de la palabra 1 con recursividad: " + tiempo1_1.count().ToString() + " ms \n" +
				       "Tiempo de la palabra 1 con iteraciones: " + tiempo1_2.count().ToString() + " ms \n \n";
		}

		if (tiempo2_1.count() >= 0.000001 && txtPalabra2Ej2->Text->Replace(" ", "") != "")
		{
			mensaje += "Tiempo de la palabra 2 con recursividad: " + tiempo2_1.count().ToString() + " ms \n" +
					   "Tiempo de la palabra 2 con iteraciones: " + tiempo2_2.count().ToString() + " ms \n \n";
		}


		if (tiempo3_1.count() >= 0.000001 && txtPalabra3Ej2->Text->Replace(" ", "") != "")
		{
			mensaje += "Tiempo de la palabra 3 con recursividad: " + tiempo3_1.count().ToString() + " ms \n" +
				       "Tiempo de la palabra 3 con iteraciones: " + tiempo3_2.count().ToString() + " ms";
		}
		
		if (mensaje != "")
		{
			MessageBox::Show(mensaje);
		}
	}
	catch (...)
	{
		MessageBox::Show("Por favor escribir de nuevo las palabras", "Error");
		checkPalabra1->Checked = false;
		checkPalabra2->Checked = false;
		checkPalabra3->Checked = false;

		txtPalabra1Ej2->Text = "";
		txtPalabra2Ej2->Text = "";
		txtPalabra3Ej2->Text = "";
	}
}

//Funcion del ejercicio 3
private: System::Void btnCalcularEj3_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		Ejercicio3 ej3;
		String^ numeroOriginal = txtNumOriginalEj3->Text->Replace(" ", "")->ToLower();
		String^ textoComboOriginal = comboBaseOriginal->Text;
		String^ textoComboConvertir = comboBaseConvertir->Text;

		int baseOriginal = 0;
		int baseConvertir = 0;

		if (textoComboOriginal != "" && textoComboConvertir != "")
		{

			if (textoComboOriginal == "2")
			{
				baseOriginal = 1;
			}
			else if (textoComboOriginal == "8") {
				baseOriginal = 7;
			}
			else if (textoComboOriginal == "10")
			{
				baseOriginal = 9;
			}
			else {
				baseOriginal = 16;
			}


			if (textoComboConvertir == "2")
			{
				baseConvertir = 2;
			}
			else if (textoComboConvertir == "8") {
				baseConvertir = 8;
			}
			else if (textoComboConvertir == "10")
			{
				baseConvertir = 10;
			}
			else {
				baseConvertir = 16;
			}


			if (numeroOriginal != "")
			{
				if (ej3.Revisar(numeroOriginal, baseOriginal))
				{
					MessageBox::Show(CalcularTiempo(numeroOriginal, baseOriginal, baseConvertir));
					txtResultadoEj3->Text = ej3.ConvertirRecursivo(numeroOriginal, baseOriginal, baseConvertir);
				}
				else {
					MessageBox::Show("Por favor escriba los digitos del numero original correspondiendo a las reglas de la base", "Error");
				}
			}
			else {
				MessageBox::Show("Escriba por favor el numero que desea utilizar", "Error");
			}

		}
		else {
			MessageBox::Show("Por favor, llene todos los campos solicitados", "Error");
		}

	}
	catch (...)
	{
		MessageBox::Show("Por favor escriba los digitos del numero original correspondiendo a las reglas de la base", "Error");
	}
}

	   //Funcion para calcular el tiempo del ejercicio 3
	   private: String^ CalcularTiempo(String^ numeroOriginal, int baseOriginal, int baseConvertir) {
		   Ejercicio3 ej3;
		   std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
		   std::chrono::duration<float, std::milli> tiempoIteracion, tiempoRecursividad;

		   start = std::chrono::high_resolution_clock::now();
		   ej3.ConvertirIteracion(numeroOriginal, baseOriginal, baseConvertir);
		   end = std::chrono::high_resolution_clock::now();
		   tiempoIteracion = end - start;

		   start = std::chrono::high_resolution_clock::now();
		   ej3.ConvertirRecursivo(numeroOriginal, baseOriginal, baseConvertir);
		   end = std::chrono::high_resolution_clock::now();
		   tiempoRecursividad = end - start;

		   String^ totalTiempo = "Tiempo para calcular utilizando iteraciones: " + Convert::ToString(tiempoIteracion.count()) + " ms \n" + 
			                     "Tiempo para calcular utilizando recursividad: " + Convert::ToString(tiempoRecursividad.count()) + " ms";

		   return totalTiempo;
	   }



//Funcion para limpiar la pantalla del ejercicio 3
private: System::Void btnLimpiarEj3_Click(System::Object^ sender, System::EventArgs^ e) {
	txtNumOriginalEj3->Text = "";
	comboBaseOriginal->Text = "";
	comboBaseConvertir->Text = "";
	txtResultadoEj3->Text = "";
}

//Funcion para limpiar la pantalla del ejercicio 2
private: System::Void btnLimpiarEj2_Click(System::Object^ sender, System::EventArgs^ e) {
	checkPalabra1->Checked = false;
	checkPalabra2->Checked = false;
	checkPalabra3->Checked = false;

	txtPalabra1Ej2->Text = "";
	txtPalabra2Ej2->Text = "";
	txtPalabra3Ej2->Text = "";
}

//Funcion para limpiar la pantalla del ejercicio 1
private: System::Void btnLimpiarEj1_Click(System::Object^ sender, System::EventArgs^ e) {
	txtnum1Ej1->Text = "";
	txtnum2Ej1->Text = "";
	txtResultadoEj1->Text = "";
}
};
}
