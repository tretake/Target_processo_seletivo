#include <iostream>

int main() {
    double sp = 67836.43;
    double rj = 36678.66;
    double mg = 29229.88;
    double es = 27165.48;
    double outros = 19849.53;

    double total = sp + rj + mg + es + outros;

    double perc_sp = (sp / total) * 100;
    double perc_rj = (rj / total) * 100;
    double perc_mg = (mg / total) * 100;
    double perc_es = (es / total) * 100;
    double perc_outros = (outros / total) * 100;

    std::cout << "Percentual de representação:" << std::endl;
    std::cout << "SP: " << perc_sp << "%" << std::endl;
    std::cout << "RJ: " << perc_rj << "%" << std::endl;
    std::cout << "MG: " << perc_mg << "%" << std::endl;
    std::cout << "ES: " << perc_es << "%" << std::endl;
    std::cout << "Outros: " << perc_outros << "%" << std::endl;

    return 0;
}
