#pragma once
#include "User.h"
#include <iostream>
#include <vector>
#include "main.cpp"
#include <msclr\marshal_cppstd.h>
#include <msclr\marshal.h>
using namespace msclr::interop;

using namespace System ::Runtime::InteropServices;

//using namespace std;

namespace FinalProject2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User ^user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			lbUserInfo->Text = "ID: " + user->id + "Name:   " + user->name +
				"   Email: " + user->email;


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btBoyer;
	private: System::Windows::Forms::Button^ btrabinKarp;
	private: System::Windows::Forms::TextBox^ textRabinString;








	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBoyerString;

	private: System::Windows::Forms::Button^ btExit;
	private: System::Windows::Forms::Label^ lbUserInfo;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textRabinPattern;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btBoyer = (gcnew System::Windows::Forms::Button());
			this->btrabinKarp = (gcnew System::Windows::Forms::Button());
			this->textRabinString = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBoyerString = (gcnew System::Windows::Forms::TextBox());
			this->btExit = (gcnew System::Windows::Forms::Button());
			this->lbUserInfo = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textRabinPattern = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(482, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(389, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CSC-212 Final Project";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(372, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(593, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Rabin-Karp and Boyer Moore Algorithms";
			// 
			// btBoyer
			// 
			this->btBoyer->BackColor = System::Drawing::Color::Black;
			this->btBoyer->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btBoyer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btBoyer->Location = System::Drawing::Point(34, 413);
			this->btBoyer->Margin = System::Windows::Forms::Padding(0);
			this->btBoyer->Name = L"btBoyer";
			this->btBoyer->Size = System::Drawing::Size(241, 39);
			this->btBoyer->TabIndex = 5;
			this->btBoyer->Text = L"Boyer Moore";
			this->btBoyer->UseVisualStyleBackColor = false;
			// 
			// btrabinKarp
			// 
			this->btrabinKarp->BackColor = System::Drawing::Color::Black;
			this->btrabinKarp->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btrabinKarp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btrabinKarp->Location = System::Drawing::Point(34, 271);
			this->btrabinKarp->Margin = System::Windows::Forms::Padding(0);
			this->btrabinKarp->Name = L"btrabinKarp";
			this->btrabinKarp->Size = System::Drawing::Size(228, 39);
			this->btrabinKarp->TabIndex = 6;
			this->btrabinKarp->Text = L"Rabin-Karp";
			this->btrabinKarp->UseVisualStyleBackColor = false;
			this->btrabinKarp->Click += gcnew System::EventHandler(this, &MainForm::btrabinKarp_Click);
			// 
			// textRabinString
			// 
			this->textRabinString->BackColor = System::Drawing::Color::Black;
			this->textRabinString->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textRabinString->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textRabinString->ForeColor = System::Drawing::Color::White;
			this->textRabinString->Location = System::Drawing::Point(77, 339);
			this->textRabinString->Name = L"textRabinString";
			this->textRabinString->Size = System::Drawing::Size(271, 28);
			this->textRabinString->TabIndex = 7;
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(68, 373);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(287, 2);
			this->panel1->TabIndex = 8;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(66, 507);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(287, 2);
			this->panel2->TabIndex = 10;
			// 
			// textBoyerString
			// 
			this->textBoyerString->BackColor = System::Drawing::Color::Black;
			this->textBoyerString->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoyerString->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoyerString->ForeColor = System::Drawing::Color::White;
			this->textBoyerString->Location = System::Drawing::Point(76, 473);
			this->textBoyerString->Name = L"textBoyerString";
			this->textBoyerString->Size = System::Drawing::Size(271, 28);
			this->textBoyerString->TabIndex = 9;
			// 
			// btExit
			// 
			this->btExit->BackColor = System::Drawing::Color::Black;
			this->btExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btExit->Location = System::Drawing::Point(880, 461);
			this->btExit->Margin = System::Windows::Forms::Padding(0);
			this->btExit->Name = L"btExit";
			this->btExit->Size = System::Drawing::Size(159, 41);
			this->btExit->TabIndex = 11;
			this->btExit->Text = L"Exit";
			this->btExit->UseVisualStyleBackColor = false;
			this->btExit->Click += gcnew System::EventHandler(this, &MainForm::btExit_Click);
			// 
			// lbUserInfo
			// 
			this->lbUserInfo->AutoSize = true;
			this->lbUserInfo->BackColor = System::Drawing::Color::Black;
			this->lbUserInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUserInfo->Location = System::Drawing::Point(139, 146);
			this->lbUserInfo->Name = L"lbUserInfo";
			this->lbUserInfo->Size = System::Drawing::Size(64, 29);
			this->lbUserInfo->TabIndex = 12;
			this->lbUserInfo->Text = L"User";
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(474, 373);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(287, 2);
			this->panel3->TabIndex = 15;
			// 
			// textRabinPattern
			// 
			this->textRabinPattern->BackColor = System::Drawing::Color::Black;
			this->textRabinPattern->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textRabinPattern->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textRabinPattern->ForeColor = System::Drawing::Color::White;
			this->textRabinPattern->Location = System::Drawing::Point(483, 339);
			this->textRabinPattern->Name = L"textRabinPattern";
			this->textRabinPattern->Size = System::Drawing::Size(271, 28);
			this->textRabinPattern->TabIndex = 14;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1210, 546);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->textRabinPattern);
			this->Controls->Add(this->lbUserInfo);
			this->Controls->Add(this->btExit);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->textBoyerString);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textRabinString);
			this->Controls->Add(this->btrabinKarp);
			this->Controls->Add(this->btBoyer);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

private: System::Void btrabinKarp_Click(System::Object^ sender, System::EventArgs^ e) {


	std::string text_entry = msclr::interop::marshal_as<std::string>(textRabinString->Text);
	std::string pattern_entry = msclr::interop::marshal_as<std::string>(textRabinPattern->Text);
	int q = 13;
	
	
	char* text = new char[text_entry.length()];
	char* pattern = new char[pattern_entry.length()];

	std::strcpy(text, text_entry.c_str());
	std::strcpy(pattern, pattern_entry.c_str());

	rabinKarp(pattern, text, q);
	
	
}
};
}
