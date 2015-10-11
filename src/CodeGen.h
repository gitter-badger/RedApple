/* 
* @Author: sxf
* @Date:   2015-09-23 22:55:30
* @Last Modified by:   sxf
* @Last Modified time: 2015-10-11 14:22:21
* 
* 代码生成部分的引导类
*/

#ifndef CODE_GEN_H
#define CODE_GEN_H

#include "Node.h"

class CodeGenContext;
class CodeGen
{
public:
	CodeGen(Node* node);
	~CodeGen();
	
	void Make();

private:
	CodeGenContext* content;
};



#endif // CODE_GEN_H