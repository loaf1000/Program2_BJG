#pragma once

namespace Program2 {

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
	private: System::Windows::Forms::ImageList^  imageListCards;
	private: System::Windows::Forms::PictureBox^  pictureBoxGif;
	private: System::Windows::Forms::PictureBox^  pictureBoxAlignment;
	private: System::Windows::Forms::Label^  labelTitle;
	private: System::Windows::Forms::Timer^  timerDateTime;
	private: System::Windows::Forms::Label^  labelDateTime;
	private: System::Windows::Forms::PictureBox^  pictureBoxCardAnimation1;
	private: System::Windows::Forms::PictureBox^  pictureBoxCardAnimation2;


	private: System::Windows::Forms::Timer^  timerCardAnimation;
	private: System::Windows::Forms::TextBox^  textBoxLogin;

	private: System::Windows::Forms::Label^  labelDescription;

	private: System::Windows::Forms::Button^  buttonLogin;
	private: System::Windows::Forms::Button^  buttonHelp;

	private: System::Windows::Forms::Button^  buttonQuit;
	private: System::Windows::Forms::Button^  buttonCredits;
	private: System::Windows::Forms::Button^  buttonPlay;
	private: System::Windows::Forms::Button^  buttonHit;
	private: System::Windows::Forms::Button^  buttonStay;
	private: System::Windows::Forms::Label^  labelPlayerTotal;

	private: System::Windows::Forms::Label^  labelDealerTotal;




	protected:
	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->imageListCards = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBoxGif = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxAlignment = (gcnew System::Windows::Forms::PictureBox());
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->timerDateTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelDateTime = (gcnew System::Windows::Forms::Label());
			this->pictureBoxCardAnimation1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxCardAnimation2 = (gcnew System::Windows::Forms::PictureBox());
			this->timerCardAnimation = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->labelDescription = (gcnew System::Windows::Forms::Label());
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			this->buttonHelp = (gcnew System::Windows::Forms::Button());
			this->buttonQuit = (gcnew System::Windows::Forms::Button());
			this->buttonCredits = (gcnew System::Windows::Forms::Button());
			this->buttonPlay = (gcnew System::Windows::Forms::Button());
			this->buttonHit = (gcnew System::Windows::Forms::Button());
			this->buttonStay = (gcnew System::Windows::Forms::Button());
			this->labelPlayerTotal = (gcnew System::Windows::Forms::Label());
			this->labelDealerTotal = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxGif))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAlignment))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCardAnimation1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCardAnimation2))->BeginInit();
			this->SuspendLayout();
			// 
			// imageListCards
			// 
			this->imageListCards->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageListCards.ImageStream")));
			this->imageListCards->TransparentColor = System::Drawing::Color::Transparent;
			this->imageListCards->Images->SetKeyName(0, L"fullmetal_alchemist_playing_cards_the_ace_of_clubs.jpg");
			this->imageListCards->Images->SetKeyName(1, L"2c.png");
			this->imageListCards->Images->SetKeyName(2, L"3c.png");
			this->imageListCards->Images->SetKeyName(3, L"4c.png");
			this->imageListCards->Images->SetKeyName(4, L"5c.png");
			this->imageListCards->Images->SetKeyName(5, L"6c.png");
			this->imageListCards->Images->SetKeyName(6, L"7c.png");
			this->imageListCards->Images->SetKeyName(7, L"8c.png");
			this->imageListCards->Images->SetKeyName(8, L"9c.png");
			this->imageListCards->Images->SetKeyName(9, L"10c.png");
			this->imageListCards->Images->SetKeyName(10, L"fullmetal_alchemist_playing_cards_the_jack_of_clubs.jpg");
			this->imageListCards->Images->SetKeyName(11, L"fullmetal_alchemist_playing_cards_the_queen_of_clubs.jpg");
			this->imageListCards->Images->SetKeyName(12, L"fullmetal_alchemist_playing_cards_the_king_of_clubs.jpg");
			this->imageListCards->Images->SetKeyName(13, L"fullmetal_alchemist_playing_cards_the_ace_of_diamonds.jpg");
			this->imageListCards->Images->SetKeyName(14, L"2d.png");
			this->imageListCards->Images->SetKeyName(15, L"3d.png");
			this->imageListCards->Images->SetKeyName(16, L"4d.png");
			this->imageListCards->Images->SetKeyName(17, L"5d.png");
			this->imageListCards->Images->SetKeyName(18, L"6d.png");
			this->imageListCards->Images->SetKeyName(19, L"7d.png");
			this->imageListCards->Images->SetKeyName(20, L"8d.png");
			this->imageListCards->Images->SetKeyName(21, L"9d.png");
			this->imageListCards->Images->SetKeyName(22, L"10d.png");
			this->imageListCards->Images->SetKeyName(23, L"fullmetal_alchemist_playing_cards_the_jack_of_diamonds.jpg");
			this->imageListCards->Images->SetKeyName(24, L"QD-lanczos3.jpg");
			this->imageListCards->Images->SetKeyName(25, L"fullmetal_alchemist_playing_cards_the_king_of_diamonds.jpg");
			this->imageListCards->Images->SetKeyName(26, L"fullmetal_alchemist_playing_cards_the_ace_of_hearts.jpg");
			this->imageListCards->Images->SetKeyName(27, L"2h.png");
			this->imageListCards->Images->SetKeyName(28, L"3h.png");
			this->imageListCards->Images->SetKeyName(29, L"4h.png");
			this->imageListCards->Images->SetKeyName(30, L"5h.png");
			this->imageListCards->Images->SetKeyName(31, L"6h.png");
			this->imageListCards->Images->SetKeyName(32, L"7h.png");
			this->imageListCards->Images->SetKeyName(33, L"8h.png");
			this->imageListCards->Images->SetKeyName(34, L"9h.png");
			this->imageListCards->Images->SetKeyName(35, L"10h.png");
			this->imageListCards->Images->SetKeyName(36, L"fullmetal_alchemist_playing_cards_the_jack_of_hearts.jpg");
			this->imageListCards->Images->SetKeyName(37, L"fullmetal_alchemist_playing_cards_the_queen_of_hearts.jpg");
			this->imageListCards->Images->SetKeyName(38, L"fullmetal_alchemist_playing_cards_the_king_of_hearts.jpg");
			this->imageListCards->Images->SetKeyName(39, L"fullmetal_alchemist_playing_cards_the_ace_of_spades.jpg");
			this->imageListCards->Images->SetKeyName(40, L"2s.png");
			this->imageListCards->Images->SetKeyName(41, L"3s.png");
			this->imageListCards->Images->SetKeyName(42, L"4s.png");
			this->imageListCards->Images->SetKeyName(43, L"5s.png");
			this->imageListCards->Images->SetKeyName(44, L"6s.png");
			this->imageListCards->Images->SetKeyName(45, L"7s.png");
			this->imageListCards->Images->SetKeyName(46, L"8s.png");
			this->imageListCards->Images->SetKeyName(47, L"9s.png");
			this->imageListCards->Images->SetKeyName(48, L"10s.png");
			this->imageListCards->Images->SetKeyName(49, L"fullmetal_alchemist_playing_cards_the_jack_of_spades.jpg");
			this->imageListCards->Images->SetKeyName(50, L"fullmetal_alchemist_playing_cards_the_queen_of_spades.jpg");
			this->imageListCards->Images->SetKeyName(51, L"fullmetal_alchemist_playing_cards_the_king_of_spades.jpg");
			// 
			// pictureBoxGif
			// 
			this->pictureBoxGif->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxGif.Image")));
			this->pictureBoxGif->Location = System::Drawing::Point(429, 298);
			this->pictureBoxGif->Name = L"pictureBoxGif";
			this->pictureBoxGif->Size = System::Drawing::Size(150, 150);
			this->pictureBoxGif->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxGif->TabIndex = 0;
			this->pictureBoxGif->TabStop = false;
			// 
			// pictureBoxAlignment
			// 
			this->pictureBoxAlignment->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxAlignment->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBoxAlignment->Location = System::Drawing::Point(0, 0);
			this->pictureBoxAlignment->Name = L"pictureBoxAlignment";
			this->pictureBoxAlignment->Size = System::Drawing::Size(1008, 730);
			this->pictureBoxAlignment->TabIndex = 1;
			this->pictureBoxAlignment->TabStop = false;
			this->pictureBoxAlignment->Visible = false;
			// 
			// labelTitle
			// 
			this->labelTitle->AutoSize = true;
			this->labelTitle->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelTitle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitle->ForeColor = System::Drawing::Color::White;
			this->labelTitle->Location = System::Drawing::Point(287, 9);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(434, 35);
			this->labelTitle->TabIndex = 2;
			this->labelTitle->Text = L"Welcome to Laithe\'s Blackjack Table";
			// 
			// timerDateTime
			// 
			this->timerDateTime->Enabled = true;
			this->timerDateTime->Interval = 1000;
			this->timerDateTime->Tick += gcnew System::EventHandler(this, &MyForm::timerDateTime_Tick);
			// 
			// labelDateTime
			// 
			this->labelDateTime->AutoSize = true;
			this->labelDateTime->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDateTime->ForeColor = System::Drawing::Color::White;
			this->labelDateTime->Location = System::Drawing::Point(355, 685);
			this->labelDateTime->Name = L"labelDateTime";
			this->labelDateTime->Size = System::Drawing::Size(298, 33);
			this->labelDateTime->TabIndex = 3;
			this->labelDateTime->Text = L"11/17/2014 12:25:36 PM";
			this->labelDateTime->Visible = false;
			// 
			// pictureBoxCardAnimation1
			// 
			this->pictureBoxCardAnimation1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxCardAnimation1->Location = System::Drawing::Point(294, 298);
			this->pictureBoxCardAnimation1->Name = L"pictureBoxCardAnimation1";
			this->pictureBoxCardAnimation1->Size = System::Drawing::Size(125, 183);
			this->pictureBoxCardAnimation1->TabIndex = 4;
			this->pictureBoxCardAnimation1->TabStop = false;
			this->pictureBoxCardAnimation1->Visible = false;
			// 
			// pictureBoxCardAnimation2
			// 
			this->pictureBoxCardAnimation2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxCardAnimation2->Location = System::Drawing::Point(595, 298);
			this->pictureBoxCardAnimation2->Name = L"pictureBoxCardAnimation2";
			this->pictureBoxCardAnimation2->Size = System::Drawing::Size(125, 183);
			this->pictureBoxCardAnimation2->TabIndex = 5;
			this->pictureBoxCardAnimation2->TabStop = false;
			this->pictureBoxCardAnimation2->Visible = false;
			// 
			// timerCardAnimation
			// 
			this->timerCardAnimation->Enabled = true;
			this->timerCardAnimation->Interval = 600;
			this->timerCardAnimation->Tick += gcnew System::EventHandler(this, &MyForm::timerCardAnimation_Tick);
			// 
			// textBoxLogin
			// 
			this->textBoxLogin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxLogin->Location = System::Drawing::Point(429, 190);
			this->textBoxLogin->Name = L"textBoxLogin";
			this->textBoxLogin->Size = System::Drawing::Size(150, 26);
			this->textBoxLogin->TabIndex = 6;
			// 
			// labelDescription
			// 
			this->labelDescription->AutoSize = true;
			this->labelDescription->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDescription->ForeColor = System::Drawing::Color::White;
			this->labelDescription->Location = System::Drawing::Point(310, 141);
			this->labelDescription->MaximumSize = System::Drawing::Size(1008, 0);
			this->labelDescription->Name = L"labelDescription";
			this->labelDescription->Size = System::Drawing::Size(388, 33);
			this->labelDescription->TabIndex = 7;
			this->labelDescription->Text = L"Please log in with your username";
			// 
			// buttonLogin
			// 
			this->buttonLogin->BackColor = System::Drawing::Color::Black;
			this->buttonLogin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonLogin->ForeColor = System::Drawing::Color::White;
			this->buttonLogin->Location = System::Drawing::Point(465, 222);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(78, 40);
			this->buttonLogin->TabIndex = 8;
			this->buttonLogin->Text = L"Log In";
			this->buttonLogin->UseVisualStyleBackColor = false;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &MyForm::buttonLogin_Click);
			// 
			// buttonHelp
			// 
			this->buttonHelp->BackColor = System::Drawing::Color::Black;
			this->buttonHelp->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonHelp->ForeColor = System::Drawing::Color::White;
			this->buttonHelp->Location = System::Drawing::Point(12, 678);
			this->buttonHelp->Name = L"buttonHelp";
			this->buttonHelp->Size = System::Drawing::Size(78, 40);
			this->buttonHelp->TabIndex = 9;
			this->buttonHelp->Text = L"Help";
			this->buttonHelp->UseVisualStyleBackColor = false;
			// 
			// buttonQuit
			// 
			this->buttonQuit->BackColor = System::Drawing::Color::Black;
			this->buttonQuit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonQuit->ForeColor = System::Drawing::Color::White;
			this->buttonQuit->Location = System::Drawing::Point(918, 678);
			this->buttonQuit->Name = L"buttonQuit";
			this->buttonQuit->Size = System::Drawing::Size(78, 40);
			this->buttonQuit->TabIndex = 10;
			this->buttonQuit->Text = L"Quit";
			this->buttonQuit->UseVisualStyleBackColor = false;
			// 
			// buttonCredits
			// 
			this->buttonCredits->BackColor = System::Drawing::Color::Black;
			this->buttonCredits->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCredits->ForeColor = System::Drawing::Color::White;
			this->buttonCredits->Location = System::Drawing::Point(822, 678);
			this->buttonCredits->Name = L"buttonCredits";
			this->buttonCredits->Size = System::Drawing::Size(78, 40);
			this->buttonCredits->TabIndex = 11;
			this->buttonCredits->Text = L"Credits";
			this->buttonCredits->UseVisualStyleBackColor = false;
			// 
			// buttonPlay
			// 
			this->buttonPlay->BackColor = System::Drawing::Color::Black;
			this->buttonPlay->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPlay->ForeColor = System::Drawing::Color::White;
			this->buttonPlay->Location = System::Drawing::Point(465, 602);
			this->buttonPlay->Name = L"buttonPlay";
			this->buttonPlay->Size = System::Drawing::Size(78, 40);
			this->buttonPlay->TabIndex = 12;
			this->buttonPlay->Text = L"Play";
			this->buttonPlay->UseVisualStyleBackColor = false;
			this->buttonPlay->Visible = false;
			this->buttonPlay->Click += gcnew System::EventHandler(this, &MyForm::buttonPlay_Click);
			// 
			// buttonHit
			// 
			this->buttonHit->BackColor = System::Drawing::Color::Black;
			this->buttonHit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonHit->ForeColor = System::Drawing::Color::White;
			this->buttonHit->Location = System::Drawing::Point(381, 602);
			this->buttonHit->Name = L"buttonHit";
			this->buttonHit->Size = System::Drawing::Size(78, 40);
			this->buttonHit->TabIndex = 13;
			this->buttonHit->Text = L"Hit";
			this->buttonHit->UseVisualStyleBackColor = false;
			this->buttonHit->Visible = false;
			this->buttonHit->Click += gcnew System::EventHandler(this, &MyForm::buttonHit_Click);
			// 
			// buttonStay
			// 
			this->buttonStay->BackColor = System::Drawing::Color::Black;
			this->buttonStay->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStay->ForeColor = System::Drawing::Color::White;
			this->buttonStay->Location = System::Drawing::Point(549, 602);
			this->buttonStay->Name = L"buttonStay";
			this->buttonStay->Size = System::Drawing::Size(78, 40);
			this->buttonStay->TabIndex = 14;
			this->buttonStay->Text = L"Stay";
			this->buttonStay->UseVisualStyleBackColor = false;
			this->buttonStay->Visible = false;
			this->buttonStay->Click += gcnew System::EventHandler(this, &MyForm::buttonStay_Click);
			// 
			// labelPlayerTotal
			// 
			this->labelPlayerTotal->AutoSize = true;
			this->labelPlayerTotal->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPlayerTotal->ForeColor = System::Drawing::Color::White;
			this->labelPlayerTotal->Location = System::Drawing::Point(12, 648);
			this->labelPlayerTotal->Name = L"labelPlayerTotal";
			this->labelPlayerTotal->Size = System::Drawing::Size(177, 27);
			this->labelPlayerTotal->TabIndex = 15;
			this->labelPlayerTotal->Text = L"Player\'s Total: 21";
			this->labelPlayerTotal->Visible = false;
			// 
			// labelDealerTotal
			// 
			this->labelDealerTotal->AutoSize = true;
			this->labelDealerTotal->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDealerTotal->ForeColor = System::Drawing::Color::White;
			this->labelDealerTotal->Location = System::Drawing::Point(819, 637);
			this->labelDealerTotal->Name = L"labelDealerTotal";
			this->labelDealerTotal->Size = System::Drawing::Size(179, 27);
			this->labelDealerTotal->TabIndex = 16;
			this->labelDealerTotal->Text = L"Dealer\'s Total: 21";
			this->labelDealerTotal->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1008, 730);
			this->Controls->Add(this->buttonCredits);
			this->Controls->Add(this->buttonQuit);
			this->Controls->Add(this->buttonHelp);
			this->Controls->Add(this->buttonLogin);
			this->Controls->Add(this->labelDescription);
			this->Controls->Add(this->textBoxLogin);
			this->Controls->Add(this->pictureBoxCardAnimation2);
			this->Controls->Add(this->pictureBoxCardAnimation1);
			this->Controls->Add(this->labelDateTime);
			this->Controls->Add(this->labelTitle);
			this->Controls->Add(this->pictureBoxGif);
			this->Controls->Add(this->pictureBoxAlignment);
			this->Controls->Add(this->buttonPlay);
			this->Controls->Add(this->buttonHit);
			this->Controls->Add(this->buttonStay);
			this->Controls->Add(this->labelDealerTotal);
			this->Controls->Add(this->labelPlayerTotal);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"Program 2";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxGif))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAlignment))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCardAnimation1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCardAnimation2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		////////////////////////////////////////////////////////////////////
		//
		//				DECLARE GLOBAL VARIABLES/OBJECTS
		//
		////////////////////////////////////////////////////////////////////
		enum class Cards 
		{
			cA, c2, c3, c4, c5, c6, c7, c8, c9, c10, cJ, cQ, cK,
			dA, d2, d3, d4, d5, d6, d7, d8, d9, d10, dJ, dQ, dK,
			hA, h2, h3, h4, h5, h6, h7, h8, h9, h10, hJ, hQ, hK,
			sA, s2, s3, s4, s5, s6, s7, s8, s9, s10, sJ, sQ, sK
		};

		String^ username;

		array<PictureBox^>^ playerCardPictureBoxes = gcnew array<PictureBox^>(10);
		array<Label^>^ playerCardLabels = gcnew array<Label^>(10);
		array<Cards>^ cardsDealtToPlayer = gcnew array<Cards>(10);

		array<PictureBox^>^ dealerCardPictureBoxes = gcnew array<PictureBox^>(10);
		array<Label^>^ dealerCardLabels = gcnew array<Label^>(10);
		array<Cards>^ cardsDealtToDealer = gcnew array<Cards>(10);

		ArrayList deck;
		ArrayList debug;
		int playerCardTotal, dealerCardTotal, indexCards = 0;

		////////////////////////////////////////////////////////////////////
		
		bool cardAce(Cards card)
		{
			switch (card)
			{
			case Cards::cA:
			case Cards::dA:
			case Cards::sA:
			case Cards::hA:
				return true;
				break;
			default:
				return false;
			}
		}

		Cards dealCard()
		{

			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			array<Cards>^ deckCopy = gcnew array<Cards>(deck.Count);

			////////////////////////////////////////////////////////////////////

			deck.CopyTo(deckCopy);
			deck.RemoveAt(0);

			return deckCopy[0];
		}

		void displayCardandValue(Cards card, int index, int cardValue, Point startingPosition,bool player)
		{
			if (player)
			{
				playerCardPictureBoxes[index] = gcnew PictureBox();

				this->playerCardPictureBoxes[index]->BackColor = System::Drawing::Color::Transparent;
				this->playerCardPictureBoxes[index]->Location = startingPosition;
				this->playerCardPictureBoxes[index]->Size = System::Drawing::Size(125, 183);
				this->playerCardPictureBoxes[index]->TabIndex = 4;
				this->playerCardPictureBoxes[index]->TabStop = false;
				this->playerCardPictureBoxes[index]->Visible = true;
				try
				{
					this->playerCardPictureBoxes[index]->Image = imageListCards->Images[(int)card];
				}
				catch (Exception^ e)
				{
					debug.Add(card);
					String^  error = "error at line 461 Value of card is: ";
					MessageBox::Show("Error:" + e);
					MessageBox::Show(error + debug[0]);
				}

				this->playerCardPictureBoxes[index]->SizeMode = PictureBoxSizeMode::StretchImage;
				this->Controls->Add(this->playerCardPictureBoxes[index]);
				this->playerCardPictureBoxes[index]->BringToFront();

				playerCardLabels[index] = gcnew Label();

				this->playerCardLabels[index]->AutoSize = false;
				this->playerCardLabels[index]->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->playerCardLabels[index]->ForeColor = System::Drawing::Color::White;
				this->playerCardLabels[index]->Location = System::Drawing::Point(startingPosition.X, startingPosition.Y + 183);
				this->playerCardLabels[index]->Size = System::Drawing::Size(125, 33);
				this->playerCardLabels[index]->TabIndex = 3;
				this->playerCardLabels[index]->Text = "Card Value: " + cardValue.ToString();
				this->playerCardLabels[index]->TextAlign = ContentAlignment::MiddleCenter;
				this->playerCardLabels[index]->Visible = true;
				this->Controls->Add(this->playerCardLabels[index]);
				this->playerCardLabels[index]->BringToFront();
			}

			else
			{
				dealerCardPictureBoxes[index] = gcnew PictureBox();

				this->dealerCardPictureBoxes[index]->BackColor = System::Drawing::Color::Transparent;
				this->dealerCardPictureBoxes[index]->Location = startingPosition;
				this->dealerCardPictureBoxes[index]->Size = System::Drawing::Size(125, 183);
				this->dealerCardPictureBoxes[index]->TabIndex = 4;
				this->dealerCardPictureBoxes[index]->TabStop = false;
				this->dealerCardPictureBoxes[index]->Visible = true;
				try
				{
					this->dealerCardPictureBoxes[index]->Image = imageListCards->Images[(int)card];
				}
				catch (Exception^ e)
				{
					debug.Add(card);
					String^  error = "error at line 461 Value of card is: ";
					MessageBox::Show("Error:" + e);
					MessageBox::Show(error + debug[0]);
				}

				this->dealerCardPictureBoxes[index]->SizeMode = PictureBoxSizeMode::StretchImage;
				this->Controls->Add(this->dealerCardPictureBoxes[index]);
				this->dealerCardPictureBoxes[index]->BringToFront();

				dealerCardLabels[index] = gcnew Label();
				this->dealerCardLabels[index]->AutoSize = false;
				this->dealerCardLabels[index]->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->dealerCardLabels[index]->ForeColor = System::Drawing::Color::White;
				this->dealerCardLabels[index]->Location = System::Drawing::Point(startingPosition.X, startingPosition.Y + 183);
				this->dealerCardLabels[index]->Size = System::Drawing::Size(125, 33);
				this->dealerCardLabels[index]->TabIndex = 3;
				this->dealerCardLabels[index]->Text = "Card Value: " + cardValue.ToString();
				this->dealerCardLabels[index]->TextAlign = ContentAlignment::MiddleCenter;
				this->dealerCardLabels[index]->Visible = true;
				this->Controls->Add(this->dealerCardLabels[index]);
				this->dealerCardLabels[index]->BringToFront();
			}

		}

		int getCardValue(Cards card)
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			Windows::Forms::DialogResult buttonClicked;

			////////////////////////////////////////////////////////////////////
			switch (card)
			{
			case Cards::cA:
			case Cards::dA:
			case Cards::sA:
			case Cards::hA:
				return 11;
				break;
			case Cards::c2:
			case Cards::d2:
			case Cards::s2:
			case Cards::h2:

				return 2;
				break;
			case Cards::c3:
			case Cards::d3:
			case Cards::s3:
			case Cards::h3:

				return 3;
				break;
			case Cards::c4:
			case Cards::d4:
			case Cards::s4:
			case Cards::h4:

				return 4;
				break;
			case Cards::c5:
			case Cards::d5:
			case Cards::s5:
			case Cards::h5:

				return 5;
				break;
			case Cards::c6:
			case Cards::d6:
			case Cards::s6:
			case Cards::h6:

				return 6;
				break;
			case Cards::c7:
			case Cards::d7:
			case Cards::s7:
			case Cards::h7:

				return 7;
				break;
			case Cards::c8:
			case Cards::d8:
			case Cards::s8:
			case Cards::h8:

				return 8;
				break;
			case Cards::c9:
			case Cards::d9:
			case Cards::s9:
			case Cards::h9:
				
				return 9;
				break;
			case Cards::c10: 
			case Cards::cJ:
			case Cards::cQ:
			case Cards::cK:
			case Cards::d10:
			case Cards::dJ:
			case Cards::dQ:
			case Cards::dK:
			case Cards::s10:
			case Cards::sJ:
			case Cards::sQ:
			case Cards::sK:
			case Cards::h10:
			case Cards::hJ:
			case Cards::hQ:
			case Cards::hK:

				return 10;
				break;
			default:
				return -1; //this should not occur
				break;
			}
		}

		void shuffleDeck()
		{
			Cards nextCard = Cards::cA;
			ArrayList sortedDeck;
			Random^ seedGenerator = gcnew Random();
			int index, seed = seedGenerator->Next();
			Random^ shuffler = gcnew Random(seed);


			while (sortedDeck.Count < 52)
			{
				try
				{
					sortedDeck.Add(nextCard);
					nextCard++;
				}
				catch (Exception^ e)
				{
					debug.Add(sortedDeck.Count);
					MessageBox::Show("Error:" + e);
					MessageBox::Show("error at line 596" + debug[0]);
				}
			}

			for (int i = 51; i > -1; i--)
			{
				try
				{
					index = shuffler->Next(i);
					deck.Add(sortedDeck[index]);
					sortedDeck.RemoveAt(index);
				}
				catch (Exception^ e)
				{
					MessageBox::Show("Error:" + e);
					MessageBox::Show("error at line 611");
				}
			}
		}

		void displayDeck()
		{
			labelDescription->Text = "";

			for (int i = 0; i < 52; i++)
			{
				labelDescription->Text += deck[i] +"  " ;
			}
			labelDescription->Location = Point(504 - (labelDescription->Width / 2), 49);
			deck.RemoveRange(0, deck.Count);
		}

		private: System::Void timerDateTime_Tick(System::Object^  sender, System::EventArgs^  e) 
	{
				 labelDateTime->Text = DateTime::Now.ToString();
	}
		private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
{
			 labelDateTime->Visible = true;
			 pictureBoxCardAnimation1->Visible = true;
			 pictureBoxCardAnimation2->Visible = true;
}
		private: System::Void timerCardAnimation_Tick(System::Object^  sender, System::EventArgs^  e) 
{
			static int upCounter = 39, downCounter = 38;

			pictureBoxCardAnimation1->Image = imageListCards->Images[upCounter];
			pictureBoxCardAnimation2->Image = imageListCards->Images[downCounter];

			upCounter++;
			downCounter--;

			if (upCounter > 51)
			{
				upCounter = 39;
			}

			if (downCounter < 26)
			{
				downCounter = 38;
			}
}
		private: System::Void buttonLogin_Click(System::Object^  sender, System::EventArgs^  e)
	{
		username = textBoxLogin->Text;

		if (username->Trim() != "")
		{
			buttonLogin->Visible = false;

			labelDescription->Visible = false;

			pictureBoxCardAnimation1->Visible = false;
			pictureBoxCardAnimation2->Visible = false;
			pictureBoxGif->Visible = false;

			textBoxLogin->Visible = false;

			timerCardAnimation->Enabled = false;

			labelDescription->Text = "Thank you, " + username + ", for joining us today!";

			labelDescription->Location = Point(504 - (labelDescription->Width / 2), 49);

			labelDescription->Visible = true;

			buttonPlay->BringToFront();
			buttonPlay->Visible = true;
		}

		else
		{
			MessageBox::Show("Please enter a username to log in!", "Error");
		}
}

		private: System::Void buttonPlay_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				////////////////////////////////////////////////////////////////////
				//
				//				DECLARE LOCAL VARIABLES/OBJECTS
				//
				////////////////////////////////////////////////////////////////////

				array<Point>^ playerCardPositions = { Point(50, 112), Point(180, 112) }; // card positions for 5 cards (50, 112), (180, 112), (310, 112), (108, 333), (238, 333)
				array<Point>^ dealerCardPositions = { Point(573, 112), Point(703, 112) }; // card positions for 5 cards (573 ,112), (703 , 112), (833, 112), (631, 333), (761, 333)
			
				Windows::Forms::DialogResult buttonClicked;

				////////////////////////////////////////////////////////////////////

				buttonHit->Visible = true;
				buttonStay->Visible = true;
				indexCards = 0;
				//buttonPlay->Visible = false;
				if (deck.Count < 4)
				{
					shuffleDeck();
				}
				for (int i = 0; i < 2; i ++)
				{
					cardsDealtToPlayer[i] = dealCard(); 
					cardsDealtToDealer[i] = dealCard();
					displayCardandValue(cardsDealtToPlayer[i], i, getCardValue(cardsDealtToPlayer[i]), playerCardPositions[i], true);
					displayCardandValue(cardsDealtToDealer[i], i, getCardValue(cardsDealtToDealer[i]), dealerCardPositions[i], false);
					
					if (cardAce(cardsDealtToPlayer[i]))
					{
						buttonClicked = MessageBox::Show("Would you like the value of your ace to be 1? " +
							"\nYes for 1, No for 11.",
							"Ace 1/11",
							MessageBoxButtons::YesNoCancel,
							MessageBoxIcon::Question,
							MessageBoxDefaultButton::Button2);

						if (buttonClicked == Windows::Forms::DialogResult::Yes)
						{
							playerCardLabels[i]->Text = "Card Value: 1";
						}
					}
					indexCards++;
				}



			}
		private: System::Void buttonHit_Click(System::Object^  sender, System::EventArgs^  e) 
{

}
		private: System::Void buttonStay_Click(System::Object^  sender, System::EventArgs^  e) 
{

}
};
}
