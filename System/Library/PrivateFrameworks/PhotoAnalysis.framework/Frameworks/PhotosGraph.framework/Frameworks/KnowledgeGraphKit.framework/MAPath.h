/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableSet;

@interface MAPath : NSObject <NSCopying> {

	NSMutableArray* _edges;
	NSMutableSet* _nodes;

}
+(id)path;
+(id)pathWithEdges:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setEdges:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(id)sourceNode;
-(id)targetNode;
-(id)nodesForLabel:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 ;
-(BOOL)containsNode:(id)arg1 ;
-(BOOL)isEqualToPath:(id)arg1 ;
-(id)edgeAtIndex:(unsigned long long)arg1 ;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(id)nodeAtIndex:(unsigned long long)arg1 ;
-(void)addLastEdge:(id)arg1 ;
-(double)edgesWeight;
-(BOOL)containsEdge:(id)arg1 ;
-(void)addFirstEdge:(id)arg1 ;
-(void)removeFirstEdge;
-(void)removeLastEdge;
-(void)removeAllEdges;
-(id)graphRepresentation;
-(unsigned long long)edgesCount;
-(unsigned long long)nodesCount;
@end
