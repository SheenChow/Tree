/*线索化的实质就是将二叉链表中的空指针改为指向前驱或后继的线索。
 *由于前驱和后继信息只有在便利该二叉树时才能得到，
 *所以线索化的过程就是在遍历的过程中修改空指针的过程*/

/*中序遍历线索化的递归函数代码*/

/*全局变量，始终指向刚刚访问过的结点*/
BiThrTree pre;

/*中序遍历进行中序线索化*/
void InThreading(BiThrTree p){

	/*出口条件就是p不存在*/
	if (p) {

		InThreading(p->child);

		/*处理当前结点*/
		/*当前结点左孩子不存在*/
		if (!p->lchild) {
            
            /*前驱线索*/
			p->LTag = Thread;
            /*左孩子指针指向前驱*/
			p->lchild = pre;
		}

        /*前驱的右孩子不存在*/
		if (!pre->rchild) {
            
            /*后继线索*/
			p->RTag = Thread;
            
            /*前驱右孩子指针指向后继（当前结点）*/
            pre->rchild = p;

		}
        
        /*保持pre指向刚刚访问过的结点*/
		pre = p;
        
        /*递归右子树线索化*/
		InThreading(P->rchild);
	}
}

/*把出口条件的形式改一下，还可以有以下这种形式出现*/
void InThreading(BiThrTree p){
	/*出口条件就是p不存在*/
	if (!p)

		return ;

	InThreading(p->child);

		/*处理当前结点*/
		/*当前结点左孩子不存在*/
	if (!p->lchild) {

	    /*前驱线索*/
	    p->LTag = Thread;

        /*左孩子指针指向前驱*/
	    p->lchild = pre;
	}

        /*前驱的右孩子不存在*/
	if (!pre->rchild) {
            
        /*后继线索*/
	    p->RTag = Thread;
            
        /*前驱右孩子指针指向后继（当前结点）*/
        pre->rchild = p;

    }

		pre = p;
        
        /*递归右子树线索化*/
		InThreading(P->rchild);
}
