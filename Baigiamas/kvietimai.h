#pragma once
#include "MyForm.h"
extern std::vector<aparatas> aparatuSarasas; // Pasiekiamas iðorinis vectorius
extern int aparataiCID; //Pasiekiamas dabartinio aparato ID
int remontaiCID = 0; //Dabar rodomø duomenø ID
bool tempAtlikt;

void remontaiLangUpdate();
namespace Baigiamas {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for kvietimai
	/// </summary>
	public ref class kvietimai : public System::Windows::Forms::Form
	{
	public:
		kvietimai(void)
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
		~kvietimai()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  IskvietLaikasTB;
	private: System::Windows::Forms::Label^  IskvietLaikasLabel;
	private: System::Windows::Forms::TextBox^  IskvietDataTB;
	private: System::Windows::Forms::Label^  IskvietDataLabel;
	private: System::Windows::Forms::TextBox^  iskvietAprasymasTB;

	private: System::Windows::Forms::Label^  IskvietAprasymasLabel;

	private: System::Windows::Forms::TextBox^  IskvietVardTB;
	private: System::Windows::Forms::Label^  IskvietVardLabel;
	private: System::Windows::Forms::TextBox^  IskvietTelefonaiTB;

	private: System::Windows::Forms::Label^  IskvietTelefonaiLabel;

	private: System::Windows::Forms::TextBox^  IskvietPaskirtaTB;

	private: System::Windows::Forms::Label^  IskvietPaskirtaLabel;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  AtlikPastabosLabel;
	private: System::Windows::Forms::TextBox^  AtlikPastabosTB;

	private: System::Windows::Forms::TextBox^  AtlikAprasymasTB;

	private: System::Windows::Forms::Label^  AtlikAprasymasLabel;
	private: System::Windows::Forms::TextBox^  AtlikMeistrasTB;

	private: System::Windows::Forms::Label^  AtlikMeistrasLabel;
	private: System::Windows::Forms::TextBox^  AtlikLaikasTB;

	private: System::Windows::Forms::Label^  AtlikLaikasLabel;
	private: System::Windows::Forms::TextBox^  AtlikDataTB;

	private: System::Windows::Forms::Label^  AtlikDataLabel;
	private: System::Windows::Forms::Button^  IskvietPrevBTN;
	private: System::Windows::Forms::Button^  IskvietNextBTN;
	private: System::Windows::Forms::Button^  IskvietNewBTN;
	private: System::Windows::Forms::Button^  IskvietEditBTN;
	private: System::Windows::Forms::Button^  IskvietDeleteBTN;
	private: System::Windows::Forms::Button^  AtlikStatusBTN;
	private: System::Windows::Forms::Label^  AtlikStatusLabel;
	private: System::Windows::Forms::Button^  IskvietDelConfirmBTN;
	private: System::Windows::Forms::Button^  IskvietDelCancelBTN;
	private: System::Windows::Forms::Button^  IskvietEditSaveBTN;
	private: System::Windows::Forms::Button^  IskvietNewSaveBTN;
	private: System::Windows::Forms::DateTimePicker^  IskvietDataDTP;
	private: System::Windows::Forms::DateTimePicker^  AtlikDataDTP;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->IskvietDataDTP = (gcnew System::Windows::Forms::DateTimePicker());
			this->IskvietTelefonaiTB = (gcnew System::Windows::Forms::TextBox());
			this->IskvietTelefonaiLabel = (gcnew System::Windows::Forms::Label());
			this->IskvietPaskirtaTB = (gcnew System::Windows::Forms::TextBox());
			this->IskvietPaskirtaLabel = (gcnew System::Windows::Forms::Label());
			this->iskvietAprasymasTB = (gcnew System::Windows::Forms::TextBox());
			this->IskvietAprasymasLabel = (gcnew System::Windows::Forms::Label());
			this->IskvietVardTB = (gcnew System::Windows::Forms::TextBox());
			this->IskvietVardLabel = (gcnew System::Windows::Forms::Label());
			this->IskvietLaikasTB = (gcnew System::Windows::Forms::TextBox());
			this->IskvietLaikasLabel = (gcnew System::Windows::Forms::Label());
			this->IskvietDataTB = (gcnew System::Windows::Forms::TextBox());
			this->IskvietDataLabel = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->AtlikDataDTP = (gcnew System::Windows::Forms::DateTimePicker());
			this->AtlikPastabosLabel = (gcnew System::Windows::Forms::Label());
			this->AtlikPastabosTB = (gcnew System::Windows::Forms::TextBox());
			this->AtlikAprasymasTB = (gcnew System::Windows::Forms::TextBox());
			this->AtlikAprasymasLabel = (gcnew System::Windows::Forms::Label());
			this->AtlikMeistrasTB = (gcnew System::Windows::Forms::TextBox());
			this->AtlikMeistrasLabel = (gcnew System::Windows::Forms::Label());
			this->AtlikLaikasTB = (gcnew System::Windows::Forms::TextBox());
			this->AtlikLaikasLabel = (gcnew System::Windows::Forms::Label());
			this->AtlikDataTB = (gcnew System::Windows::Forms::TextBox());
			this->AtlikDataLabel = (gcnew System::Windows::Forms::Label());
			this->IskvietPrevBTN = (gcnew System::Windows::Forms::Button());
			this->IskvietNextBTN = (gcnew System::Windows::Forms::Button());
			this->IskvietNewBTN = (gcnew System::Windows::Forms::Button());
			this->IskvietEditBTN = (gcnew System::Windows::Forms::Button());
			this->IskvietDeleteBTN = (gcnew System::Windows::Forms::Button());
			this->AtlikStatusBTN = (gcnew System::Windows::Forms::Button());
			this->AtlikStatusLabel = (gcnew System::Windows::Forms::Label());
			this->IskvietDelConfirmBTN = (gcnew System::Windows::Forms::Button());
			this->IskvietDelCancelBTN = (gcnew System::Windows::Forms::Button());
			this->IskvietEditSaveBTN = (gcnew System::Windows::Forms::Button());
			this->IskvietNewSaveBTN = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->IskvietDataDTP);
			this->groupBox1->Controls->Add(this->IskvietTelefonaiTB);
			this->groupBox1->Controls->Add(this->IskvietTelefonaiLabel);
			this->groupBox1->Controls->Add(this->IskvietPaskirtaTB);
			this->groupBox1->Controls->Add(this->IskvietPaskirtaLabel);
			this->groupBox1->Controls->Add(this->iskvietAprasymasTB);
			this->groupBox1->Controls->Add(this->IskvietAprasymasLabel);
			this->groupBox1->Controls->Add(this->IskvietVardTB);
			this->groupBox1->Controls->Add(this->IskvietVardLabel);
			this->groupBox1->Controls->Add(this->IskvietLaikasTB);
			this->groupBox1->Controls->Add(this->IskvietLaikasLabel);
			this->groupBox1->Controls->Add(this->IskvietDataTB);
			this->groupBox1->Controls->Add(this->IskvietDataLabel);
			this->groupBox1->Location = System::Drawing::Point(10, 50);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(407, 206);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Iðkvietimo info";
			// 
			// IskvietDataDTP
			// 
			this->IskvietDataDTP->CustomFormat = L"dd/MM/yyyy";
			this->IskvietDataDTP->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->IskvietDataDTP->Location = System::Drawing::Point(91, 17);
			this->IskvietDataDTP->Name = L"IskvietDataDTP";
			this->IskvietDataDTP->Size = System::Drawing::Size(100, 20);
			this->IskvietDataDTP->TabIndex = 1;
			this->IskvietDataDTP->Visible = false;
			// 
			// IskvietTelefonaiTB
			// 
			this->IskvietTelefonaiTB->Location = System::Drawing::Point(64, 176);
			this->IskvietTelefonaiTB->Name = L"IskvietTelefonaiTB";
			this->IskvietTelefonaiTB->ReadOnly = true;
			this->IskvietTelefonaiTB->Size = System::Drawing::Size(332, 20);
			this->IskvietTelefonaiTB->TabIndex = 6;
			// 
			// IskvietTelefonaiLabel
			// 
			this->IskvietTelefonaiLabel->AutoSize = true;
			this->IskvietTelefonaiLabel->Location = System::Drawing::Point(7, 179);
			this->IskvietTelefonaiLabel->Name = L"IskvietTelefonaiLabel";
			this->IskvietTelefonaiLabel->Size = System::Drawing::Size(51, 13);
			this->IskvietTelefonaiLabel->TabIndex = 10;
			this->IskvietTelefonaiLabel->Text = L"Telefonai";
			// 
			// IskvietPaskirtaTB
			// 
			this->IskvietPaskirtaTB->Location = System::Drawing::Point(81, 150);
			this->IskvietPaskirtaTB->Name = L"IskvietPaskirtaTB";
			this->IskvietPaskirtaTB->ReadOnly = true;
			this->IskvietPaskirtaTB->Size = System::Drawing::Size(315, 20);
			this->IskvietPaskirtaTB->TabIndex = 5;
			// 
			// IskvietPaskirtaLabel
			// 
			this->IskvietPaskirtaLabel->AutoSize = true;
			this->IskvietPaskirtaLabel->Location = System::Drawing::Point(7, 153);
			this->IskvietPaskirtaLabel->Name = L"IskvietPaskirtaLabel";
			this->IskvietPaskirtaLabel->Size = System::Drawing::Size(68, 13);
			this->IskvietPaskirtaLabel->TabIndex = 8;
			this->IskvietPaskirtaLabel->Text = L"Kam paskirta";
			// 
			// iskvietAprasymasTB
			// 
			this->iskvietAprasymasTB->AcceptsReturn = true;
			this->iskvietAprasymasTB->Location = System::Drawing::Point(71, 43);
			this->iskvietAprasymasTB->Multiline = true;
			this->iskvietAprasymasTB->Name = L"iskvietAprasymasTB";
			this->iskvietAprasymasTB->ReadOnly = true;
			this->iskvietAprasymasTB->Size = System::Drawing::Size(325, 75);
			this->iskvietAprasymasTB->TabIndex = 3;
			// 
			// IskvietAprasymasLabel
			// 
			this->IskvietAprasymasLabel->AutoSize = true;
			this->IskvietAprasymasLabel->Location = System::Drawing::Point(7, 46);
			this->IskvietAprasymasLabel->Name = L"IskvietAprasymasLabel";
			this->IskvietAprasymasLabel->Size = System::Drawing::Size(58, 13);
			this->IskvietAprasymasLabel->TabIndex = 6;
			this->IskvietAprasymasLabel->Text = L"Apraðymas";
			// 
			// IskvietVardTB
			// 
			this->IskvietVardTB->Location = System::Drawing::Point(63, 124);
			this->IskvietVardTB->Name = L"IskvietVardTB";
			this->IskvietVardTB->ReadOnly = true;
			this->IskvietVardTB->Size = System::Drawing::Size(333, 20);
			this->IskvietVardTB->TabIndex = 4;
			// 
			// IskvietVardLabel
			// 
			this->IskvietVardLabel->AutoSize = true;
			this->IskvietVardLabel->Location = System::Drawing::Point(7, 127);
			this->IskvietVardLabel->Name = L"IskvietVardLabel";
			this->IskvietVardLabel->Size = System::Drawing::Size(50, 13);
			this->IskvietVardLabel->TabIndex = 4;
			this->IskvietVardLabel->Text = L"Kvietëjas";
			// 
			// IskvietLaikasTB
			// 
			this->IskvietLaikasTB->Location = System::Drawing::Point(296, 17);
			this->IskvietLaikasTB->Name = L"IskvietLaikasTB";
			this->IskvietLaikasTB->ReadOnly = true;
			this->IskvietLaikasTB->Size = System::Drawing::Size(100, 20);
			this->IskvietLaikasTB->TabIndex = 2;
			// 
			// IskvietLaikasLabel
			// 
			this->IskvietLaikasLabel->AutoSize = true;
			this->IskvietLaikasLabel->Location = System::Drawing::Point(206, 20);
			this->IskvietLaikasLabel->Name = L"IskvietLaikasLabel";
			this->IskvietLaikasLabel->Size = System::Drawing::Size(84, 13);
			this->IskvietLaikasLabel->TabIndex = 2;
			this->IskvietLaikasLabel->Text = L"Iðkvietimo laikas";
			// 
			// IskvietDataTB
			// 
			this->IskvietDataTB->Location = System::Drawing::Point(91, 17);
			this->IskvietDataTB->Name = L"IskvietDataTB";
			this->IskvietDataTB->ReadOnly = true;
			this->IskvietDataTB->Size = System::Drawing::Size(100, 20);
			this->IskvietDataTB->TabIndex = 1;
			// 
			// IskvietDataLabel
			// 
			this->IskvietDataLabel->AutoSize = true;
			this->IskvietDataLabel->Location = System::Drawing::Point(7, 20);
			this->IskvietDataLabel->Name = L"IskvietDataLabel";
			this->IskvietDataLabel->Size = System::Drawing::Size(78, 13);
			this->IskvietDataLabel->TabIndex = 0;
			this->IskvietDataLabel->Text = L"Iðkvietimo data";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->AtlikDataDTP);
			this->groupBox2->Controls->Add(this->AtlikPastabosLabel);
			this->groupBox2->Controls->Add(this->AtlikPastabosTB);
			this->groupBox2->Controls->Add(this->AtlikAprasymasTB);
			this->groupBox2->Controls->Add(this->AtlikAprasymasLabel);
			this->groupBox2->Controls->Add(this->AtlikMeistrasTB);
			this->groupBox2->Controls->Add(this->AtlikMeistrasLabel);
			this->groupBox2->Controls->Add(this->AtlikLaikasTB);
			this->groupBox2->Controls->Add(this->AtlikLaikasLabel);
			this->groupBox2->Controls->Add(this->AtlikDataTB);
			this->groupBox2->Controls->Add(this->AtlikDataLabel);
			this->groupBox2->Location = System::Drawing::Point(10, 262);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(407, 206);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Atlikimo info";
			// 
			// AtlikDataDTP
			// 
			this->AtlikDataDTP->CustomFormat = L"dd/MM/yyyy";
			this->AtlikDataDTP->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->AtlikDataDTP->Location = System::Drawing::Point(91, 17);
			this->AtlikDataDTP->Name = L"AtlikDataDTP";
			this->AtlikDataDTP->Size = System::Drawing::Size(100, 20);
			this->AtlikDataDTP->TabIndex = 7;
			this->AtlikDataDTP->Visible = false;
			// 
			// AtlikPastabosLabel
			// 
			this->AtlikPastabosLabel->AutoSize = true;
			this->AtlikPastabosLabel->Location = System::Drawing::Point(7, 153);
			this->AtlikPastabosLabel->Name = L"AtlikPastabosLabel";
			this->AtlikPastabosLabel->Size = System::Drawing::Size(51, 13);
			this->AtlikPastabosLabel->TabIndex = 10;
			this->AtlikPastabosLabel->Text = L"Pastabos";
			// 
			// AtlikPastabosTB
			// 
			this->AtlikPastabosTB->Location = System::Drawing::Point(63, 150);
			this->AtlikPastabosTB->Multiline = true;
			this->AtlikPastabosTB->Name = L"AtlikPastabosTB";
			this->AtlikPastabosTB->ReadOnly = true;
			this->AtlikPastabosTB->Size = System::Drawing::Size(333, 50);
			this->AtlikPastabosTB->TabIndex = 11;
			// 
			// AtlikAprasymasTB
			// 
			this->AtlikAprasymasTB->AcceptsReturn = true;
			this->AtlikAprasymasTB->Location = System::Drawing::Point(71, 43);
			this->AtlikAprasymasTB->Multiline = true;
			this->AtlikAprasymasTB->Name = L"AtlikAprasymasTB";
			this->AtlikAprasymasTB->ReadOnly = true;
			this->AtlikAprasymasTB->Size = System::Drawing::Size(325, 75);
			this->AtlikAprasymasTB->TabIndex = 9;
			// 
			// AtlikAprasymasLabel
			// 
			this->AtlikAprasymasLabel->AutoSize = true;
			this->AtlikAprasymasLabel->Location = System::Drawing::Point(7, 46);
			this->AtlikAprasymasLabel->Name = L"AtlikAprasymasLabel";
			this->AtlikAprasymasLabel->Size = System::Drawing::Size(56, 13);
			this->AtlikAprasymasLabel->TabIndex = 6;
			this->AtlikAprasymasLabel->Text = L"Kas atlikta";
			// 
			// AtlikMeistrasTB
			// 
			this->AtlikMeistrasTB->Location = System::Drawing::Point(64, 124);
			this->AtlikMeistrasTB->Name = L"AtlikMeistrasTB";
			this->AtlikMeistrasTB->ReadOnly = true;
			this->AtlikMeistrasTB->Size = System::Drawing::Size(332, 20);
			this->AtlikMeistrasTB->TabIndex = 10;
			// 
			// AtlikMeistrasLabel
			// 
			this->AtlikMeistrasLabel->AutoSize = true;
			this->AtlikMeistrasLabel->Location = System::Drawing::Point(7, 127);
			this->AtlikMeistrasLabel->Name = L"AtlikMeistrasLabel";
			this->AtlikMeistrasLabel->Size = System::Drawing::Size(53, 13);
			this->AtlikMeistrasLabel->TabIndex = 4;
			this->AtlikMeistrasLabel->Text = L"Kas atliko";
			// 
			// AtlikLaikasTB
			// 
			this->AtlikLaikasTB->Location = System::Drawing::Point(296, 17);
			this->AtlikLaikasTB->Name = L"AtlikLaikasTB";
			this->AtlikLaikasTB->ReadOnly = true;
			this->AtlikLaikasTB->Size = System::Drawing::Size(100, 20);
			this->AtlikLaikasTB->TabIndex = 8;
			// 
			// AtlikLaikasLabel
			// 
			this->AtlikLaikasLabel->AutoSize = true;
			this->AtlikLaikasLabel->Location = System::Drawing::Point(206, 20);
			this->AtlikLaikasLabel->Name = L"AtlikLaikasLabel";
			this->AtlikLaikasLabel->Size = System::Drawing::Size(73, 13);
			this->AtlikLaikasLabel->TabIndex = 2;
			this->AtlikLaikasLabel->Text = L"Atlikimo laikas";
			// 
			// AtlikDataTB
			// 
			this->AtlikDataTB->Location = System::Drawing::Point(91, 17);
			this->AtlikDataTB->Name = L"AtlikDataTB";
			this->AtlikDataTB->ReadOnly = true;
			this->AtlikDataTB->Size = System::Drawing::Size(100, 20);
			this->AtlikDataTB->TabIndex = 1;
			// 
			// AtlikDataLabel
			// 
			this->AtlikDataLabel->AutoSize = true;
			this->AtlikDataLabel->Location = System::Drawing::Point(7, 20);
			this->AtlikDataLabel->Name = L"AtlikDataLabel";
			this->AtlikDataLabel->Size = System::Drawing::Size(67, 13);
			this->AtlikDataLabel->TabIndex = 0;
			this->AtlikDataLabel->Text = L"Atlikimo data";
			// 
			// IskvietPrevBTN
			// 
			this->IskvietPrevBTN->Location = System::Drawing::Point(10, 474);
			this->IskvietPrevBTN->Name = L"IskvietPrevBTN";
			this->IskvietPrevBTN->Size = System::Drawing::Size(75, 23);
			this->IskvietPrevBTN->TabIndex = 12;
			this->IskvietPrevBTN->Text = L"<----";
			this->IskvietPrevBTN->UseVisualStyleBackColor = true;
			this->IskvietPrevBTN->Click += gcnew System::EventHandler(this, &kvietimai::IskvietPrevBTN_Click);
			// 
			// IskvietNextBTN
			// 
			this->IskvietNextBTN->Location = System::Drawing::Point(91, 474);
			this->IskvietNextBTN->Name = L"IskvietNextBTN";
			this->IskvietNextBTN->Size = System::Drawing::Size(75, 23);
			this->IskvietNextBTN->TabIndex = 13;
			this->IskvietNextBTN->Text = L"---->";
			this->IskvietNextBTN->UseVisualStyleBackColor = true;
			this->IskvietNextBTN->Click += gcnew System::EventHandler(this, &kvietimai::IskvietNextBTN_Click);
			// 
			// IskvietNewBTN
			// 
			this->IskvietNewBTN->Location = System::Drawing::Point(172, 474);
			this->IskvietNewBTN->Name = L"IskvietNewBTN";
			this->IskvietNewBTN->Size = System::Drawing::Size(83, 23);
			this->IskvietNewBTN->TabIndex = 14;
			this->IskvietNewBTN->Text = L"Naujas";
			this->IskvietNewBTN->UseVisualStyleBackColor = true;
			this->IskvietNewBTN->Click += gcnew System::EventHandler(this, &kvietimai::IskvietNewBTN_Click);
			// 
			// IskvietEditBTN
			// 
			this->IskvietEditBTN->Location = System::Drawing::Point(261, 474);
			this->IskvietEditBTN->Name = L"IskvietEditBTN";
			this->IskvietEditBTN->Size = System::Drawing::Size(75, 23);
			this->IskvietEditBTN->TabIndex = 15;
			this->IskvietEditBTN->Text = L"Redaguoti";
			this->IskvietEditBTN->UseVisualStyleBackColor = true;
			this->IskvietEditBTN->Click += gcnew System::EventHandler(this, &kvietimai::IskvietEditBTN_Click);
			// 
			// IskvietDeleteBTN
			// 
			this->IskvietDeleteBTN->Location = System::Drawing::Point(342, 474);
			this->IskvietDeleteBTN->Name = L"IskvietDeleteBTN";
			this->IskvietDeleteBTN->Size = System::Drawing::Size(75, 23);
			this->IskvietDeleteBTN->TabIndex = 16;
			this->IskvietDeleteBTN->Text = L"Trinti";
			this->IskvietDeleteBTN->UseVisualStyleBackColor = true;
			this->IskvietDeleteBTN->Click += gcnew System::EventHandler(this, &kvietimai::IskvietDeleteBTN_Click);
			// 
			// AtlikStatusBTN
			// 
			this->AtlikStatusBTN->Enabled = false;
			this->AtlikStatusBTN->Location = System::Drawing::Point(60, 13);
			this->AtlikStatusBTN->Name = L"AtlikStatusBTN";
			this->AtlikStatusBTN->Size = System::Drawing::Size(141, 31);
			this->AtlikStatusBTN->TabIndex = 18;
			this->AtlikStatusBTN->Text = L"Ne";
			this->AtlikStatusBTN->UseVisualStyleBackColor = true;
			this->AtlikStatusBTN->Click += gcnew System::EventHandler(this, &kvietimai::AtlikStatusBTN_Click);
			// 
			// AtlikStatusLabel
			// 
			this->AtlikStatusLabel->AutoSize = true;
			this->AtlikStatusLabel->Location = System::Drawing::Point(12, 21);
			this->AtlikStatusLabel->Name = L"AtlikStatusLabel";
			this->AtlikStatusLabel->Size = System::Drawing::Size(42, 13);
			this->AtlikStatusLabel->TabIndex = 19;
			this->AtlikStatusLabel->Text = L"Atlikta: ";
			// 
			// IskvietDelConfirmBTN
			// 
			this->IskvietDelConfirmBTN->BackColor = System::Drawing::Color::Red;
			this->IskvietDelConfirmBTN->Location = System::Drawing::Point(342, 474);
			this->IskvietDelConfirmBTN->Name = L"IskvietDelConfirmBTN";
			this->IskvietDelConfirmBTN->Size = System::Drawing::Size(54, 23);
			this->IskvietDelConfirmBTN->TabIndex = 20;
			this->IskvietDelConfirmBTN->Text = L"Tikrai";
			this->IskvietDelConfirmBTN->UseVisualStyleBackColor = false;
			this->IskvietDelConfirmBTN->Visible = false;
			this->IskvietDelConfirmBTN->Click += gcnew System::EventHandler(this, &kvietimai::IskvietDelConfirmBTN_Click);
			// 
			// IskvietDelCancelBTN
			// 
			this->IskvietDelCancelBTN->BackColor = System::Drawing::Color::Lime;
			this->IskvietDelCancelBTN->Location = System::Drawing::Point(395, 474);
			this->IskvietDelCancelBTN->Name = L"IskvietDelCancelBTN";
			this->IskvietDelCancelBTN->Size = System::Drawing::Size(22, 23);
			this->IskvietDelCancelBTN->TabIndex = 21;
			this->IskvietDelCancelBTN->Text = L"X";
			this->IskvietDelCancelBTN->UseVisualStyleBackColor = false;
			this->IskvietDelCancelBTN->Visible = false;
			this->IskvietDelCancelBTN->Click += gcnew System::EventHandler(this, &kvietimai::IskvietDelCancelBTN_Click);
			// 
			// IskvietEditSaveBTN
			// 
			this->IskvietEditSaveBTN->Location = System::Drawing::Point(261, 474);
			this->IskvietEditSaveBTN->Name = L"IskvietEditSaveBTN";
			this->IskvietEditSaveBTN->Size = System::Drawing::Size(75, 23);
			this->IskvietEditSaveBTN->TabIndex = 22;
			this->IskvietEditSaveBTN->Text = L"Iðsaugoti";
			this->IskvietEditSaveBTN->UseVisualStyleBackColor = true;
			this->IskvietEditSaveBTN->Visible = false;
			this->IskvietEditSaveBTN->Click += gcnew System::EventHandler(this, &kvietimai::IskvietEditSaveBTN_Click);
			// 
			// IskvietNewSaveBTN
			// 
			this->IskvietNewSaveBTN->Location = System::Drawing::Point(172, 474);
			this->IskvietNewSaveBTN->Name = L"IskvietNewSaveBTN";
			this->IskvietNewSaveBTN->Size = System::Drawing::Size(83, 23);
			this->IskvietNewSaveBTN->TabIndex = 14;
			this->IskvietNewSaveBTN->Text = L"Iðsaugoti";
			this->IskvietNewSaveBTN->UseVisualStyleBackColor = true;
			this->IskvietNewSaveBTN->Visible = false;
			this->IskvietNewSaveBTN->Click += gcnew System::EventHandler(this, &kvietimai::IskvietNewSaveBTN_Click);
			// 
			// kvietimai
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(431, 509);
			this->Controls->Add(this->IskvietNewSaveBTN);
			this->Controls->Add(this->IskvietEditSaveBTN);
			this->Controls->Add(this->IskvietDelCancelBTN);
			this->Controls->Add(this->IskvietDelConfirmBTN);
			this->Controls->Add(this->AtlikStatusLabel);
			this->Controls->Add(this->AtlikStatusBTN);
			this->Controls->Add(this->IskvietDeleteBTN);
			this->Controls->Add(this->IskvietEditBTN);
			this->Controls->Add(this->IskvietNewBTN);
			this->Controls->Add(this->IskvietNextBTN);
			this->Controls->Add(this->IskvietPrevBTN);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"kvietimai";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->Text = L"kvietimai";
			this->Load += gcnew System::EventHandler(this, &kvietimai::kvietimai_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void remontaiLangUpdate() { // Funkcija naudojama atnaujinti duomenims, pakeitus rodomà iðkvietimà.
			if (aparatuSarasas[aparataiCID].aparatRemontai.size() != 0) {
				IskvietDataTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].data);
				iskvietAprasymasTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].I_aprasymas);
				IskvietLaikasTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].I_laikas);
				IskvietPaskirtaTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].I_paskyrimas);
				IskvietTelefonaiTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].I_telefonas);
				IskvietVardTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].I_kvietejas);
				if (aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].atlikta) {
					AtlikStatusBTN->BackColor = System::Drawing::Color::ForestGreen;
					AtlikStatusBTN->Text = L"Taip";
					AtlikAprasymasTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].A_aprasymas);
					AtlikDataTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].A_data);
					AtlikLaikasTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].A_laikas);
					AtlikMeistrasTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].A_meistras);
					AtlikPastabosTB->Text = stringConvert(aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].A_pastabos);
				}
				else {
					AtlikStatusBTN->BackColor = System::Drawing::Color::Red;
					AtlikStatusBTN->Text = L"Ne";
					AtlikAprasymasTB->Text = L"";
					AtlikDataTB->Text = L"";
					AtlikLaikasTB->Text = L"";
					AtlikMeistrasTB->Text = L"";
					AtlikPastabosTB->Text = L"";
				}
			}
		}
#pragma endregion
	private: System::Void kvietimai_Load(System::Object^  sender, System::EventArgs^  e) {
		remontaiLangUpdate();
	}
				//Mygtukai keièiantys rodomus duomenis
private: System::Void IskvietPrevBTN_Click(System::Object^  sender, System::EventArgs^  e) {
	if (remontaiCID > 0) {
		remontaiCID--;
		if (aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].atlikta)
			tempAtlikt = true;
		else
			tempAtlikt = false;
	}
	remontaiLangUpdate();
}
private: System::Void IskvietNextBTN_Click(System::Object^  sender, System::EventArgs^  e) {
	if (remontaiCID + 1 < aparatuSarasas[aparataiCID].aparatRemontai.size()) {
		remontaiCID++;
		if (aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].atlikta)
			tempAtlikt = true;
		else
			tempAtlikt = false;
	}
	remontaiLangUpdate();
}
		 //Mygtukai sukuriantys, redaguojantys bei trinantys iðkvietimo áraðus.
private: System::Void IskvietNewBTN_Click(System::Object^  sender, System::EventArgs^  e) {
	remontai temp = {};
	aparatuSarasas[aparataiCID].aparatRemontai.push_back(temp);
	remontaiCID = aparatuSarasas[aparataiCID].aparatRemontai.size() - 1;
	remontaiLangUpdate();
	AtlikStatusBTN->Enabled = true;
	iskvietAprasymasTB->ReadOnly = false;
	IskvietDataTB->Visible = false;
	IskvietLaikasTB->ReadOnly = false;
	IskvietPaskirtaTB->ReadOnly = false;
	IskvietTelefonaiTB->ReadOnly = false;
	IskvietVardTB->ReadOnly = false;
	AtlikAprasymasTB->ReadOnly = false;
	AtlikLaikasTB->ReadOnly = false;
	AtlikMeistrasTB->ReadOnly = false;
	AtlikPastabosTB->ReadOnly = false;
	AtlikStatusBTN->Enabled = true;
	IskvietNewBTN->Visible = false;
	IskvietNewSaveBTN->Visible = true;
	IskvietDataDTP->Visible = true;
	AtlikDataDTP->Visible = true;
	AtlikDataTB->Visible = false;
}
private: System::Void IskvietEditBTN_Click(System::Object^  sender, System::EventArgs^  e) {
	AtlikStatusBTN->Enabled = true;
	iskvietAprasymasTB->ReadOnly = false;
	IskvietDataTB->Visible = false;
	IskvietLaikasTB->ReadOnly = false;
	IskvietPaskirtaTB->ReadOnly = false;
	IskvietTelefonaiTB->ReadOnly = false;
	IskvietVardTB->ReadOnly = false;
	AtlikAprasymasTB->ReadOnly = false;
	AtlikDataTB->ReadOnly = false;
	AtlikLaikasTB->ReadOnly = false;
	AtlikMeistrasTB->ReadOnly = false;
	AtlikPastabosTB->ReadOnly = false;
	AtlikStatusBTN->Enabled = true;
	IskvietEditBTN->Visible = false;
	IskvietEditSaveBTN->Visible = true;
	IskvietDataDTP->Visible = true;
	AtlikDataDTP->Visible = true;
	AtlikDataTB->Visible = false;
}
private: System::Void IskvietDeleteBTN_Click(System::Object^  sender, System::EventArgs^  e) {
	IskvietDeleteBTN->Visible = false;
	IskvietDelConfirmBTN->Visible = true;
	IskvietDelCancelBTN->Visible = true;
}
private: System::Void IskvietNewSaveBTN_Click(System::Object^  sender, System::EventArgs^  e) {
	aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].I_aprasymas = stringConvert(iskvietAprasymasTB->Text);
	aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].data = stringConvert(IskvietDataDTP->Value.ToString("dd/MM/yyyy"));
	aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].I_kvietejas = stringConvert(IskvietVardTB->Text);
	aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].I_laikas = stringConvert(IskvietLaikasTB->Text);
	aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].I_paskyrimas = stringConvert(IskvietPaskirtaTB->Text);
	aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].I_telefonas = stringConvert(IskvietTelefonaiTB->Text);
	if (tempAtlikt)
		aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].atlikta = true;
	else
		aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].atlikta = false;
	aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].A_aprasymas = stringConvert(AtlikAprasymasTB->Text);
	aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].A_data = stringConvert(AtlikDataDTP->Value.ToString("dd/MM/yyyy"));
	aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].A_laikas = stringConvert(AtlikLaikasTB->Text);
	aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].A_meistras = stringConvert(AtlikMeistrasTB->Text);
	aparatuSarasas[aparataiCID].aparatRemontai[remontaiCID].A_pastabos = stringConvert(AtlikPastabosTB->Text);
	iskvietAprasymasTB->ReadOnly = true;
	IskvietLaikasTB->ReadOnly = true;
	IskvietPaskirtaTB->ReadOnly = true;
	IskvietVardTB->ReadOnly = true;
	IskvietTelefonaiTB->ReadOnly = true;
	AtlikAprasymasTB->ReadOnly = true;
	AtlikDataTB->ReadOnly = true;
	AtlikMeistrasTB->ReadOnly = true;
	AtlikLaikasTB->ReadOnly = true;
	AtlikPastabosTB->ReadOnly = true;
	IskvietNewSaveBTN->Visible = false;
	IskvietNewBTN->Visible = true;
	AtlikStatusBTN->Enabled = false;
	IskvietDataTB->Visible = true;
	AtlikDataTB->Visible = true;
	AtlikDataDTP->Visible = false;
	IskvietDataDTP->Visible = false;
	remontaiLangUpdate();
}
		 // Funkcija kontroliuojanti Atlikimo statuso mygtukà.
private: System::Void AtlikStatusBTN_Click(System::Object^  sender, System::EventArgs^  e) {
	if (AtlikStatusBTN->BackColor == System::Drawing::Color::ForestGreen) {
		AtlikStatusBTN->BackColor = System::Drawing::Color::Red;
		AtlikStatusBTN->Text = L"Ne";
		tempAtlikt = false;
	}
	else {
		AtlikStatusBTN->BackColor = System::Drawing::Color::ForestGreen;
		AtlikStatusBTN->Text = L"Taip";
		tempAtlikt = true;
	}
}
private: System::Void IskvietEditSaveBTN_Click(System::Object^  sender, System::EventArgs^  e) {
	IskvietNewSaveBTN_Click(sender, e);
	IskvietEditSaveBTN->Visible = false;
	IskvietEditBTN->Visible = true;
	AtlikStatusBTN->Enabled = false;
}
private: System::Void IskvietDelConfirmBTN_Click(System::Object^  sender, System::EventArgs^  e) {
	aparatuSarasas[aparataiCID].aparatRemontai.erase(aparatuSarasas[aparataiCID].aparatRemontai.begin() + remontaiCID);
	remontaiCID = 0;
	remontaiLangUpdate();
	IskvietDelCancelBTN->Visible = false;
	IskvietDelConfirmBTN->Visible = false;
	IskvietDeleteBTN->Visible = true;
}
private: System::Void IskvietDelCancelBTN_Click(System::Object^  sender, System::EventArgs^  e) {
	IskvietDelCancelBTN->Visible = false;
	IskvietDelConfirmBTN->Visible = false;
	IskvietDeleteBTN->Visible = true;
}
};
}
