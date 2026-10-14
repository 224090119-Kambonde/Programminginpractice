#include <stdio.h>
#include <string.h>
#define MAX_RECORDS 50
#define NAME_SIZE 50

typedef struct{
    int ID;
    char name[NAME_SIZE];
    double salary;
}Employee;

typedef struct{
    int ID; 
    char name[NAME_SIZE];
    char town[NAME_SIZE];
}Supplier;

typedef struct{
    int ID;
    char name[NAME_SIZE];
    double value;
}Asset;

typedef struct{
char department[NAME_SIZE];
double revenue;
double expenses;
}Budget;

Employee employees[MAX_RECORDS];
Supplier suppliers[MAX_RECORDS];
Asset assets[MAX_RECORDS];
Budget budgets[MAX_RECORDS];
int employeeCount = 0, supplierCount = 0, assetCount = 0, budgetCount = 0;

void clearInput(void)
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) { }
}

int readInt(void)
{
    int value;
    while (scanf("%d", &value) != 1)
    {
        clearInput();
        printf("Enter a whole number: ");
    }
    clearInput();
    return value;
}

double readDouble(void)
{
    double value;
    while (scanf("%lf", &value) != 1)
    {
        clearInput();
        printf("Enter a number: ");
    }
    clearInput();
    return value;
}

void readText(char text[], int size)
{
    if (fgets(text, size, stdin) != NULL)
    {
        text[strcspn(text, "\n")] = '\0';
    }
}

void addEmployee(void)
{
    if (employeeCount >= MAX_RECORDS) { printf("Employee list is full.\n"); return; }
    printf("Employee ID: "); employees[employeeCount].ID = readInt();
    printf("Employee name: "); readText(employees[employeeCount].name, NAME_SIZE);
    printf("Salary: "); employees[employeeCount].salary = readDouble();
    employeeCount++;
    printf("Employee added.\n");
}

void addSupplier(void)
{
    if (supplierCount >= MAX_RECORDS) { printf("Supplier list is full.\n"); return; }
    printf("Supplier ID: "); suppliers[supplierCount].ID = readInt();
    printf("Supplier name: "); readText(suppliers[supplierCount].name, NAME_SIZE);
    printf("Supplier town: "); readText(suppliers[supplierCount].town, NAME_SIZE);
    supplierCount++;
    printf("Supplier added.\n");
}

void addAsset(void)
{
    if (assetCount >= MAX_RECORDS) { printf("Asset list is full.\n"); return; }
    printf("Asset ID: "); assets[assetCount].ID = readInt();
    printf("Asset name: "); readText(assets[assetCount].name, NAME_SIZE);
    printf("Asset value: "); assets[assetCount].value = readDouble();
    assetCount++;
    printf("Asset added.\n");
}

void addBudget(void)
{
    if (budgetCount >= MAX_RECORDS) { printf("Budget list is full.\n"); return; }
    printf("Department: "); readText(budgets[budgetCount].department, NAME_SIZE);
    printf("Revenue: "); budgets[budgetCount].revenue = readDouble();
    printf("Expenses: "); budgets[budgetCount].expenses = readDouble();
    budgetCount++;
    printf("Budget added.\n");
}

void saveEmployeesText(void)
{
    int i;
    FILE *fp = fopen("data/employees.txt", "w");
    if (fp == NULL) { perror("data/employees.txt"); return; }
    for (i = 0; i < employeeCount; i++)
        fprintf(fp, "%d|%s|%.2f\n", employees[i].ID, employees[i].name, employees[i].salary);
    fclose(fp);
    printf("Saved %d employee record(s).\n", employeeCount);
}

void loadEmployeesText(void)
{
    FILE *fp = fopen("data/employees.txt", "r");
    int count = 0;
    if (fp == NULL) { perror("data/employees.txt"); return; }
    employeeCount = 0;
    while (employeeCount < MAX_RECORDS && fscanf(fp, "%d|%49[^|]|%lf", &employees[employeeCount].ID, employees[employeeCount].name, &employees[employeeCount].salary) == 3)
    {
        employeeCount++;
        count++;
    }
    fclose(fp);
    printf("Loaded %d employee record(s).\n", count);
}

void saveSuppliersText(void)
{
    int i;
    FILE *fp = fopen("data/suppliers.txt", "w");
    if (fp == NULL) { perror("data/suppliers.txt"); return; }
    for (i = 0; i < supplierCount; i++)
        fprintf(fp, "%d|%s|%s\n", suppliers[i].ID, suppliers[i].name, suppliers[i].town);
    fclose(fp);
    printf("Saved %d supplier record(s).\n", supplierCount);
}

void loadSuppliersText(void)
{
    FILE *fp = fopen("data/suppliers.txt", "r");
    int count = 0;
    if (fp == NULL) { perror("data/suppliers.txt"); return; }
    supplierCount = 0;
    while (supplierCount < MAX_RECORDS && fscanf(fp, "%d|%49[^|]|%49[^\n]\n", &suppliers[supplierCount].ID, suppliers[supplierCount].name, suppliers[supplierCount].town) == 3)
    {
        supplierCount++;
        count++;
    }
    fclose(fp);
    printf("Loaded %d supplier record(s).\n", count);
}

void saveAssetsText(void)
{
    int i;
    FILE *fp = fopen("data/assets.txt", "w");
    if (fp == NULL) { perror("data/assets.txt"); return; }
    for (i = 0; i < assetCount; i++)
        fprintf(fp, "%d|%s|%.2f\n", assets[i].ID, assets[i].name, assets[i].value);
    fclose(fp);
    printf("Saved %d asset record(s).\n", assetCount);
}

void loadAssetsText(void)
{
    FILE *fp = fopen("data/assets.txt", "r");
    int count = 0;
    if (fp == NULL) { perror("data/assets.txt"); return; }
    assetCount = 0;
    while (assetCount < MAX_RECORDS && fscanf(fp, "%d|%49[^|]|%lf", &assets[assetCount].ID, assets[assetCount].name, &assets[assetCount].value) == 3)
    {
        assetCount++;
        count++;
    }
    fclose(fp);
    printf("Loaded %d asset record(s).\n", count);
}

void saveBudgetsText(void)
{
    int i;
    FILE *fp = fopen("data/budgets.txt", "w");
    if (fp == NULL) { perror("data/budgets.txt"); return; }
    for (i = 0; i < budgetCount; i++)
        fprintf(fp, "%s|%.2f|%.2f\n", budgets[i].department, budgets[i].revenue, budgets[i].expenses);
    fclose(fp);
    printf("Saved %d budget record(s).\n", budgetCount);
}

void loadBudgetsText(void)
{
    FILE *fp = fopen("data/budgets.txt", "r");
    int count = 0;
    if (fp == NULL) { perror("data/budgets.txt"); return; }
    budgetCount = 0;
    while (budgetCount < MAX_RECORDS && fscanf(fp, "%49[^|]|%lf|%lf", budgets[budgetCount].department, &budgets[budgetCount].revenue, &budgets[budgetCount].expenses) == 3)
    {
        budgetCount++;
        count++;
    }
    fclose(fp);
    printf("Loaded %d budget record(s).\n", count);
}

void saveAll(void)
{
    saveEmployeesText();
    saveSuppliersText();
    saveAssetsText();
    saveBudgetsText();
}

void loadAll(void)
{
    loadEmployeesText();
    loadSuppliersText();
    loadAssetsText();
    loadBudgetsText();
}

void saveEmployeesBinary(void)
{
    FILE *fp = fopen("data/employees.dat", "wb");
    if (fp == NULL) { perror("data/employees.dat"); return; }
    if (fwrite(employees, sizeof(Employee), (size_t)employeeCount, fp) != (size_t)employeeCount)
        printf("Error writing employee records.\n");
    else
        printf("Saved %d employee record(s) to binary file.\n", employeeCount);
    fclose(fp);
}

void loadEmployeesBinary(void)
{
    FILE *fp = fopen("data/employees.dat", "rb");
    size_t count;
    if (fp == NULL) { perror("data/employees.dat"); return; }
    count = fread(employees, sizeof(Employee), MAX_RECORDS, fp);
    employeeCount = (int)count;
    fclose(fp);
    printf("Loaded %d employee record(s) from binary file.\n", employeeCount);
}

void displayRecords(void)
{
    int i;
    printf("\n--- Employees (%d) ---\n", employeeCount);
    for (i = 0; i < employeeCount; i++) printf("%d | %s | %.2f\n", employees[i].ID, employees[i].name, employees[i].salary);
    printf("--- Suppliers (%d) ---\n", supplierCount);
    for (i = 0; i < supplierCount; i++) printf("%d | %s | %s\n", suppliers[i].ID, suppliers[i].name, suppliers[i].town);
    printf("--- Assets (%d) ---\n", assetCount);
    for (i = 0; i < assetCount; i++) printf("%d | %s | %.2f\n", assets[i].ID, assets[i].name, assets[i].value);
    printf("--- Budgets (%d) ---\n", budgetCount);
    for (i = 0; i < budgetCount; i++) printf("%s | revenue %.2f | expenses %.2f | balance %.2f\n", budgets[i].department, budgets[i].revenue, budgets[i].expenses, budgets[i].revenue - budgets[i].expenses);
}

int main(void)
{
    int choice = 0;
    do
    {
      
        printf("MFMS - WEEK 10 FILE HANDLING\n");
        printf("1. Add Employee\n2. Add Supplier\n3. Add Asset\n4. Add Budget\n");
        printf("5. Display Records\n6. Save All Text Data\n7. Load All Text Data\n");
        printf("8. Save Employees as Binary\n9. Load Employees from Binary\n10. Exit\n");
        printf("Enter choice: ");
        choice = readInt();

        switch (choice)
        {
            case 1: addEmployee(); break;
            case 2: addSupplier(); break;
            case 3: addAsset(); break;
            case 4: addBudget(); break;
            case 5: displayRecords(); break;
            case 6: saveAll(); break;
            case 7: loadAll(); break;
            case 8: saveEmployeesBinary(); break;
            case 9: loadEmployeesBinary(); break;
            case 10: printf("Goodbye. Remember to save before exiting.\n"); break;
            default: printf("Invalid choice. Please choose 1 to 10.\n");
        }
    } while (choice != 10);
    return 0;
}
