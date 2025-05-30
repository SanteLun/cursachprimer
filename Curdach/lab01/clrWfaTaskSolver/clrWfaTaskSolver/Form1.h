#pragma once
#include <math.h>
#include "..\..\Class\TTask.h"
#include "..\..\Module\SHASmodule.h"
namespace clrWfaTaskSolver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonTaskSolve;
	protected: 
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBoxY;
	private: System::Windows::Forms::TextBox^  textBoxX;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonTaskSolve = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxY = (gcnew System::Windows::Forms::TextBox());
			this->textBoxX = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonTaskSolve
			// 
			this->buttonTaskSolve->Location = System::Drawing::Point(171, 114);
			this->buttonTaskSolve->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonTaskSolve->Name = L"buttonTaskSolve";
			this->buttonTaskSolve->Size = System::Drawing::Size(169, 42);
			this->buttonTaskSolve->TabIndex = 11;
			this->buttonTaskSolve->Text = L"������ ������";
			this->buttonTaskSolve->UseVisualStyleBackColor = true;
			this->buttonTaskSolve->Click += gcnew System::EventHandler(this, &Form1::buttonTaskSolve_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(128, 185);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 25);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Y = ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(128, 59);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 25);
			this->label2->TabIndex = 9;
			this->label2->Text = L"X = ";
			// 
			// textBoxY
			// 
			this->textBoxY->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxY->Location = System::Drawing::Point(191, 185);
			this->textBoxY->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxY->Name = L"textBoxY";
			this->textBoxY->ReadOnly = true;
			this->textBoxY->Size = System::Drawing::Size(133, 22);
			this->textBoxY->TabIndex = 8;
			// 
			// textBoxX
			// 
			this->textBoxX->BackColor = System::Drawing::SystemColors::Menu;
			this->textBoxX->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxX->Location = System::Drawing::Point(191, 62);
			this->textBoxX->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxX->Name = L"textBoxX";
			this->textBoxX->Size = System::Drawing::Size(133, 22);
			this->textBoxX->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(16, 11);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(455, 27);
			this->label1->TabIndex = 6;
			this->label1->Text = L"���������� �������� ������� y = arctg(x)";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(497, 255);
			this->Controls->Add(this->buttonTaskSolve);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxY);
			this->Controls->Add(this->textBoxX);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Form1";
			this->Text = L"������� �.�.";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonTaskSolve_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				    int iRet = -1;
					String^ s = textBoxX->Text->ToString();
					double x = System::Convert::ToDouble(s);
					TTask* ptr = new TTask();
					ptr->setX(x);
					iRet = SHASmodule(ptr);
					if (iRet == 0)
					{
					double y = ptr->getY();
					 y = floor(y*1000)/1000;
					s = System::Convert::ToString(y);
					textBoxY->Text = s;
					}
					delete ptr;
					ptr = 0;
			 }
};
}


