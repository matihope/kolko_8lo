#include <iostream>

int main(){
	int key_len, code_len;
	std::cin >> key_len >> code_len;

	std::string key, code;
	std::cin >> key >> code;

	std::string answer = "";
	for(int i = 0; i < code_len; ++i)
	{
		for(int j = 0; j < key_len && i+j < code_len; ++j) // j < key_len+1
		{
			if (code[i+j] != key[j])
			{
				if (j > 1)
					answer += code[i+j];
				break;
			}
		}
	}

	std::cout << answer << std::endl;
}