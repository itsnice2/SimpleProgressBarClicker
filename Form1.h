#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		double myClicks = 0.0;
		double ClicksPerformed = 0.0;
		int ClicksPerClick = 1;
		double clickmultipliktor = 0.0;

		double add1Click = 0.0;
		double add10Clicks = 0.0;
		double add100Clicks = 0.0;
		
		double progressBarcounter = 0.0;
		int progressbarStepCount = 1;
		int progressbarMaximum = 100;

		int timer_multiplikator = 10;

	private: System::Windows::Forms::ProgressBar^ progressBarLevel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label_allMyClicks;
	private: System::Windows::Forms::Label^ label_ClicksPerClick;
	private: System::Windows::Forms::Button^ btn_add1Click;
	private: System::Windows::Forms::Button^ btn_add100Click;

	private: System::Windows::Forms::Button^ btn_add10Click;
	private: System::Windows::Forms::Label^ label_add1Click;
	private: System::Windows::Forms::Timer^ clickertimer;
	private: System::Windows::Forms::Label^ label_add10Click;
	private: System::Windows::Forms::Label^ label_add100Click;



	private: System::Windows::Forms::Label^ label_Clicks_performed;
		   



	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::ComponentModel::IContainer^ components;


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   this->progressBarLevel1 = (gcnew System::Windows::Forms::ProgressBar());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label_Clicks_performed = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label_allMyClicks = (gcnew System::Windows::Forms::Label());
			   this->label_ClicksPerClick = (gcnew System::Windows::Forms::Label());
			   this->btn_add1Click = (gcnew System::Windows::Forms::Button());
			   this->btn_add100Click = (gcnew System::Windows::Forms::Button());
			   this->btn_add10Click = (gcnew System::Windows::Forms::Button());
			   this->label_add1Click = (gcnew System::Windows::Forms::Label());
			   this->clickertimer = (gcnew System::Windows::Forms::Timer(this->components));
			   this->label_add10Click = (gcnew System::Windows::Forms::Label());
			   this->label_add100Click = (gcnew System::Windows::Forms::Label());
			   this->SuspendLayout();
			   // 
			   // progressBarLevel1
			   // 
			   this->progressBarLevel1->Location = System::Drawing::Point(12, 27);
			   this->progressBarLevel1->Name = L"progressBarLevel1";
			   this->progressBarLevel1->Size = System::Drawing::Size(430, 23);
			   this->progressBarLevel1->TabIndex = 0;
			   this->progressBarLevel1->Click += gcnew System::EventHandler(this, &Form1::progressBarLevel1_Click);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(132, 53);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(82, 13);
			   this->label1->TabIndex = 1;
			   this->label1->Text = L"Klicks per Klick:";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(12, 11);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(98, 13);
			   this->label2->TabIndex = 2;
			   this->label2->Text = L"Ausgeführte Klicks:";
			   // 
			   // label_Clicks_performed
			   // 
			   this->label_Clicks_performed->AutoSize = true;
			   this->label_Clicks_performed->Location = System::Drawing::Point(116, 11);
			   this->label_Clicks_performed->Name = L"label_Clicks_performed";
			   this->label_Clicks_performed->Size = System::Drawing::Size(13, 13);
			   this->label_Clicks_performed->TabIndex = 3;
			   this->label_Clicks_performed->Text = L"0";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(227, 11);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(88, 13);
			   this->label3->TabIndex = 4;
			   this->label3->Text = L"Klicks insgesamt:";
			   // 
			   // label_allMyClicks
			   // 
			   this->label_allMyClicks->AutoSize = true;
			   this->label_allMyClicks->Location = System::Drawing::Point(321, 11);
			   this->label_allMyClicks->Name = L"label_allMyClicks";
			   this->label_allMyClicks->Size = System::Drawing::Size(13, 13);
			   this->label_allMyClicks->TabIndex = 5;
			   this->label_allMyClicks->Text = L"0";
			   // 
			   // label_ClicksPerClick
			   // 
			   this->label_ClicksPerClick->AutoSize = true;
			   this->label_ClicksPerClick->Location = System::Drawing::Point(220, 53);
			   this->label_ClicksPerClick->Name = L"label_ClicksPerClick";
			   this->label_ClicksPerClick->Size = System::Drawing::Size(13, 13);
			   this->label_ClicksPerClick->TabIndex = 6;
			   this->label_ClicksPerClick->Text = L"0";
			   // 
			   // btn_add1Click
			   // 
			   this->btn_add1Click->Location = System::Drawing::Point(15, 69);
			   this->btn_add1Click->Name = L"btn_add1Click";
			   this->btn_add1Click->Size = System::Drawing::Size(133, 23);
			   this->btn_add1Click->TabIndex = 7;
			   this->btn_add1Click->Text = L"+1 Klick";
			   this->btn_add1Click->UseVisualStyleBackColor = true;
			   this->btn_add1Click->Click += gcnew System::EventHandler(this, &Form1::btn_add1Click_Click);
			   // 
			   // btn_add100Click
			   // 
			   this->btn_add100Click->Location = System::Drawing::Point(309, 69);
			   this->btn_add100Click->Name = L"btn_add100Click";
			   this->btn_add100Click->Size = System::Drawing::Size(133, 23);
			   this->btn_add100Click->TabIndex = 8;
			   this->btn_add100Click->Text = L"+100 Klicks";
			   this->btn_add100Click->UseVisualStyleBackColor = true;
			   this->btn_add100Click->Visible = false;
			   // 
			   // btn_add10Click
			   // 
			   this->btn_add10Click->Location = System::Drawing::Point(162, 69);
			   this->btn_add10Click->Name = L"btn_add10Click";
			   this->btn_add10Click->Size = System::Drawing::Size(133, 23);
			   this->btn_add10Click->TabIndex = 9;
			   this->btn_add10Click->Text = L"+10 Klicks";
			   this->btn_add10Click->UseVisualStyleBackColor = true;
			   this->btn_add10Click->Visible = false;
			   // 
			   // label_add1Click
			   // 
			   this->label_add1Click->AutoSize = true;
			   this->label_add1Click->Location = System::Drawing::Point(24, 95);
			   this->label_add1Click->Name = L"label_add1Click";
			   this->label_add1Click->Size = System::Drawing::Size(25, 13);
			   this->label_add1Click->TabIndex = 10;
			   this->label_add1Click->Text = L"100";
			   // 
			   // clickertimer
			   // 
			   this->clickertimer->Tick += gcnew System::EventHandler(this, &Form1::clickertimer_Tick);
			   // 
			   // label_add10Click
			   // 
			   this->label_add10Click->AutoSize = true;
			   this->label_add10Click->Location = System::Drawing::Point(170, 95);
			   this->label_add10Click->Name = L"label_add10Click";
			   this->label_add10Click->Size = System::Drawing::Size(13, 13);
			   this->label_add10Click->TabIndex = 11;
			   this->label_add10Click->Text = L"0";
			   this->label_add10Click->Visible = false;
			   // 
			   // label_add100Click
			   // 
			   this->label_add100Click->AutoSize = true;
			   this->label_add100Click->Location = System::Drawing::Point(321, 98);
			   this->label_add100Click->Name = L"label_add100Click";
			   this->label_add100Click->Size = System::Drawing::Size(13, 13);
			   this->label_add100Click->TabIndex = 12;
			   this->label_add100Click->Text = L"0";
			   this->label_add100Click->Visible = false;
			   // 
			   // Form1
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			   this->ClientSize = System::Drawing::Size(454, 120);
			   this->Controls->Add(this->label_add100Click);
			   this->Controls->Add(this->label_add10Click);
			   this->Controls->Add(this->label_add1Click);
			   this->Controls->Add(this->btn_add10Click);
			   this->Controls->Add(this->btn_add100Click);
			   this->Controls->Add(this->btn_add1Click);
			   this->Controls->Add(this->label_ClicksPerClick);
			   this->Controls->Add(this->label_allMyClicks);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label_Clicks_performed);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->progressBarLevel1);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->MaximizeBox = false;
			   this->MinimizeBox = false;
			   this->Name = L"Form1";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"SimpleProgressBarClicker";
			   this->TopMost = true;
			   this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	public: float round(float var)
	{
		// 37.66666 * 100 =3766.66
		// 3766.66 + .5 =3767.16    for rounding off value
		// then type cast to int so value is 3767
		// then divided by 100 so the value converted into 37.67
		float value = (int)(var * 100 + .5);
		return (float)value / 100;
	}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		
		progressBarLevel1->Maximum = progressbarMaximum;
		progressBarLevel1->Step = progressbarStepCount;

		label_ClicksPerClick->Text = Convert::ToString(ClicksPerClick);
		label_add1Click->Text = Convert::ToString(add1Click);

		clickertimer->Interval = 100;
		clickertimer->Start();

	};

	private: System::Void progressBarLevel1_Click(System::Object^ sender, System::EventArgs^ e) {
		ClicksPerformed += ClicksPerClick;
		myClicks += ClicksPerClick;
		label_Clicks_performed->Text = Convert::ToString(Convert::ToInt32(myClicks));
		label_allMyClicks->Text = Convert::ToString(Convert::ToInt32(ClicksPerformed));
		
		if(progressBarLevel1->Value == 100)
		{
			progressBarLevel1->Value = 0;
			progressbarStepCount += 1;

			if (progressbarStepCount % 5 == 0)
			{
				clickmultipliktor += 0.5;
				// ToDo !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
			}
			
		}

		//progressBarLevel1->Step = 1;
		progressBarLevel1->PerformStep();
	}

private: System::Void clickertimer_Tick(System::Object^ sender, System::EventArgs^ e) {

	// Alle Label befüllen
	label_Clicks_performed->Text = Convert::ToString(Convert::ToInt32(myClicks));
	label_allMyClicks->Text = Convert::ToString(Convert::ToInt32(ClicksPerformed));
	label_add1Click->Text = Convert::ToString(round(add1Click));
	label_ClicksPerClick->Text = Convert::ToString(round(ClicksPerClick));

	if (ClicksPerformed > 1000)
	{
		btn_add10Click->Visible = 1;
		label_add10Click->Visible = 1;
	}

	if (ClicksPerformed > 100000)
	{
		btn_add100Click->Visible = 1;
		label_add100Click->Visible = 1;
	}

}
private: System::Void btn_add1Click_Click(System::Object^ sender, System::EventArgs^ e) {
	if(myClicks >= add1Click)
	{ 
		ClicksPerClick += 1;
		label_ClicksPerClick->Text = Convert::ToString(ClicksPerClick);
		myClicks = myClicks - round(add1Click);
		add1Click = add1Click * 1.5;
		label_add1Click->Text = Convert::ToString(round(add1Click));
	}
}
};
}