#include <iostream>
#include <direct.h>
#include <fstream>
using namespace std;

void partitionSelect(int aVerificator)
{


    if (aVerificator == 1)
    {

        ofstream file{ "C:\\Root\\index.html" };
        file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"C:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"C:\\Root\\Career\">Career</a><a class=\"l2\" href=\"C:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"C:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"C:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";

    }

    else if (aVerificator == 2)
    {
        ofstream file{ "D:\\Root\\index.html" };

        file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"D:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"D:\\Root\\Career\">Career</a><a class=\"l2\" href=\"D:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"D:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"D:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";

    }
    else if (aVerificator == 3)
    {
        ofstream file{ "E:\\Root\\index.html" };
        file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"E:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"E:\\Root\\Career\">Career</a><a class=\"l2\" href=\"E:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"E:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"E:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";

    }
    else if (aVerificator == 4)
    {
        ofstream file{ "F:\\Root\\index.html" };
        file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"F:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"F:\\Root\\Career\">Career</a><a class=\"l2\" href=\"F:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"F:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"\F:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";
    }
    else if (aVerificator == 5)
    {
        ofstream file{ "G:\\Root\\index.html" };
        file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"G:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"G:\\Root\\Career\">Career</a><a class=\"l2\" href=\"G:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"G:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"G:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";

    }
} //This function make an website on the root folder, that can help the user to navigate easier through folders.

void createWebsite(int aVerificator) {

     bool ok = 0;

     //Because we can change the desktop path, I decided to ask if it was modified

    while (ok == 0) {

        char anotherVerificator;
        cout << endl << "Did you move the Desktop to another partition? y/n"<<endl;  
        cin >> anotherVerificator;
        if (anotherVerificator == 'n')
        {
            ofstream file{ "C:\\Desktop\\index.html" };
            ok = 1;
        }
        else if (anotherVerificator == 'y') {
            cout << "In which partiton did you move?" << endl << "For" << endl << " D: press d " << endl << " E: press e " << endl << " F: press f" << endl << " G: press g" << endl;
            char theLastVerificator;
            cin >> theLastVerificator;

            if (theLastVerificator == 'd')
            {
  ofstream file{ "D:\\Desktop\\index.html" };

  ok = 1;

  //the same script as the partitionSelection, without the path specified at root, now we are on desktop
  if (aVerificator == 1)
  {

      file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"C:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"C:\\Root\\Career\">Career</a><a class=\"l2\" href=\"C:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"C:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"C:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";

  }

  else if (aVerificator == 2)
  {


      file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"D:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"D:\\Root\\Career\">Career</a><a class=\"l2\" href=\"D:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"D:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"D:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";

  }
  else if (aVerificator == 3)
  {

      file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"E:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"E:\\Root\\Career\">Career</a><a class=\"l2\" href=\"E:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"E:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"E:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";

  }
  else if (aVerificator == 4)
  {

      file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"F:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"F:\\Root\\Career\">Career</a><a class=\"l2\" href=\"F:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"F:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"\F:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";
  }
  else if (aVerificator == 5)
  {

      file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"G:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"G:\\Root\\Career\">Career</a><a class=\"l2\" href=\"G:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"G:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"G:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";

  }
            }
              

            else if (theLastVerificator == 'e')
            {
                ofstream file{ "E:\\Desktop\\index.html" };
                ok = 1;
                if (aVerificator == 1)
                {

                    file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"C:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"C:\\Root\\Career\">Career</a><a class=\"l2\" href=\"C:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"C:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"C:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";

                }

                else if (aVerificator == 2)
                {


                    file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"D:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"D:\\Root\\Career\">Career</a><a class=\"l2\" href=\"D:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"D:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"D:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";

                }
                else if (aVerificator == 3)
                {

                    file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"E:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"E:\\Root\\Career\">Career</a><a class=\"l2\" href=\"E:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"E:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"E:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";

                }
                else if (aVerificator == 4)
                {

                    file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"F:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"F:\\Root\\Career\">Career</a><a class=\"l2\" href=\"F:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"F:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"\F:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";
                }
                else if (aVerificator == 5)
                {

                    file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"G:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"G:\\Root\\Career\">Career</a><a class=\"l2\" href=\"G:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"G:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"G:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";

                }
            }
            else if (theLastVerificator == 'f')
            {
                ofstream file{ "F:\\Desktop\\index.html" };
                ok = 1;
                if (aVerificator == 1)
                {

                    file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"C:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"C:\\Root\\Career\">Career</a><a class=\"l2\" href=\"C:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"C:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"C:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";

                }

                else if (aVerificator == 2)
                {


                    file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"D:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"D:\\Root\\Career\">Career</a><a class=\"l2\" href=\"D:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"D:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"D:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";

                }
                else if (aVerificator == 3)
                {

                    file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"E:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"E:\\Root\\Career\">Career</a><a class=\"l2\" href=\"E:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"E:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"E:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";

                }
                else if (aVerificator == 4)
                {

                    file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"F:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"F:\\Root\\Career\">Career</a><a class=\"l2\" href=\"F:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"F:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"\F:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";
                }
                else if (aVerificator == 5)
                {

                    file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"G:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"G:\\Root\\Career\">Career</a><a class=\"l2\" href=\"G:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"G:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"G:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";

                }
            }

            else if (theLastVerificator == 'g')
            {
                ofstream file{ "G:\\Desktop\\index.html" };
                ok = 1;
                if (aVerificator == 1)
                {

                    file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"C:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"C:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"C:\\Root\\Career\">Career</a><a class=\"l2\" href=\"C:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"C:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"C:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";

                }

                else if (aVerificator == 2)
                {


                    file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"D:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"D:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"D:\\Root\\Career\">Career</a><a class=\"l2\" href=\"D:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"D:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"D:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";

                }
                else if (aVerificator == 3)
                {

                    file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"E:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"E:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"E:\\Root\\Career\">Career</a><a class=\"l2\" href=\"E:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"E:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"E:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";

                }
                else if (aVerificator == 4)
                {

                    file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"F:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"F:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"F:\\Root\\Career\">Career</a><a class=\"l2\" href=\"F:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"F:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"\F:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";
                }
                else if (aVerificator == 5)
                {

                    file << "<!DOCTYPE html><head>    <title>Map</title></head><body><a class=\"l1\" href=\"G:\\Root\\Personal\">Personal</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Education\">Education</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Media\">Media</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Passion\">Passion</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Project\">Project</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Financial\">Financial</a><a class=\"l2\" href=\"G:\\Root\\Personal\\Documents\">Documents</a><a class=\"l1\" href=\"G:\\Root\\Career\">Career</a><a class=\"l2\" href=\"G:\\Root\\Career\\Education\">Education</a><a class=\"l2\" href=\"G:\\Root\\Career\\Documents\">Documents</a><a class=\"l2\" href=\"G:\\Root\\Career\\Project\">Projects</a><style> a{text-decoration: none;display: block; border: 3px ;padding: 1.25%;color:white; } .l1{ left: 0; text-align: center; background-color: burlywood; border-style: outset;}.l2{ text-align: center; left:0%;background-color: rgb(223, 198, 167);border-style: inset;}</style></body></html>";

                }
            }
            else
                cout << "You may introduce the wrong character, make sure is without CAPS";




        }

        else cout << "You may introduce the wrong character, make sure is without CAPS";

    }


   
} //this function create the same website, but it will show on desktop

int main()
{
    int aVerificator;
    cout << " What is the location you want to make the directories?" << endl << "For" << endl << " C: press 1 " << endl << " D: press 2 " << endl << " E: press 3 " << endl << " F: press 4" << endl << " G: press 5" << endl;
    cin >> aVerificator;

    //aVerificator will storage our preference, the partition we want to create
   
    //we create the hierarchical folder with the specified path
    //I added 2 partition: F and G, because this app can create the folders also in an external storage
    //!Notice that the desktop website, doesn't work when the external storage isn't connected, but the website in the root(external storage root) will work.
    switch(aVerificator) {

    case 1: 
        _mkdir("C:\\Root");
        _mkdir("C:\\Root\\Personal");
        _mkdir("C:\\Root\\Personal\\Education");
        _mkdir("C:\\Root\\Personal\\Education\\Highschool");
        _mkdir("C:\\Root\\Personal\\Education\\College");
        _mkdir("C:\\Root\\Personal\\Media");
        _mkdir("C:\\Root\\Personal\\Media\\Music");
        _mkdir("C:\\Root\\Personal\\Media\\Video");
        _mkdir("C:\\Root\\Personal\\Media\\Photos\\");
        _mkdir("C:\\Root\\Personal\\Media\\Photos\\Family");
        _mkdir("C:\\Root\\Personal\\Media\\Photos\\Vacantion");
        _mkdir("C:\\Root\\Personal\\Media\\Photos\\Vacantion\\2017");
        _mkdir("C:\\Root\\Personal\\Media\\Photos\\Vacantion\\2018");
        _mkdir("C:\\Root\\Personal\\Media\\Photos\\Vacantion\\2019");
        _mkdir("C:\\Root\\Personal\\Media\\Photos\\Vacantion\\2020");
        _mkdir("C:\\Root\\Personal\\Media\\Photos\\Portrets");
        _mkdir("C:\\Root\\Personal\\Media\\Photos\\Other");
        _mkdir("C:\\Root\\Personal\\Passion");
        _mkdir("C:\\Root\\Personal\\Project");
        _mkdir("C:\\Root\\Personal\\Financial");
        _mkdir("C:\\Root\\Personal\\Financial\\2018");
        _mkdir("C:\\Root\\Personal\\Financial\\2019");
        _mkdir("C:\\Root\\Personal\\Financial\\2020");
        _mkdir("C:\\Root\\Personal\\Documents");
        _mkdir("C:\\Root\\Personal\\Documents\\PowerPoint");
        _mkdir("C:\\Root\\Personal\\Documents\\Docs");
        _mkdir("C:\\Root\\Personal\\Documents\\Excell");
        _mkdir("C:\\Root\\Career");
        _mkdir("C:\\Root\\Career\\Education");
        _mkdir("C:\\Root\\Career\\Documents");
        _mkdir("C:\\Root\\Career\\Documents\\PowerPoint");
        _mkdir("C:\\Root\\Career\\Documents\\Docs");
        _mkdir("C:\\Root\\Career\\Documents\\Excel");
        _mkdir("C:\\Root\\Career\\Project");

       


        break;

    case 2:
        _mkdir("D:\\Root");
        _mkdir("D:\\Root\\Personal");
        _mkdir("D:\\Root\\Personal\\Education");
        _mkdir("D:\\Root\\Personal\\Education\\Highschool");
        _mkdir("D:\\Root\\Personal\\Education\\College");
        _mkdir("D:\\Root\\Personal\\Media");
        _mkdir("D:\\Root\\Personal\\Media\\Music");
        _mkdir("D:\\Root\\Personal\\Media\\Video");
        _mkdir("D:\\Root\\Personal\\Media\\Photos\\");
        _mkdir("D:\\Root\\Personal\\Media\\Photos\\Family");
        _mkdir("D:\\Root\\Personal\\Media\\Photos\\Vacantion");
        _mkdir("D:\\Root\\Personal\\Media\\Photos\\Vacantion\\2017");
        _mkdir("D:\\Root\\Personal\\Media\\Photos\\Vacantion\\2018");
        _mkdir("D:\\Root\\Personal\\Media\\Photos\\Vacantion\\2019");
        _mkdir("D:\\Root\\Personal\\Media\\Photos\\Vacantion\\2020");
        _mkdir("D:\\Root\\Personal\\Media\\Photos\\Portrets");
        _mkdir("D:\\Root\\Personal\\Media\\Photos\\Other");
        _mkdir("D:\\Root\\Personal\\Passion");
        _mkdir("D:\\Root\\Personal\\Project");
        _mkdir("D:\\Root\\Personal\\Financial");
        _mkdir("D:\\Root\\Personal\\Financial\\2018");
        _mkdir("D:\\Root\\Personal\\Financial\\2019");
        _mkdir("D:\\Root\\Personal\\Financial\\2020");
        _mkdir("D:\\Root\\Personal\\Documents");
        _mkdir("D:\\Root\\Personal\\Documents\\PowerPoint");
        _mkdir("D:\\Root\\Personal\\Documents\\Docs");
        _mkdir("D:\\Root\\Personal\\Documents\\Excell");
        _mkdir("D:\\Root\\Career");
        _mkdir("D:\\Root\\Career\\Education");
        _mkdir("D:\\Root\\Career\\Documents");
        _mkdir("D:\\Root\\Career\\Documents\\PowerPoint");
        _mkdir("D:\\Root\\Career\\Documents\\Docs");
        _mkdir("D:\\Root\\Career\\Documents\\Excel");
        _mkdir("D:\\Root\\Career\\Project");
        break;

    case 3:
        _mkdir("E:\\Root");
        _mkdir("E:\\Root\\Personal");
        _mkdir("E:\\Root\\Personal\\Education");
        _mkdir("E:\\Root\\Personal\\Education\\Highschool");
        _mkdir("E:\\Root\\Personal\\Education\\College");
        _mkdir("E:\\Root\\Personal\\Media");
        _mkdir("E:\\Root\\Personal\\Media\\Music");
        _mkdir("E:\\Root\\Personal\\Media\\Video");
        _mkdir("E:\\Root\\Personal\\Media\\Photos\\");
        _mkdir("E:\\Root\\Personal\\Media\\Photos\\Family");
        _mkdir("E:\\Root\\Personal\\Media\\Photos\\Vacantion");
        _mkdir("E:\\Root\\Personal\\Media\\Photos\\Vacantion\\2017");
        _mkdir("E:\\Root\\Personal\\Media\\Photos\\Vacantion\\2018");
        _mkdir("E:\\Root\\Personal\\Media\\Photos\\Vacantion\\2019");
        _mkdir("E:\\Root\\Personal\\Media\\Photos\\Vacantion\\2020");
        _mkdir("E:\\Root\\Personal\\Media\\Photos\\Portrets");
        _mkdir("E:\\Root\\Personal\\Media\\Photos\\Other");
        _mkdir("E:\\Root\\Personal\\Passion");
        _mkdir("E:\\Root\\Personal\\Project");
        _mkdir("E:\\Root\\Personal\\Financial");
        _mkdir("E:\\Root\\Personal\\Financial\\2018");
        _mkdir("E:\\Root\\Personal\\Financial\\2019");
        _mkdir("E:\\Root\\Personal\\Financial\\2020");
        _mkdir("E:\\Root\\Personal\\Documents");
        _mkdir("E:\\Root\\Personal\\Documents\\PowerPoint");
        _mkdir("E:\\Root\\Personal\\Documents\\Docs");
        _mkdir("E:\\Root\\Personal\\Documents\\Excell");
        _mkdir("E:\\Root\\Career");
        _mkdir("E:\\Root\\Career\\Education");
        _mkdir("E:\\Root\\Career\\Documents");
        _mkdir("E:\\Root\\Career\\Documents\\PowerPoint");
        _mkdir("E:\\Root\\Career\\Documents\\Docs");
        _mkdir("E:\\Root\\Career\\Documents\\Excel");
        _mkdir("E:\\Root\\Career\\Project");
        break;

    case 4:
        _mkdir("F:\\Root");
        _mkdir("F:\\Root\\Personal");
        _mkdir("F:\\Root\\Personal\\Education");
        _mkdir("F:\\Root\\Personal\\Education\\Highschool");
        _mkdir("F:\\Root\\Personal\\Education\\College");
        _mkdir("F:\\Root\\Personal\\Media");
        _mkdir("F:\\Root\\Personal\\Media\\Music");
        _mkdir("F:\\Root\\Personal\\Media\\Video");
        _mkdir("F:\\Root\\Personal\\Media\\Photos\\");
        _mkdir("F:\\Root\\Personal\\Media\\Photos\\Family");
        _mkdir("F:\\Root\\Personal\\Media\\Photos\\Vacantion");
        _mkdir("F:\\Root\\Personal\\Media\\Photos\\Vacantion\\2017");
        _mkdir("F:\\Root\\Personal\\Media\\Photos\\Vacantion\\2018");
        _mkdir("F:\\Root\\Personal\\Media\\Photos\\Vacantion\\2019");
        _mkdir("F:\\Root\\Personal\\Media\\Photos\\Vacantion\\2020");
        _mkdir("F:\\Root\\Personal\\Media\\Photos\\Portrets");
        _mkdir("F:\\Root\\Personal\\Media\\Photos\\Other");
        _mkdir("F:\\Root\\Personal\\Passion");
        _mkdir("F:\\Root\\Personal\\Project");
        _mkdir("F:\\Root\\Personal\\Financial");
        _mkdir("F:\\Root\\Personal\\Financial\\2018");
        _mkdir("F:\\Root\\Personal\\Financial\\2019");
        _mkdir("F:\\Root\\Personal\\Financial\\2020");
        _mkdir("F:\\Root\\Personal\\Documents");
        _mkdir("F:\\Root\\Personal\\Documents\\PowerPoint");
        _mkdir("F:\\Root\\Personal\\Documents\\Docs");
        _mkdir("F:\\Root\\Personal\\Documents\\Excell");
        _mkdir("F:\\Root\\Career");
        _mkdir("F:\\Root\\Career\\Education");
        _mkdir("F:\\Root\\Career\\Documents");
        _mkdir("F:\\Root\\Career\\Documents\\PowerPoint");
        _mkdir("F:\\Root\\Career\\Documents\\Docs");
        _mkdir("F:\\Root\\Career\\Documents\\Excel");
        _mkdir("F:\\Root\\Career\\Project");
        break;
        
    case 5:
        _mkdir("G:\\Root");
        _mkdir("G:\\Root\\Personal");
        _mkdir("G:\\Root\\Personal\\Education");
        _mkdir("G:\\Root\\Personal\\Education\\Highschool");
        _mkdir("G:\\Root\\Personal\\Education\\College");
        _mkdir("G:\\Root\\Personal\\Media");
        _mkdir("G:\\Root\\Personal\\Media\\Music");
        _mkdir("G:\\Root\\Personal\\Media\\Video");
        _mkdir("G:\\Root\\Personal\\Media\\Photos\\");
        _mkdir("G:\\Root\\Personal\\Media\\Photos\\Family");
        _mkdir("G:\\Root\\Personal\\Media\\Photos\\Vacantion");
        _mkdir("G:\\Root\\Personal\\Media\\Photos\\Vacantion\\2017");
        _mkdir("G:\\Root\\Personal\\Media\\Photos\\Vacantion\\2018");
        _mkdir("G:\\Root\\Personal\\Media\\Photos\\Vacantion\\2019");
        _mkdir("G:\\Root\\Personal\\Media\\Photos\\Vacantion\\2020");
        _mkdir("G:\\Root\\Personal\\Media\\Photos\\Portrets");
        _mkdir("G:\\Root\\Personal\\Media\\Photos\\Other");
        _mkdir("G:\\Root\\Personal\\Passion");
        _mkdir("G:\\Root\\Personal\\Project");
        _mkdir("G:\\Root\\Personal\\Financial");
        _mkdir("G:\\Root\\Personal\\Financial\\2018");
        _mkdir("G:\\Root\\Personal\\Financial\\2019");
        _mkdir("G:\\Root\\Personal\\Financial\\2020");
        _mkdir("G:\\Root\\Personal\\Documents");
        _mkdir("G:\\Root\\Personal\\Documents\\PowerPoint");
        _mkdir("G:\\Root\\Personal\\Documents\\Docs");
        _mkdir("G:\\Root\\Personal\\Documents\\Excell");
        _mkdir("G:\\Root\\Career");
        _mkdir("G:\\Root\\Career\\Education");
        _mkdir("G:\\Root\\Career\\Documents");
        _mkdir("G:\\Root\\Career\\Documents\\PowerPoint");
        _mkdir("G:\\Root\\Career\\Documents\\Docs");
        _mkdir("G:\\Root\\Career\\Documents\\Excel");
        _mkdir("G:\\Root\\Career\\Project");
        break; 

    default: 
        cout << "You may be introduce the wrong number or you don't find the path you wanted.If it is the first case, then press 0, else you my visit the stock program where you can customaze your own path" << endl;
        int aNewCall;
        cin >> aNewCall;
        if (aNewCall == 0)
        {
            cout << endl;
            main();
        }
        else return 0;

        break;



    }



    createWebsite(aVerificator);

    partitionSelect(aVerificator);
   
    return 0;
}