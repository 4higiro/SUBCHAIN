// Repeat including protect
#pragma once

// Project namespace
namespace SUBCHAIN {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class form : public System::Windows::Forms::Form
	{
	public:
		form(void)
		{
			InitializeComponent();
		}

	protected:
		~form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;


	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(124, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Алгоритм Нидлмана-Вунша";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Слово 1:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 202);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 22);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Выход:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 22);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Слово 2:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Azure;
			this->textBox1->Location = System::Drawing::Point(88, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(317, 31);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Azure;
			this->textBox2->Location = System::Drawing::Point(88, 123);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(317, 31);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Azure;
			this->textBox3->Location = System::Drawing::Point(88, 199);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(317, 31);
			this->textBox3->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 251);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(182, 22);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Матрица закрашенности: ";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Azure;
			this->textBox4->Location = System::Drawing::Point(23, 292);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(179, 117);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Azure;
			this->textBox5->Location = System::Drawing::Point(226, 292);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(179, 117);
			this->textBox5->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 433);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(382, 35);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(222, 251);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(150, 22);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Матрица совпадений:";
			// 
			// form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)));
			this->ClientSize = System::Drawing::Size(431, 487);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Mistral", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"form";
			this->Text = L"Информация";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	};
}
