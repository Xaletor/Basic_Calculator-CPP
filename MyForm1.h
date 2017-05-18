#pragma once
#include <windows.h>
#include <iostream>
#include <string>

namespace Calculator_Cpp {

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
	private: System::Windows::Forms::TextBox^  resultBox;
	private: System::Windows::Forms::Button^  divideButton;
	private: System::Windows::Forms::Button^  backButton;
	private: System::Windows::Forms::Button^  cancelEntryButton;
	protected:



	private: System::Windows::Forms::Button^  clearButton;
	private: System::Windows::Forms::Button^  sevenButton;


	private: System::Windows::Forms::Button^  eightButton;

	private: System::Windows::Forms::Button^  nineButton;
	private: System::Windows::Forms::Button^  fourButton;


	private: System::Windows::Forms::Button^  fiveButton;

	private: System::Windows::Forms::Button^  sixButton;
	private: System::Windows::Forms::Button^  oneButton;


	private: System::Windows::Forms::Button^  twoButton;

	private: System::Windows::Forms::Button^  threeButton;


	private: System::Windows::Forms::Button^  multiplyButton;
	private: System::Windows::Forms::Button^  subtractButton;
	private: System::Windows::Forms::Button^  additionButton;
	private: System::Windows::Forms::Button^  equalsButton;
	private: System::Windows::Forms::Button^  zeroButton;





	private: System::Windows::Forms::Button^  decimalButton;
	private: System::Windows::Forms::GroupBox^  centerGroupBox;
	private: System::Windows::Forms::GroupBox^  leftSpacerBox;
	private: System::Windows::Forms::GroupBox^  rightSpacerBox;



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
			this->resultBox = (gcnew System::Windows::Forms::TextBox());
			this->divideButton = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->cancelEntryButton = (gcnew System::Windows::Forms::Button());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->sevenButton = (gcnew System::Windows::Forms::Button());
			this->eightButton = (gcnew System::Windows::Forms::Button());
			this->nineButton = (gcnew System::Windows::Forms::Button());
			this->fourButton = (gcnew System::Windows::Forms::Button());
			this->fiveButton = (gcnew System::Windows::Forms::Button());
			this->sixButton = (gcnew System::Windows::Forms::Button());
			this->oneButton = (gcnew System::Windows::Forms::Button());
			this->twoButton = (gcnew System::Windows::Forms::Button());
			this->threeButton = (gcnew System::Windows::Forms::Button());
			this->multiplyButton = (gcnew System::Windows::Forms::Button());
			this->subtractButton = (gcnew System::Windows::Forms::Button());
			this->additionButton = (gcnew System::Windows::Forms::Button());
			this->equalsButton = (gcnew System::Windows::Forms::Button());
			this->zeroButton = (gcnew System::Windows::Forms::Button());
			this->decimalButton = (gcnew System::Windows::Forms::Button());
			this->centerGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->leftSpacerBox = (gcnew System::Windows::Forms::GroupBox());
			this->rightSpacerBox = (gcnew System::Windows::Forms::GroupBox());
			this->centerGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// resultBox
			// 
			this->resultBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->resultBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resultBox->Location = System::Drawing::Point(9, 12);
			this->resultBox->Multiline = true;
			this->resultBox->Name = L"resultBox";
			this->resultBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->resultBox->Size = System::Drawing::Size(663, 65);
			this->resultBox->TabIndex = 0;
			this->resultBox->Text = L"000000000000000";
			this->resultBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->resultBox->WordWrap = false;
			// 
			// divideButton
			// 
			this->divideButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->divideButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divideButton->Location = System::Drawing::Point(251, 19);
			this->divideButton->Name = L"divideButton";
			this->divideButton->Size = System::Drawing::Size(63, 50);
			this->divideButton->TabIndex = 1;
			this->divideButton->Text = L"/";
			this->divideButton->UseVisualStyleBackColor = true;
			this->divideButton->Click += gcnew System::EventHandler(this, &MyForm::divideButton_Click);
			// 
			// backButton
			// 
			this->backButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->backButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backButton->Location = System::Drawing::Point(167, 19);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(63, 34);
			this->backButton->TabIndex = 2;
			this->backButton->Text = L"<--";
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &MyForm::backButton_Click);
			// 
			// cancelEntryButton
			// 
			this->cancelEntryButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->cancelEntryButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelEntryButton->Location = System::Drawing::Point(86, 19);
			this->cancelEntryButton->Name = L"cancelEntryButton";
			this->cancelEntryButton->Size = System::Drawing::Size(63, 34);
			this->cancelEntryButton->TabIndex = 3;
			this->cancelEntryButton->Text = L"CE";
			this->cancelEntryButton->UseVisualStyleBackColor = true;
			this->cancelEntryButton->Click += gcnew System::EventHandler(this, &MyForm::cancelEntryButton_Click);
			// 
			// clearButton
			// 
			this->clearButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->clearButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearButton->Location = System::Drawing::Point(6, 19);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(63, 34);
			this->clearButton->TabIndex = 4;
			this->clearButton->Text = L"C";
			this->clearButton->UseVisualStyleBackColor = true;
			this->clearButton->Click += gcnew System::EventHandler(this, &MyForm::clearButton_Click);
			// 
			// sevenButton
			// 
			this->sevenButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->sevenButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sevenButton->Location = System::Drawing::Point(6, 75);
			this->sevenButton->Name = L"sevenButton";
			this->sevenButton->Size = System::Drawing::Size(63, 50);
			this->sevenButton->TabIndex = 7;
			this->sevenButton->Text = L"7";
			this->sevenButton->UseVisualStyleBackColor = true;
			this->sevenButton->Click += gcnew System::EventHandler(this, &MyForm::sevenButton_Click);
			// 
			// eightButton
			// 
			this->eightButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->eightButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eightButton->Location = System::Drawing::Point(86, 75);
			this->eightButton->Name = L"eightButton";
			this->eightButton->Size = System::Drawing::Size(63, 50);
			this->eightButton->TabIndex = 6;
			this->eightButton->Text = L"8";
			this->eightButton->UseVisualStyleBackColor = true;
			this->eightButton->Click += gcnew System::EventHandler(this, &MyForm::eightButton_Click);
			// 
			// nineButton
			// 
			this->nineButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->nineButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nineButton->Location = System::Drawing::Point(167, 75);
			this->nineButton->Name = L"nineButton";
			this->nineButton->Size = System::Drawing::Size(63, 50);
			this->nineButton->TabIndex = 5;
			this->nineButton->Text = L"9";
			this->nineButton->UseVisualStyleBackColor = true;
			this->nineButton->Click += gcnew System::EventHandler(this, &MyForm::nineButton_Click);
			// 
			// fourButton
			// 
			this->fourButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->fourButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fourButton->Location = System::Drawing::Point(6, 131);
			this->fourButton->Name = L"fourButton";
			this->fourButton->Size = System::Drawing::Size(63, 50);
			this->fourButton->TabIndex = 10;
			this->fourButton->Text = L"4";
			this->fourButton->UseVisualStyleBackColor = true;
			this->fourButton->Click += gcnew System::EventHandler(this, &MyForm::fourButton_Click);
			// 
			// fiveButton
			// 
			this->fiveButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->fiveButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fiveButton->Location = System::Drawing::Point(86, 131);
			this->fiveButton->Name = L"fiveButton";
			this->fiveButton->Size = System::Drawing::Size(63, 50);
			this->fiveButton->TabIndex = 9;
			this->fiveButton->Text = L"5";
			this->fiveButton->UseVisualStyleBackColor = true;
			this->fiveButton->Click += gcnew System::EventHandler(this, &MyForm::fiveButton_Click);
			// 
			// sixButton
			// 
			this->sixButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->sixButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sixButton->Location = System::Drawing::Point(167, 131);
			this->sixButton->Name = L"sixButton";
			this->sixButton->Size = System::Drawing::Size(63, 50);
			this->sixButton->TabIndex = 8;
			this->sixButton->Text = L"6";
			this->sixButton->UseVisualStyleBackColor = true;
			this->sixButton->Click += gcnew System::EventHandler(this, &MyForm::sixButton_Click);
			// 
			// oneButton
			// 
			this->oneButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->oneButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->oneButton->Location = System::Drawing::Point(6, 187);
			this->oneButton->Name = L"oneButton";
			this->oneButton->Size = System::Drawing::Size(63, 50);
			this->oneButton->TabIndex = 13;
			this->oneButton->Text = L"1";
			this->oneButton->UseVisualStyleBackColor = true;
			this->oneButton->Click += gcnew System::EventHandler(this, &MyForm::oneButton_Click);
			// 
			// twoButton
			// 
			this->twoButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->twoButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->twoButton->Location = System::Drawing::Point(86, 187);
			this->twoButton->Name = L"twoButton";
			this->twoButton->Size = System::Drawing::Size(63, 50);
			this->twoButton->TabIndex = 12;
			this->twoButton->Text = L"2";
			this->twoButton->UseVisualStyleBackColor = true;
			this->twoButton->Click += gcnew System::EventHandler(this, &MyForm::twoButton_Click);
			// 
			// threeButton
			// 
			this->threeButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->threeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->threeButton->Location = System::Drawing::Point(167, 187);
			this->threeButton->Name = L"threeButton";
			this->threeButton->Size = System::Drawing::Size(63, 50);
			this->threeButton->TabIndex = 11;
			this->threeButton->Text = L"3";
			this->threeButton->UseVisualStyleBackColor = true;
			this->threeButton->Click += gcnew System::EventHandler(this, &MyForm::threeButton_Click);
			// 
			// multiplyButton
			// 
			this->multiplyButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->multiplyButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiplyButton->Location = System::Drawing::Point(251, 75);
			this->multiplyButton->Name = L"multiplyButton";
			this->multiplyButton->Size = System::Drawing::Size(63, 50);
			this->multiplyButton->TabIndex = 14;
			this->multiplyButton->Text = L"x";
			this->multiplyButton->UseVisualStyleBackColor = true;
			this->multiplyButton->Click += gcnew System::EventHandler(this, &MyForm::multiplyButton_Click);
			// 
			// subtractButton
			// 
			this->subtractButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->subtractButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtractButton->Location = System::Drawing::Point(251, 131);
			this->subtractButton->Name = L"subtractButton";
			this->subtractButton->Size = System::Drawing::Size(63, 50);
			this->subtractButton->TabIndex = 15;
			this->subtractButton->Text = L"-";
			this->subtractButton->UseVisualStyleBackColor = true;
			this->subtractButton->Click += gcnew System::EventHandler(this, &MyForm::subtractButton_Click);
			// 
			// additionButton
			// 
			this->additionButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->additionButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->additionButton->Location = System::Drawing::Point(251, 187);
			this->additionButton->Name = L"additionButton";
			this->additionButton->Size = System::Drawing::Size(63, 50);
			this->additionButton->TabIndex = 16;
			this->additionButton->Text = L"+";
			this->additionButton->UseVisualStyleBackColor = true;
			this->additionButton->Click += gcnew System::EventHandler(this, &MyForm::additionButton_Click);
			// 
			// equalsButton
			// 
			this->equalsButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->equalsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equalsButton->Location = System::Drawing::Point(251, 243);
			this->equalsButton->Name = L"equalsButton";
			this->equalsButton->Size = System::Drawing::Size(63, 50);
			this->equalsButton->TabIndex = 17;
			this->equalsButton->Text = L"=";
			this->equalsButton->UseVisualStyleBackColor = true;
			this->equalsButton->Click += gcnew System::EventHandler(this, &MyForm::equalsButton_Click);
			// 
			// zeroButton
			// 
			this->zeroButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->zeroButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zeroButton->Location = System::Drawing::Point(7, 243);
			this->zeroButton->Name = L"zeroButton";
			this->zeroButton->Size = System::Drawing::Size(142, 50);
			this->zeroButton->TabIndex = 18;
			this->zeroButton->Text = L"0";
			this->zeroButton->UseVisualStyleBackColor = true;
			this->zeroButton->Click += gcnew System::EventHandler(this, &MyForm::zeroButton_Click);
			// 
			// decimalButton
			// 
			this->decimalButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->decimalButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->decimalButton->Location = System::Drawing::Point(167, 243);
			this->decimalButton->Name = L"decimalButton";
			this->decimalButton->Size = System::Drawing::Size(63, 50);
			this->decimalButton->TabIndex = 19;
			this->decimalButton->Text = L".";
			this->decimalButton->UseVisualStyleBackColor = true;
			this->decimalButton->Click += gcnew System::EventHandler(this, &MyForm::decimalButton_Click);
			// 
			// centerGroupBox
			// 
			this->centerGroupBox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->centerGroupBox->BackColor = System::Drawing::Color::LightGray;
			this->centerGroupBox->Controls->Add(this->decimalButton);
			this->centerGroupBox->Controls->Add(this->clearButton);
			this->centerGroupBox->Controls->Add(this->zeroButton);
			this->centerGroupBox->Controls->Add(this->divideButton);
			this->centerGroupBox->Controls->Add(this->equalsButton);
			this->centerGroupBox->Controls->Add(this->backButton);
			this->centerGroupBox->Controls->Add(this->additionButton);
			this->centerGroupBox->Controls->Add(this->cancelEntryButton);
			this->centerGroupBox->Controls->Add(this->subtractButton);
			this->centerGroupBox->Controls->Add(this->nineButton);
			this->centerGroupBox->Controls->Add(this->multiplyButton);
			this->centerGroupBox->Controls->Add(this->eightButton);
			this->centerGroupBox->Controls->Add(this->oneButton);
			this->centerGroupBox->Controls->Add(this->sevenButton);
			this->centerGroupBox->Controls->Add(this->twoButton);
			this->centerGroupBox->Controls->Add(this->sixButton);
			this->centerGroupBox->Controls->Add(this->threeButton);
			this->centerGroupBox->Controls->Add(this->fiveButton);
			this->centerGroupBox->Controls->Add(this->fourButton);
			this->centerGroupBox->Location = System::Drawing::Point(180, 83);
			this->centerGroupBox->Name = L"centerGroupBox";
			this->centerGroupBox->Size = System::Drawing::Size(320, 296);
			this->centerGroupBox->TabIndex = 20;
			this->centerGroupBox->TabStop = false;
			// 
			// leftSpacerBox
			// 
			this->leftSpacerBox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->leftSpacerBox->BackColor = System::Drawing::Color::Silver;
			this->leftSpacerBox->Location = System::Drawing::Point(12, 83);
			this->leftSpacerBox->Name = L"leftSpacerBox";
			this->leftSpacerBox->Size = System::Drawing::Size(162, 296);
			this->leftSpacerBox->TabIndex = 21;
			this->leftSpacerBox->TabStop = false;
			// 
			// rightSpacerBox
			// 
			this->rightSpacerBox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->rightSpacerBox->BackColor = System::Drawing::Color::Silver;
			this->rightSpacerBox->Location = System::Drawing::Point(506, 83);
			this->rightSpacerBox->Name = L"rightSpacerBox";
			this->rightSpacerBox->Size = System::Drawing::Size(166, 296);
			this->rightSpacerBox->TabIndex = 22;
			this->rightSpacerBox->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(684, 389);
			this->Controls->Add(this->rightSpacerBox);
			this->Controls->Add(this->leftSpacerBox);
			this->Controls->Add(this->resultBox);
			this->Controls->Add(this->centerGroupBox);
			this->MaximumSize = System::Drawing::Size(700, 428);
			this->MinimumSize = System::Drawing::Size(359, 428);
			this->Name = L"MyForm";
			this->Text = L"C++ Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->centerGroupBox->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	// Global Variables

		String^ mem1 = "";
		String^ mem2 = "";

		bool add = false;
		bool sub = false;
		bool mul = false;
		bool div = false;
		bool res = false;

	// Set operations to false and result box to blank
	private: System::Void SetFalse()
	{
		add = false;
		sub = false;
		mul = false;
		div = false;
		SetBox("");
	}
	
	// Sets the text of result box
	private: System::Void SetBox(String^ text)
	{
		this->resultBox->Text = text;
	}
	// Adds text to result box
	private: System::Void AddToBox(String^ text)
	{
		if (res)
		{
			this->SetBox("");
			res = false;
		}
		this->resultBox->Text += text;
	}
	private: System::Void ClearMemory()
	{
		mem1 = "";
		mem2 = "";
		SetBox("");
	}

	// When form loads set box to blank
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		SetBox("");
	}
	// When C is pressed clear mems and result box
	private: System::Void clearButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		ClearMemory();
		SetBox("");
	}

	// When = is pressed check if mems not blank and do math
	private: System::Void equalsButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (res) 
		{
			mem1 = resultBox->Text;
		}
		else
		{
			mem2 = resultBox->Text;
		}
		if (mem1 != "" && mem2 != "") 
		{
			double x = 0,y = 0,z = 0;
			
			try 
			{
				x = x.Parse(mem1);
				y = y.Parse(mem2);

				if (add)
				{
					z = x + y;
				}
				else if (sub)
				{
					z = x - y;
				}
				else if (mul)
				{
					z = x * y;
				}
				else if (div)
				{
					z = x / y;
				}
				SetBox(z.ToString());
				res = true;
			}
			catch(Exception^ ex)
			{
				MessageBox::Show(ex->Message, "ERROR", MessageBoxButtons::OK);
				ClearMemory();
			}
		}
	}

	// Number buttons when pressed call AddToBox() and add corresponding number to resultbox
#pragma region NumButtons (1,2,3,4,5,6,7,8,9,0)
	private: System::Void nineButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		AddToBox("9");
	}

	private: System::Void eightButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		AddToBox("8");
	}

	private: System::Void sevenButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		AddToBox("7");
	}

	private: System::Void sixButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		AddToBox("6");
	}

	private: System::Void fiveButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		AddToBox("5");
	}

	private: System::Void fourButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		AddToBox("4");
	}

	private: System::Void threeButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		AddToBox("3");
	}

	private: System::Void twoButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		AddToBox("2");
	}

	private: System::Void oneButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		AddToBox("1");
	}

	private: System::Void zeroButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		AddToBox("0");
	}

#pragma endregion


	// When . is pressed add decimal point, get rid of any that may exist
	private: System::Void decimalButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (resultBox->Text->Contains("."))
		{
			this->resultBox->Text = resultBox->Text->Replace(".", "");
		}
		AddToBox(".");
	}
	// When / is pressed set all operations to false then set divide to true
	private: System::Void divideButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		mem1 = this->resultBox->Text;
		SetFalse();
		div = true;
	}
	// When x is pressed set all operations to false then set multiply to true
	private: System::Void multiplyButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		mem1 = this->resultBox->Text;
		SetFalse();
		mul = true;
	}
	// When - is pressed set all operations to false then set subtraction to true
	private: System::Void subtractButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		mem1 = this->resultBox->Text;
		SetFalse();
		sub = true;
	}
	// When + is pressed set all operations to false then set addition to true
	private: System::Void additionButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		mem1 = this->resultBox->Text;
		SetFalse();
		add = true;
	}
	// When CE is pressed, simply put the resultbox to blank - store no strings
	private: System::Void cancelEntryButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		SetBox("");
	}
	// When <-- is pressed remove earliest string literal entered to result box
	private: System::Void backButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		// Check to see if it is not blank or contains Exponent
		if (resultBox->Text != "" && !resultBox->Text->Contains("E"))
		{
			this->resultBox->Text = resultBox->Text->Remove(resultBox->Text->Length - 1);
		}
	}
	};
}
