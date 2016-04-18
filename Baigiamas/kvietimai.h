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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  IskvietVardTB;
	private: System::Windows::Forms::Label^  IskvietVardLabel;

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
			this->IskvietDataLabel = (gcnew System::Windows::Forms::Label());
			this->IskvietDataTB = (gcnew System::Windows::Forms::TextBox());
			this->IskvietLaikasLabel = (gcnew System::Windows::Forms::Label());
			this->IskvietLaikasTB = (gcnew System::Windows::Forms::TextBox());
			this->IskvietVardLabel = (gcnew System::Windows::Forms::Label());
			this->IskvietVardTB = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->IskvietVardTB);
			this->groupBox1->Controls->Add(this->IskvietVardLabel);
			this->groupBox1->Controls->Add(this->IskvietLaikasTB);
			this->groupBox1->Controls->Add(this->IskvietLaikasLabel);
			this->groupBox1->Controls->Add(this->IskvietDataTB);
			this->groupBox1->Controls->Add(this->IskvietDataLabel);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(584, 236);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
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
			// IskvietDataTB
			// 
			this->IskvietDataTB->Location = System::Drawing::Point(91, 17);
			this->IskvietDataTB->Name = L"IskvietDataTB";
			this->IskvietDataTB->Size = System::Drawing::Size(100, 20);
			this->IskvietDataTB->TabIndex = 1;
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
			// IskvietLaikasTB
			// 
			this->IskvietLaikasTB->Location = System::Drawing::Point(296, 17);
			this->IskvietLaikasTB->Name = L"IskvietLaikasTB";
			this->IskvietLaikasTB->Size = System::Drawing::Size(100, 20);
			this->IskvietLaikasTB->TabIndex = 3;
			// 
			// IskvietVardLabel
			// 
			this->IskvietVardLabel->AutoSize = true;
			this->IskvietVardLabel->Location = System::Drawing::Point(412, 20);
			this->IskvietVardLabel->Name = L"IskvietVardLabel";
			this->IskvietVardLabel->Size = System::Drawing::Size(50, 13);
			this->IskvietVardLabel->TabIndex = 4;
			this->IskvietVardLabel->Text = L"Kvietëjas";
			// 
			// IskvietVardTB
			// 
			this->IskvietVardTB->Location = System::Drawing::Point(468, 17);
			this->IskvietVardTB->Name = L"IskvietVardTB";
			this->IskvietVardTB->Size = System::Drawing::Size(100, 20);
			this->IskvietVardTB->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Apraðymas";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(91, 49);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(305, 75);
			this->textBox1->TabIndex = 7;
			// 
			// kvietimai
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(609, 261);
			this->Controls->Add(this->groupBox1);
			this->Name = L"kvietimai";
			this->Text = L"kvietimai";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
