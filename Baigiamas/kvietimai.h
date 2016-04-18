#pragma once

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
			this->iskvietAprasymasTB = (gcnew System::Windows::Forms::TextBox());
			this->IskvietAprasymasLabel = (gcnew System::Windows::Forms::Label());
			this->IskvietVardTB = (gcnew System::Windows::Forms::TextBox());
			this->IskvietVardLabel = (gcnew System::Windows::Forms::Label());
			this->IskvietLaikasTB = (gcnew System::Windows::Forms::TextBox());
			this->IskvietLaikasLabel = (gcnew System::Windows::Forms::Label());
			this->IskvietDataTB = (gcnew System::Windows::Forms::TextBox());
			this->IskvietDataLabel = (gcnew System::Windows::Forms::Label());
			this->IskvietPaskirtaLabel = (gcnew System::Windows::Forms::Label());
			this->IskvietPaskirtaTB = (gcnew System::Windows::Forms::TextBox());
			this->IskvietTelefonaiLabel = (gcnew System::Windows::Forms::Label());
			this->IskvietTelefonaiTB = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
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
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
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
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(407, 206);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Iðkvietimo info";
			// 
			// iskvietAprasymasTB
			// 
			this->iskvietAprasymasTB->AcceptsReturn = true;
			this->iskvietAprasymasTB->Location = System::Drawing::Point(71, 43);
			this->iskvietAprasymasTB->Multiline = true;
			this->iskvietAprasymasTB->Name = L"iskvietAprasymasTB";
			this->iskvietAprasymasTB->ReadOnly = true;
			this->iskvietAprasymasTB->Size = System::Drawing::Size(325, 75);
			this->iskvietAprasymasTB->TabIndex = 7;
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
			this->IskvietVardTB->TabIndex = 5;
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
			this->IskvietLaikasTB->TabIndex = 3;
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
			// IskvietPaskirtaLabel
			// 
			this->IskvietPaskirtaLabel->AutoSize = true;
			this->IskvietPaskirtaLabel->Location = System::Drawing::Point(7, 153);
			this->IskvietPaskirtaLabel->Name = L"IskvietPaskirtaLabel";
			this->IskvietPaskirtaLabel->Size = System::Drawing::Size(68, 13);
			this->IskvietPaskirtaLabel->TabIndex = 8;
			this->IskvietPaskirtaLabel->Text = L"Kam paskirta";
			// 
			// IskvietPaskirtaTB
			// 
			this->IskvietPaskirtaTB->Location = System::Drawing::Point(81, 150);
			this->IskvietPaskirtaTB->Name = L"IskvietPaskirtaTB";
			this->IskvietPaskirtaTB->ReadOnly = true;
			this->IskvietPaskirtaTB->Size = System::Drawing::Size(315, 20);
			this->IskvietPaskirtaTB->TabIndex = 9;
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
			// IskvietTelefonaiTB
			// 
			this->IskvietTelefonaiTB->Location = System::Drawing::Point(64, 176);
			this->IskvietTelefonaiTB->Name = L"IskvietTelefonaiTB";
			this->IskvietTelefonaiTB->ReadOnly = true;
			this->IskvietTelefonaiTB->Size = System::Drawing::Size(332, 20);
			this->IskvietTelefonaiTB->TabIndex = 11;
			// 
			// groupBox2
			// 
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
			this->groupBox2->Location = System::Drawing::Point(12, 224);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(407, 206);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Iðkvietimo info";
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
			this->AtlikPastabosTB->TabIndex = 9;
			// 
			// AtlikAprasymasTB
			// 
			this->AtlikAprasymasTB->AcceptsReturn = true;
			this->AtlikAprasymasTB->Location = System::Drawing::Point(71, 43);
			this->AtlikAprasymasTB->Multiline = true;
			this->AtlikAprasymasTB->Name = L"AtlikAprasymasTB";
			this->AtlikAprasymasTB->ReadOnly = true;
			this->AtlikAprasymasTB->Size = System::Drawing::Size(325, 75);
			this->AtlikAprasymasTB->TabIndex = 7;
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
			this->AtlikMeistrasTB->TabIndex = 5;
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
			this->AtlikLaikasTB->TabIndex = 3;
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
			this->IskvietPrevBTN->Location = System::Drawing::Point(13, 433);
			this->IskvietPrevBTN->Name = L"IskvietPrevBTN";
			this->IskvietPrevBTN->Size = System::Drawing::Size(75, 23);
			this->IskvietPrevBTN->TabIndex = 13;
			this->IskvietPrevBTN->Text = L"<----";
			this->IskvietPrevBTN->UseVisualStyleBackColor = true;
			// 
			// IskvietNextBTN
			// 
			this->IskvietNextBTN->Location = System::Drawing::Point(95, 433);
			this->IskvietNextBTN->Name = L"IskvietNextBTN";
			this->IskvietNextBTN->Size = System::Drawing::Size(75, 23);
			this->IskvietNextBTN->TabIndex = 14;
			this->IskvietNextBTN->Text = L"---->";
			this->IskvietNextBTN->UseVisualStyleBackColor = true;
			// 
			// IskvietNewBTN
			// 
			this->IskvietNewBTN->Location = System::Drawing::Point(177, 433);
			this->IskvietNewBTN->Name = L"IskvietNewBTN";
			this->IskvietNewBTN->Size = System::Drawing::Size(75, 23);
			this->IskvietNewBTN->TabIndex = 15;
			this->IskvietNewBTN->Text = L"Naujas";
			this->IskvietNewBTN->UseVisualStyleBackColor = true;
			// 
			// IskvietEditBTN
			// 
			this->IskvietEditBTN->Location = System::Drawing::Point(259, 433);
			this->IskvietEditBTN->Name = L"IskvietEditBTN";
			this->IskvietEditBTN->Size = System::Drawing::Size(75, 23);
			this->IskvietEditBTN->TabIndex = 16;
			this->IskvietEditBTN->Text = L"Redaguoti";
			this->IskvietEditBTN->UseVisualStyleBackColor = true;
			// 
			// IskvietDeleteBTN
			// 
			this->IskvietDeleteBTN->Location = System::Drawing::Point(341, 433);
			this->IskvietDeleteBTN->Name = L"IskvietDeleteBTN";
			this->IskvietDeleteBTN->Size = System::Drawing::Size(75, 23);
			this->IskvietDeleteBTN->TabIndex = 17;
			this->IskvietDeleteBTN->Text = L"Trinti";
			this->IskvietDeleteBTN->UseVisualStyleBackColor = true;
			// 
			// kvietimai
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(431, 468);
			this->Controls->Add(this->IskvietDeleteBTN);
			this->Controls->Add(this->IskvietEditBTN);
			this->Controls->Add(this->IskvietNewBTN);
			this->Controls->Add(this->IskvietNextBTN);
			this->Controls->Add(this->IskvietPrevBTN);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"kvietimai";
			this->Text = L"kvietimai";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
