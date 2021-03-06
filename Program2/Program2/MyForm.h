
/**************************************************************
***************************************************************
***************************************************************

ID INFORMATION

Programmers		        :Laithe Marshall
Assignment #		    :2
Assignment Name		    :Black Jack
Course # and Title		:CISC 192 - C++
Class Meeting Time		:MW 9:35 - 12:45
Instructor			    :Professor Forman
Hours			        :40
Difficulty			    :5
Completion Date		    :December/01/2014
Project Name		    :Program2

***************************************************************
***************************************************************
CUSTOM DEFINED FUNCTIONS

blackJack
bust
cardAce
changeValueAce
cleanup
credits
countCardsUsed
countHandTypes
dealCard
dealerAceChange
dealerHit
debugDecks
displayCardandValue
displayCardTotal
displayDealerStrategy
displayFarewellMessage
displayGameResults
displayGameStats
getCardValue
initializePointArrays
quit
shuffleDeck
updateBank

***************************************************************
***************************************************************
EVENT-DRIVEN FUNCTIONS

buttonCredits_Click
buttonHelp_Click
buttonHit_Click
buttonLogin_Click
buttonQuit_Click
buttonPlay_Click
buttonResults_Click
buttonStay_Click
MyForm_Load
timerCardAnimation_Tick
timerDateTime_Tick
***************************************************************
***************************************************************
PROGRAM DESCRIPTION
The program welcomes the user to the Black Jack "table" and asks
the user to log in. The user will then be given a bank roll of 
$100 to play black jack. When the user hits play, they bet $10
to play a hand of Black Jack. The user has the option to hit or stay,
and plays against the dealer. The user gains $20 if they win, $30 if they
Black Jack, and $10 if they tie. If the user runs out of money they will
be forced to quit the program. The user may click on the help button
for detailed instructions of how to play & how to use the program.
The credits button will display credits.The Results button displays
statistics based on the hands of Black Jack played. The Quit button
will exit the program after giving the user a farewell message. 


***************************************************************
***************************************************************

CREDITS

Acknowledge those who helped you and whom you helped
Remember the �triangle of learning�

Thanks for assistance and inspiration from:

Thanks to Professor Forman for creating TDHOs.

Thanks for the opportunity to assist and inspire:

N/A

***************************************************************
***************************************************************

MEDIA

Images & Icons

Queen of Diamonds
http://s12.photobucket.com/user/yanzai03/media/AQ.jpg.html
Face cards and Aces
http://playingcardcollector.net/2013/05/02/fullmetal-alchemist-playing-cards/
FMA everyone (exit background)
http://imgdonkey.com/big/N01ZNEZGbg/all-right-imgur-lets-rustle-some-jimmies-which-is-better.gif
Transmutation Circle
http://fc01.deviantart.net/fs42/f/2009/067/c/c/Transmutation_Circle_by_Wojtas19.png
Anime shuffle
http://media.giphy.com/media/7sRMjntXYEITu/giphy.gif
Face Value Cards
http://ardisoft.net/svg-z-cards/screenshot.png
FMA Icon
http://fc04.deviantart.net/fs70/f/2012/274/3/1/fma_icon_2_by_iloveyoukisshu-d5gfxgm.gif

Music

Let it Out by Fukuhara Miho TV edit (exit song)
http://thepiratebay.se/torrent/8206483/Fullmetal_Alchemist__Brotherhood_Soundtrack_Collection

Lapis Philosophorum Chant Composed by Senju Akira
http://thepiratebay.se/torrent/8206483/Fullmetal_Alchemist__Brotherhood_Soundtrack_Collection

***************************************************************
***************************************************************
**************************************************************/

#pragma once

namespace Program2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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
	private: System::Windows::Forms::Button^  buttonResults;
	private: System::Windows::Forms::Label^  labelGameNumber;
	private: System::Windows::Forms::ComboBox^  comboBoxCheat;
	private: System::Windows::Forms::Label^  labelBank;







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
			this->buttonResults = (gcnew System::Windows::Forms::Button());
			this->labelGameNumber = (gcnew System::Windows::Forms::Label());
			this->comboBoxCheat = (gcnew System::Windows::Forms::ComboBox());
			this->labelBank = (gcnew System::Windows::Forms::Label());
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
			this->labelDescription->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->buttonHelp->Click += gcnew System::EventHandler(this, &MyForm::buttonHelp_Click);
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
			this->buttonQuit->Click += gcnew System::EventHandler(this, &MyForm::buttonQuit_Click);
			// 
			// buttonCredits
			// 
			this->buttonCredits->BackColor = System::Drawing::Color::Black;
			this->buttonCredits->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCredits->ForeColor = System::Drawing::Color::White;
			this->buttonCredits->Location = System::Drawing::Point(824, 678);
			this->buttonCredits->Name = L"buttonCredits";
			this->buttonCredits->Size = System::Drawing::Size(78, 40);
			this->buttonCredits->TabIndex = 11;
			this->buttonCredits->Text = L"Credits";
			this->buttonCredits->UseVisualStyleBackColor = false;
			this->buttonCredits->Click += gcnew System::EventHandler(this, &MyForm::buttonCredits_Click);
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
			this->labelDealerTotal->Location = System::Drawing::Point(819, 648);
			this->labelDealerTotal->Name = L"labelDealerTotal";
			this->labelDealerTotal->Size = System::Drawing::Size(179, 27);
			this->labelDealerTotal->TabIndex = 16;
			this->labelDealerTotal->Text = L"Dealer\'s Total: 21";
			this->labelDealerTotal->Visible = false;
			// 
			// buttonResults
			// 
			this->buttonResults->BackColor = System::Drawing::Color::Black;
			this->buttonResults->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonResults->ForeColor = System::Drawing::Color::White;
			this->buttonResults->Location = System::Drawing::Point(111, 678);
			this->buttonResults->Name = L"buttonResults";
			this->buttonResults->Size = System::Drawing::Size(78, 40);
			this->buttonResults->TabIndex = 17;
			this->buttonResults->Text = L"Results";
			this->buttonResults->UseVisualStyleBackColor = false;
			this->buttonResults->Visible = false;
			this->buttonResults->Click += gcnew System::EventHandler(this, &MyForm::buttonResults_Click);
			// 
			// labelGameNumber
			// 
			this->labelGameNumber->AutoSize = true;
			this->labelGameNumber->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGameNumber->ForeColor = System::Drawing::Color::White;
			this->labelGameNumber->Location = System::Drawing::Point(204, 690);
			this->labelGameNumber->Name = L"labelGameNumber";
			this->labelGameNumber->Size = System::Drawing::Size(135, 27);
			this->labelGameNumber->TabIndex = 18;
			this->labelGameNumber->Text = L"Game 99999";
			this->labelGameNumber->Visible = false;
			// 
			// comboBoxCheat
			// 
			this->comboBoxCheat->BackColor = System::Drawing::Color::Black;
			this->comboBoxCheat->Enabled = false;
			this->comboBoxCheat->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxCheat->ForeColor = System::Drawing::Color::White;
			this->comboBoxCheat->FormattingEnabled = true;
			this->comboBoxCheat->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Player Black Jack", L"Dealer Black Jack",
					L"Black Jack Tie", L"Player 3 Card Bust", L"Dealer 3 Card Bust (Player hit Stay)", L"Player 3 Card Win", L"Dealer 3 Card Win (Player hit Stay) ",
					L"Player 5 Card Win", L"Dealer 5 Card Win (Player hit Stay)"
			});
			this->comboBoxCheat->Location = System::Drawing::Point(361, 569);
			this->comboBoxCheat->Name = L"comboBoxCheat";
			this->comboBoxCheat->Size = System::Drawing::Size(292, 27);
			this->comboBoxCheat->TabIndex = 19;
			this->comboBoxCheat->Text = L"Choose an option to Debug";
			this->comboBoxCheat->Visible = false;
			// 
			// labelBank
			// 
			this->labelBank->AutoSize = true;
			this->labelBank->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBank->ForeColor = System::Drawing::Color::White;
			this->labelBank->Location = System::Drawing::Point(12, 621);
			this->labelBank->Name = L"labelBank";
			this->labelBank->Size = System::Drawing::Size(123, 27);
			this->labelBank->TabIndex = 20;
			this->labelBank->Text = L"Bank: $100";
			this->labelBank->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1008, 730);
			this->Controls->Add(this->labelGameNumber);
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
			this->Controls->Add(this->buttonHit);
			this->Controls->Add(this->buttonStay);
			this->Controls->Add(this->buttonResults);
			this->Controls->Add(this->labelDealerTotal);
			this->Controls->Add(this->comboBoxCheat);
			this->Controls->Add(this->buttonPlay);
			this->Controls->Add(this->labelBank);
			this->Controls->Add(this->labelPlayerTotal);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"Laithe\'s Blackjack Table";
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
		enum class Cards //c for clubs, d for diamonds, h for hearts, s for spades, J for jacks, Q for queens, K for kings
		{
			cA, c2, c3, c4, c5, c6, c7, c8, c9, c10, cJ, cQ, cK,
			dA, d2, d3, d4, d5, d6, d7, d8, d9, d10, dJ, dQ, dK,
			hA, h2, h3, h4, h5, h6, h7, h8, h9, h10, hJ, hQ, hK,
			sA, s2, s3, s4, s5, s6, s7, s8, s9, s10, sJ, sQ, sK
		};

		String^ username;
		String^ firstName;

		// creates arrays to store cards, card images, and card labels for the player
		array<PictureBox^>^ playerCardPictureBoxes = gcnew array<PictureBox^>(10); 
		array<Label^>^ playerCardLabels = gcnew array<Label^>(10);
		array<Cards>^ cardsDealtToPlayer = gcnew array<Cards>(10);
		array<Point>^ playerCardPositions; // card positions for 5 cards (50, 112), (180, 112), (310, 112), (108, 333), (238, 333)

		// creates arrays to store cards, card images, and card labels for the dealer
		array<PictureBox^>^ dealerCardPictureBoxes = gcnew array<PictureBox^>(10);
		array<Label^>^ dealerCardLabels = gcnew array<Label^>(10);
		array<Cards>^ cardsDealtToDealer = gcnew array<Cards>(10);
		array<Point>^ dealerCardPositions; // card positions for 5 cards (573 ,112), (703 , 112), (833, 112), (631, 333), (761, 333)

		ArrayList deck;

		//counters for stats
		int playerCardTotal = 0, dealerCardTotal = 0, playerCardsInHand = 0, dealerCardsInHand = 0, gameNumber = 0, win = 0, loss = 0, tie = 0;
		int totalCardsUsed = 0, totalAcesUsed = 0, totalTwosUsed = 0, totalThreesUsed = 0, totalFoursUsed = 0, totalFivesUsed = 0;
		int totalSixesUsed = 0, totalSevensUsed = 0, totalEightsUsed = 0, totalNinesUsed = 0, totalTensUsed = 0, totalJacksUsed = 0;
		int totalQueensUsed = 0, totalKingsUsed = 0, timesShuffled = 0;
		int handLessThan16 = 0, handBetween16And20 = 0, hand21 = 0, handGreaterThan21 = 0;

		int bank = 100;

		bool playingGame = false, debugMode = false, bankrupt = false, playerWin = false, tied = false, playerBlackJack = false, bet = false;
		////////////////////////////////////////////////////////////////////

		////////////////////////////////////////////////////////////////////
		//
		//				START CUSTOM DEFINED FUNCTIONS
		//
		////////////////////////////////////////////////////////////////////


		/**************************************************************

			NAME: blackJack

			DESCRIPTION: Validity statement that returns true if card total is 
			equal to 21, else it returns false.

			PRECONDITIONS: Function expects a positive integer between 2-32 which
			is given by calculating the value of a hand in black jack.

			POSTCONDITIONS: see description

			CALLED BY: buttonPlay_Click

			CALLS: None

		**************************************************************/

		bool blackJack(int cardTotal)
		{
			if (cardTotal == 21)
			{
				return true;
			}
			
			else
			{
				return false;
			}
		}


		/**************************************************************

			NAME: bust

			DESCRIPTION: Validity statement that returns true if the card total is greater
			than 21, else it returns false

			PRECONDITIONS:  Function expects a positive integer between 2-32 which
			is given by calculating the value of a hand in black jack.

			POSTCONDITIONS: see description

			CALLED BY: buttonHit_Click, buttonPlay_Click, buttonStay_Click

			CALLS: None

			**************************************************************/

		bool bust(int cardTotal)
		{
			if (cardTotal > 21)
			{
				return true;
			}

			else
			{
				return false;
			}
		}


		/**************************************************************

			NAME: cardAce

			DESCRIPTION: Validity statement that returns true if a card is an ace,
			else it returns false

			PRECONDITIONS: function takes a valid card from the enum class cards

			POSTCONDITIONS: see description

			CALLED BY: buttonHit_Click, buttonPlay_Click, buttonStay_Click

			CALLS: None

			**************************************************************/


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


		/**************************************************************

			NAME: changeValueAce

			DESCRIPTION: Asks the player if they would like the player to change the value of their ace
			Yes returns the integer 1 and No returns the integer 11.

			PRECONDITIONS: function requires a valid index integer of the ace to change value in the label

			POSTCONDITIONS: see description

			CALLED BY: buttonHit_Click, buttonPlay_Click

			CALLS: None

		**************************************************************/


		int changeValueAce(int index)
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			Windows::Forms::DialogResult buttonClicked;

			////////////////////////////////////////////////////////////////////

			buttonClicked = MessageBox::Show("Would you like the value of your ace to be 1? " +
				"\nYes for 1, No for 11.",
				"Ace 1/11",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Question,
				MessageBoxDefaultButton::Button2);

			if (buttonClicked == Windows::Forms::DialogResult::Yes)
			{
				return  1;
				playerCardLabels[index]->Text = "Card Value: 1";
			}
			
			else
			{
				return 11;
			}
				
		}


		/**************************************************************

			NAME: cleanup

			DESCRIPTION: Readys the program to play another game of black jack
			by clearing the screen, updating statistics, and reinitializing variables to their 
			original value.

			PRECONDITIONS: Function requires the integer amount of cards used by player and dealer
			to clear all cards and their labels using these values and a index ceiling. These values
			must be exact, to high and the program will crash, to low and it will not clear all the cards and labels.

			POSTCONDITIONS: None

			CALLED BY: buttonHit_Click, buttonPlay_Click, buttonStay_Click

			CALLS: countCardsUsed, countHandTypes, quit, updateBank

		**************************************************************/

		void cleanup(int playerIndex, int dealerIndex)
		{
			
			buttonHit->Visible = false;
			buttonStay->Visible = false;
			buttonPlay->Visible = true;
			labelDescription->Text = "";
			labelGameNumber->Visible = false;

			playingGame = false;

			countHandTypes(playerCardTotal, dealerCardTotal);
			updateBank();

			playerCardsInHand = 0;
			dealerCardsInHand = 0;

			playerCardTotal = 0;
			dealerCardTotal = 0;

			playerWin = false;
			tied = false;
			playerBlackJack = false;
			bet = false;

			labelPlayerTotal->Visible = false;
			labelDealerTotal->Visible = false;

			if (debugMode)
			{
				comboBoxCheat->Text = "Choose an option to Debug";
				comboBoxCheat->Visible = true;
			}

			for (int i = 0; i < playerIndex; i++)
			{
				playerCardLabels[i]->Visible = false;
				playerCardPictureBoxes[i]->Visible = false;

				
			}

			for (int i = 0; i < dealerIndex; i++)
			{
				dealerCardLabels[i]->Visible = false;
				dealerCardPictureBoxes[i]->Visible = false;
			}

			countCardsUsed(playerIndex, dealerIndex);

			if (bankrupt)
			{
				quit();
			}
		}

		/**************************************************************

			NAME: credits

			DESCRIPTION: Function displays message boxes for each of the following,
			ID info, credits, media, and stars.

			PRECONDITIONS: None

			POSTCONDITIONS: None

			CALLED BY: buttonCredits_Click

			CALLS: None

			**************************************************************/

		void credits()
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			String^ message;
			StreamReader^ sr;

			////////////////////////////////////////////////////////////////////

			sr = gcnew StreamReader("..//Farewell/ID_info.txt");
			message = sr->ReadToEnd();
			sr->Close();

			MessageBox::Show(
				message,
				"ID INFORMATION" // message box caption
				);

			sr = gcnew StreamReader("..//Farewell/Credits.txt");
			message = sr->ReadToEnd();
			sr->Close();

			MessageBox::Show(
				message,
				"CREDITS" // message box caption
				);

			sr = gcnew StreamReader("..//Farewell/Media.txt");
			message = sr->ReadToEnd();
			sr->Close();

			MessageBox::Show(
				message,
				"MEDIA" // message box caption
				);

			sr = gcnew StreamReader("..//Farewell/Stars.txt");
			message = sr->ReadToEnd();
			sr->Close();

			MessageBox::Show(

				message,
				"STARS" // message box caption
				);
		}

		/**************************************************************

			NAME: countCardsUsed

			DESCRIPTION: Counts how many total cards and card values are used in a game of Black Jack.

			PRECONDITIONS: Function requires the integer amount of cards used by player and dealer
			to clear all cards and their labels using these values and a index ceiling. These values
			must be exact, to high and the program will crash, to low and it will not count all the cards 
			in the dealer's and player's hand.

			POSTCONDITIONS: None

			CALLED BY: cleanup

			CALLS: None

			**************************************************************/

		void countCardsUsed(int playerIndex, int dealerIndex)
		{
			for (int i = 0; i < playerIndex; i++)
			{
				switch (cardsDealtToPlayer[i])
				{
				case Cards::cA:
				case Cards::dA:
				case Cards::sA:
				case Cards::hA:
					totalAcesUsed++;
					break;
				case Cards::c2:
				case Cards::d2:
				case Cards::s2:
				case Cards::h2:

					totalTwosUsed++;
					break;
				case Cards::c3:
				case Cards::d3:
				case Cards::s3:
				case Cards::h3:

					totalThreesUsed++;
					break;
				case Cards::c4:
				case Cards::d4:
				case Cards::s4:
				case Cards::h4:

					totalFoursUsed++;
					break;
				case Cards::c5:
				case Cards::d5:
				case Cards::s5:
				case Cards::h5:

					totalFivesUsed++;
					break;
				case Cards::c6:
				case Cards::d6:
				case Cards::s6:
				case Cards::h6:

					totalSixesUsed++;
					break;
				case Cards::c7:
				case Cards::d7:
				case Cards::s7:
				case Cards::h7:

					totalSevensUsed++;
					break;
				case Cards::c8:
				case Cards::d8:
				case Cards::s8:
				case Cards::h8:

					totalEightsUsed++;
					break;
				case Cards::c9:
				case Cards::d9:
				case Cards::s9:
				case Cards::h9:

					totalNinesUsed++;
					break;
				case Cards::c10:
				case Cards::d10:
				case Cards::s10:
				case Cards::h10:

					totalTensUsed++;
					break;
				case Cards::cJ:
				case Cards::dJ:
				case Cards::sJ:
				case Cards::hJ:

					totalJacksUsed++;
					break;
				case Cards::cQ:
				case Cards::dQ:
				case Cards::sQ:
				case Cards::hQ:

					totalQueensUsed++;
					break;
				case Cards::cK:
				case Cards::dK:
				case Cards::sK:
				case Cards::hK:

					totalKingsUsed++;
					break;
				default:
					//this should not occur
					break;
				}
			}

				for (int i = 0; i < dealerIndex; i++)
				{
					switch (cardsDealtToDealer[i])
					{
					case Cards::cA:
					case Cards::dA:
					case Cards::sA:
					case Cards::hA:
						totalAcesUsed++;
						break;
					case Cards::c2:
					case Cards::d2:
					case Cards::s2:
					case Cards::h2:

						totalTwosUsed++;
						break;
					case Cards::c3:
					case Cards::d3:
					case Cards::s3:
					case Cards::h3:

						totalThreesUsed++;
						break;
					case Cards::c4:
					case Cards::d4:
					case Cards::s4:
					case Cards::h4:

						totalFoursUsed++;
						break;
					case Cards::c5:
					case Cards::d5:
					case Cards::s5:
					case Cards::h5:

						totalFivesUsed++;
						break;
					case Cards::c6:
					case Cards::d6:
					case Cards::s6:
					case Cards::h6:

						totalSixesUsed++;
						break;
					case Cards::c7:
					case Cards::d7:
					case Cards::s7:
					case Cards::h7:

						totalSevensUsed++;
						break;
					case Cards::c8:
					case Cards::d8:
					case Cards::s8:
					case Cards::h8:

						totalEightsUsed++;
						break;
					case Cards::c9:
					case Cards::d9:
					case Cards::s9:
					case Cards::h9:

						totalNinesUsed++;
						break;
					case Cards::c10:
					case Cards::d10:
					case Cards::s10:
					case Cards::h10:

						totalTensUsed++;
						break;
					case Cards::cJ:
					case Cards::dJ:
					case Cards::sJ:
					case Cards::hJ:

						totalJacksUsed++;
						break;
					case Cards::cQ:
					case Cards::dQ:
					case Cards::sQ:
					case Cards::hQ:

						totalQueensUsed++;
						break;
					case Cards::cK:
					case Cards::dK:
					case Cards::sK:
					case Cards::hK:

						totalKingsUsed++;
						break;
					default:
						//this should not occur
						break;
					}
				}

				totalCardsUsed += dealerIndex + playerIndex;
			}

			/**************************************************************

				NAME: countHandTypes

				DESCRIPTION: Function counts the following hand types:
				<16, >15 & <21, =21, and > 21 

				PRECONDITIONS: Function requires the card total value of the player hand
				and the dealer hand.

				POSTCONDITIONS: None

				CALLED BY: cleanup

				CALLS: None

				**************************************************************/

		void countHandTypes(int playerHand, int dealerHand)
		{
			if (playerHand < 16)
			{
				handLessThan16++;
			}

			if (dealerHand < 16)
			{
				handLessThan16++;
			}

			if (dealerHand > 15 && dealerHand < 21)
			{
				handBetween16And20++;
			}

			if (playerHand > 15 && playerHand < 21)
			{
				handBetween16And20++;
			}

			if (playerHand == 21)
			{
				hand21++;
			}

			if (dealerHand == 21)
			{
				hand21++;
			}

			if (playerHand > 21)
			{
				handGreaterThan21++;
			}

			if (dealerHand > 21)
			{
				handGreaterThan21++;
			}

		}

		/**************************************************************

			NAME: dealCard

			DESCRIPTION: this function simulates dealing a card from a deck and returns
			the card dealt.

			PRECONDITIONS: None

			POSTCONDITIONS: See description

			CALLED BY: buttonHit_Click, buttonPlay_Click, buttonStay_Click

			CALLS:

			**************************************************************/

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

		/**************************************************************

			NAME: dealerAceChange

			DESCRIPTION: Changes the value of an ace for the dealer. Returns a 1 if adding
			11 to the card total would make the dealer bust, otherwise the function returns 11.

			PRECONDITIONS: Function requires the integer card value total from the dealer's hand.

			POSTCONDITIONS: See description

			CALLED BY: buttonPlay_Click, buttonStay_Click

			CALLS: None

		**************************************************************/

		int dealerAceChange(int cardTotal)
		{
			if (cardTotal + 11 > 21)
			{
				return 1;
			}

			else
			{
				return 11;
			}
		}

		/**************************************************************

			NAME: dealerHit

			DESCRIPTION: Validity statement to determine if the dealer will hit
			in a game of Black Jack. Function returns true if the card total is 
			less than 16, else it returns false.

			PRECONDITIONS: Function requires the integer card value total from the dealer's hand.

			POSTCONDITIONS: see description

			CALLED BY: buttonStay_Click

			CALLS: None

			**************************************************************/

		bool dealerHit(int cardTotal)
		{
			if (cardTotal < 16)
			{
				return true;
			}

			else
			{
				return false;
			}
		}

		/**************************************************************

			NAME: debugDecks

			DESCRIPTION: prepares a deck to use in the debugging process based 
			on a combo box list.

			PRECONDITIONS: An option in the combo box list has been selected.

			POSTCONDITIONS: Stacks a deck based on the precondition.

			CALLED BY: buttonPlay_Click

			CALLS: None

			**************************************************************/

		void debugDecks()
		{
			if (comboBoxCheat->Text == "Player Black Jack")
			{
				deck.Add(Cards::sA);
				deck.Add(Cards::s2);
				deck.Add(Cards::sJ);
				deck.Add(Cards::s3);
			}

			if (comboBoxCheat->Text == "Dealer Black Jack")
			{
				deck.Add(Cards::s2);
				deck.Add(Cards::sA);
				deck.Add(Cards::s3);
				deck.Add(Cards::sJ);
			}

			if (comboBoxCheat->Text == "Black Jack Tie")
			{
				deck.Add(Cards::sA);
				deck.Add(Cards::sA);
				deck.Add(Cards::sJ);
				deck.Add(Cards::sJ);
			}

			if (comboBoxCheat->Text == "Player 3 Card Bust")
			{
				deck.Add(Cards::sK);
				deck.Add(Cards::s2);
				deck.Add(Cards::sQ);
				deck.Add(Cards::s3);
				deck.Add(Cards::sJ);
			}

			if (comboBoxCheat->Text == "Dealer 3 Card Bust (Player hit Stay)")
			{
				deck.Add(Cards::sK);
				deck.Add(Cards::s6);
				deck.Add(Cards::s5);
				deck.Add(Cards::s7);
				deck.Add(Cards::sJ);
			}

			if (comboBoxCheat->Text == "Player 3 Card Win")
			{
				deck.Add(Cards::s6);
				deck.Add(Cards::s10);
				deck.Add(Cards::s7);
				deck.Add(Cards::s9);
				deck.Add(Cards::s8);
			}

			if (comboBoxCheat->Text == "Dealer 3 Card Win (Player hit Stay) ")
			{
				deck.Add(Cards::s10);
				deck.Add(Cards::s6);
				deck.Add(Cards::s9);
				deck.Add(Cards::s7);
				deck.Add(Cards::s8);
			}

			if (comboBoxCheat->Text == "Player 5 Card Win")
			{
				deck.Add(Cards::s2);
				deck.Add(Cards::s2);
				deck.Add(Cards::s2);
				deck.Add(Cards::s3);
				deck.Add(Cards::s2);
				deck.Add(Cards::s2);
				deck.Add(Cards::s2);
			}

			if (comboBoxCheat->Text == "Dealer 5 Card Win (Player hit Stay)")
			{
				deck.Add(Cards::s10);
				deck.Add(Cards::s2);
				deck.Add(Cards::sJ);
				deck.Add(Cards::s2);
				deck.Add(Cards::s2);
				deck.Add(Cards::s2);
				deck.Add(Cards::s2);
			}
		}

		/**************************************************************

			NAME: displayCardandValue

			DESCRIPTION: Displays a picture box with a proper and label with a proper value for a given playing card.

			PRECONDITIONS: Function require a Cards card to pull the proper image from the image list. It also requires
			an integer value for the index position to store the picture box and label in the proper position of the array. 
			A integer value for the value of the card is required to display in a label. A starting point is required 
			to draw the picture box and label. The bool is required to determine if the picture box and label is being
			stored for the dealer (false) or the player (true).

			POSTCONDITIONS: See description

			CALLED BY: buttonHit_Click, buttonPlay_Click, buttonStay_Click

			CALLS: None

			**************************************************************/

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
				this->playerCardPictureBoxes[index]->Image = imageListCards->Images[(int)card];

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
				this->dealerCardPictureBoxes[index]->Image = imageListCards->Images[(int)card];

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

		/**************************************************************

			NAME: displayCardTotal

			DESCRIPTION: displays a label with total value of the cards displayed

			PRECONDITIONS: requires a boolean expression to determine if the
			card total displayed is for the player(true) or dealer(false).

			POSTCONDITIONS: see description

			CALLED BY: buttonHit_Click, buttonPlay_Click, buttonStay_Click

			CALLS: None

			**************************************************************/

		void displayCardTotal(bool player)
		{
			if (player)
			{
				labelPlayerTotal->Text = firstName + "\'s Total: " + playerCardTotal.ToString();
				labelPlayerTotal->Visible = true;
			}

			else
			{
				labelDealerTotal->Text = "Dealer\'s Total: " + dealerCardTotal.ToString();
				labelDealerTotal->Visible = true;
			}
		}

		/**************************************************************

			NAME: displayDealerStrategy

			DESCRIPTION: displays in a message box what dealer will do in a game of black jack
			given the their current hand value.

			PRECONDITIONS: None

			POSTCONDITIONS: See description

			CALLED BY: buttonStay_Click

			CALLS: None

			**************************************************************/

		void displayDealerStrategy()
		{
			if (dealerCardTotal < 16)
			{
				MessageBox::Show("Dealer has " + dealerCardTotal.ToString() + " and will hit on 15 or lower.", "Dealer Strategy");
			}

			else
			{
				MessageBox::Show( "Dealer has " + dealerCardTotal.ToString() + " and will stay on 16 or higher.","Dealer Strategy");
			}
		}

		/*void displayDeck() used to display the cards in a deck. Only used during initial debugging process.
		{
			labelDescription->Text = "";

			for (int i = 0; i < 52; i++)
			{
				labelDescription->Text += deck[i] + "  ";
			}
			labelDescription->Location = Point(504 - (labelDescription->Width / 2), 49);
			deck.RemoveRange(0, deck.Count);
		}*/

		/**************************************************************

			NAME: displayFarewellMessage

			DESCRIPTION: displays farewell messages based on how well a user did
			while playing black jack.

			PRECONDITIONS: None

			POSTCONDITIONS: See description

			CALLED BY: quit

			CALLS: None

		**************************************************************/

		void displayFarewellMessage()
		{
			if (bankrupt)
			{
				MessageBox::Show("Well, this is awkward " + firstName + "... You seem to be out of money.\n"+ 
								 "Time for you to go... See you when you get more money.", "Bankrupt!");
			}

			if (gameNumber == 0)
			{
				if (firstName == nullptr)
				{
					MessageBox::Show("Goodbye anonymous user. Hopefully next time you'll play a game.", "Farewell");
				}
				
				else
				{
					MessageBox::Show("Goodbye " + firstName + ". Hopefully next time you'll play a game.", "Farewell");
				}
			}

			else
			{
				if (bank > 0)
				{
					MessageBox::Show(firstName + ", you are withdrawing an amount of $" + bank.ToString() + ".", "Congratulations...");
				}

				if (win > loss)
				{
					MessageBox::Show("Goodbye " + firstName + ". Out of " + gameNumber.ToString() + " games you won " + win.ToString() +
									 " game(s) while the dealer won " + loss.ToString() + " game(s). You and the Dealer tied " +
									  tie.ToString() + " game(s). You beat the dealer! :)", "Farewell");
				}

				else if (win < loss)
				{
					MessageBox::Show("Goodbye " + firstName + ". Out of " + gameNumber.ToString() + " games you won " + win.ToString() +
									 " game(s) while the dealer won " + loss.ToString() + " game(s). You and the Dealer tied " +
									 tie.ToString() + " game(s). The dealer beat you! :(", "Farewell");
				}

				else
				{
					MessageBox::Show("Goodbye " + firstName + ". Out of " + gameNumber.ToString() + " games you won " + win.ToString() +
									 " game(s) while the dealer won " + loss.ToString() + " game(s). You and the Dealer tied " +
									 tie.ToString() + " game(s). You and the dealer tied. :|", "Farewell");
				}
			}
		}

		/**************************************************************

			NAME: displayGameResults

			DESCRIPTION: Displays in a message box a results message based on 
			the outcome of a Black Jack game.

			PRECONDITIONS: Function takes a string command to determine what
			message to display. This command is entered by the programmer.

			POSTCONDITIONS: see description

			CALLED BY: buttonHit_Click, buttonPlay_Click, buttonStay_Click

			CALLS: None

			**************************************************************/

		void displayGameResults(String^ command)
		{
			if (command->ToLower() == "player bust")
			{
				MessageBox::Show(firstName + " busts with a total of: " + playerCardTotal.ToString() + ". " +
								 "Dealer has a total of: " + dealerCardTotal.ToString() + ".\n" +
								 firstName + " loses. Dealer wins.", "Game " + gameNumber.ToString());
			}

			if (command->ToLower() == "dealer bust")
			{
				MessageBox::Show(firstName + " has a total of: " + playerCardTotal.ToString() + ". " +
								 "Dealer busts with a total of: " + dealerCardTotal.ToString() + ".\n" +
								 firstName + " wins. Dealer loses.", "Game " + gameNumber.ToString());
			}

			if (command->ToLower() == "player win")
			{
				MessageBox::Show(firstName + " has a total of: " + playerCardTotal.ToString() + ". " +
								 "Dealer has a total of: " + dealerCardTotal.ToString() + ".\n" +
								 firstName + " wins. Dealer loses.", "Game " + gameNumber.ToString());
			}

			if (command->ToLower() == "dealer win")
			{
				MessageBox::Show(firstName + " has a total of: " + playerCardTotal.ToString() + ". " +
								 "Dealer has a total of: " + dealerCardTotal.ToString() + ".\n" +
								 firstName + " loses. Dealer Wins.", "Game " + gameNumber.ToString());
			}

			if (command->ToLower() == "tie")
			{
				MessageBox::Show(firstName + " has a total of: " + playerCardTotal.ToString() + ". " +
								 "Dealer has a total of: " + dealerCardTotal.ToString() + ".\n" +
								 firstName + " and Dealer tie.", "Game " + gameNumber.ToString());
			}

			if (command->ToLower() == "dealer bj")
			{
				MessageBox::Show(firstName + " has a total of: " + playerCardTotal.ToString() + ". " +
							  	 "Dealer has a total of: " + dealerCardTotal.ToString() + ".\n" +
							 	 firstName + " loses. Dealer wins with Black Jack.", "Game " + gameNumber.ToString());
			}

			if (command->ToLower() == "player bj")
			{
				MessageBox::Show(firstName + " has a total of: " + playerCardTotal.ToString() + ". " +
								 "Dealer has a total of: " + dealerCardTotal.ToString() + ".\n" +
								 firstName + " wins with Black Jack. Dealer loses.", "Game " + gameNumber.ToString());
			}

			if (command->ToLower() == "bj tie")
			{
				MessageBox::Show(firstName + " has a total of: " + playerCardTotal.ToString() + ". " +
								 "Dealer has a total of: " + dealerCardTotal.ToString() + ".\n" +
								 firstName + " and Dealer tie with Black Jack.", "Game " + gameNumber.ToString());
			}

			if (command->ToLower() == "player 5 card win")
			{
				MessageBox::Show(firstName + " has a total of: " + playerCardTotal.ToString() + ". " +
								 "Dealer has a total of: " + dealerCardTotal.ToString() + ".\n" +
								 firstName + " wins with 5 cards under 22. Dealer loses.", "Game " + gameNumber.ToString());
			}

			if (command->ToLower() == "dealer 5 card win")
			{
				MessageBox::Show(firstName + " has a total of: " + playerCardTotal.ToString() + ". " +
					"Dealer has a total of: " + dealerCardTotal.ToString() + ".\n" +
					"Dealer wins with 5 cards under 22. " + firstName + " loses.", "Game " + gameNumber.ToString());
			}
		}

		/**************************************************************

			NAME: displayGameStats

			DESCRIPTION: Displays in a message box current games won, games lost, games tied. Whether
			the player is winning, losing, or tied with dealer. The function also displays, in a second message box,
			how often a card has been used, how many times the deck has been shuffled, and how many times different hand 
			types have occured.

			PRECONDITIONS: integer counters have been initialized

			POSTCONDITIONS: see description

			CALLED BY: buttonResults_Click

			CALLS: None

			**************************************************************/

		void displayGameStats()
		{
			if (win > loss)
			{
				MessageBox::Show(firstName + " has won " + win.ToString() + " game(s).\n" +
					"The Dealer has won " + loss.ToString() + " game(s).\n" + firstName + " and the Dealer tied " +
								 tie.ToString() + " game(s).\n" + "Total Games: " + gameNumber.ToString() + "\n" +
								 "So far " + firstName + " has won more games.", "Current Results");
			}

			else if (win < loss)
			{
				MessageBox::Show(firstName + " has won " + win.ToString() + " game(s).\n" +
								 "The Dealer has won " + loss.ToString() + " game(s).\n" + firstName + " and the Dealer tied " +
								 tie.ToString() + " game(s).\n" + "Total Games: " + gameNumber.ToString() + "\n" +
								 "So far the Dealer has won more games.", "Current Results");
			}

			else
			{
				MessageBox::Show(firstName + " has won " + win.ToString() + " game(s).\n" +
					"The Dealer has won " + loss.ToString() + " game(s).\n" + firstName + " and the Dealer tied " +
								 tie.ToString() + " game(s).\n" + "Total Games: " + gameNumber.ToString() + "\n" +"So far " +
								 firstName + " and the Dealer are tied.", "Current Results");
			}

			MessageBox::Show(
				"Total times the Deck has been shuffled: " + timesShuffled.ToString() + "\n\n" +
				"Hands under 16: " + handLessThan16.ToString() + "\n" +
				"Hands between 16 and 20: " + handBetween16And20.ToString() + "\n" +
				"Hands equal to 21: " + hand21.ToString() + "\n" +
				"Hands greater than 21 : " + handGreaterThan21.ToString() + "\n\n" +
				"Total Cards Used: " + totalCardsUsed.ToString() + "\n" +
				"Total Aces Used: " + totalAcesUsed.ToString() + "\n" +
				"Total Twos Used: " + totalTwosUsed.ToString() + "\n" +
				"Total Threes Used: " + totalThreesUsed.ToString() + "\n" +
				"Total Fours Used: " + totalFoursUsed.ToString() + "\n" +
				"Total Fives Used: " + totalFivesUsed.ToString() + "\n" +
				"Total Sixes Used: " + totalSixesUsed.ToString() + "\n" +
				"Total Sevens Used: " + totalSevensUsed.ToString() + "\n" +
				"Total Eights Used: " + totalEightsUsed.ToString() + "\n" +
				"Total Nines Used: " + totalNinesUsed.ToString() + "\n" +
				"Total Tens Used: " + totalTensUsed.ToString() + "\n" +
				"Total Jacks Used: " + totalJacksUsed.ToString() + "\n" +
				"Total Queen Used: " + totalQueensUsed.ToString() + "\n" +
				"Total Kings Used: " + totalKingsUsed.ToString(), "Shuffling, Hand, & Card Totals");
		}

		/**************************************************************

			NAME: getCardValue

			DESCRIPTION: returns the integer value of a given card based
			on the game of Black Jack.

			PRECONDITIONS: the function requires a valid card.

			POSTCONDITIONS: see description

			CALLED BY: buttonHit_Click, buttonPlay_Click, buttonStay_Click

			CALLS: None

			**************************************************************/

		int getCardValue(Cards card)
		{
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

		/**************************************************************

			NAME: initializePointArrays

			DESCRIPTION: sets the values of the point arrays dealerCardPositions and playercardPositions

			PRECONDITIONS: the arrays have been intialized.

			POSTCONDITIONS: see description

			CALLED BY: MyForm_Load

			CALLS: None

			**************************************************************/

		void initializePointArrays()
		{
			dealerCardPositions = gcnew array<Point> { Point(573, 112), Point(703, 112), Point(833, 112), Point(631, 333), Point(761, 333) };
			playerCardPositions = gcnew array<Point> { Point(50, 112), Point(180, 112), Point(310, 112), Point(108, 333), Point(238, 333) };
		}

		/**************************************************************

			NAME: quit

			DESCRIPTION: displays a farewell message and image, plays music, and closes the program.

			PRECONDITIONS: None

			POSTCONDITIONS: see description

			CALLED BY: buttonQuit_Click, cleanup

			CALLS: displayFarewellMessage

			**************************************************************/

		void quit()
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			Image^ exitImage = Image::FromFile("..//Media/Images/FMA_everyone.jpg");
			Media::SoundPlayer^ sndPlayer = gcnew Media::SoundPlayer("..//Media/Music/Fukuhara Miho - LET IT OUT (TV Size).wav");

			////////////////////////////////////////////////////////////////////

			pictureBoxAlignment->Image = exitImage;
			pictureBoxAlignment->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			pictureBoxAlignment->BringToFront();
			pictureBoxAlignment->Visible = true;

			sndPlayer->Play();
			displayFarewellMessage();
			Close();
		}

		/**************************************************************

			NAME: shuffleDeck

			DESCRIPTION: simulates a shuffled deck of 52 playing cards

			PRECONDITIONS: None

			POSTCONDITIONS: See description

			CALLED BY: buttonHit_Click, buttonPlay_Click, buttonStay_Click

			CALLS: None

			**************************************************************/

		void shuffleDeck()
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			Cards nextCard = Cards::cA;
			ArrayList sortedDeck;
			Random^ seedGenerator = gcnew Random();
			int index, seed = seedGenerator->Next();
			Random^ shuffler = gcnew Random(seed);

			////////////////////////////////////////////////////////////////////


			while (sortedDeck.Count < 52)
			{
					sortedDeck.Add(nextCard);
					nextCard++;
			}

			for (int i = 51; i > -1; i--)
			{
					index = shuffler->Next(i);
					deck.Add(sortedDeck[index]);
					sortedDeck.RemoveAt(index);
			}

			timesShuffled++;
		}

		/**************************************************************

			NAME: updateBank

			DESCRIPTION: calculates current bank roll and displays it in a label.

			PRECONDITIONS: integer counter bank is initialized.

			POSTCONDITIONS: see description

			CALLED BY: buttonPlay_Click, cleanup

			CALLS: None

			**************************************************************/

		void updateBank()
		{
			if (playerWin && playerBlackJack)
			{
				bank += 30;
				labelBank->Text = "Bank: $" + bank.ToString();
			}

			else if (playerWin)
			{
				bank += 20;
				labelBank->Text = "Bank: $" + bank.ToString();
			}
			else if (tied)
			{
				bank += 10;
				labelBank->Text = "Bank: $" + bank.ToString();
			}
			else if (!bet)
			{
				bank -= 10;
				labelBank->Text = "Bank: $" + bank.ToString();
				bet = true;
			}

			if (bank == 0 && bet)
			{
				bankrupt = true;
			}

			labelBank->BringToFront();
			labelBank->Visible = true;
		}

		////////////////////////////////////////////////////////////////////
		//
		//				END CUSTOM DEFINED FUNCTIONS
		//
		////////////////////////////////////////////////////////////////////

		////////////////////////////////////////////////////////////////////
		//
		//				START EVENT DRIVEN FUNCTIONS
		//
		////////////////////////////////////////////////////////////////////


		/**************************************************************

			NAME: buttonCredits_Click

			DESCRIPTION: displays credits on button press

		**************************************************************/

		private: System::Void buttonCredits_Click(System::Object^  sender, System::EventArgs^  e)
		{
			credits();
		}

		 /**************************************************************

			NAME: buttonHelp_Click

			DESCRIPTION: displays help on button press

		**************************************************************/

		private: System::Void buttonHelp_Click(System::Object^  sender, System::EventArgs^  e)
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////
			StreamReader^ sr;
			String^ message;

			////////////////////////////////////////////////////////////////////



			sr = gcnew StreamReader("..//Farewell/BJ_Manual.txt");
			message = sr->ReadToEnd();
			sr->Close();

			MessageBox::Show(message, "How to Play");
		}

		/**************************************************************

			NAME: buttonHit_Click

			DESCRIPTION: gives player another card in the game of black jack
			and determines if the player has busted.

		**************************************************************/

		private: System::Void buttonHit_Click(System::Object^  sender, System::EventArgs^  e)
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			int playerCardValue;

			////////////////////////////////////////////////////////////////////

			if (deck.Count == 0)
			{
				shuffleDeck();
			}

			cardsDealtToPlayer[playerCardsInHand] = dealCard();


			if (cardAce(cardsDealtToPlayer[playerCardsInHand]))
			{
				playerCardValue = changeValueAce(playerCardsInHand);
			}

			else
			{
				playerCardValue = getCardValue(cardsDealtToPlayer[playerCardsInHand]);
			}

			displayCardandValue(cardsDealtToPlayer[playerCardsInHand], playerCardsInHand, playerCardValue, playerCardPositions[playerCardsInHand], true);
			playerCardsInHand++;

			playerCardTotal += playerCardValue;

			displayCardTotal(true);

			if (bust(playerCardTotal))
			{
				displayGameResults("player bust");
				cleanup(playerCardsInHand, dealerCardsInHand);
				loss++;

			}

			if (playerCardsInHand == 5)
			{
				displayGameResults("player 5 card win");
				playerWin = true;
				cleanup(playerCardsInHand, dealerCardsInHand);
				win++;

			}
		}

		/**************************************************************

			NAME: buttonLogin_Click

			DESCRIPTION: allows a user to log in using a username of their choice, displays a welcome message to the user,
			and prepares the program to start playing Black Jack

		**************************************************************/

		private: System::Void buttonLogin_Click(System::Object^  sender, System::EventArgs^  e)
	{
		username = textBoxLogin->Text;

		if (username->Trim() != "")
		{
			if (username->IndexOf(" ") > 0)
			{
				firstName = username->Substring(0, username->IndexOf(" "));
			}

			else
			{
				firstName = username;
			}

			if (firstName->ToLower() == "admin")
			{
				debugMode = true;
				comboBoxCheat->Enabled = true;
				comboBoxCheat->Visible = true;
			}
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

			labelBank->Visible = true;

			buttonPlay->BringToFront();
			buttonPlay->Visible = true;

			buttonResults->BringToFront();
			buttonResults->Visible = true;
		}

		else
		{
			MessageBox::Show("Please enter a username to log in!", "Error");
		}
}

		/**************************************************************

			NAME: buttonQuit_Click

			DESCRIPTION: displays a farewell message, plays music, and exits the program

		**************************************************************/

		private: System::Void buttonQuit_Click(System::Object^  sender, System::EventArgs^  e)
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			Windows::Forms::DialogResult buttonClicked;


			////////////////////////////////////////////////////////////////////

			if (playingGame == true)
			{
				buttonClicked = MessageBox::Show("You're in the middle of a game. Do you really want to quit?\n(It will count as a loss)",
					"Game in Progress",
					MessageBoxButtons::YesNo,
					MessageBoxIcon::Question,
					MessageBoxDefaultButton::Button2);

				if (buttonClicked == Windows::Forms::DialogResult::Yes)
				{
					loss++;
					quit();

				}
			}
			else
			{
				quit();
				Close();
			}

		}

		/**************************************************************

			NAME: buttonPlay_Click

			DESCRIPTION: deals cards to player and dealer and determines if anyone has won or lost the game
			of Black Jack.

		**************************************************************/

		private: System::Void buttonPlay_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				////////////////////////////////////////////////////////////////////
				//
				//				DECLARE LOCAL VARIABLES/OBJECTS
				//
				////////////////////////////////////////////////////////////////////

				int playerCardValue, dealerCardValue;

				////////////////////////////////////////////////////////////////////

				buttonHit->Visible = true;
				buttonStay->Visible = true;
				buttonPlay->Visible = false;

				playingGame = true;

				gameNumber++;

				labelGameNumber->Text = "Game " + gameNumber;
				labelGameNumber->Visible = true;



				if (debugMode)
				{
					debugDecks();

					comboBoxCheat->Visible = false;

					if (bank == 10)
					{
						bank += 1000;
					}
				}

				updateBank();

				if (deck.Count < 4)
				{
					shuffleDeck();
				}

				for (int i = 0; i < 2; i ++)
				{
					cardsDealtToPlayer[i] = dealCard();
					cardsDealtToDealer[i] = dealCard();

					playerCardValue = getCardValue(cardsDealtToPlayer[i]);
					dealerCardValue = getCardValue(cardsDealtToDealer[i]);

					displayCardandValue(cardsDealtToPlayer[i], i, playerCardValue, playerCardPositions[i], true);
					displayCardandValue(cardsDealtToDealer[i], i, dealerCardValue, dealerCardPositions[i], false);

					if (cardAce(cardsDealtToDealer[i]))
					{
						dealerCardValue = dealerAceChange(dealerCardTotal);

						if (dealerCardValue == 1)
						{
							dealerCardLabels[i]->Text = "Card Value: 1";
						}
						
					}

					playerCardsInHand++;
					dealerCardsInHand++;

					playerCardTotal += playerCardValue;
					dealerCardTotal += dealerCardValue;
				}

				
				displayCardTotal(true);
				displayCardTotal(false);

				if (blackJack(playerCardTotal) && blackJack(dealerCardTotal))
				{
					displayGameResults("bj tie");
					tied = true;
					cleanup(playerCardsInHand, dealerCardsInHand);
					tie++;
					
				}

				else if (blackJack(playerCardTotal))
				{
					displayGameResults("player bj");
					playerWin = true;
					playerBlackJack = true;
					cleanup(playerCardsInHand, dealerCardsInHand);
					win++;
					
				}

				else if (blackJack(dealerCardTotal))
				{
					displayGameResults("dealer bj");
					cleanup(playerCardsInHand, dealerCardsInHand);
					loss++;
				}
				
				for (int i = 0; i < playerCardsInHand; i++)
				{
					if (cardAce(cardsDealtToPlayer[i]))
						{
							if (changeValueAce(i) == 1)
							{
								playerCardTotal -= 10;
								displayCardTotal(true);

								playerCardLabels[i]->Text = "Card Value: 1";
								//displayCardandValue(cardsDealtToPlayer[i], i, 1, playerCardPositions[i], true);
							}
						}
				}
				

				if (bust(playerCardTotal))
				{
					displayGameResults("player bust");
					cleanup(playerCardsInHand, dealerCardsInHand);
					loss++;
				}

			}

		/**************************************************************

			NAME: buttonResults_Click

			DESCRIPTION: displays statistics of the games of black jack

		**************************************************************/

		private: System::Void buttonResults_Click(System::Object^  sender, System::EventArgs^  e)
		{
			displayGameStats();
		}
		
		/**************************************************************

			NAME: buttonStay_Click

			DESCRIPTION: allows dealer to take their turn of hitting, determines if the dealer busts,
			determines who won this game of Black Jack.

		**************************************************************/

		private: System::Void buttonStay_Click(System::Object^  sender, System::EventArgs^  e) 
{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			int dealerCardValue;

			////////////////////////////////////////////////////////////////////

			while (dealerHit(dealerCardTotal) && dealerCardsInHand < 5)
			{
				if (deck.Count == 0)
				{
					shuffleDeck();
				}
				displayDealerStrategy();
				labelDescription->Location = Point(504 - (labelDescription->Width / 2), 49);

				cardsDealtToDealer[dealerCardsInHand] = dealCard();

				dealerCardValue = getCardValue(cardsDealtToDealer[dealerCardsInHand]);

				displayCardandValue(cardsDealtToDealer[dealerCardsInHand], dealerCardsInHand, dealerCardValue, dealerCardPositions[dealerCardsInHand], false);

				if (cardAce(cardsDealtToDealer[dealerCardsInHand]))
				{
					dealerCardValue = dealerAceChange(dealerCardTotal);

					if (dealerCardValue == 1)
					{
						dealerCardLabels[dealerCardsInHand]->Text = "Card Value: 1";
					}

				}

				dealerCardsInHand++;

				dealerCardTotal += dealerCardValue;

				displayCardTotal(false);
			}

			if (dealerCardTotal < 22 && dealerCardsInHand != 5)
			{
				displayDealerStrategy();
			}

			if (bust(dealerCardTotal))
			{
				displayGameResults("dealer bust");
				playerWin = true;
				cleanup(playerCardsInHand, dealerCardsInHand);
				win++;
				

			}

			else if (dealerCardsInHand == 5)
			{
				displayGameResults("dealer 5 card win");
				cleanup(playerCardsInHand, dealerCardsInHand);
				loss++;
			}

			else if (dealerCardTotal > playerCardTotal)
			{
				displayGameResults("dealer win");
				cleanup(playerCardsInHand, dealerCardsInHand);
				loss++;
			}

			else if (playerCardTotal > dealerCardTotal)
			{
				displayGameResults("player win");
				playerWin = true;
				cleanup(playerCardsInHand, dealerCardsInHand);
				win++;
				
			}

			else if (playerCardTotal == dealerCardTotal)
			{
				displayGameResults("tie");
				tied = true;

				cleanup(playerCardsInHand, dealerCardsInHand);
				tie++;
				
			}

			else
			{
				MessageBox::Show("Error! Dealer Total: " + dealerCardTotal.ToString() + " Player Total: " + playerCardTotal.ToString(), "Error!");
				cleanup(playerCardsInHand, dealerCardsInHand);
			}
}

		/**************************************************************

			NAME: MyForm_Load

			DESCRIPTION: displays picture boxes, initializes arrays, displays a label, and plays music.

		**************************************************************/

		private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
		{
			////////////////////////////////////////////////////////////////////
			//
			//				DECLARE LOCAL VARIABLES/OBJECTS
			//
			////////////////////////////////////////////////////////////////////

			Media::SoundPlayer^ sndPlayer = gcnew Media::SoundPlayer("..//Media/Music/Senju Akira - Lapis Philosophorum ~Chant~.wav");

			////////////////////////////////////////////////////////////////////

			initializePointArrays();
			labelDateTime->Visible = true;
			pictureBoxCardAnimation1->Visible = true;
			pictureBoxCardAnimation2->Visible = true;

			sndPlayer->PlayLooping();
		}

		/**************************************************************

			NAME: timerCardAnimation_Tick

			DESCRIPTION: updates images in two pictures boxes with different card images

		**************************************************************/

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


			/*if (timerCardAnimation->Interval == 1000)
			{
			counter++;
			}*/
		}

		/**************************************************************

			NAME: timerDateTime_Tick

			DESCRIPTION: updates a label with the current date and time

		**************************************************************/


		private: System::Void timerDateTime_Tick(System::Object^  sender, System::EventArgs^  e)
		{
			labelDateTime->Text = DateTime::Now.ToString();
		}

			////////////////////////////////////////////////////////////////////
			//
			//				END EVENT DRIVEN FUNCTIONS
			//
			///////////////////////////////////////////////////////////////////

};
}
