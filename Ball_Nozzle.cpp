#include<iostream>
#include<cstdlib> //rand(),srand() ���
#include<ctime>//time() ��� 
#include<Windows.h> //sleep() ���
using namespace std;

int main()
{
	cout << "			======================================================" << endl <<
		"			++++++++++++++++++�� ������ ���α׷�++++++++++++++++++" << endl <<
		"			======================================================" << endl << endl;

	srand(time(NULL));
	int Allcount = 0; // A~F ���� �� ����
	int Ball[6];  //A~F�� ���� �Է��� �迭 ����(���� ����ִ� ����)
	char move; // ���� ���� ���� ����
	char Nozzle[4]; //������ ������ ���� �迭 ����

	for (int i = 0; i < 6; i++)  //���� �Է¹޴� �κ� 
	{
		cout << char(65 + i) << "���� ������ �Է��ϼ��� : ";
		cin >> Ball[i];
		cout << endl;
		if (Ball[i] > 100 || Ball[i] < 1) {
			Ball[i] = 0;
			cout << "������ �ٽ� �Է����ּ���(1~100������ �����մϴ�.) " << endl << endl;
			i--;
			continue;
		}

		Allcount += Ball[i];
	}

	cout << "���ڿ� ����ִ� �� ���� ������:" << Allcount << endl;


	int Acount = 0, Bcount = 0, Ccount = 0, Dcount = 0, Ecount = 0, Fcount = 0; //������ ���Ƚ�� ��Ÿ���� ���� ���� �� �ʱ�ȭ

	cout << "A~F�� ������ ������ �Է��ϼ���(A~F���� 1~4��, �������� �ߺ����� ��밡��) : ";
	for (int h = 0; h < 4; h++) //������ ����4������ �迭�� �Է� 
	{
		cin >> Nozzle[h];
	}

	for (int k = 0; k < 125; k++) //���� ������ �ִ� 600����� �����Ͽ� �ѹ��� ���� �ִ�� �ѹ��� 4���� ���� �� 125���� �ʿ��ϴ�.
	{

		cout << "�����Ͻðڽ��ϱ� ? [Y / N] : "; //���ۿ��θ� ���� ���۽� Y�� ���̽����� ���� / �̵��۽� N�� ���̽����� ���� 
		cin >> move;
			switch (move)
			{
				case 'Y':
				{

					for (int z = 0; z < 4; z++)
					{
						switch (Nozzle[z])
						{
						case 'A':
							{
								if (Ball[0] - 1 >= 0) 
								{
									Ball[0] = Ball[0] - 1;
									Acount += 1;	
								}
								else if (Ball[0] - 1 == -1)
								{
									cout << endl << "A���ڿ� ���̾����ϴ�." << " " << "������ ���߰� A������ �������ּ���" << endl << "A������ ���ۿ��� ���ܵ˴ϴ�." << endl << endl;
									break;
								}
								break;
							}
						case'B':
							{
								if (Ball[1] - 1 >= 0)
								{
									Ball[1] = Ball[1] - 1;
									Bcount += 1;
								}
								else if (Ball[1] - 1 == -1)
								{
									cout << endl << "B���ڿ� ���̾����ϴ�." << " " << "������ ���߰� B������ �������ּ���" << endl << "B������ ���ۿ��� ���ܵ˴ϴ�." << endl << endl;
									break;
								}
								break;
							}
						case'C':
							{
								if (Ball[2] - 1 >= 0)
								{
									Ball[2] = Ball[2] - 1;
									Ccount += 1;
								}
								else if (Ball[2]-1 == -1)
								{
									cout << endl << "C���ڿ� ���̾����ϴ�." << " " << "������ ���߰� C������ �������ּ���" << endl << "C������ ���ۿ��� ���ܵ˴ϴ�." << endl << endl;
									break;
								}
								break;
							}
						case'D':
							{	
								if (Ball[3] - 1 >= 0)
								{
									Ball[3] = Ball[3] - 1;
									Dcount += 1;
								}
								else if (Ball[3] - 1 == -1)
								{
									cout << endl << "D���ڿ� ���̾����ϴ�." << " " << "������ ���߰� D������ �������ּ���" << endl << "D������ ���ۿ��� ���ܵ˴ϴ�." << endl << endl;
									break;
								}
								break;
							}
						case'E':
							{
								if (Ball[4] - 1 >= 0)
								{
									Ball[4] = Ball[4] - 1;
									Ecount += 1;
								}
								else if (Ball[4] - 1 == -1)
								{
									cout << endl << "E���ڿ� ���̾����ϴ�." << " " << "������ ���߰� E������ �������ּ���" << endl << "E������ ���ۿ��� ���ܵ˴ϴ�." << endl << endl;
									break;
								}
								break;
							}
						case'F':
							{
								if (Ball[5] - 1 >= 0)
								{
									Ball[5] = Ball[5] - 1;
									Fcount += 1;
								}
								else if (Ball[5] - 1 == -1)
								{
									cout << endl<< "F���ڿ� ���̾����ϴ�." << " " << "������ ���߰� F������ �������ּ���" << endl << "F������ ���ۿ��� ���ܵ˴ϴ�." << endl<<endl;
									break;
								}
								break;
							}



						}

						
					}
					cout << "������(�Ϸ���� 2��)";
					Sleep(2000);

					cout<< endl << "���ڼ� A���� ����:" << Ball[0] << "		" << "A���� ����:" << Acount << endl
						<< "���ڼ� B���� ����:" << Ball[1] << "		" << "B���� ����:" << Bcount << endl
						<< "���ڼ� C���� ����:" << Ball[2] << "		" << "C���� ����:" << Ccount << endl
						<< "���ڼ� D���� ����:" << Ball[3] << "		" << "D���� ����:" << Dcount << endl
						<< "���ڼ� E���� ����:" << Ball[4] << "		" << "E���� ����:" << Ecount << endl
						<< "���ڼ� F���� ����:" << Ball[5] << "		" << "F���� ����:" << Fcount << endl;

					
					break;
				}

				case 'N':
					{
						cout << "A~F�� ������ ������ �ٽ� �Է��ϼ���(A~F���� 1~4��,�������� �ߺ����� ��밡��): ";
						for (int h = 0; h < 4; h++)
						{
							cin >> Nozzle[h];
						}
						cout << "���� ���� ������(�Ϸ����5��..)" << endl;
						Sleep(5000);
						break;
					}

				default:
					{
						cout << "Y �Ǵ� N�� �Է����ּ���." << endl;
						break;
					}
				
					
			}

			if (Ball[0] == 0 && Ball[1] == 0 && Ball[2] == 0 && Ball[3] == 0 && Ball[4] == 0 && Ball[5] == 0)
			{
				cout << "���� ��� �����Ͽ����ϴ�. ���α׷��� �����մϴ�.";
				break;
			}

	}
}