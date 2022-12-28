#pragma once
#include <cstdlib>  // Potrzebna do u¿ycia funkcji rand()
#include <ctime>    // Potrzebna do u¿ycia funkcji time()
#include "help.h"

namespace RPSLS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;




	/// <summary>
	/// Summary for gra
	/// </summary>
	public ref class gra : public System::Windows::Forms::Form
	{
		int wyborGracza = 0;
		int licznikG =0;
		int licznikK = 0;

	private: System::Windows::Forms::Label^ playerName;
	private: System::Windows::Forms::Button^ changeName;
	private: System::Windows::Forms::TextBox^ txtBoxPlayerName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ txtWynik;






	private: System::Windows::Forms::Label^ label1;



	public:
		gra(void)
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
		~gra()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ rock;
	protected:
	private: System::Windows::Forms::Button^ paper;
	private: System::Windows::Forms::Button^ scissors;
	private: System::Windows::Forms::Button^ lizard;
	private: System::Windows::Forms::Button^ spock;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::PictureBox^ pictureGracz;
	private: System::Windows::Forms::PictureBox^ pictureKomputer;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblLicznikG;
	private: System::Windows::Forms::Label^ lblLicznikK;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ reset;

	private: System::Windows::Forms::Button^ newGame;

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(gra::typeid));
			this->rock = (gcnew System::Windows::Forms::Button());
			this->paper = (gcnew System::Windows::Forms::Button());
			this->scissors = (gcnew System::Windows::Forms::Button());
			this->lizard = (gcnew System::Windows::Forms::Button());
			this->spock = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureGracz = (gcnew System::Windows::Forms::PictureBox());
			this->pictureKomputer = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblLicznikG = (gcnew System::Windows::Forms::Label());
			this->lblLicznikK = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->reset = (gcnew System::Windows::Forms::Button());
			this->newGame = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->playerName = (gcnew System::Windows::Forms::Label());
			this->changeName = (gcnew System::Windows::Forms::Button());
			this->txtBoxPlayerName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txtWynik = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureGracz))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureKomputer))->BeginInit();
			this->SuspendLayout();
			// 
			// rock
			// 
			this->rock->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rock.BackgroundImage")));
			this->rock->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->rock->Enabled = false;
			this->rock->Location = System::Drawing::Point(13, 369);
			this->rock->Name = L"rock";
			this->rock->Size = System::Drawing::Size(130, 130);
			this->rock->TabIndex = 0;
			this->rock->Tag = L"rock";
			this->rock->UseVisualStyleBackColor = true;
			this->rock->Click += gcnew System::EventHandler(this, &gra::rock_Click);
			// 
			// paper
			// 
			this->paper->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"paper.BackgroundImage")));
			this->paper->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->paper->Enabled = false;
			this->paper->Location = System::Drawing::Point(149, 369);
			this->paper->Name = L"paper";
			this->paper->Size = System::Drawing::Size(130, 130);
			this->paper->TabIndex = 1;
			this->paper->Tag = L"paper";
			this->paper->UseVisualStyleBackColor = true;
			this->paper->Click += gcnew System::EventHandler(this, &gra::paper_Click);
			// 
			// scissors
			// 
			this->scissors->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"scissors.BackgroundImage")));
			this->scissors->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->scissors->Enabled = false;
			this->scissors->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->scissors->Location = System::Drawing::Point(285, 369);
			this->scissors->Name = L"scissors";
			this->scissors->Size = System::Drawing::Size(130, 130);
			this->scissors->TabIndex = 2;
			this->scissors->Tag = L"scissors";
			this->scissors->UseVisualStyleBackColor = true;
			this->scissors->Click += gcnew System::EventHandler(this, &gra::scissors_Click);
			// 
			// lizard
			// 
			this->lizard->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lizard.BackgroundImage")));
			this->lizard->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->lizard->Enabled = false;
			this->lizard->Location = System::Drawing::Point(421, 369);
			this->lizard->Name = L"lizard";
			this->lizard->Size = System::Drawing::Size(130, 130);
			this->lizard->TabIndex = 3;
			this->lizard->Tag = L"lizard";
			this->lizard->UseVisualStyleBackColor = true;
			this->lizard->Click += gcnew System::EventHandler(this, &gra::lizard_Click);
			// 
			// spock
			// 
			this->spock->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"spock.BackgroundImage")));
			this->spock->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->spock->Enabled = false;
			this->spock->Location = System::Drawing::Point(557, 369);
			this->spock->Name = L"spock";
			this->spock->Size = System::Drawing::Size(130, 130);
			this->spock->TabIndex = 4;
			this->spock->Tag = L"spock";
			this->spock->UseVisualStyleBackColor = true;
			this->spock->Click += gcnew System::EventHandler(this, &gra::spock_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"question.png");
			this->imageList1->Images->SetKeyName(1, L"rock.png");
			this->imageList1->Images->SetKeyName(2, L"paper.png");
			this->imageList1->Images->SetKeyName(3, L"scissors.png");
			this->imageList1->Images->SetKeyName(4, L"lizard.png");
			this->imageList1->Images->SetKeyName(5, L"spock.png");
			// 
			// pictureGracz
			// 
			this->pictureGracz->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureGracz->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureGracz.Image")));
			this->pictureGracz->Location = System::Drawing::Point(29, 23);
			this->pictureGracz->Name = L"pictureGracz";
			this->pictureGracz->Size = System::Drawing::Size(250, 250);
			this->pictureGracz->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureGracz->TabIndex = 5;
			this->pictureGracz->TabStop = false;
			// 
			// pictureKomputer
			// 
			this->pictureKomputer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureKomputer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureKomputer.Image")));
			this->pictureKomputer->Location = System::Drawing::Point(421, 23);
			this->pictureKomputer->Name = L"pictureKomputer";
			this->pictureKomputer->Size = System::Drawing::Size(250, 250);
			this->pictureKomputer->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureKomputer->TabIndex = 6;
			this->pictureKomputer->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(519, 276);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 36);
			this->label2->TabIndex = 8;
			this->label2->Text = L"A.I.";
			// 
			// lblLicznikG
			// 
			this->lblLicznikG->AutoSize = true;
			this->lblLicznikG->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblLicznikG->Location = System::Drawing::Point(279, 279);
			this->lblLicznikG->Name = L"lblLicznikG";
			this->lblLicznikG->Size = System::Drawing::Size(30, 36);
			this->lblLicznikG->TabIndex = 9;
			this->lblLicznikG->Text = L"0";
			// 
			// lblLicznikK
			// 
			this->lblLicznikK->AutoSize = true;
			this->lblLicznikK->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblLicznikK->Location = System::Drawing::Point(385, 279);
			this->lblLicznikK->Name = L"lblLicznikK";
			this->lblLicznikK->Size = System::Drawing::Size(30, 36);
			this->lblLicznikK->TabIndex = 10;
			this->lblLicznikK->Text = L"0";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(557, 505);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 32);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Help";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &gra::button1_Click);
			// 
			// reset
			// 
			this->reset->Enabled = false;
			this->reset->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->reset->Location = System::Drawing::Point(285, 233);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(130, 40);
			this->reset->TabIndex = 12;
			this->reset->Text = L"Reset";
			this->reset->UseVisualStyleBackColor = true;
			this->reset->Visible = false;
			this->reset->Click += gcnew System::EventHandler(this, &gra::reset_Click);
			// 
			// newGame
			// 
			this->newGame->Enabled = false;
			this->newGame->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->newGame->Location = System::Drawing::Point(285, 187);
			this->newGame->Name = L"newGame";
			this->newGame->Size = System::Drawing::Size(130, 40);
			this->newGame->TabIndex = 13;
			this->newGame->Text = L"New Game";
			this->newGame->UseVisualStyleBackColor = true;
			this->newGame->Visible = false;
			this->newGame->Click += gcnew System::EventHandler(this, &gra::newGame_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(337, 279);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 33);
			this->label1->TabIndex = 14;
			this->label1->Text = L"-";
			// 
			// playerName
			// 
			this->playerName->AutoSize = true;
			this->playerName->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->playerName->Location = System::Drawing::Point(70, 276);
			this->playerName->Name = L"playerName";
			this->playerName->Size = System::Drawing::Size(0, 36);
			this->playerName->TabIndex = 7;
			// 
			// changeName
			// 
			this->changeName->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->changeName->Location = System::Drawing::Point(285, 23);
			this->changeName->Name = L"changeName";
			this->changeName->Size = System::Drawing::Size(130, 40);
			this->changeName->TabIndex = 15;
			this->changeName->Text = L"Player name";
			this->changeName->UseVisualStyleBackColor = true;
			this->changeName->Click += gcnew System::EventHandler(this, &gra::changeName_Click);
			// 
			// txtBoxPlayerName
			// 
			this->txtBoxPlayerName->Location = System::Drawing::Point(29, 575);
			this->txtBoxPlayerName->Name = L"txtBoxPlayerName";
			this->txtBoxPlayerName->Size = System::Drawing::Size(231, 20);
			this->txtBoxPlayerName->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(36, 547);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 25);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Player name:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(266, 572);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Accept";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &gra::button2_Click);
			// 
			// txtWynik
			// 
			this->txtWynik->BackColor = System::Drawing::Color::CadetBlue;
			this->txtWynik->Enabled = false;
			this->txtWynik->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtWynik->Location = System::Drawing::Point(13, 318);
			this->txtWynik->Name = L"txtWynik";
			this->txtWynik->Size = System::Drawing::Size(674, 43);
			this->txtWynik->TabIndex = 19;
			this->txtWynik->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// gra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(704, 541);
			this->Controls->Add(this->txtWynik);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtBoxPlayerName);
			this->Controls->Add(this->changeName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->newGame);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblLicznikK);
			this->Controls->Add(this->lblLicznikG);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->playerName);
			this->Controls->Add(this->pictureKomputer);
			this->Controls->Add(this->pictureGracz);
			this->Controls->Add(this->spock);
			this->Controls->Add(this->lizard);
			this->Controls->Add(this->scissors);
			this->Controls->Add(this->paper);
			this->Controls->Add(this->rock);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"gra";
			this->Text = L"Rock - Scissors - Paper - Lizard - Spock";
			this->Load += gcnew System::EventHandler(this, &gra::gra_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureGracz))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureKomputer))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: void losowanie() {
			srand(time(NULL));
			int losowaCyfra = rand() % 5 + 1;
			pictureKomputer->Image = imageList1->Images[losowaCyfra];

			if (wyborGracza == losowaCyfra) {
				txtWynik->Text = "Tie!";
			}
			if (wyborGracza == 1 && losowaCyfra == 2) {
				txtWynik->Text = "Paper covers Rock. You Lose!";
				licznikK++;
			}
			if (wyborGracza == 1 && losowaCyfra == 3) {
				txtWynik->Text = "Rock breaks Scissors. You Win!";
				licznikG++;
			}
			if (wyborGracza == 1 && losowaCyfra == 4) {
				txtWynik->Text = "Rock crushes Lizard. You Win!";
				licznikG++;
			}
			if (wyborGracza == 1 && losowaCyfra == 5) {
				txtWynik->Text = "Spock vaporizes rock. You Lose!";
				licznikK++;
			}
			if (wyborGracza == 2 && losowaCyfra == 1) {
				txtWynik->Text = "Paper covers rock. You Win!";
				licznikG++;
			}
			if (wyborGracza == 2 && losowaCyfra == 3) {
				txtWynik->Text = "Scissors cut paper. You Lose!";
				licznikK++;
			}
			if (wyborGracza == 2 && losowaCyfra == 4) {
				txtWynik->Text = "Lizard eats paper. You Lose!";
				licznikK++;
			}
			if (wyborGracza == 2 && losowaCyfra == 5) {
				txtWynik->Text = "Paper disproves Spock. You Win!";
				licznikG++;
			}
			if (wyborGracza == 3 && losowaCyfra == 1) {
				txtWynik->Text = "Rock breaks scissors. You Lose!";
				licznikK++;
			}
			if (wyborGracza == 3 && losowaCyfra == 2) {
				txtWynik->Text = "Scissors cut paper. You Win!";
				licznikG++;
			}
			if (wyborGracza == 3 && losowaCyfra == 4) {
				txtWynik->Text = "Scissors decapitated lizard. You Win!";
				licznikG++;
			}
			if (wyborGracza == 3 && losowaCyfra == 5) {
				txtWynik->Text = "Spock smashes scissors. You Win!";
				licznikG++;
			}
			if (wyborGracza == 4 && losowaCyfra == 1) {
				txtWynik->Text = "Rock crushes Lizard. You Lose!";
				licznikK++;
			}
			if (wyborGracza == 4 && losowaCyfra == 2) {
				txtWynik->Text = "Lizard eats paper. You Win!";
				licznikG++;
			}
			if (wyborGracza == 4 && losowaCyfra == 3) {
				txtWynik->Text = "Scissors decapitated lizard. You Lose!";
				licznikK++;
			}
			if (wyborGracza == 4 && losowaCyfra == 5) {
				txtWynik->Text = "Lizard poisons Spock. You Win!";
				licznikG++;
			}
			if (wyborGracza == 5 && losowaCyfra == 1) {
				txtWynik->Text = "Spock vaporizes rock. You Win!";
				licznikG++;
			}
			if (wyborGracza == 5 && losowaCyfra == 2) {
				txtWynik->Text = "Paper disproves Spock. You Win!";
				licznikG++;
			}
			if (wyborGracza == 5 && losowaCyfra == 3) {
				txtWynik->Text = "Spock smashes scissors. You Lose!";
				licznikK++;
			}
			if (wyborGracza == 5 && losowaCyfra == 4) {
				txtWynik->Text = "Lizard poisons Spock. You Lose!";
				licznikK++;
			}
			lblLicznikG->Text = (Convert::ToString(licznikG));
			lblLicznikK->Text = (Convert::ToString(licznikK));
			return ;
		}

	private: System::Void gra_Load(System::Object^ sender, System::EventArgs^ e) {
		
		
	}
private: System::Void rock_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureGracz->Image = imageList1->Images[1];
	rock->Enabled = false;
	scissors->Enabled = false;
	paper->Enabled = false;
	lizard->Enabled = false;
	spock->Enabled = false;
	wyborGracza = 1;
	losowanie();
}
private: System::Void paper_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureGracz->Image = imageList1->Images[2];
	rock->Enabled = false;
	scissors->Enabled = false;
	paper->Enabled = false;
	lizard->Enabled = false;
	spock->Enabled = false;	
	wyborGracza = 2;
	losowanie();
}
private: System::Void scissors_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureGracz->Image = imageList1->Images[3];
	rock->Enabled = false;
	scissors->Enabled = false;
	paper->Enabled = false;
	lizard->Enabled = false;
	spock->Enabled = false;
	wyborGracza = 3;
	losowanie();
}
private: System::Void lizard_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureGracz->Image = imageList1->Images[4];
	rock->Enabled = false;
	scissors->Enabled = false;
	paper->Enabled = false;
	lizard->Enabled = false;
	spock->Enabled = false;
	wyborGracza = 4;
	losowanie();
}
private: System::Void spock_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureGracz->Image = imageList1->Images[5];
	rock->Enabled = false;
	scissors->Enabled = false;
	paper->Enabled = false;
	lizard->Enabled = false;
	spock->Enabled = false;
	wyborGracza = 5;
	losowanie();
}
private: System::Void newGame_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureGracz->Image = imageList1->Images[0];
	pictureKomputer->Image = imageList1->Images[0];
	rock->Enabled = true;
	scissors->Enabled = true;
	paper->Enabled = true;
	lizard->Enabled = true;
	spock->Enabled = true;
}
private: System::Void reset_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureGracz->Image = imageList1->Images[0];
	pictureKomputer->Image = imageList1->Images[0];
	licznikG = 0;
	licznikK = 0;
	lblLicznikG->Text = "0";
	lblLicznikK->Text = "0";
	rock->Enabled = true;
	scissors->Enabled = true;
	paper->Enabled = true;
	lizard->Enabled = true;
	spock->Enabled = true;

}
private: System::Void changeName_Click(System::Object^ sender, System::EventArgs^ e) {
	gra::Width = 720;
	gra::Height = 640; 
	changeName->Visible = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	playerName->Text = txtBoxPlayerName->Text;
	gra::Width = 720;
	gra::Height = 580;
	rock->Enabled = true;
	scissors->Enabled = true;
	paper->Enabled = true;
	lizard->Enabled = true;
	spock->Enabled = true;
	reset->Enabled = true;
	newGame->Enabled = true;
	reset->Visible = true;
	newGame->Visible = true;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	help^ Onas = gcnew help();
	Onas->Show();
}
};
}
