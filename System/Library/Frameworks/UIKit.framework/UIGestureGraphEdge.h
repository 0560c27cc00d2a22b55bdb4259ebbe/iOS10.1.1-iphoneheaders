/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureGraphElement.h>

@class UIGestureGraphNode;

@interface UIGestureGraphEdge : UIGestureGraphElement {

	BOOL _directed;
	UIGestureGraphNode* _sourceNode;
	UIGestureGraphNode* _targetNode;

}

@property (nonatomic,readonly) UIGestureGraphNode * sourceNode;              //@synthesize sourceNode=_sourceNode - In the implementation block
@property (nonatomic,readonly) UIGestureGraphNode * targetNode;              //@synthesize targetNode=_targetNode - In the implementation block
@property (getter=isDirected,nonatomic,readonly) BOOL directed;              //@synthesize directed=_directed - In the implementation block
@property (getter=isLoop,nonatomic,readonly) BOOL loop; 
-(id)description;
-(UIGestureGraphNode *)sourceNode;
-(BOOL)isLoop;
-(UIGestureGraphNode *)targetNode;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 directed:(BOOL)arg4 ;
-(BOOL)isDirected;
-(id)oppositeNode:(id)arg1 ;
-(id)commonNode:(id)arg1 ;
@end
