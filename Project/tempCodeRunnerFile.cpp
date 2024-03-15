#include <iostream>
#include <vector>
#include <iomanip>

struct Task {
    std::string description;
    bool completed;
};

class TaskManager {
private:
    std::vector<Task> tasks;
#include <iostream>
#include <vector>
#include <iomanip>

struct Task {
    std::string description;
    bool completed;
};

class TaskManager {
private:
    std::vector<Task> tasks;

public:
    void addTask(const std::string& description) {
        Task newTask{description, false};
        tasks.push_back(newTask);
        std::cout << "Task added successfully!\n";
    }

    void viewTasks() const {
        if (tasks.empty()) {
            std::cout << "No tasks available.\n";
        } else {
            std::cout << "Tasks:\n";
            std::cout << std::left << std::setw(20) << "Description" << "Status\n";
            std::cout << std::setfill('-') << std::setw(40) << "\n" << std::setfill(' ');

            for (const auto& task : tasks) {
                std::cout << std::setw(20) << task.description << (task.completed ? "Completed" : "Pending") << "\n";
            }
        }
    }

    void markTaskAsCompleted(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].completed = true;
            std::cout << "Task marked as completed!\n";
        } else {
            std::cout << "Invalid task index.\n";
        }
    }
};

int main() {
    TaskManager taskManager;
    int choice;

    do {
        std::cout << "\nTask Management System\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. View Tasks\n";
        std::cout << "3. Mark Task as Completed\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string description;
                std::cout << "Enter task description: ";
                std::cin.ignore(); // Clear buffer
                std::getline(std::cin, description);
                taskManager.addTask(description);
                break;
            }
            case 2:
                taskManager.viewTasks();
                break;
            case 3: {
                int index;
                std::cout << "Enter the index of the task to mark as completed: ";
                std::cin >> index;
                taskManager.markTaskAsCompleted(index);
                break;
            }
            case 4:
                std::cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
    return 0;
}

public:
    void addTask(const std::string& description) {
        Task newTask{description, false};
        tasks.push_back(newTask);
        std::cout << "Task added successfully!\n";
    }

    void viewTasks() const {
        if (tasks.empty()) {
            std::cout << "No tasks available.\n";
        } else {
            std::cout << "Tasks:\n";
            std::cout << std::left << std::setw(20) << "Description" << "Status\n";
            std::cout << std::setfill('-') << std::setw(40) << "\n" << std::setfill(' ');

            for (const auto& task : tasks) {
                std::cout << std::setw(20) << task.description << (task.completed ? "Completed" : "Pending") << "\n";
            }
        }
    }

    void markTaskAsCompleted(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].completed = true;
            std::cout << "Task marked as completed!\n";
        } else {
            std::cout << "Invalid task index.\n";
        }
    }
};

int main() {
    TaskManager taskManager;
    int choice;

    do {
        std::cout << "\nTask Management System\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. View Tasks\n";
        std::cout << "3. Mark Task as Completed\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string description;
                std::cout << "Enter task description: ";
                std::cin.ignore(); // Clear buffer
                std::getline(std::cin, description);
                taskManager.addTask(description);
                break;
            }
            case 2:
                taskManager.viewTasks();
                break;
            case 3: {
                int index;
                std::cout << "Enter the index of the task to mark as completed: ";
                std::cin >> index;
                taskManager.markTaskAsCompleted(index);
                break;
            }
            case 4:
                std::cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
    return 0;
}
