/*
    主要处理鼠标 键盘按键的回调
*/

#include "global.h"

/*
    自定义传入参数（如当前坐标，文字绘制范围，行高等） 实现根据当前的(x, y)坐标返回在文件中的行列坐标(r, c)
    r: row 行
    c: column 列
    鼠标滚动时更改当前显示的文本范围左上角行列位置
    左键按下并拖动时进行选择
    选择后光标位置应该在选择范围的最后
*/
void getMouse(int x, int y, int button, int event) {

}

/*
    根据传入的字符，行列等，实现将输入的文字添加（插入）到当前文件中某行某列(r, c)的功能。
*/
void inputChar(char ch) {

}

/*
    根据传入的键盘输入，判断是否需要换行、退格等操作
    上下左右键时移动光标位置（即改变行列数）
    Shift+方向键时改变选择范围，并把光标放到选择范围开头
*/
void inputKeyboard(int event, int key) {

}