#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0
 
typedef int Status;
typedef struct{
    int coef;
    int expn;
}Elemtype;

typedef struct{
    Elemtype data;
    struct PLinkNode *next;
}PLinkNode;

typedef struct{
    PLinkNode head,tail;
    int len;
}PLinkList;

typedef PLinkList polym;

void CreateList_P(PLinkList *l, int n){

}

PLinkList GetHead(PLinkList &l){
    return l.;
}

PLink NextPos(PLinkList &l, PLink h){
    
}

Elemtype GetCurElem(PLink l){
    
}

void SetCurElem(PLink l,Elemtype e){
    
}

DelFirst(){
    
}



void AddPolyn(PLinkList &pa, PLinkList &pb){
    PLink ha,hb,qa,qb;
    ElemType a,b,temp;
    float sum;
    ha = GetHead(pa);
    hb = GetHead(pb);
    qa = NextPos(pa,ha);
    qb = NextPos(pb,hb);
    while(qa && qb){
        a = GetCurElem(qa);
        b = GetCurElem(qb);
        switch(Compare(a,b)){
            case -1:
                ha = qa;
                qa = NextPos(pa,qa);
                break;
            case 0:
                sum = a.coef + b.coef;
                if(sum != 0.0){
                    temp.coef = sum;
                    temp.expn = a.expn;
                    SetCurElem(qa,temp);
                    ha = qa;
                }else{
                    DelFirst(ha,qa);
                    FreeNode(qa);
                }
                DelFirst(hb,qb);
                FreeNode(qb);
                qb = NextPos(pb,hb);
                qa = NextPos(pa,ha);
                break;
            case 1:
                DelFirst(hb,qb);
                InsFirst(ha,qb);
                qb = NextPos(pb,hb);
                qa = NextPos(pa,ha);
                break;
        }
    }
    if(!Empty(pb)){
        Append(pa,qb);
    }
    FreeNode(hb);
}
