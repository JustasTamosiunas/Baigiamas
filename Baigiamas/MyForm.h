#pragma once
#include "krovimas.h"
#include "convert.h"

extern std::vector<aparatas> aparatuSarasas;
extern std::vector<std::string> aparataiCombo;
int aparataiCID = 0;
int sutartysCID = 0;
int irasaiCID = 0;
void aparataiLangUpdate();
void sutartysLangUpdate();
void irasaiLangUpdate();

namespace Baigiamas {

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
	private: System::Windows::Forms::GroupBox^  TechPasoInfo;
	private: System::Windows::Forms::TextBox^  AparatoKorpNrTextBox;

	private: System::Windows::Forms::Label^  AparatoKorpNrLabel;



	private: System::Windows::Forms::Label^  AparatoModelisLabel;

	private: System::Windows::Forms::TextBox^  AparatoNrTextBox;
	private: System::Windows::Forms::Label^  AparatoNrLabel;
	private: System::Windows::Forms::Label^  SerijaLabel;
	private: System::Windows::Forms::TextBox^  AparatoSerijaTextBox;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  SutartisIkiTB;

	private: System::Windows::Forms::Label^  SutartisIkiLabel;
	private: System::Windows::Forms::TextBox^  SutartisNuoTB;


	private: System::Windows::Forms::Label^  SutartisNuoLabel;
	private: System::Windows::Forms::TextBox^  SutartisTipasTB;


	private: System::Windows::Forms::Label^  SutartisTipasLabel;

	private: System::Windows::Forms::Label^  SutartisNumerisLabel;
	private: System::Windows::Forms::TextBox^  SutartisNrTB;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  IrasaiMeistrasTB;
	private: System::Windows::Forms::Label^  IrasaiMeistrasLabel;
	private: System::Windows::Forms::TextBox^  IrasaiNumerisTB;
	private: System::Windows::Forms::Label^  IrasaiNumerisLabel;
	private: System::Windows::Forms::TextBox^  IrasaiMiestasTB;
	private: System::Windows::Forms::TextBox^  IrasaiGatveTB;
	private: System::Windows::Forms::Label^  IrasaiGatveLabel;
	private: System::Windows::Forms::Label^  IrasaiMiestasLabel;
	private: System::Windows::Forms::TextBox^  IrasaiTelefonaiTB;
	private: System::Windows::Forms::Label^  IrasaiTelefonaiLabel;
	private: System::Windows::Forms::TextBox^  IrasaiPagrindasTB;
	private: System::Windows::Forms::Label^  IrasaiPaagrindasLabel;
	private: System::Windows::Forms::TextBox^  IrasaiDataTB;
	private: System::Windows::Forms::Label^  IrasaiDataLabel;
	private: System::Windows::Forms::Label^  IrasaiSavininkasLabel;
	private: System::Windows::Forms::TextBox^  IrasaiSavininkasTB;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  AparatasNextButton;
	private: System::Windows::Forms::Button^  AparatasPrevButton;
	private: System::Windows::Forms::Button^  SutartisNextButton;
	private: System::Windows::Forms::Button^  SutartisPrevButton;
	private: System::Windows::Forms::Button^  IrasaiNextButton;
	private: System::Windows::Forms::Button^  IrasaiPrevButton;
	private: System::Windows::Forms::Button^  AparatasNewButton;
	private: System::Windows::Forms::Button^  SutartisNewButton;
	private: System::Windows::Forms::Button^  IrasasNewButton;
	private: System::Windows::Forms::Button^  AparatasSaveButton;
	private: System::Windows::Forms::Button^  SutartisSaveButton;
	private: System::Windows::Forms::Button^  IrasaiSaveButton;
	private: System::Windows::Forms::Button^  AparatasEditButton;
	private: System::Windows::Forms::Button^  SutartisEditButton;
	private: System::Windows::Forms::Button^  IrasasEditButton;
	private: System::Windows::Forms::Button^  AparatasESaveButton;
	private: System::Windows::Forms::Button^  SutartisESaveButton;
	private: System::Windows::Forms::Button^  IrasasESaveButton;
	private: System::Windows::Forms::Button^  MainSaveButton;
	private: System::Windows::Forms::Button^  AparatasDeleteButton;
	private: System::Windows::Forms::Button^  SutartisDeleteButton;
	private: System::Windows::Forms::Button^  IrasasDeleteButton;
	private: System::Windows::Forms::Button^  AparatasDeleteCYButton;
	private: System::Windows::Forms::Button^  SutartisDeleteCYButton;
	private: System::Windows::Forms::Button^  IrasasDeleteCYButton;

	private: System::Windows::Forms::Button^  AparatasDeleteCNButton;
	private: System::Windows::Forms::Button^  IrasasDeleteCNButton;
	private: System::Windows::Forms::Button^  SutartisDeleteCNButton;
	private: System::Windows::Forms::ComboBox^  AparatasModelisCMB;
	private: System::Windows::Forms::TextBox^  AparatoModelisTextBox;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->TechPasoInfo = (gcnew System::Windows::Forms::GroupBox());
			this->AparatasModelisCMB = (gcnew System::Windows::Forms::ComboBox());
			this->AparatasNextButton = (gcnew System::Windows::Forms::Button());
			this->AparatasPrevButton = (gcnew System::Windows::Forms::Button());
			this->AparatoKorpNrTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AparatoKorpNrLabel = (gcnew System::Windows::Forms::Label());
			this->AparatoModelisTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AparatoModelisLabel = (gcnew System::Windows::Forms::Label());
			this->AparatoNrTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AparatoNrLabel = (gcnew System::Windows::Forms::Label());
			this->SerijaLabel = (gcnew System::Windows::Forms::Label());
			this->AparatoSerijaTextBox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->SutartisNextButton = (gcnew System::Windows::Forms::Button());
			this->SutartisPrevButton = (gcnew System::Windows::Forms::Button());
			this->SutartisIkiTB = (gcnew System::Windows::Forms::TextBox());
			this->SutartisIkiLabel = (gcnew System::Windows::Forms::Label());
			this->SutartisNuoTB = (gcnew System::Windows::Forms::TextBox());
			this->SutartisNuoLabel = (gcnew System::Windows::Forms::Label());
			this->SutartisTipasTB = (gcnew System::Windows::Forms::TextBox());
			this->SutartisTipasLabel = (gcnew System::Windows::Forms::Label());
			this->SutartisNumerisLabel = (gcnew System::Windows::Forms::Label());
			this->SutartisNrTB = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->IrasaiNextButton = (gcnew System::Windows::Forms::Button());
			this->IrasaiPrevButton = (gcnew System::Windows::Forms::Button());
			this->IrasaiMeistrasTB = (gcnew System::Windows::Forms::TextBox());
			this->IrasaiMeistrasLabel = (gcnew System::Windows::Forms::Label());
			this->IrasaiNumerisTB = (gcnew System::Windows::Forms::TextBox());
			this->IrasaiNumerisLabel = (gcnew System::Windows::Forms::Label());
			this->IrasaiMiestasTB = (gcnew System::Windows::Forms::TextBox());
			this->IrasaiGatveTB = (gcnew System::Windows::Forms::TextBox());
			this->IrasaiGatveLabel = (gcnew System::Windows::Forms::Label());
			this->IrasaiMiestasLabel = (gcnew System::Windows::Forms::Label());
			this->IrasaiTelefonaiTB = (gcnew System::Windows::Forms::TextBox());
			this->IrasaiTelefonaiLabel = (gcnew System::Windows::Forms::Label());
			this->IrasaiPagrindasTB = (gcnew System::Windows::Forms::TextBox());
			this->IrasaiPaagrindasLabel = (gcnew System::Windows::Forms::Label());
			this->IrasaiDataTB = (gcnew System::Windows::Forms::TextBox());
			this->IrasaiDataLabel = (gcnew System::Windows::Forms::Label());
			this->IrasaiSavininkasLabel = (gcnew System::Windows::Forms::Label());
			this->IrasaiSavininkasTB = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->AparatasNewButton = (gcnew System::Windows::Forms::Button());
			this->SutartisNewButton = (gcnew System::Windows::Forms::Button());
			this->IrasasNewButton = (gcnew System::Windows::Forms::Button());
			this->AparatasSaveButton = (gcnew System::Windows::Forms::Button());
			this->SutartisSaveButton = (gcnew System::Windows::Forms::Button());
			this->IrasaiSaveButton = (gcnew System::Windows::Forms::Button());
			this->AparatasEditButton = (gcnew System::Windows::Forms::Button());
			this->SutartisEditButton = (gcnew System::Windows::Forms::Button());
			this->IrasasEditButton = (gcnew System::Windows::Forms::Button());
			this->AparatasESaveButton = (gcnew System::Windows::Forms::Button());
			this->SutartisESaveButton = (gcnew System::Windows::Forms::Button());
			this->IrasasESaveButton = (gcnew System::Windows::Forms::Button());
			this->MainSaveButton = (gcnew System::Windows::Forms::Button());
			this->AparatasDeleteButton = (gcnew System::Windows::Forms::Button());
			this->SutartisDeleteButton = (gcnew System::Windows::Forms::Button());
			this->IrasasDeleteButton = (gcnew System::Windows::Forms::Button());
			this->AparatasDeleteCYButton = (gcnew System::Windows::Forms::Button());
			this->SutartisDeleteCYButton = (gcnew System::Windows::Forms::Button());
			this->IrasasDeleteCYButton = (gcnew System::Windows::Forms::Button());
			this->AparatasDeleteCNButton = (gcnew System::Windows::Forms::Button());
			this->IrasasDeleteCNButton = (gcnew System::Windows::Forms::Button());
			this->SutartisDeleteCNButton = (gcnew System::Windows::Forms::Button());
			this->TechPasoInfo->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// TechPasoInfo
			// 
			this->TechPasoInfo->Controls->Add(this->AparatasModelisCMB);
			this->TechPasoInfo->Controls->Add(this->AparatasNextButton);
			this->TechPasoInfo->Controls->Add(this->AparatasPrevButton);
			this->TechPasoInfo->Controls->Add(this->AparatoKorpNrTextBox);
			this->TechPasoInfo->Controls->Add(this->AparatoKorpNrLabel);
			this->TechPasoInfo->Controls->Add(this->AparatoModelisTextBox);
			this->TechPasoInfo->Controls->Add(this->AparatoModelisLabel);
			this->TechPasoInfo->Controls->Add(this->AparatoNrTextBox);
			this->TechPasoInfo->Controls->Add(this->AparatoNrLabel);
			this->TechPasoInfo->Controls->Add(this->SerijaLabel);
			this->TechPasoInfo->Controls->Add(this->AparatoSerijaTextBox);
			resources->ApplyResources(this->TechPasoInfo, L"TechPasoInfo");
			this->TechPasoInfo->Name = L"TechPasoInfo";
			this->TechPasoInfo->TabStop = false;
			// 
			// AparatasModelisCMB
			// 
			resources->ApplyResources(this->AparatasModelisCMB, L"AparatasModelisCMB");
			this->AparatasModelisCMB->Name = L"AparatasModelisCMB";
			// 
			// AparatasNextButton
			// 
			resources->ApplyResources(this->AparatasNextButton, L"AparatasNextButton");
			this->AparatasNextButton->Name = L"AparatasNextButton";
			this->AparatasNextButton->UseVisualStyleBackColor = true;
			this->AparatasNextButton->Click += gcnew System::EventHandler(this, &MyForm::AparatasNextButton_Click);
			// 
			// AparatasPrevButton
			// 
			resources->ApplyResources(this->AparatasPrevButton, L"AparatasPrevButton");
			this->AparatasPrevButton->Name = L"AparatasPrevButton";
			this->AparatasPrevButton->UseVisualStyleBackColor = true;
			this->AparatasPrevButton->Click += gcnew System::EventHandler(this, &MyForm::AparatasPrevButton_Click);
			// 
			// AparatoKorpNrTextBox
			// 
			resources->ApplyResources(this->AparatoKorpNrTextBox, L"AparatoKorpNrTextBox");
			this->AparatoKorpNrTextBox->Name = L"AparatoKorpNrTextBox";
			this->AparatoKorpNrTextBox->ReadOnly = true;
			// 
			// AparatoKorpNrLabel
			// 
			resources->ApplyResources(this->AparatoKorpNrLabel, L"AparatoKorpNrLabel");
			this->AparatoKorpNrLabel->Name = L"AparatoKorpNrLabel";
			// 
			// AparatoModelisTextBox
			// 
			resources->ApplyResources(this->AparatoModelisTextBox, L"AparatoModelisTextBox");
			this->AparatoModelisTextBox->Name = L"AparatoModelisTextBox";
			this->AparatoModelisTextBox->ReadOnly = true;
			// 
			// AparatoModelisLabel
			// 
			resources->ApplyResources(this->AparatoModelisLabel, L"AparatoModelisLabel");
			this->AparatoModelisLabel->Name = L"AparatoModelisLabel";
			// 
			// AparatoNrTextBox
			// 
			resources->ApplyResources(this->AparatoNrTextBox, L"AparatoNrTextBox");
			this->AparatoNrTextBox->Name = L"AparatoNrTextBox";
			this->AparatoNrTextBox->ReadOnly = true;
			// 
			// AparatoNrLabel
			// 
			resources->ApplyResources(this->AparatoNrLabel, L"AparatoNrLabel");
			this->AparatoNrLabel->Name = L"AparatoNrLabel";
			// 
			// SerijaLabel
			// 
			resources->ApplyResources(this->SerijaLabel, L"SerijaLabel");
			this->SerijaLabel->Name = L"SerijaLabel";
			// 
			// AparatoSerijaTextBox
			// 
			resources->ApplyResources(this->AparatoSerijaTextBox, L"AparatoSerijaTextBox");
			this->AparatoSerijaTextBox->Name = L"AparatoSerijaTextBox";
			this->AparatoSerijaTextBox->ReadOnly = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->SutartisNextButton);
			this->groupBox1->Controls->Add(this->SutartisPrevButton);
			this->groupBox1->Controls->Add(this->SutartisIkiTB);
			this->groupBox1->Controls->Add(this->SutartisIkiLabel);
			this->groupBox1->Controls->Add(this->SutartisNuoTB);
			this->groupBox1->Controls->Add(this->SutartisNuoLabel);
			this->groupBox1->Controls->Add(this->SutartisTipasTB);
			this->groupBox1->Controls->Add(this->SutartisTipasLabel);
			this->groupBox1->Controls->Add(this->SutartisNumerisLabel);
			this->groupBox1->Controls->Add(this->SutartisNrTB);
			resources->ApplyResources(this->groupBox1, L"groupBox1");
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->TabStop = false;
			// 
			// SutartisNextButton
			// 
			resources->ApplyResources(this->SutartisNextButton, L"SutartisNextButton");
			this->SutartisNextButton->Name = L"SutartisNextButton";
			this->SutartisNextButton->UseVisualStyleBackColor = true;
			this->SutartisNextButton->Click += gcnew System::EventHandler(this, &MyForm::SutartisNextButton_Click);
			// 
			// SutartisPrevButton
			// 
			resources->ApplyResources(this->SutartisPrevButton, L"SutartisPrevButton");
			this->SutartisPrevButton->Name = L"SutartisPrevButton";
			this->SutartisPrevButton->UseVisualStyleBackColor = true;
			this->SutartisPrevButton->Click += gcnew System::EventHandler(this, &MyForm::SutartisPrevButton_Click);
			// 
			// SutartisIkiTB
			// 
			resources->ApplyResources(this->SutartisIkiTB, L"SutartisIkiTB");
			this->SutartisIkiTB->Name = L"SutartisIkiTB";
			this->SutartisIkiTB->ReadOnly = true;
			// 
			// SutartisIkiLabel
			// 
			resources->ApplyResources(this->SutartisIkiLabel, L"SutartisIkiLabel");
			this->SutartisIkiLabel->Name = L"SutartisIkiLabel";
			// 
			// SutartisNuoTB
			// 
			resources->ApplyResources(this->SutartisNuoTB, L"SutartisNuoTB");
			this->SutartisNuoTB->Name = L"SutartisNuoTB";
			this->SutartisNuoTB->ReadOnly = true;
			// 
			// SutartisNuoLabel
			// 
			resources->ApplyResources(this->SutartisNuoLabel, L"SutartisNuoLabel");
			this->SutartisNuoLabel->Name = L"SutartisNuoLabel";
			// 
			// SutartisTipasTB
			// 
			resources->ApplyResources(this->SutartisTipasTB, L"SutartisTipasTB");
			this->SutartisTipasTB->Name = L"SutartisTipasTB";
			this->SutartisTipasTB->ReadOnly = true;
			// 
			// SutartisTipasLabel
			// 
			resources->ApplyResources(this->SutartisTipasLabel, L"SutartisTipasLabel");
			this->SutartisTipasLabel->Name = L"SutartisTipasLabel";
			// 
			// SutartisNumerisLabel
			// 
			resources->ApplyResources(this->SutartisNumerisLabel, L"SutartisNumerisLabel");
			this->SutartisNumerisLabel->Name = L"SutartisNumerisLabel";
			// 
			// SutartisNrTB
			// 
			resources->ApplyResources(this->SutartisNrTB, L"SutartisNrTB");
			this->SutartisNrTB->Name = L"SutartisNrTB";
			this->SutartisNrTB->ReadOnly = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->IrasaiNextButton);
			this->groupBox2->Controls->Add(this->IrasaiPrevButton);
			this->groupBox2->Controls->Add(this->IrasaiMeistrasTB);
			this->groupBox2->Controls->Add(this->IrasaiMeistrasLabel);
			this->groupBox2->Controls->Add(this->IrasaiNumerisTB);
			this->groupBox2->Controls->Add(this->IrasaiNumerisLabel);
			this->groupBox2->Controls->Add(this->IrasaiMiestasTB);
			this->groupBox2->Controls->Add(this->IrasaiGatveTB);
			this->groupBox2->Controls->Add(this->IrasaiGatveLabel);
			this->groupBox2->Controls->Add(this->IrasaiMiestasLabel);
			this->groupBox2->Controls->Add(this->IrasaiTelefonaiTB);
			this->groupBox2->Controls->Add(this->IrasaiTelefonaiLabel);
			this->groupBox2->Controls->Add(this->IrasaiPagrindasTB);
			this->groupBox2->Controls->Add(this->IrasaiPaagrindasLabel);
			this->groupBox2->Controls->Add(this->IrasaiDataTB);
			this->groupBox2->Controls->Add(this->IrasaiDataLabel);
			this->groupBox2->Controls->Add(this->IrasaiSavininkasLabel);
			this->groupBox2->Controls->Add(this->IrasaiSavininkasTB);
			resources->ApplyResources(this->groupBox2, L"groupBox2");
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->TabStop = false;
			// 
			// IrasaiNextButton
			// 
			resources->ApplyResources(this->IrasaiNextButton, L"IrasaiNextButton");
			this->IrasaiNextButton->Name = L"IrasaiNextButton";
			this->IrasaiNextButton->UseVisualStyleBackColor = true;
			this->IrasaiNextButton->Click += gcnew System::EventHandler(this, &MyForm::IrasaiNextButton_Click);
			// 
			// IrasaiPrevButton
			// 
			resources->ApplyResources(this->IrasaiPrevButton, L"IrasaiPrevButton");
			this->IrasaiPrevButton->Name = L"IrasaiPrevButton";
			this->IrasaiPrevButton->UseVisualStyleBackColor = true;
			this->IrasaiPrevButton->Click += gcnew System::EventHandler(this, &MyForm::IrasaiPrevButton_Click);
			// 
			// IrasaiMeistrasTB
			// 
			resources->ApplyResources(this->IrasaiMeistrasTB, L"IrasaiMeistrasTB");
			this->IrasaiMeistrasTB->Name = L"IrasaiMeistrasTB";
			this->IrasaiMeistrasTB->ReadOnly = true;
			// 
			// IrasaiMeistrasLabel
			// 
			resources->ApplyResources(this->IrasaiMeistrasLabel, L"IrasaiMeistrasLabel");
			this->IrasaiMeistrasLabel->Name = L"IrasaiMeistrasLabel";
			// 
			// IrasaiNumerisTB
			// 
			resources->ApplyResources(this->IrasaiNumerisTB, L"IrasaiNumerisTB");
			this->IrasaiNumerisTB->Name = L"IrasaiNumerisTB";
			this->IrasaiNumerisTB->ReadOnly = true;
			// 
			// IrasaiNumerisLabel
			// 
			resources->ApplyResources(this->IrasaiNumerisLabel, L"IrasaiNumerisLabel");
			this->IrasaiNumerisLabel->Name = L"IrasaiNumerisLabel";
			// 
			// IrasaiMiestasTB
			// 
			resources->ApplyResources(this->IrasaiMiestasTB, L"IrasaiMiestasTB");
			this->IrasaiMiestasTB->Name = L"IrasaiMiestasTB";
			this->IrasaiMiestasTB->ReadOnly = true;
			// 
			// IrasaiGatveTB
			// 
			resources->ApplyResources(this->IrasaiGatveTB, L"IrasaiGatveTB");
			this->IrasaiGatveTB->Name = L"IrasaiGatveTB";
			this->IrasaiGatveTB->ReadOnly = true;
			// 
			// IrasaiGatveLabel
			// 
			resources->ApplyResources(this->IrasaiGatveLabel, L"IrasaiGatveLabel");
			this->IrasaiGatveLabel->Name = L"IrasaiGatveLabel";
			// 
			// IrasaiMiestasLabel
			// 
			resources->ApplyResources(this->IrasaiMiestasLabel, L"IrasaiMiestasLabel");
			this->IrasaiMiestasLabel->Name = L"IrasaiMiestasLabel";
			// 
			// IrasaiTelefonaiTB
			// 
			resources->ApplyResources(this->IrasaiTelefonaiTB, L"IrasaiTelefonaiTB");
			this->IrasaiTelefonaiTB->Name = L"IrasaiTelefonaiTB";
			this->IrasaiTelefonaiTB->ReadOnly = true;
			// 
			// IrasaiTelefonaiLabel
			// 
			resources->ApplyResources(this->IrasaiTelefonaiLabel, L"IrasaiTelefonaiLabel");
			this->IrasaiTelefonaiLabel->Name = L"IrasaiTelefonaiLabel";
			// 
			// IrasaiPagrindasTB
			// 
			resources->ApplyResources(this->IrasaiPagrindasTB, L"IrasaiPagrindasTB");
			this->IrasaiPagrindasTB->Name = L"IrasaiPagrindasTB";
			this->IrasaiPagrindasTB->ReadOnly = true;
			// 
			// IrasaiPaagrindasLabel
			// 
			resources->ApplyResources(this->IrasaiPaagrindasLabel, L"IrasaiPaagrindasLabel");
			this->IrasaiPaagrindasLabel->Name = L"IrasaiPaagrindasLabel";
			// 
			// IrasaiDataTB
			// 
			resources->ApplyResources(this->IrasaiDataTB, L"IrasaiDataTB");
			this->IrasaiDataTB->Name = L"IrasaiDataTB";
			this->IrasaiDataTB->ReadOnly = true;
			// 
			// IrasaiDataLabel
			// 
			resources->ApplyResources(this->IrasaiDataLabel, L"IrasaiDataLabel");
			this->IrasaiDataLabel->Name = L"IrasaiDataLabel";
			// 
			// IrasaiSavininkasLabel
			// 
			resources->ApplyResources(this->IrasaiSavininkasLabel, L"IrasaiSavininkasLabel");
			this->IrasaiSavininkasLabel->Name = L"IrasaiSavininkasLabel";
			// 
			// IrasaiSavininkasTB
			// 
			resources->ApplyResources(this->IrasaiSavininkasTB, L"IrasaiSavininkasTB");
			this->IrasaiSavininkasTB->Name = L"IrasaiSavininkasTB";
			this->IrasaiSavininkasTB->ReadOnly = true;
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// AparatasNewButton
			// 
			resources->ApplyResources(this->AparatasNewButton, L"AparatasNewButton");
			this->AparatasNewButton->Name = L"AparatasNewButton";
			this->AparatasNewButton->UseVisualStyleBackColor = true;
			this->AparatasNewButton->Click += gcnew System::EventHandler(this, &MyForm::AparatasNewButton_Click);
			// 
			// SutartisNewButton
			// 
			resources->ApplyResources(this->SutartisNewButton, L"SutartisNewButton");
			this->SutartisNewButton->Name = L"SutartisNewButton";
			this->SutartisNewButton->UseVisualStyleBackColor = true;
			this->SutartisNewButton->Click += gcnew System::EventHandler(this, &MyForm::SutartisNewButton_Click);
			// 
			// IrasasNewButton
			// 
			resources->ApplyResources(this->IrasasNewButton, L"IrasasNewButton");
			this->IrasasNewButton->Name = L"IrasasNewButton";
			this->IrasasNewButton->UseVisualStyleBackColor = true;
			this->IrasasNewButton->Click += gcnew System::EventHandler(this, &MyForm::IrasasNewButton_Click);
			// 
			// AparatasSaveButton
			// 
			this->AparatasSaveButton->DialogResult = System::Windows::Forms::DialogResult::No;
			resources->ApplyResources(this->AparatasSaveButton, L"AparatasSaveButton");
			this->AparatasSaveButton->Name = L"AparatasSaveButton";
			this->AparatasSaveButton->UseVisualStyleBackColor = true;
			this->AparatasSaveButton->Click += gcnew System::EventHandler(this, &MyForm::AparatasSaveButton_Click);
			// 
			// SutartisSaveButton
			// 
			this->SutartisSaveButton->DialogResult = System::Windows::Forms::DialogResult::No;
			resources->ApplyResources(this->SutartisSaveButton, L"SutartisSaveButton");
			this->SutartisSaveButton->Name = L"SutartisSaveButton";
			this->SutartisSaveButton->UseVisualStyleBackColor = true;
			this->SutartisSaveButton->Click += gcnew System::EventHandler(this, &MyForm::SutartisSaveButton_Click);
			// 
			// IrasaiSaveButton
			// 
			this->IrasaiSaveButton->DialogResult = System::Windows::Forms::DialogResult::No;
			resources->ApplyResources(this->IrasaiSaveButton, L"IrasaiSaveButton");
			this->IrasaiSaveButton->Name = L"IrasaiSaveButton";
			this->IrasaiSaveButton->UseVisualStyleBackColor = true;
			this->IrasaiSaveButton->Click += gcnew System::EventHandler(this, &MyForm::IrasaiSaveButton_Click);
			// 
			// AparatasEditButton
			// 
			resources->ApplyResources(this->AparatasEditButton, L"AparatasEditButton");
			this->AparatasEditButton->Name = L"AparatasEditButton";
			this->AparatasEditButton->UseVisualStyleBackColor = true;
			this->AparatasEditButton->Click += gcnew System::EventHandler(this, &MyForm::AparatasEditButton_Click);
			// 
			// SutartisEditButton
			// 
			resources->ApplyResources(this->SutartisEditButton, L"SutartisEditButton");
			this->SutartisEditButton->Name = L"SutartisEditButton";
			this->SutartisEditButton->UseVisualStyleBackColor = true;
			this->SutartisEditButton->Click += gcnew System::EventHandler(this, &MyForm::SutartisEditButton_Click);
			// 
			// IrasasEditButton
			// 
			resources->ApplyResources(this->IrasasEditButton, L"IrasasEditButton");
			this->IrasasEditButton->Name = L"IrasasEditButton";
			this->IrasasEditButton->UseVisualStyleBackColor = true;
			this->IrasasEditButton->Click += gcnew System::EventHandler(this, &MyForm::IrasasEditButton_Click);
			// 
			// AparatasESaveButton
			// 
			this->AparatasESaveButton->DialogResult = System::Windows::Forms::DialogResult::No;
			resources->ApplyResources(this->AparatasESaveButton, L"AparatasESaveButton");
			this->AparatasESaveButton->Name = L"AparatasESaveButton";
			this->AparatasESaveButton->UseVisualStyleBackColor = true;
			this->AparatasESaveButton->Click += gcnew System::EventHandler(this, &MyForm::AparatasESaveButton_Click);
			// 
			// SutartisESaveButton
			// 
			this->SutartisESaveButton->DialogResult = System::Windows::Forms::DialogResult::No;
			resources->ApplyResources(this->SutartisESaveButton, L"SutartisESaveButton");
			this->SutartisESaveButton->Name = L"SutartisESaveButton";
			this->SutartisESaveButton->UseVisualStyleBackColor = true;
			this->SutartisESaveButton->Click += gcnew System::EventHandler(this, &MyForm::SutartisESaveButton_Click);
			// 
			// IrasasESaveButton
			// 
			this->IrasasESaveButton->DialogResult = System::Windows::Forms::DialogResult::No;
			resources->ApplyResources(this->IrasasESaveButton, L"IrasasESaveButton");
			this->IrasasESaveButton->Name = L"IrasasESaveButton";
			this->IrasasESaveButton->UseVisualStyleBackColor = true;
			this->IrasasESaveButton->Click += gcnew System::EventHandler(this, &MyForm::IrasasESaveButton_Click);
			// 
			// MainSaveButton
			// 
			this->MainSaveButton->BackColor = System::Drawing::Color::ForestGreen;
			this->MainSaveButton->ForeColor = System::Drawing::SystemColors::ControlText;
			resources->ApplyResources(this->MainSaveButton, L"MainSaveButton");
			this->MainSaveButton->Name = L"MainSaveButton";
			this->MainSaveButton->UseVisualStyleBackColor = false;
			this->MainSaveButton->Click += gcnew System::EventHandler(this, &MyForm::MainSaveButton_Click);
			// 
			// AparatasDeleteButton
			// 
			resources->ApplyResources(this->AparatasDeleteButton, L"AparatasDeleteButton");
			this->AparatasDeleteButton->Name = L"AparatasDeleteButton";
			this->AparatasDeleteButton->UseVisualStyleBackColor = true;
			this->AparatasDeleteButton->Click += gcnew System::EventHandler(this, &MyForm::AparatasDeleteButton_Click);
			// 
			// SutartisDeleteButton
			// 
			resources->ApplyResources(this->SutartisDeleteButton, L"SutartisDeleteButton");
			this->SutartisDeleteButton->Name = L"SutartisDeleteButton";
			this->SutartisDeleteButton->UseVisualStyleBackColor = true;
			this->SutartisDeleteButton->Click += gcnew System::EventHandler(this, &MyForm::SutartisDeleteButton_Click);
			// 
			// IrasasDeleteButton
			// 
			resources->ApplyResources(this->IrasasDeleteButton, L"IrasasDeleteButton");
			this->IrasasDeleteButton->Name = L"IrasasDeleteButton";
			this->IrasasDeleteButton->UseVisualStyleBackColor = true;
			this->IrasasDeleteButton->Click += gcnew System::EventHandler(this, &MyForm::IrasasDeleteButton_Click);
			// 
			// AparatasDeleteCYButton
			// 
			this->AparatasDeleteCYButton->BackColor = System::Drawing::Color::Red;
			resources->ApplyResources(this->AparatasDeleteCYButton, L"AparatasDeleteCYButton");
			this->AparatasDeleteCYButton->Name = L"AparatasDeleteCYButton";
			this->AparatasDeleteCYButton->UseVisualStyleBackColor = false;
			this->AparatasDeleteCYButton->Click += gcnew System::EventHandler(this, &MyForm::AparatasDeleteCYButton_Click);
			// 
			// SutartisDeleteCYButton
			// 
			this->SutartisDeleteCYButton->BackColor = System::Drawing::Color::Red;
			resources->ApplyResources(this->SutartisDeleteCYButton, L"SutartisDeleteCYButton");
			this->SutartisDeleteCYButton->Name = L"SutartisDeleteCYButton";
			this->SutartisDeleteCYButton->UseVisualStyleBackColor = false;
			this->SutartisDeleteCYButton->Click += gcnew System::EventHandler(this, &MyForm::SutartisDeleteCYButton_Click);
			// 
			// IrasasDeleteCYButton
			// 
			this->IrasasDeleteCYButton->BackColor = System::Drawing::Color::Red;
			resources->ApplyResources(this->IrasasDeleteCYButton, L"IrasasDeleteCYButton");
			this->IrasasDeleteCYButton->Name = L"IrasasDeleteCYButton";
			this->IrasasDeleteCYButton->UseVisualStyleBackColor = false;
			this->IrasasDeleteCYButton->Click += gcnew System::EventHandler(this, &MyForm::IrasasDeleteCYButton_Click);
			// 
			// AparatasDeleteCNButton
			// 
			this->AparatasDeleteCNButton->BackColor = System::Drawing::Color::LimeGreen;
			resources->ApplyResources(this->AparatasDeleteCNButton, L"AparatasDeleteCNButton");
			this->AparatasDeleteCNButton->Name = L"AparatasDeleteCNButton";
			this->AparatasDeleteCNButton->UseVisualStyleBackColor = false;
			this->AparatasDeleteCNButton->Click += gcnew System::EventHandler(this, &MyForm::AparatasDeleteCNButton_Click);
			// 
			// IrasasDeleteCNButton
			// 
			this->IrasasDeleteCNButton->BackColor = System::Drawing::Color::LimeGreen;
			resources->ApplyResources(this->IrasasDeleteCNButton, L"IrasasDeleteCNButton");
			this->IrasasDeleteCNButton->Name = L"IrasasDeleteCNButton";
			this->IrasasDeleteCNButton->UseVisualStyleBackColor = false;
			this->IrasasDeleteCNButton->Click += gcnew System::EventHandler(this, &MyForm::IrasasDeleteCNButton_Click);
			// 
			// SutartisDeleteCNButton
			// 
			this->SutartisDeleteCNButton->BackColor = System::Drawing::Color::LimeGreen;
			resources->ApplyResources(this->SutartisDeleteCNButton, L"SutartisDeleteCNButton");
			this->SutartisDeleteCNButton->Name = L"SutartisDeleteCNButton";
			this->SutartisDeleteCNButton->UseVisualStyleBackColor = false;
			this->SutartisDeleteCNButton->Click += gcnew System::EventHandler(this, &MyForm::SutartisDeleteCNButton_Click);
			// 
			// MyForm
			// 
			this->AllowDrop = true;
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->SutartisDeleteCNButton);
			this->Controls->Add(this->IrasasDeleteCNButton);
			this->Controls->Add(this->AparatasDeleteCNButton);
			this->Controls->Add(this->IrasasDeleteCYButton);
			this->Controls->Add(this->IrasasDeleteButton);
			this->Controls->Add(this->SutartisDeleteCYButton);
			this->Controls->Add(this->SutartisDeleteButton);
			this->Controls->Add(this->AparatasDeleteCYButton);
			this->Controls->Add(this->AparatasDeleteButton);
			this->Controls->Add(this->MainSaveButton);
			this->Controls->Add(this->IrasasESaveButton);
			this->Controls->Add(this->SutartisESaveButton);
			this->Controls->Add(this->AparatasESaveButton);
			this->Controls->Add(this->IrasasEditButton);
			this->Controls->Add(this->SutartisEditButton);
			this->Controls->Add(this->AparatasEditButton);
			this->Controls->Add(this->IrasaiSaveButton);
			this->Controls->Add(this->SutartisSaveButton);
			this->Controls->Add(this->AparatasSaveButton);
			this->Controls->Add(this->IrasasNewButton);
			this->Controls->Add(this->SutartisNewButton);
			this->Controls->Add(this->AparatasNewButton);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->TechPasoInfo);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->TechPasoInfo->ResumeLayout(false);
			this->TechPasoInfo->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
		void aparataiLangUpdate() {
			sutartysCID = 0;
			irasaiCID = 0;
			AparatoSerijaTextBox->Text = stringConvert(aparatuSarasas[aparataiCID].serija);
			AparatoNrTextBox->Text = stringConvert(aparatuSarasas[aparataiCID].nr);
			AparatoKorpNrTextBox->Text = stringConvert(aparatuSarasas[aparataiCID].ID);
			AparatoModelisTextBox->Text = stringConvert(aparatuSarasas[aparataiCID].modelis);
			if (aparatuSarasas[aparataiCID].aparatSutartys.size() > 0) {
				SutartisNrTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatSutartys[sutartysCID].numeris);
				SutartisNuoTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatSutartys[sutartysCID].nuo);
				SutartisIkiTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatSutartys[sutartysCID].iki);
				SutartisTipasTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatSutartys[sutartysCID].tipas);
			} else {
				SutartisNrTB->Text = L"";
				SutartisNuoTB->Text = L"";
				SutartisIkiTB->Text = L"";
				SutartisTipasTB->Text = L"";
			}
			if (aparatuSarasas[aparataiCID].aparatIrasai.size() > 0) {
				IrasaiDataTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].data);
				IrasaiSavininkasTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].savininkas);
				IrasaiPagrindasTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].pagrindas);
				IrasaiTelefonaiTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].telefonai);
				IrasaiMiestasTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].miestas);
				IrasaiGatveTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].gatve);
				IrasaiNumerisTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].nr);
				IrasaiMeistrasTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].meistras);
			} else {
				IrasaiDataTB->Text = L"";
				IrasaiSavininkasTB->Text = L"";
				IrasaiPagrindasTB->Text = L"";
				IrasaiTelefonaiTB->Text = L"";
				IrasaiMiestasTB->Text = L"";
				IrasaiGatveTB->Text = L"";
				IrasaiNumerisTB->Text = L"";
				IrasaiMeistrasTB->Text = L"";
			}
		}
		void irasaiLangUpdate() {
			IrasaiDataTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].data);
			IrasaiSavininkasTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].savininkas);
			IrasaiPagrindasTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].pagrindas);
			IrasaiTelefonaiTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].telefonai);
			IrasaiMiestasTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].miestas);
			IrasaiGatveTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].gatve);
			IrasaiNumerisTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].nr);
			IrasaiMeistrasTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].meistras);
		}
		void sutartysLangUpdate() {
			SutartisNrTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatSutartys[sutartysCID].numeris);
			SutartisNuoTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatSutartys[sutartysCID].nuo);
			SutartisIkiTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatSutartys[sutartysCID].iki);
			SutartisTipasTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatSutartys[sutartysCID].tipas);
		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	ikrovimas();
	aparataiLangUpdate();
	saugojimas();
}
private: System::Void AparatasPrevButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (aparataiCID > 0) {
		aparataiCID--;
		aparataiLangUpdate();
	}
}
private: System::Void AparatasNextButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (aparataiCID + 1 < aparatuSarasas.size()) {
		aparataiCID++;
		aparataiLangUpdate();
	}
}
private: System::Void SutartisPrevButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (sutartysCID > 0) {
		sutartysCID--;
		sutartysLangUpdate();
	}
}
 private: System::Void SutartisNextButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (sutartysCID + 1 < aparatuSarasas[aparataiCID].aparatSutartys.size()) {
		sutartysCID++;
		sutartysLangUpdate();
	}
}

private: System::Void IrasaiPrevButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (irasaiCID > 0) {
		irasaiCID--;
		irasaiLangUpdate();
	}
}
private: System::Void IrasaiNextButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (irasaiCID + 1 < aparatuSarasas[aparataiCID].aparatIrasai.size()) {
		irasaiCID++;
		irasaiLangUpdate();
	}
}
private: System::Void AparatasNewButton_Click(System::Object^  sender, System::EventArgs^  e) {
	aparatas temp = {};
	aparatuSarasas.push_back(temp);
	aparataiCID = aparatuSarasas.size()-1;
	aparataiLangUpdate();
	AparatoKorpNrTextBox->ReadOnly = false;
	AparatoSerijaTextBox->ReadOnly = false;
	AparatoNrTextBox->ReadOnly = false;
	AparatasNewButton->Visible = false;
	AparatasSaveButton->Visible = true;
	AparatoModelisTextBox->Visible = false;
	AparatasModelisCMB->Visible = true;
			 
}
private: System::Void AparatasSaveButton_Click(System::Object^  sender, System::EventArgs^  e) {
	bool naujas = true;
	aparatuSarasas[aparataiCID].ID = stringConvert(AparatoKorpNrTextBox->Text);
	aparatuSarasas[aparataiCID].serija = stringConvert(AparatoSerijaTextBox->Text);
	aparatuSarasas[aparataiCID].nr = stringConvert(AparatoNrTextBox->Text);
	aparatuSarasas[aparataiCID].modelis = stringConvert(AparatasModelisCMB->Text);
	for (int i = 0; i < aparataiCombo.size(); i++) {
		if (AparatasModelisCMB->Text == stringConvert(aparataiCombo[i])) {
			naujas = false;
			break;
		}	
	}
	if (naujas) {
		AparatasModelisCMB->Items->Add(AparatasModelisCMB->Text);
		aparataiCombo.push_back(stringConvert(AparatasModelisCMB->Text));
	}
	AparatoKorpNrTextBox->ReadOnly = true;
	AparatoSerijaTextBox->ReadOnly = true;
	AparatoNrTextBox->ReadOnly = true;
	aparataiLangUpdate();
	AparatasModelisCMB->Visible = false;
	AparatoModelisTextBox->Visible = true;
	AparatasNewButton->Visible = true;
	AparatasSaveButton->Visible = false;
	MainSaveButton->BackColor = System::Drawing::Color::Red;
}
private: System::Void SutartisSaveButton_Click(System::Object^  sender, System::EventArgs^  e) {
	aparatuSarasas[aparataiCID].aparatSutartys[sutartysCID].numeris = stringConvert(SutartisNrTB->Text);
	aparatuSarasas[aparataiCID].aparatSutartys[sutartysCID].tipas = stringConvert(SutartisTipasTB->Text);
	aparatuSarasas[aparataiCID].aparatSutartys[sutartysCID].nuo = stringConvert(SutartisNuoTB->Text);
	aparatuSarasas[aparataiCID].aparatSutartys[sutartysCID].iki = stringConvert(SutartisIkiTB->Text);
	SutartisNrTB->ReadOnly = true;
	SutartisTipasTB->ReadOnly = true;
	SutartisNuoTB->ReadOnly = true;
	SutartisIkiTB->ReadOnly = true;
	sutartysLangUpdate();
	SutartisNewButton->Visible = true;
	SutartisSaveButton->Visible = false;
	MainSaveButton->BackColor = System::Drawing::Color::Red;
}
private: System::Void SutartisNewButton_Click(System::Object^  sender, System::EventArgs^  e) {
	sutartis temp = {};
	aparatuSarasas[aparataiCID].aparatSutartys.push_back(temp);
	sutartysCID = aparatuSarasas[aparataiCID].aparatSutartys.size()-1;
	sutartysLangUpdate();
	SutartisNrTB->ReadOnly = false;
	SutartisTipasTB->ReadOnly = false;
	SutartisNuoTB->ReadOnly = false;
	SutartisIkiTB->ReadOnly = false;
	SutartisNewButton->Visible = false;
	SutartisSaveButton->Visible = true;
}

private: System::Void IrasasNewButton_Click(System::Object^  sender, System::EventArgs^  e) {
	irasas temp = {};
	aparatuSarasas[aparataiCID].aparatIrasai.push_back(temp);
	irasaiCID = aparatuSarasas[aparataiCID].aparatIrasai.size()-1;
	irasaiLangUpdate();
	IrasaiDataTB->ReadOnly = false;
	IrasaiGatveTB->ReadOnly = false;
	IrasaiMeistrasTB->ReadOnly = false;
	IrasaiMiestasTB->ReadOnly = false;
	IrasaiNumerisTB->ReadOnly = false;
	IrasaiPagrindasTB->ReadOnly = false;
	IrasaiSavininkasTB->ReadOnly = false;
	IrasaiTelefonaiTB->ReadOnly = false;
	IrasasNewButton->Visible = false;
	IrasaiSaveButton->Visible = true;
}
private: System::Void IrasaiSaveButton_Click(System::Object^  sender, System::EventArgs^  e) {
	aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].data = stringConvert(IrasaiDataTB->Text);
	aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].gatve = stringConvert(IrasaiGatveTB->Text);
	aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].meistras = stringConvert(IrasaiMeistrasTB->Text);
	aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].miestas = stringConvert(IrasaiMiestasTB->Text);
	aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].nr = stringConvert(IrasaiNumerisTB->Text);
	aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].pagrindas = stringConvert(IrasaiPagrindasTB->Text);
	aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].savininkas = stringConvert(IrasaiSavininkasTB->Text);
	aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].telefonai = stringConvert(IrasaiTelefonaiTB->Text);
	IrasaiDataTB->ReadOnly = true;
	IrasaiGatveTB->ReadOnly = true;
	IrasaiMeistrasTB->ReadOnly = true;
	IrasaiMiestasTB->ReadOnly = true;
	IrasaiNumerisTB->ReadOnly = true;
	IrasaiPagrindasTB->ReadOnly = true;
	IrasaiSavininkasTB->ReadOnly = true;
	IrasaiTelefonaiTB->ReadOnly = true;
	irasaiLangUpdate();
	IrasasNewButton->Visible = true;
	IrasaiSaveButton->Visible = false;
	MainSaveButton->BackColor = System::Drawing::Color::Red;
		 
}
private: System::Void AparatasEditButton_Click(System::Object^  sender, System::EventArgs^  e) {
	AparatoKorpNrTextBox->ReadOnly = false;
	AparatoSerijaTextBox->ReadOnly = false;
	AparatoModelisTextBox->ReadOnly = false;
	AparatoNrTextBox->ReadOnly = false;
	AparatasEditButton->Visible = false;
	AparatasESaveButton->Visible = true; 
}
private: System::Void AparatasESaveButton_Click(System::Object^  sender, System::EventArgs^  e) {
	aparatuSarasas[aparataiCID].ID = stringConvert(AparatoKorpNrTextBox->Text);
	aparatuSarasas[aparataiCID].serija = stringConvert(AparatoSerijaTextBox->Text);
	aparatuSarasas[aparataiCID].nr = stringConvert(AparatoNrTextBox->Text);
	aparatuSarasas[aparataiCID].modelis = stringConvert(AparatoModelisTextBox->Text);
	AparatoKorpNrTextBox->ReadOnly = true;
	AparatoSerijaTextBox->ReadOnly = true;
	AparatoModelisTextBox->ReadOnly = true;
	AparatoNrTextBox->ReadOnly = true;
	aparataiLangUpdate();
	AparatasEditButton->Visible = true;
	AparatasESaveButton->Visible = false; 
	MainSaveButton->BackColor = System::Drawing::Color::Red;
}
private: System::Void SutartisEditButton_Click(System::Object^  sender, System::EventArgs^  e) {
	SutartisNrTB->ReadOnly = false;
	SutartisTipasTB->ReadOnly = false;
	SutartisNuoTB->ReadOnly = false;
	SutartisIkiTB->ReadOnly = false;
	SutartisEditButton->Visible = false;
	SutartisESaveButton->Visible = true;	
}
private: System::Void SutartisESaveButton_Click(System::Object^  sender, System::EventArgs^  e) {
	aparatuSarasas[aparataiCID].aparatSutartys[sutartysCID].numeris = stringConvert(SutartisNrTB->Text);
	aparatuSarasas[aparataiCID].aparatSutartys[sutartysCID].tipas = stringConvert(SutartisTipasTB->Text);
	aparatuSarasas[aparataiCID].aparatSutartys[sutartysCID].nuo = stringConvert(SutartisNuoTB->Text);
	aparatuSarasas[aparataiCID].aparatSutartys[sutartysCID].iki = stringConvert(SutartisIkiTB->Text);
	SutartisNrTB->ReadOnly = true;
	SutartisTipasTB->ReadOnly = true;
	SutartisNuoTB->ReadOnly = true;
	SutartisIkiTB->ReadOnly = true;
	sutartysLangUpdate();
	SutartisEditButton->Visible = true;
	SutartisESaveButton->Visible = false;	
	MainSaveButton->BackColor = System::Drawing::Color::Red;
}
private: System::Void IrasasEditButton_Click(System::Object^  sender, System::EventArgs^  e) {
	IrasaiDataTB->ReadOnly = false;
	IrasaiGatveTB->ReadOnly = false;
	IrasaiMeistrasTB->ReadOnly = false;
	IrasaiMiestasTB->ReadOnly = false;
	IrasaiNumerisTB->ReadOnly = false;
	IrasaiPagrindasTB->ReadOnly = false;
	IrasaiSavininkasTB->ReadOnly = false;
	IrasaiTelefonaiTB->ReadOnly = false;
	IrasasEditButton->Visible = false;
	IrasasESaveButton->Visible = true;

}
private: System::Void IrasasESaveButton_Click(System::Object^  sender, System::EventArgs^  e) {
	aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].data = stringConvert(IrasaiDataTB->Text);
	aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].gatve = stringConvert(IrasaiGatveTB->Text);
	aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].meistras = stringConvert(IrasaiMeistrasTB->Text);
	aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].miestas = stringConvert(IrasaiMiestasTB->Text);
	aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].nr = stringConvert(IrasaiNumerisTB->Text);
	aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].pagrindas = stringConvert(IrasaiPagrindasTB->Text);
	aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].savininkas = stringConvert(IrasaiSavininkasTB->Text);
	aparatuSarasas[aparataiCID].aparatIrasai[irasaiCID].telefonai = stringConvert(IrasaiTelefonaiTB->Text);
	IrasaiDataTB->ReadOnly = true;
	IrasaiGatveTB->ReadOnly = true;
	IrasaiMeistrasTB->ReadOnly = true;
	IrasaiMiestasTB->ReadOnly = true;
	IrasaiNumerisTB->ReadOnly = true;
	IrasaiPagrindasTB->ReadOnly = true;
	IrasaiSavininkasTB->ReadOnly = true;
	IrasaiTelefonaiTB->ReadOnly = true;
	irasaiLangUpdate();
	IrasasEditButton->Visible = true;
	IrasasESaveButton->Visible = false;
	MainSaveButton->BackColor = System::Drawing::Color::Red;
}
private: System::Void MainSaveButton_Click(System::Object^  sender, System::EventArgs^  e) {
	saugojimas();
	MainSaveButton->BackColor = System::Drawing::Color::ForestGreen;
}
private: System::Void AparatasDeleteButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 AparatasDeleteButton->Visible = false;
			 AparatasDeleteCYButton->Visible = true;
			 AparatasDeleteCNButton->Visible = true;
		 }
private: System::Void SutartisDeleteButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 SutartisDeleteButton->Visible = false;
			 SutartisDeleteCNButton->Visible = true;
			 SutartisDeleteCYButton->Visible = true;
		 }
private: System::Void IrasasDeleteButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 IrasasDeleteButton->Visible = false;
			 IrasasDeleteCNButton->Visible = true;
			 IrasasDeleteCYButton->Visible = true;
		 }
private: System::Void AparatasDeleteCYButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 aparatuSarasas.erase(aparatuSarasas.begin() + aparataiCID);
			 aparataiCID = 0;
			 aparataiLangUpdate();
			 AparatasDeleteButton->Visible = true;
			 AparatasDeleteCNButton->Visible = false;
			 AparatasDeleteCYButton->Visible = false;
			 MainSaveButton->BackColor = System::Drawing::Color::Red;
		 }
private: System::Void SutartisDeleteCYButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 aparatuSarasas[aparataiCID].aparatSutartys.erase(aparatuSarasas[aparataiCID].aparatSutartys.begin() + sutartysCID);
			 sutartysCID = 0;
			 sutartysLangUpdate();
			 SutartisDeleteButton->Visible = true;
			 SutartisDeleteCNButton->Visible = false;
			 SutartisDeleteCYButton->Visible = false;
			 MainSaveButton->BackColor = System::Drawing::Color::Red;
		 }
private: System::Void IrasasDeleteCYButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 aparatuSarasas[aparataiCID].aparatIrasai.erase(aparatuSarasas[aparataiCID].aparatIrasai.begin() + irasaiCID);
			 irasaiCID = 0;
			 irasaiLangUpdate();
			 IrasasDeleteButton->Visible = true;
			 IrasasDeleteCNButton->Visible = false;
			 IrasasDeleteCYButton->Visible = false;
			 MainSaveButton->BackColor = System::Drawing::Color::Red;
		 }
private: System::Void AparatasDeleteCNButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 AparatasDeleteButton->Visible = true;
			 AparatasDeleteCNButton->Visible = false;
			 AparatasDeleteCYButton->Visible = false;
		 }
private: System::Void SutartisDeleteCNButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 SutartisDeleteButton->Visible = true;
			 SutartisDeleteCNButton->Visible = false;
			 SutartisDeleteCYButton->Visible = false;
		 }
private: System::Void IrasasDeleteCNButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 IrasasDeleteButton->Visible = true;
			 IrasasDeleteCNButton->Visible = false;
			 IrasasDeleteCYButton->Visible = false;
		 }
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	ikrovimas();
	for (int i = 0; i < aparataiCombo.size(); i++) {
		AparatasModelisCMB->Items->Add(stringConvert(aparataiCombo[i]));
	}
	aparataiLangUpdate();
}
};
}
