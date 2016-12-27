/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSArray, TSUBezierPath, TSDBezierNode;

@interface TSDBezierSubpath : NSObject {

	NSArray* mNodes;
	BOOL mClosed;

}

@property (nonatomic,copy) NSArray * nodes; 
@property (assign,getter=isClosed,nonatomic) BOOL closed; 
@property (nonatomic,readonly) BOOL isRectangular; 
@property (nonatomic,readonly) TSUBezierPath * bezierPath; 
@property (nonatomic,readonly) TSDBezierNode * firstNode; 
@property (nonatomic,readonly) TSDBezierNode * lastNode; 
@property (nonatomic,readonly) BOOL allNodesSelected; 
@property (nonatomic,readonly) BOOL hasSelectedNode; 
@property (nonatomic,readonly) BOOL canDeleteSelectedNodes; 
@property (nonatomic,readonly) CGRect nodeBounds; 
@property (nonatomic,readonly) BOOL closeIfEndpointsAreEqual; 
-(double)distanceToPoint:(CGPoint)arg1 elementIndex:(unsigned long long*)arg2 tValue:(double*)arg3 threshold:(double)arg4 ;
-(void)updateReflectedState;
-(void)appendToBezierPath:(id)arg1 selectedNodesOnly:(BOOL)arg2 fromIndex:(unsigned long long)arg3 ;
-(id)nodePriorToNode:(id)arg1 ;
-(id)nodeAfterNode:(id)arg1 ;
-(void)removeLastNode;
-(id)splitEdgeAtIndex:(unsigned long long)arg1 atPercentage:(double)arg2 ;
-(void)appendToBezierPath:(id)arg1 ;
-(void)reverseDirection;
-(void)offsetSelectedNodesByDelta:(CGPoint)arg1 ;
-(void)offsetSelectedEdgesByDelta:(CGPoint)arg1 ;
-(BOOL)allNodesSelected;
-(BOOL)hasSelectedNode;
-(BOOL)canDeleteSelectedNodes;
-(void)deleteSelectedNodes;
-(void)selectAllNodes;
-(void)deselectAllNodes;
-(id)bezierNodeUnderPoint:(CGPoint)arg1 withTransform:(CGAffineTransform)arg2 andTolerance:(double)arg3 returningType:(long long*)arg4 ;
-(CGRect)nodeBounds;
-(void)sharpenAllNodes;
-(void)smoothNode:(id)arg1 ;
-(BOOL)closeIfEndpointsAreEqual;
-(void)addNodesToArray:(id)arg1 ;
-(void)convertToHobby;
-(void)smoothAllNodes;
-(void)updateSmoothNodes;
-(CGPoint)calculateNewControlFromOriginalDelta:(CGPoint)arg1 currentDelta:(CGPoint)arg2 originalSmoothDelta:(CGPoint)arg3 node:(CGPoint)arg4 ;
-(long long)updateSmoothNodes:(id)arg1 from:(long long)arg2 to:(long long)arg3 closed:(BOOL)arg4 addTemporaryNodes:(BOOL)arg5 ;
-(void)updateSmoothNodes:(id)arg1 addTemporaryNodes:(BOOL)arg2 ;
-(void)morphWithMorphInfo:(id)arg1 ;
-(void)removeTemporaryNodes;
-(void)addTemporarySmoothNodes;
-(id)init;
-(void)dealloc;
-(id)description;
-(TSUBezierPath *)bezierPath;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeNode:(id)arg1 ;
-(TSDBezierNode *)firstNode;
-(void)setClosed:(BOOL)arg1 ;
-(BOOL)isClosed;
-(TSDBezierNode *)lastNode;
-(NSArray *)nodes;
-(void)addNode:(id)arg1 ;
-(void)setNodes:(NSArray *)arg1 ;
-(BOOL)isRectangular;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
-(BOOL)isCircular;
@end

