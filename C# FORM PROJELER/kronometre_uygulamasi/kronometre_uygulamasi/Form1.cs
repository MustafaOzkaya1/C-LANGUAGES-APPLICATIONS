namespace kronometre_uygulamasi
{
    public partial class Form1 : Form
    {

        int saniye = 0;
        int dakika = 0;
        int saat = 0;

        public Form1()
        {

            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void groupBox1_Enter(object sender, EventArgs e)
        {

        }

        //baþla butonu
        private void basla_Click(object sender, EventArgs e)
        {
            timer1.Enabled = true;

        }

        //timer
        private void timer1_Tick(object sender, EventArgs e)
        {
            saniye++;
            lbsaniye.Text = saniye.ToString();
            if (saniye < 10)
            {
                lbsaniye.Text = "0" + saniye;
            }
            if (saniye == 60)
            {

                saniye = 00;
                lbsaniye.Text = saniye.ToString();
                lbsaniye.Text = "0" + lbsaniye.Text;
                dakika++;
                lbdakika.Text = dakika.ToString();
            }
            if (dakika < 10)
            {
                lbdakika.Text = "0" + dakika;
            }
            if (dakika == 60)
            {

                dakika = 00;
                lbdakika.Text = dakika.ToString();
                lbdakika.Text = "0" + lbdakika.Text;
                saat++;
                lbsaat.Text = saat.ToString();

            }
            if (saat < 10)
            {
                lbsaat.Text = "0" + saat;
            }



            // lbsaat.Text = saat.ToString();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            timer1.Enabled = false;
        }
        //tur butonu
        string tur;
        private void button2_Click(object sender, EventArgs e)
        {
            tur = lbsaat.Text + "." + lbdakika.Text + "." + lbsaniye.Text;

            listBox1.Items.Add(tur);
        }

        //reset butonu
        private void button3_Click(object sender, EventArgs e)
        {
            timer1.Enabled = false;
            lbsaniye.Text = "00";
            lbdakika.Text = "00";
            lbdakika.Text = "00";
            listBox1.Items.Clear();
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {

        }


        //karanlýk mod
        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBox1.Checked)
            {
                groupBox1.BackColor = Color.Black;
                lbdakika.ForeColor = Color.White;
                lbsaniye.ForeColor = Color.White;
                lbsaat.ForeColor = Color.White;
                label2.ForeColor = Color.White;
                label4.ForeColor = Color.White;
                checkBox1.ForeColor = Color.White;
                basla.ForeColor = Color.White;
                basla.BackColor = Color.Black;
                button1.BackColor = Color.Black;
                button1.ForeColor = Color.White;
                button2.BackColor = Color.Black;
                button2.ForeColor = Color.White;
                button3.BackColor = Color.Black;
                button3.ForeColor = Color.White;
                listBox1.ForeColor = Color.White;
                listBox1.BackColor = Color.Black;


            }
            else
            {
                groupBox1.BackColor = Color.White;
                lbdakika.ForeColor = Color.Black;
                lbsaniye.ForeColor = Color.Black;
                lbsaat.ForeColor = Color.Black;
                label2.ForeColor = Color.Black;
                label4.ForeColor = Color.Black;
                checkBox1.ForeColor = Color.Black;
                basla.ForeColor = Color.Black;
                basla.BackColor = Color.White;
                button1.BackColor = Color.White;
                button1.ForeColor = Color.Black;
                button2.BackColor = Color.White;
                button2.ForeColor = Color.Black;
                button3.BackColor = Color.White;
                button3.ForeColor = Color.Black;
                listBox1.ForeColor = Color.Black;
                listBox1.BackColor = Color.White;

            }



        }
    }
}
//mouse buttonun üzerine gelince koyu renk almasý nasýl yapýlýr koyu temada beyaz mouse gezintisi nasýl yapýlýr ?