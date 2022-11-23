#include<iostream>
#include<cstdlib> //rand(),srand() 헤더
#include<ctime>//time() 헤더 
#include<Windows.h> //sleep() 헤더
using namespace std;

int main()
{
	cout << "			======================================================" << endl <<
		"			++++++++++++++++++공 꺼내기 프로그램++++++++++++++++++" << endl <<
		"			======================================================" << endl << endl;

	srand(time(NULL));
	int Allcount = 0; // A~F 공의 총 갯수
	int Ball[6];  //A~F공 갯수 입력할 배열 선언(공이 담겨있는 상자)
	char move; // 노즐 동작 변수 선언
	char Nozzle[4]; //노즐의 구성을 담을 배열 선언

	for (int i = 0; i < 6; i++)  //공을 입력받는 부분 
	{
		cout << char(65 + i) << "공의 갯수를 입력하세요 : ";
		cin >> Ball[i];
		cout << endl;
		if (Ball[i] > 100 || Ball[i] < 1) {
			Ball[i] = 0;
			cout << "갯수를 다시 입력해주세요(1~100까지만 가능합니다.) " << endl << endl;
			i--;
			continue;
		}

		Allcount += Ball[i];
	}

	cout << "상자에 담겨있는 총 공의 갯수는:" << Allcount << endl;


	int Acount = 0, Bcount = 0, Ccount = 0, Dcount = 0, Ecount = 0, Fcount = 0; //노즐의 사용횟수 나타내줄 변수 선언 및 초기화

	cout << "A~F중 노즐의 구성을 입력하세요(A~F까지 1~4개, 같은노즐도 중복으로 사용가능) : ";
	for (int h = 0; h < 4; h++) //노즐의 구성4가지를 배열에 입력 
	{
		cin >> Nozzle[h];
	}

	for (int k = 0; k < 125; k++) //공의 갯수가 최대 600개라는 가정하에 한번에 공을 최대로 한번에 4개씩 빼도 총 125번이 필요하다.
	{

		cout << "동작하시겠습니까 ? [Y / N] : "; //동작여부를 묻고 동작시 Y의 케이스문을 실행 / 미동작시 N의 케이스문을 실행 
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
									cout << endl << "A상자에 공이없습니다." << " " << "동작을 멈추고 A노즐을 변경해주세요" << endl << "A노즐은 동작에서 제외됩니다." << endl << endl;
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
									cout << endl << "B상자에 공이없습니다." << " " << "동작을 멈추고 B노즐을 변경해주세요" << endl << "B노즐은 동작에서 제외됩니다." << endl << endl;
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
									cout << endl << "C상자에 공이없습니다." << " " << "동작을 멈추고 C노즐을 변경해주세요" << endl << "C노즐은 동작에서 제외됩니다." << endl << endl;
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
									cout << endl << "D상자에 공이없습니다." << " " << "동작을 멈추고 D노즐을 변경해주세요" << endl << "D노즐은 동작에서 제외됩니다." << endl << endl;
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
									cout << endl << "E상자에 공이없습니다." << " " << "동작을 멈추고 E노즐을 변경해주세요" << endl << "E노즐은 동작에서 제외됩니다." << endl << endl;
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
									cout << endl<< "F상자에 공이없습니다." << " " << "동작을 멈추고 F노즐을 변경해주세요" << endl << "F노즐은 동작에서 제외됩니다." << endl<<endl;
									break;
								}
								break;
							}



						}

						
					}
					cout << "동작중(완료까지 2초)";
					Sleep(2000);

					cout<< endl << "상자속 A공의 갯수:" << Ball[0] << "		" << "A노즐 사용수:" << Acount << endl
						<< "상자속 B공의 갯수:" << Ball[1] << "		" << "B노즐 사용수:" << Bcount << endl
						<< "상자속 C공의 갯수:" << Ball[2] << "		" << "C노즐 사용수:" << Ccount << endl
						<< "상자속 D공의 갯수:" << Ball[3] << "		" << "D노즐 사용수:" << Dcount << endl
						<< "상자속 E공의 갯수:" << Ball[4] << "		" << "E노즐 사용수:" << Ecount << endl
						<< "상자속 F공의 갯수:" << Ball[5] << "		" << "F노즐 사용수:" << Fcount << endl;

					
					break;
				}

				case 'N':
					{
						cout << "A~F중 노즐의 구성을 다시 입력하세요(A~F까지 1~4개,같은노즐도 중복으로 사용가능): ";
						for (int h = 0; h < 4; h++)
						{
							cin >> Nozzle[h];
						}
						cout << "노즐 조합 변경중(완료까지5초..)" << endl;
						Sleep(5000);
						break;
					}

				default:
					{
						cout << "Y 또는 N을 입력해주세요." << endl;
						break;
					}
				
					
			}

			if (Ball[0] == 0 && Ball[1] == 0 && Ball[2] == 0 && Ball[3] == 0 && Ball[4] == 0 && Ball[5] == 0)
			{
				cout << "공을 모두 소진하였습니다. 프로그램을 종료합니다.";
				break;
			}

	}
}