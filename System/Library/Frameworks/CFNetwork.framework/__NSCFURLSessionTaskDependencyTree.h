/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLSessionTaskDependencyTree.h>

@class NSURL, NSMutableDictionary, __NSCFURLSessionTaskDependencyTreeNode;

@interface __NSCFURLSessionTaskDependencyTree : NSURLSessionTaskDependencyTree {

	NSURL* _mainDocumentURL;
	NSMutableDictionary* _dependencies;
	__NSCFURLSessionTaskDependencyTreeNode* _effectiveTree;

}
+(id)dependencyTreeWithMainDocumentURL:(id)arg1 dependencyDescriptions:(id)arg2 ;
-(id)mainDocumentURL;
-(void)setMainDocumentURL:(id)arg1 ;
-(void)set_dependencies:(id)arg1 ;
-(void)set_effectiveTree:(id)arg1 ;
-(id)_effectiveTree;
-(id)_dependencies;
-(void)dealloc;
@end

