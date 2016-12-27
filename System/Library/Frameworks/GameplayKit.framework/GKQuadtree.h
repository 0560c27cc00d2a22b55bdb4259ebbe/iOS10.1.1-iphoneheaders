/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKQuadtree : NSObject {

	GKCQuadTree<NSObject>* _cQuadTree;

}
+(id)quadtreeWithBoundingQuad:(GKQuadRef)arg1 minimumCellSize:(float)arg2 ;
-(BOOL)removeElement:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithBoundingQuad:(GKQuadRef)arg1 minimumCellSize:(float)arg2 ;
-(id)addElement:(id)arg1 ;
-(id)addElement:(id)arg1 withQuad:(GKQuadRef)arg2 ;
-(id)elementsAtPoint:;
-(id)elementsInQuad:(GKQuadRef)arg1 ;
-(BOOL)removeElement:(id)arg1 withNode:(id)arg2 ;
@end

