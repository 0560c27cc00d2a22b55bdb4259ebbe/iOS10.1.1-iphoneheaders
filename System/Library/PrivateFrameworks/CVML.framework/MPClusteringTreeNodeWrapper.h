/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPClusteringTreeNodeWrapper : NSObject {

	BOOL _freeNodeOnDealloc;
	void* _node;

}

@property (assign) void* node;                          //@synthesize node=_node - In the implementation block
@property (assign) BOOL freeNodeOnDealloc;              //@synthesize freeNodeOnDealloc=_freeNodeOnDealloc - In the implementation block
-(void)dealloc;
-(float)distance;
-(void*)node;
-(id)descriptor;
-(void)setNode:(void*)arg1 ;
-(id)left;
-(id)right;
-(id)initWithNode:(void*)arg1 freeNodeOnDealloc:(BOOL)arg2 ;
-(void)setFreeNodeOnDealloc:(BOOL)arg1 ;
-(int)nodeId;
-(float)avgDistance;
-(int)leafsCount;
-(id)getLeafNodes;
-(BOOL)freeNodeOnDealloc;
@end

