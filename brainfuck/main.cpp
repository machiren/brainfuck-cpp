
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

// 命令をコンパイル時定数として定義
constexpr char INCREMENT =  '+';
constexpr char DECREMENT =  '-';
constexpr char RIGHT =  '>';
constexpr char LEFT =  '<';
constexpr char LOOP_START =  '[';
constexpr char LOOP_END =  ']';
constexpr char OUTPUT =  '.';
constexpr char INPUT =  ',';

int main(int argc, char* argv[]) {
    unsigned char memory[255];    //! 1Byte=8bit (0~255) で構成されるメモリを定義
    unsigned int ptr = 0;                 //! メモリポインタ (負の値は取らないのでunsigned)
    unsigned int code_ptr = 0;            //! Brainfuckコードのポインタ
    unsigned int code_len = 0;            //! Brainfuckコードの終端 (長さ)
 
    memset(memory, 0, sizeof(memory));

    if (argc < 2){
        cerr << "Error: A Brainfuck code is not passed as a command-line argument." << endl;
        cerr << "Please pass an argument as the form, $ brainfuck [FILENAME]." << endl;
        return -1;
    }

    ifstream ifs(argv[1]);     //! ファイル読み込み
    if (!ifs){  // ファイル読みこみ失敗
        cerr << "Error: The file, " << argv[1] << ", cannot be opened." << endl;
        return -1;
    }

    stringstream buffer;        //! stringstream用のバッファ
    buffer << ifs.rdbuf();     // ファイルをバッファとして取得
    string code(buffer.str());  //! codeをstringとして取得
    code_len = code.size();     //! コードサイズ
 
    // デバッグ用
    cout << code_len << " Byte.\n" << code << endl;

    while (code_ptr < code_len){
        switch (code[code_ptr]) {
            case INCREMENT:
                break;
            case DECREMENT:
                break;
            case RIGHT:
                break;
            case LEFT:
                break;
            case LOOP_START:
                break;
            case LOOP_END:
                break;
            case OUTPUT:
                break;
            case INPUT:
                break;
            default:  // 上記以外の命令はコメント扱い
                break;
        }
        code_ptr++;
    }
    
    return 0;
}