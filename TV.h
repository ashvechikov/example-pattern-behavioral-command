#pragma once
// ����� Receiver ����� ����������
class TV
{
	// ������� ��������� ��� ���
	bool on;
public:
	// �������� ���������
	void TurnOn() {
		std::cout << "\nTurn on TV\n";
		on = true;
	}
	// ��������� ���������
	void TurnOff() {
		std::cout << "\nTurn off TV\n";
		on = false;
	}
};
