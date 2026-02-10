#pragma once

namespace CppCLR_WinFormsProject1 {

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
	public:
		Form1(void);
		
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
	private: System::Windows::Forms::ListBox^ listBoxCategorias;

	private: System::Windows::Forms::ListBox^ listBoxProductos;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtPrecio;
	private: System::Windows::Forms::ComboBox^ comboCategoria;
	private: System::Windows::Forms::Button^ btnAgregarProducto;
	private: System::Windows::Forms::TextBox^ txtBuscar;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::Label^ lblResultadoNombre;
	private: System::Windows::Forms::Label^ lblResultadoCategoria;


	private: System::Windows::Forms::Label^ lblResultadoPrecio;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;







	protected:

	protected:

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
			this->listBoxCategorias = (gcnew System::Windows::Forms::ListBox());
			this->listBoxProductos = (gcnew System::Windows::Forms::ListBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtPrecio = (gcnew System::Windows::Forms::TextBox());
			this->comboCategoria = (gcnew System::Windows::Forms::ComboBox());
			this->btnAgregarProducto = (gcnew System::Windows::Forms::Button());
			this->txtBuscar = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->lblResultadoNombre = (gcnew System::Windows::Forms::Label());
			this->lblResultadoCategoria = (gcnew System::Windows::Forms::Label());
			this->lblResultadoPrecio = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBoxCategorias
			// 
			this->listBoxCategorias->FormattingEnabled = true;
			this->listBoxCategorias->Location = System::Drawing::Point(12, 37);
			this->listBoxCategorias->Name = L"listBoxCategorias";
			this->listBoxCategorias->Size = System::Drawing::Size(120, 95);
			this->listBoxCategorias->TabIndex = 0;
			this->listBoxCategorias->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBoxCategorias_SelectedIndexChanged);
			// 
			// listBoxProductos
			// 
			this->listBoxProductos->FormattingEnabled = true;
			this->listBoxProductos->Location = System::Drawing::Point(161, 37);
			this->listBoxProductos->Name = L"listBoxProductos";
			this->listBoxProductos->Size = System::Drawing::Size(120, 95);
			this->listBoxProductos->TabIndex = 2;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(407, 112);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(100, 20);
			this->txtNombre->TabIndex = 3;
			// 
			// txtPrecio
			// 
			this->txtPrecio->Location = System::Drawing::Point(407, 165);
			this->txtPrecio->Name = L"txtPrecio";
			this->txtPrecio->Size = System::Drawing::Size(100, 20);
			this->txtPrecio->TabIndex = 4;
			// 
			// comboCategoria
			// 
			this->comboCategoria->FormattingEnabled = true;
			this->comboCategoria->Location = System::Drawing::Point(407, 211);
			this->comboCategoria->Name = L"comboCategoria";
			this->comboCategoria->Size = System::Drawing::Size(121, 21);
			this->comboCategoria->TabIndex = 5;
			// 
			// btnAgregarProducto
			// 
			this->btnAgregarProducto->Location = System::Drawing::Point(392, 262);
			this->btnAgregarProducto->Name = L"btnAgregarProducto";
			this->btnAgregarProducto->Size = System::Drawing::Size(160, 23);
			this->btnAgregarProducto->TabIndex = 6;
			this->btnAgregarProducto->Text = L"Agregar Producto";
			this->btnAgregarProducto->UseVisualStyleBackColor = true;
			this->btnAgregarProducto->Click += gcnew System::EventHandler(this, &Form1::btnAgregarProducto_Click);
			// 
			// txtBuscar
			// 
			this->txtBuscar->Location = System::Drawing::Point(23, 241);
			this->txtBuscar->Name = L"txtBuscar";
			this->txtBuscar->Size = System::Drawing::Size(100, 20);
			this->txtBuscar->TabIndex = 7;
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(23, 301);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(75, 23);
			this->btnBuscar->TabIndex = 8;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &Form1::btnBuscar_Click);
			// 
			// lblResultadoNombre
			// 
			this->lblResultadoNombre->AutoSize = true;
			this->lblResultadoNombre->Location = System::Drawing::Point(143, 248);
			this->lblResultadoNombre->Name = L"lblResultadoNombre";
			this->lblResultadoNombre->Size = System::Drawing::Size(47, 13);
			this->lblResultadoNombre->TabIndex = 9;
			this->lblResultadoNombre->Text = L"Nombre:";
			// 
			// lblResultadoCategoria
			// 
			this->lblResultadoCategoria->AutoSize = true;
			this->lblResultadoCategoria->Location = System::Drawing::Point(143, 301);
			this->lblResultadoCategoria->Name = L"lblResultadoCategoria";
			this->lblResultadoCategoria->Size = System::Drawing::Size(57, 13);
			this->lblResultadoCategoria->TabIndex = 10;
			this->lblResultadoCategoria->Text = L"Categoría:";
			// 
			// lblResultadoPrecio
			// 
			this->lblResultadoPrecio->AutoSize = true;
			this->lblResultadoPrecio->Location = System::Drawing::Point(143, 275);
			this->lblResultadoPrecio->Name = L"lblResultadoPrecio";
			this->lblResultadoPrecio->Size = System::Drawing::Size(40, 13);
			this->lblResultadoPrecio->TabIndex = 11;
			this->lblResultadoPrecio->Text = L"Precio:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 204);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Busqueda por nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(71, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Mostrar productos por categoria";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(404, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Registrar un producto";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(404, 80);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Nombre";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(404, 149);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Precio";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(406, 195);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Categoría";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(574, 370);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblResultadoPrecio);
			this->Controls->Add(this->lblResultadoCategoria);
			this->Controls->Add(this->lblResultadoNombre);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->txtBuscar);
			this->Controls->Add(this->btnAgregarProducto);
			this->Controls->Add(this->comboCategoria);
			this->Controls->Add(this->txtPrecio);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->listBoxProductos);
			this->Controls->Add(this->listBoxCategorias);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void listBoxCategorias_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnAgregarProducto_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}

};
}
