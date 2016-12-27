/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DResource.h>

@class TSCH3DResource, NSIndexSet;

@interface TSCH3DVAOResource : TSCH3DResource {

	vector<TSCH3D::ResourceAttributeState, std::__1::allocator<TSCH3D::ResourceAttributeState> >* mAttributes;
	TSCH3DResource* mIndices;
	NSIndexSet* mEnabledArrays;
	BOOL mFailed;

}

@property (nonatomic,retain) NSIndexSet * enabledArrays; 
@property (assign,nonatomic) BOOL failed; 
+(id)resourceWithObjectState:(const ObjectState*)arg1 indices:(id)arg2 ;
-(id)initWithObjectState:(const ObjectState*)arg1 indices:(id)arg2 ;
-(NSIndexSet *)enabledArrays;
-(void)setEnabledArrays:(NSIndexSet *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)get;
-(BOOL)failed;
-(void)setFailed:(BOOL)arg1 ;
@end

