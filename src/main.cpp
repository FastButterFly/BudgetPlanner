#include <iostream>
#include <string>
#include <vector>

struct IncomeEntry {
	std::string income_entry;
	unsigned int amount;
};

struct ExpenseEntry {
	std::string expense_entry;
	unsigned int amount;
};

int main() {
 	std::cout << "Budgeting App made by F4stbutterfly\n";

	std::vector<IncomeEntry> income;
	std::vector<ExpenseEntry> expenses;

	while(true) {
		std::string operation;
		std::cout << "Enter operation (add-income, add-expense, summary, exit) >> ";
		std::cin >> operation;

		if(operation == "add-income") {
			std::string input;
			std::cout << "Enter income name >> ";
			std::cin >> input;
			unsigned int input2;
			std::cout << "Enter amount >> ";
			std::cin >> input2;

			income.push_back( { .income_entry = input, .amount = input2 } );
		} else if(operation == "add-expense") {
			std::string input;
			std::cout << "Enter expense name >> ";
			std::cin >> input;

			unsigned int input2;
			std::cout << "Enter cost >> ";
			std::cin >> input2;

			expenses.push_back( { .expense_entry = input, .amount = input2 } );
		} else if(operation == "exit") break;
		else if(operation == "summary") {
			long long sum{0LL};
			for(auto& income_entry : income) {
				std::cout << "Income	" << income_entry.income_entry << " Amount: " << income_entry.amount << '\n';
				sum += income_entry.amount;
			}

			for(auto& expense_entry : expenses) {
				std::cout << "Expense	" << expense_entry.expense_entry << " Cost: " << expense_entry.amount << '\n';
				sum -= expense_entry.amount;
			}

			std::cout << "Budget left: " << sum << '\n';
		}
	}

	return 0;
}
