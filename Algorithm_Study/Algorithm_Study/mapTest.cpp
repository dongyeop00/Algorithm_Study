#include <iostream>
#include <map>

using namespace std;

int main() {
	//문자형 key, 정수형 value를 원소로하는 map1 생성
	map<char, int> map1;

	//정수형 key를 내림차순으로 저장하는 map2 생성
	map<int, string, greater<int>> map2;

	//초기화 값이 있는 map3 생성
	map<string, string> map3 = {
		{"apple", "사과"},
		{"banana", "바나나"},
		{"orange", "오랜지"}
	};

	cout << "map3의 크기 : " << map3.size() << endl;
	cout << "map3이 비어있나 ? : " << map3.empty() << endl;
	cout << "apple의 value : " << map3["apple"] << endl;

	map<string, string>::iterator iter;

	for (iter = map3.begin(); iter != map3.end(); iter++) {
		cout << iter->first << " ";
		cout << iter->second << " " << endl;
	}

	cout << "=====insert 수행=====" << endl;

	map3["pumkin"] = "호박";
	map3.insert(pair<string, string>("melon", "메론"));
	map3.insert(pair<string, string>("mango", "망고"));

	for (iter = map3.begin(); iter != map3.end(); iter++) {
		cout << iter->first << " ";
		cout << iter->second << " " << endl;
	}

}