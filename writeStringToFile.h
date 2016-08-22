#ifndef WRITE_STRING_TO_FILE
#define WRITE_STRING_TO_FILE

void writeStringToFile(std::string listOfShops) {

    std::ofstream convertedFile("convertedFile.csv");
    if(!convertedFile) {
        std::cout << "Не удалось произвести запись в файл" << std::endl;
        std::cout << "Закройте все файлы и запустите программу еще раз" << std::endl;
        exit(-1);
    }
    else {
        convertedFile << listOfShops;
        convertedFile.close();
        std::cout << "Запись в файл успешно завершена" << std::endl;
    }
}

#endif // WRITE_STRING_TO_FILE