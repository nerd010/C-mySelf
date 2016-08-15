//
//  main.c
//  names
//
//  Created by Charles Wang on 16/5/16.
//  Copyright © 2016年 CHW. All rights reserved.
//

#include <stdio.h>
#include "names_st.h"

int main(void)
{
    names candidate;
    get_names (&candidate);
    printf("Let's welcome ");
    show_names (&candidate);
    printf(" to this program!\n");

    return 0;
}
