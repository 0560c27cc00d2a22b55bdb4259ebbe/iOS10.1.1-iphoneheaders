/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameplayKit/GameplayKit-Structs.h>
@class GKDecisionTree;

@interface GKDecisionNode : NSObject {

	GKCDecisionNode* _node;
	GKDecisionTree* _tree;

}
-(void)dealloc;
-(id)description;
-(void)setAttribute:(id)arg1 ;
-(id)initWithNode:(GKCDecisionNode*)arg1 tree:(id)arg2 ;
-(id)createChildWithAttribute:(id)arg1 randomSource:(id)arg2 withBranch:(id)arg3 ;
-(id)createBranchWithValue:(id)arg1 attribute:(id)arg2 ;
-(id)createBranchWithPredicate:(id)arg1 attribute:(id)arg2 ;
-(id)createBranchWithWeight:(long long)arg1 attribute:(id)arg2 ;
-(id)attribute;
@end

