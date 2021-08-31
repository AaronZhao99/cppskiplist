/* ************************************************************************
> File Name:     skiplist.h
> Author:        Aaron Zhao 
> Created Time:  April 2021
> Description:   This is the execution file of the skip table project, which will perform functional tests such as the insertion, deletion, and printing of the skiplist
 ************************************************************************/

#include <iostream>
#include "skiplist.h"
#define FILE_PATH "./store/dumpFile"

int main() {

    SkipList<std::string, std::string> skipList(6);
	skipList.insert_element("1", "a"); 
	skipList.insert_element("3", "b"); 
	skipList.insert_element("7", "c"); 
	skipList.insert_element("8", "aaron"); 
	skipList.insert_element("9", "aaron"); 
	skipList.insert_element("19", "zhao"); 
	skipList.insert_element("19", "zhao"); 
	skipList.insert_element("19", "aaron zhao"); 
	skipList.insert_element("19", "aaron zhao");

    std::cout << "skipList size:" << skipList.size() << std::endl;

    skipList.dump_file();

    // skipList.load_file();

    skipList.search_element("9");
    skipList.search_element("18");


    skipList.display_list();

    skipList.delete_element("3");
    skipList.delete_element("7");

    std::cout << "skipList size:" << skipList.size() << std::endl;

    skipList.display_list();
}
