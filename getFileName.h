#ifndef GET_FILE_NAME
#define GET_FILE_NAME

std::string getFileName() {

    while(true){
        std::cout << "Введите имя файла (он должен быть в формате .txt): ";
        std::string fileName = "";
        std::cin >> fileName;

        fileName += ".txt";
        std::ifstream clientFile(fileName);
        if(!clientFile) {
            std::cout << "Файл " << fileName << " не найден.";
            std::cout << " Повторите ввод!" << std::endl << std::endl;
        }
        else {
            std::cout << "Файл " << fileName << " найден";
            std::cout << std::endl << std::endl;
            clientFile.close();
            return fileName;
        }
    }
}

#endif // GET_FILE_NAME
