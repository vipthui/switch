#include<iostream>
#include<cmath>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int, int> numMap; 
	for (int i = 0; i < nums.size(); i++) {
		int complement = target - nums[i]; 
		if (numMap.find(complement) != numMap.end()) { 
			return { numMap[complement], i }; 
		}
		numMap[nums[i]] = i; 
	}
	return {}; 
}
static vector<int> calculatePrefixSum(vector<int>& nums) {
	vector<int> numsResult(nums.size()); 
	if (nums.size() == 0) {
		return numsResult; 
	}
	numsResult[0] = nums[0]; 
	for (int i = 1; i < nums.size(); i++) {
		numsResult[i] = numsResult[i - 1] + nums[i]; 
	}
	return numsResult;
}
static int stepstozero(int n) {
	int Steps = 0;
	while (n > 0) {
		if (n % 2 == 0) {
			n /= 2;
		}
		else {
			n -= 1;
		}
		Steps++;
	}
	return Steps;
}

int main()
{
	int intInput = 0;
	bool isRunning = true;
	while (isRunning) {
		cout << "Nhap vao menu tuong ung: " << "\n";
		cout << "1: Bai 1" << "\n";
		cout << "2: Bai 2" << "\n";
		cout << "3: Bai 3" << "\n";
		cout << "4: Bai 4" << "\n";
		cout << "5: Bai 5" << "\n";
		cout << "6: Bai 6" << "\n";
		cout << "7: Bai 7" << "\n";
		cout << "8: Bai 8" << "\n";
		cout << "9: Bai 9" << "\n";
		cout << "10: Bai 10" << "\n";
		cout << "11: Bai 11" << "\n";
		cout << "12: Bai 12" << "\n";
		cout << "13: Bai 13" << "\n";
		cout << "14: Bai 14" << "\n";
		cout << "15: Bai 15" << "\n";
		cout << "16: Bai 16" << "\n";
		cout << "0: Thoat" << "\n";
		cout << "Bai: ";
		cin >> intInput;

		switch (intInput)
		{
		case 1: {
			char strHello[100] = "Xin Chao";
			cout << strHello << endl;
			break;
		}
		case 2: {
			int a, b;
			a = 5;
			b = 8;
			cout << "Ket qua cua phep cong 5 + 8 la: " << a + b << endl;
			break;
		}
		case 3: {
			char strUserName[100];
			cout << "Nhap vao ten nguoi dung: ";
			cin >> strUserName;
			cout << "Ten nguoi dung: " << strUserName;
			cout << "\n";
			break;
		}
		case 4: {
			int So1;
			int So2;
			cout << "Nhap vao so thu nhat: ";
			cin >> So1;
			cout << "Nhap vao so thu hai: ";
			cin >> So2;
			cout << "Ket qua cua phep cong la: " << So1 + So2;
			cout << "\n";
			break;
		}
		case 5: {
			int SoA;
			int SoB;
			int intTemp;
			cout << "Nhap vao so A: ";
			cin >> SoA;
			cout << "Nhap vao so B: ";
			cin >> SoB;
			intTemp = SoA;
			SoA = SoB;
			SoB = intTemp;
			cout << "So A sau khi hoan vi: " << SoA << "\n";
			cout << "So B sau khi hoan vi: " << SoB << "\n";
			cout << "\n";
			break;
		}
		case 6: {
			float a, b, Tong, Hieu, Tich, Thuong;
			cout << "Nhap vao so thu nhat: ";
			cin >> a;
			cout << "Nhap vao so thu hai: ";
			cin >> b;
			Tong = a + b;
			Hieu = a - b;
			Tich = a * b;
			Thuong = a / b;
			cout << "Tong cua 2 so la: " << Tong << "\n";
			cout << "Hieu cua 2 so la: " << Hieu << "\n";
			cout << "Tich cua 2 so la: " << Tich << "\n";
			cout << "Thuong cua 2 so la: " << Thuong << "\n";
			cout << "\n";
			break;
		}
		case 7: {
			float flA, flB, flC, flMin, flMax;

			cout << "Nhap so A: ";
			cin >> flA;
			cout << "Nhap so B: ";
			cin >> flB;
			cout << "Nhap so C: ";
			cin >> flC;
			flMin = flA;
			flMax = flA;

			if (flMin > flB) {
				flMin = flB;
			}
			if (flMin > flC) {
				flMin = flC;
			}

			if (flMax < flB) {
				flMax = flB;
			}
			if (flMax < flC) {
				flMax = flC;
			}

			cout << "So be nhat la: " << flMin << endl;
			cout << "So lon nhat la: " << flMax << endl;

			break;
		}
		case 8: {
			int n = 0;
			float flResult = 0;
			float flInput = 0;

			cout << "nhap vao so n(n<100): ";
			cin >> n;

			for (int i = 0; i < n; i++) {
				int intPos = i + 1;
				cout << "nhap so thu" << intPos << ":";
				cin >> flInput;
				flResult = flResult + flInput;
			}
			cout << "trung binh cong : " << flResult << endl;
			return 0;
			break;
		}
		case 9: {
			float flA, flB, flC;
			cout << "nhap vao ba canh cua tam giac" << "\n";

			cout << "nhap canh A: ";
			cin >> flA;

			cout << "nhap canh B: ";
			cin >> flB;

			cout << "nhap canh C: ";
			cin >> flC;

			float flCV = flA + flB + flC;

			float flHeron = flCV / 2;

			float flS = sqrt(flHeron * (flHeron - flA) * (flHeron - flB) * (flHeron - flC));

			if (flA + flB > flC) {
				cout << "chu vi hinh tam giac la: " << flCV << endl;
				cout << "dien tich tam giac la: " << flS;
			}
			else if (flA + flC > flB) {
				cout << "chu vi hinh tam giac la: " << flCV << endl;
				cout << "dien tich tam giac la: " << flS;
			}
			else if (flC + flB > flA) {
				cout << "chu vi hinh tam giac la: " << flCV << endl;
				cout << "dien tich tam giac la: " << flS;
			}
			else {
				cout << "khong hop le";
			}
			break;
		}
		case 10: {
			cout << " nhap vao so cua phuong trinh bac 2";

			double dbA, dbB, dbC;

			cout << "nhap vao so A (Ax^2): ";
			cin >> dbA;

			cout << "nhap vao so B (Bx): ";
			cin >> dbB;

			cout << "nhap vao so C: ";
			cin >> dbC;
			double dbDT = pow(dbB, 2) - (4 * dbA * dbC);

			if (dbDT < 0) {
				cout << "phuong trinh vo nghiem" << endl;
			}
			else if (dbDT == 0) {
				double dbNkep = (-dbB) / (2 * dbA);
				cout << "phuong tring co nghiem kep" << endl;
				cout << "X1=X2" << dbNkep;
			}
			else if (dbDT > 0) {
				double dbX1 = (-dbB - sqrt(dbDT)) / (2 * dbA);
				double dbX2 = (-dbB + sqrt(dbDT)) / (2 * dbA);
				cout << "phuong trinh co 2 nghiem phan biet: " << endl;
				cout << "X1= " << dbX1 << endl;
				cout << "X2= " << dbX2 << endl;
			}
			else if (dbA == 0) {
				cout << "loi" << endl;
			}
			break;
		}
		case 11: {
			int i, j, n;
			cout << "nhap so n: ";
			cin >> n;
			for (i = 1;i <= n;i++, cout << endl)
				for (j = 1;j <= i;j++) {
					cout << j;
				}
			break;
		}
		case 12: {
				double n;
				std::cout << "Nhap so: ";
				std::cin >> n;

				if (std::floor(n) == n)
					std::cout << n << " la so nguyen." << std::endl;
				else
					std::cout << n << " khong phai la so nguyen." << std::endl;
				break;
			}
		case 13: {
			vector<int> nums;
			int n, target, num;

			cout << "Nhap so luong phan tu trong mang: ";
			cin >> n;

			cout << "Nhap cac phan tu trong mang: ";
			for (int i = 0; i < n; i++) {
				cin >> num;
				nums.push_back(num);
			}

			cout << "Nhap target: ";
			cin >> target;

			vector<int> result = twoSum(nums, target);

			if (result.size() == 2) {
				cout << "Vi tri cua 2 so co tong bang target la: [" << result[0] << ", " << result[1] << "]" << endl;
			}
			else {
				cout << "Khong tim thay 2 so co tong bang target." << endl;
			}

			break;
		}
		case 14: {
			static vector<int> nums;
			int n, num;

			cout << "Nhap so phan tu trong mang: ";
			cin >> n;

			cout << "Nhap cac phan tu cua mang: ";
			for (int i = 0; i < n; i++) {
				cin >> num;
				nums.push_back(num);
			}

			static vector<int> numsResult = calculatePrefixSum(nums);

			cout << "Mang numsResult chua tong cac phan tu truoc do la: ";
			for (int i = 0; i < numsResult.size(); i++) {
				cout << numsResult[i] << " ";
			}
			cout << endl;

			break;
		}
		case 15: {
			int n;
			cout << "Nhap so n: ";
			cin >> n;

			for (int i = 0; i <= n; i++) {
				if (i % 3 == 0 && i % 5 == 0) {
					cout << i << "\n";
					cout << "FizzBuzz"<<"\n" ;
				}
				else if (i % 3 == 0) {
					cout << i << "\n";
					cout << "Fizz"<<"\n" ;
				}
				else if (i % 5 == 0) {
					cout << i << "\n";
					cout << "Buzz"<<"\n" ;
				}
				else {
					cout << i + 1<<"\n" ;
				}
			}
			break;
		}
		case 16: {
			int n;
			
			cout << "Nhap xo nguyen duong n: ";
			cin >> n;

			if (n <= 0) {
				cout << "Loi!" << "\n";
				cout << "Hay nhap so n lon hon '0'";
			}

			int Steps = stepstozero(n);
			cout << "So buoc giam: " << n << " " << "ve'0'la: " << Steps << "\n";
		}
			   break;
		case 0: {
			cout << "\nThoat";
			exit(1);
		}
		}
		}
	}
