namespace kronometre_uygulamasi
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            components = new System.ComponentModel.Container();
            lbsaat = new Label();
            label2 = new Label();
            lbdakika = new Label();
            label4 = new Label();
            lbsaniye = new Label();
            groupBox1 = new GroupBox();
            checkBox1 = new CheckBox();
            button3 = new Button();
            button2 = new Button();
            button1 = new Button();
            listBox1 = new ListBox();
            basla = new Button();
            timer1 = new System.Windows.Forms.Timer(components);
            backgroundWorker1 = new System.ComponentModel.BackgroundWorker();
            groupBox1.SuspendLayout();
            SuspendLayout();
            // 
            // lbsaat
            // 
            lbsaat.AutoSize = true;
            lbsaat.Font = new Font("Tw Cen MT Condensed", 30F, FontStyle.Regular, GraphicsUnit.Point);
            lbsaat.Location = new Point(71, 66);
            lbsaat.Name = "lbsaat";
            lbsaat.Size = new Size(61, 58);
            lbsaat.TabIndex = 0;
            lbsaat.Text = "00";
            lbsaat.Click += label1_Click;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("Tw Cen MT Condensed", 30F, FontStyle.Regular, GraphicsUnit.Point);
            label2.Location = new Point(121, 58);
            label2.Name = "label2";
            label2.Size = new Size(34, 58);
            label2.TabIndex = 1;
            label2.Text = ":";
            // 
            // lbdakika
            // 
            lbdakika.AutoSize = true;
            lbdakika.Font = new Font("Tw Cen MT Condensed", 30F, FontStyle.Regular, GraphicsUnit.Point);
            lbdakika.Location = new Point(145, 66);
            lbdakika.Name = "lbdakika";
            lbdakika.Size = new Size(61, 58);
            lbdakika.TabIndex = 2;
            lbdakika.Text = "00";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Font = new Font("Tw Cen MT Condensed", 30F, FontStyle.Regular, GraphicsUnit.Point);
            label4.Location = new Point(197, 58);
            label4.Name = "label4";
            label4.Size = new Size(34, 58);
            label4.TabIndex = 3;
            label4.Text = ":";
            // 
            // lbsaniye
            // 
            lbsaniye.AutoSize = true;
            lbsaniye.Font = new Font("Tw Cen MT Condensed", 30F, FontStyle.Regular, GraphicsUnit.Point);
            lbsaniye.Location = new Point(221, 66);
            lbsaniye.Name = "lbsaniye";
            lbsaniye.Size = new Size(61, 58);
            lbsaniye.TabIndex = 4;
            lbsaniye.Text = "00";
            // 
            // groupBox1
            // 
            groupBox1.BackColor = Color.White;
            groupBox1.Controls.Add(checkBox1);
            groupBox1.Controls.Add(button3);
            groupBox1.Controls.Add(button2);
            groupBox1.Controls.Add(button1);
            groupBox1.Controls.Add(listBox1);
            groupBox1.Controls.Add(lbsaniye);
            groupBox1.Controls.Add(basla);
            groupBox1.Controls.Add(lbsaat);
            groupBox1.Controls.Add(label2);
            groupBox1.Controls.Add(lbdakika);
            groupBox1.Controls.Add(label4);
            groupBox1.Location = new Point(2, -19);
            groupBox1.Name = "groupBox1";
            groupBox1.Size = new Size(515, 506);
            groupBox1.TabIndex = 5;
            groupBox1.TabStop = false;
            groupBox1.Text = "groupBox1";
            groupBox1.Enter += groupBox1_Enter;
            // 
            // checkBox1
            // 
            checkBox1.AutoSize = true;
            checkBox1.Font = new Font("Impact", 12F, FontStyle.Regular, GraphicsUnit.Point);
            checkBox1.ForeColor = SystemColors.ControlText;
            checkBox1.ImageAlign = ContentAlignment.MiddleRight;
            checkBox1.Location = new Point(47, 439);
            checkBox1.Name = "checkBox1";
            checkBox1.Size = new Size(135, 29);
            checkBox1.TabIndex = 13;
            checkBox1.Text = "KOYU TEMA ☾";
            checkBox1.UseVisualStyleBackColor = true;
            checkBox1.CheckedChanged += checkBox1_CheckedChanged;
            // 
            // button3
            // 
            button3.BackColor = Color.White;
            button3.FlatAppearance.BorderSize = 0;
            button3.FlatStyle = FlatStyle.Flat;
            button3.Font = new Font("Impact", 12F, FontStyle.Regular, GraphicsUnit.Point);
            button3.ForeColor = SystemColors.ControlText;
            button3.Location = new Point(184, 288);
            button3.Name = "button3";
            button3.Size = new Size(131, 123);
            button3.TabIndex = 11;
            button3.Text = "RESET";
            button3.UseVisualStyleBackColor = false;
            button3.Click += button3_Click;
            // 
            // button2
            // 
            button2.BackColor = Color.White;
            button2.FlatAppearance.BorderSize = 0;
            button2.FlatStyle = FlatStyle.Flat;
            button2.Font = new Font("Impact", 12F, FontStyle.Regular, GraphicsUnit.Point);
            button2.ForeColor = SystemColors.ControlText;
            button2.Location = new Point(47, 288);
            button2.Name = "button2";
            button2.Size = new Size(131, 123);
            button2.TabIndex = 10;
            button2.Text = "TUR";
            button2.UseVisualStyleBackColor = false;
            button2.Click += button2_Click;
            // 
            // button1
            // 
            button1.BackColor = Color.White;
            button1.FlatAppearance.BorderSize = 0;
            button1.FlatStyle = FlatStyle.Flat;
            button1.Font = new Font("Impact", 12F, FontStyle.Regular, GraphicsUnit.Point);
            button1.ForeColor = SystemColors.ControlText;
            button1.Location = new Point(184, 159);
            button1.Name = "button1";
            button1.Size = new Size(131, 123);
            button1.TabIndex = 9;
            button1.Text = "DUR";
            button1.UseVisualStyleBackColor = false;
            button1.Click += button1_Click;
            // 
            // listBox1
            // 
            listBox1.BackColor = SystemColors.ControlLightLight;
            listBox1.BorderStyle = BorderStyle.None;
            listBox1.Font = new Font("Impact", 12F, FontStyle.Regular, GraphicsUnit.Point);
            listBox1.ForeColor = SystemColors.ControlText;
            listBox1.FormattingEnabled = true;
            listBox1.ItemHeight = 25;
            listBox1.Location = new Point(321, 76);
            listBox1.Name = "listBox1";
            listBox1.Size = new Size(139, 325);
            listBox1.TabIndex = 8;
            listBox1.SelectedIndexChanged += listBox1_SelectedIndexChanged;
            // 
            // basla
            // 
            basla.BackColor = Color.White;
            basla.FlatAppearance.BorderSize = 0;
            basla.FlatStyle = FlatStyle.Flat;
            basla.Font = new Font("Impact", 12F, FontStyle.Regular, GraphicsUnit.Point);
            basla.ForeColor = SystemColors.ControlText;
            basla.Location = new Point(47, 159);
            basla.Name = "basla";
            basla.Size = new Size(131, 123);
            basla.TabIndex = 6;
            basla.Text = "BASLA";
            basla.UseVisualStyleBackColor = false;
            basla.Click += basla_Click;
            // 
            // timer1
            // 
            timer1.Interval = 1000;
            timer1.Tick += timer1_Tick;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(513, 481);
            Controls.Add(groupBox1);
            Name = "Form1";
            Text = "Form1";
            groupBox1.ResumeLayout(false);
            groupBox1.PerformLayout();
            ResumeLayout(false);
        }

        #endregion

        private Label lbsaat;
        private Label label2;
        private Label lbdakika;
        private Label label4;
        private Label lbsaniye;
        private GroupBox groupBox1;
        private ListBox listBox1;
        private Button basla;
        private Button button3;
        private Button button2;
        private Button button1;
        private System.Windows.Forms.Timer timer1;
        private System.ComponentModel.BackgroundWorker backgroundWorker1;
        private CheckBox checkBox1;
    }
}