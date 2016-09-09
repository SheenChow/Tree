/*双亲表示法中树的的存储结构的定义
 *说明：根节点是没有双亲的，但是为了保证统一，约定根结点的双亲位置域设置为-1
 */

#define MAX_TREE_SIZE 100

/*暂定树中元素类型为整型*/
typedef int TElemType;

/*定义结点结构*/
typedef struct PTNode
{
	/*结点数据*/
	TElemType data;
   
    /*双亲位置*/
	int parent;

} PTNode;

/*定义树的存储结构*/
typedef struct Tree
{

	/*存储结点的数组*/
	PTNode nodes[MAX_TREE_SIZE];
    
    /*根的位置、结点数*/
	int root, n;

} PTree;

