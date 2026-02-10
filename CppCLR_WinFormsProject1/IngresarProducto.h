#pragma once

namespace CppCLR_WinFormsProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de IngresarProducto
	/// </summary>
	public ref class IngresarProducto : public System::Windows::Forms::Form
	{
	public:
		IngresarProducto(void);

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~IngresarProducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtPrecio;
	private: System::Windows::Forms::ComboBox^ comboCategoria;
	private: System::Windows::Forms::Button^ btnGuardar;
	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtPrecio = (gcnew System::Windows::Forms::TextBox());
			this->comboCategoria = (gcnew System::Windows::Forms::ComboBox());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(0, 0);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(100, 20);
			this->txtNombre->TabIndex = 0;
			// 
			// txtPrecio
			// 
			this->txtPrecio->Location = System::Drawing::Point(0, 61);
			this->txtPrecio->Name = L"txtPrecio";
			this->txtPrecio->Size = System::Drawing::Size(100, 20);
			this->txtPrecio->TabIndex = 1;
			// 
			// comboCategoria
			// 
			this->comboCategoria->FormattingEnabled = true;
			this->comboCategoria->Location = System::Drawing::Point(0, 113);
			this->comboCategoria->Name = L"comboCategoria";
			this->comboCategoria->Size = System::Drawing::Size(121, 21);
			this->comboCategoria->TabIndex = 2;
			// 
			// btnGuardar
			// 
			this->btnGuardar->Location = System::Drawing::Point(0, 160);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(75, 23);
			this->btnGuardar->TabIndex = 3;
			this->btnGuardar->Text = L"button1";
			this->btnGuardar->UseVisualStyleBackColor = true;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &IngresarProducto::btnGuardar_Click);
			// 
			// IngresarProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->comboCategoria);
			this->Controls->Add(this->txtPrecio);
			this->Controls->Add(this->txtNombre);
			this->Name = L"IngresarProducto";
			this->Text = L"IngresarProducto";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
