/*中序遍历 线索二叉树*/
/*为了更接近循环链表的形式，增加了头结点，使中序遍历的第一个结点的左孩子lchild指向头结点，头结点的左孩子指向第一个结点。头结点的右孩子指向遍历的最后一个结点，最后一个结点的右孩子指向头结点，这一点算是还原了双向链表的结构*/
/*注意：线索化后的二叉树由于所有的指针域（叶子结点）都利用了起来，一个叶子的后继结点可能是根结点，如果用递归的方法的话，就形成了无限循环的结构，因此遍历的时候不能用递归结构来实现*/
Status InOrderTraverse_Thr(BiThrTree T) {
	BiThrTree p;
	/*p指向根结点*/
	p = T->lchild;

	/*空树或遍历结束时，p==T*/
	while (p != T) {

		/*当LTag==0时，循环到中序遍历的第一个结点*/
		while (LTag == Link) {

			p = p->lchild;

		}

		/*显示结点数据，可以更改为其他结点操作*/
		printf("%c", p->data);

		while(p->RTag == Thread && p->rchild != T) {

			p = p->rchild;

			printf("%c", p->data);
		}

		/*p进入其右子树的根*/
		p = p->rchild;

	}

	return ok;
}