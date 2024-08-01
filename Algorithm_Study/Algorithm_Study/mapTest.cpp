#include <iostream>
#include <map>

using namespace std;

int main() {
	//������ key, ������ value�� ���ҷ��ϴ� map1 ����
	map<char, int> map1;

	//������ key�� ������������ �����ϴ� map2 ����
	map<int, string, greater<int>> map2;

	//�ʱ�ȭ ���� �ִ� map3 ����
	map<string, string> map3 = {
		{"apple", "���"},
		{"banana", "�ٳ���"},
		{"orange", "������"}
	};

	cout << "map3�� ũ�� : " << map3.size() << endl;
	cout << "map3�� ����ֳ� ? : " << map3.empty() << endl;
	cout << "apple�� value : " << map3["apple"] << endl;

	map<string, string>::iterator iter;

	for (iter = map3.begin(); iter != map3.end(); iter++) {
		cout << iter->first << " ";
		cout << iter->second << " " << endl;
	}

	cout << "=====insert ����=====" << endl;

	map3["pumkin"] = "ȣ��";
	map3.insert(pair<string, string>("melon", "�޷�"));
	map3.insert(pair<string, string>("mango", "����"));

	for (iter = map3.begin(); iter != map3.end(); iter++) {
		cout << iter->first << " ";
		cout << iter->second << " " << endl;
	}

}