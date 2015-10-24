using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace McaApp
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void showCurrentValueButton_Click(object sender, RoutedEventArgs e)
        {
            valueLabel.Content = Measurement.TakenOn.ToString();

            if (Line.Parent == null)
                chartCanvas.Children.Add(Line);
            else
                Line.X1 += 10;
        }

        private Mca.Measurement Measurement => _measurement ?? (_measurement = Mca.Repositories.Measurement.getMeasurementByFileName("abc"));

        private Line Line => _line ?? (_line = new Line
        {
            X1 = 10,
            Y1 = 10,
            X2 = 50,
            Y2 = 50,
            Stroke = Brushes.Black,
            StrokeThickness = 2
        });

        private Mca.Measurement _measurement;
        private Line _line;
    }
}
