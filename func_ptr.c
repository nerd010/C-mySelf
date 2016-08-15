//func_ptr.c -- 使用函数指针
#include<stdio.h>
#include<string.h>
#include<ctype.h>

char showmenu (void);
void eatline (void);    //读至行末
void show(void(* fp) (char *), char *str);
void ToUpper (char *);  //把字符串转成大写
void ToLower (char *);  //把字符串转成小写
void Transpose (char *);//大小写转置
void Dummy (char *);     //不改变字符串

int main (void)
{
    char line[81];
    char copy[81];
    char choice;
    void (* pfun) (char *);//指向一个函数，该函数接受一个char *参数，并且没有返回值
    puts ("Enter a string (enmpty line to quit): ");
    while (gets (line) != NULL && line[0] != '\0' )
    {
        while ((choice = showmenu ()) != 'n')
        {
            switch (choice)//switch语句用来设置指针
            {
                case 'u': pfun = ToUpper; break;
                case 'l': pfun = ToLower; break;
                case 't': pfun = Transpose; break;
                case 'o': pfun = Dummy; break;
            }
            strcpy (copy, line);//为show ()制作一份拷贝
            show (pfun, copy);  //使用用户选择的函数
        }
            puts ("Enter a string (empty line to quit): ");
    }
    puts ("Bye!");
    return 0;
}

char showmenu (void)
{
    char ans;
    puts ("Enter menu choice: ");
    puts ("u) uppercase l) lowercase");
    puts ("t) transposed case o) original case");
    puts ("n) next string");
    ans = getchar ();//获取用户的响应
    ans = tolower (ans);//转换为小写
    eatline ();//剔除行中剩余部分
    while (strchr ("ulton", ans) == NULL)
    {
        puts ("Please enter a u, l, t, o, or n: ");
        ans = tolower (getchar ());
        eatline ();
    }
    return ans;
}

void eatline (void)
{
    while (getchar () != '\n')
        continue;
}

void ToUpper (char *str)
{
    while (*str)
    {
        *str = toupper (*str);
        str++;
    }
}

void ToLower (char *str)
{
    while (*str)
    {
        *str = tolower (*str);
        str++;
    }
}

void Transpose (char *str)
{
    while (*str)
    {
        if (islower (*str))
            *str = toupper (*str);
        else if (isupper (*str))
            *str = tolower (*str);
        str++;
    }
}

void Dummy (char *str)
{
    printf("不改变字符串");
}

void show (void ( *fp) (char *), char *str)
{
    (*fp) (str);//把用户选择的函数作用于str
    puts (str);//显示结果
}
