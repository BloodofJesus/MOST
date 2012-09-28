#include "DoublyLinkedList.h"
#include "fat.h"

/*  ��� ���� */
LinkNode* DLL_CreateNode( void *NewData )
{
    LinkNode* NewNode = (LinkNode*)malloc(sizeof(LinkNode));

    NewNode->Data = NewData;
    NewNode->PrevNode = NULL;
    NewNode->NextNode = NULL;

    return NewNode;
}

/*  ��� �Ҹ� */
void DLL_DestroyNode( LinkNode* Node )
{
	if(Node->Data != NULL)
	{
		free(Node->Data);
	}

    free(Node);
}

/*  ��� �߰� */
void DLL_AppendNode( LinkNode** Head, LinkNode* NewNode )
{
    /*  ��� ��尡 NULL�̶�� ���ο� ��尡 Head */
    if ( (*Head) == NULL ) 
    {
        *Head = NewNode;
    } 
    else
    {
        /*  ������ ã�� NewNode�� �����Ѵ�. */
        LinkNode* Tail = (*Head);
        while ( Tail->NextNode != NULL )
        {
            Tail = Tail->NextNode;
        }

        Tail->NextNode = NewNode;
        NewNode->PrevNode = Tail; /*  ������ ������ ���ο� ������ PrevNode�� ����Ų��. */
    }
}

/*  ��� ���� */
void DLL_InsertAfter( LinkNode* Current, LinkNode* NewNode )
{
    NewNode->NextNode = Current->NextNode;
    NewNode->PrevNode = Current;

    if ( Current->NextNode != NULL )
    {
        Current->NextNode->PrevNode = NewNode;
        Current->NextNode = NewNode;
    }
}

/*  ��� ���� */
void DLL_RemoveNode( LinkNode** Head, LinkNode* Remove )
{
    if ( *Head == Remove )
    {
        *Head = Remove->NextNode;
        if ( (*Head) != NULL )
            (*Head)->PrevNode = NULL;
        
        Remove->PrevNode = NULL;
        Remove->NextNode = NULL;
    }
    else
    {
        LinkNode* Temp = Remove;

        if ( Remove->PrevNode != NULL )
            Remove->PrevNode->NextNode = Temp->NextNode;

        if ( Remove->NextNode != NULL )
            Remove->NextNode->PrevNode = Temp->PrevNode;

        Remove->PrevNode = NULL;
        Remove->NextNode = NULL;
    }    
}

/*  ��� Ž�� */
LinkNode* DLL_GetNodeAt( LinkNode* Head, int Location )
{
    LinkNode* Current = Head;

    while ( Current != NULL && (--Location) >= 0)
    {
        Current = Current->NextNode;
    }

    return Current;
}

/*  ��� �� ���� */
int DLL_GetNodeCount( LinkNode* Head )
{
    unsigned int  Count = 0;
    LinkNode*         Current = Head;

    while ( Current != NULL )
    {
        Current = Current->NextNode;
        Count++;
    }

    return Count;
}

void DLL_DestroyList( LinkNode* Head)
{
    int   i;
    int   count   = 0;
    LinkNode* current = NULL;
	FileInfo *file=NULL;
	extern RBTNode* Nil;

    count = DLL_GetNodeCount(Head);

    for (i=0; i<count; i++ )
    {
        current = DLL_GetNodeAt( Head, 0 );

        if ( current != NULL ) 
        {
        	//Destory RB tree
			file = (FileInfo *)current->Data;
			if(file!=NULL)
			{
				if(file->tree != NULL)
				{
					Nil=file->nil;
					RBT_DestroyTree( file->tree );
				}
				
				if(file->nil != NULL)
					free(file->nil);
			}

            DLL_RemoveNode( &Head, current );
            DLL_DestroyNode( current );
        }
    }
}

void PrintNode( LinkNode* _Node )
{
#if 0
    if ( _Node->PrevNode == NULL )
        printf("Prev: NULL");
    else
        printf("Prev: %d", _Node->PrevNode->Data);

    printf(" Current: %d ", _Node->Data);

    if ( _Node->NextNode == NULL )
        printf("Next: NULL\n");
    else
        printf("Next: %d\n", _Node->NextNode->Data);
#endif
}
