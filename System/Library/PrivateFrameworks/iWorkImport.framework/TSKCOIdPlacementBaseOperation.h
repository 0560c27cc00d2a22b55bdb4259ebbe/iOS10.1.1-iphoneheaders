/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCOAbstractOperation.h>
#import <iWorkImport/TSKCOIdOperation.h>
#import <iWorkImport/TSKCOTransforming.h>

@class TSKCOIdAddress;

@interface TSKCOIdPlacementBaseOperation : TSKCOAbstractOperation <TSKCOIdOperation, TSKCOTransforming> {

	TSKCOIdAddress* mAddress;
	int mFromIndex;
	int mToIndex;
	int mPlacementType;
	BOOL mDominating;

}

@property (nonatomic,readonly) int fromIndex; 
@property (nonatomic,readonly) int toIndex; 
@property (nonatomic,readonly) int placementType; 
@property (nonatomic,readonly) BOOL isDominating; 
@property (nonatomic,readonly) TSKCOIdAddress * address; 
-(void)saveToArchiver:(id)arg1 message:(Operation*)arg2 ;
-(id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(BOOL)arg4 noop:(BOOL)arg5 ;
-(BOOL)isDominating;
-(int)fromIndex;
-(id)operationWithNewNoop:(BOOL)arg1 ;
-(int)p_transformIndexByRemove:(int)arg1 isHigherPriority:(BOOL)arg2 isFromIndex:(BOOL)arg3 ;
-(id)operationWithNewFromIndex:(int)arg1 toIndex:(int)arg2 dominating:(BOOL)arg3 ;
-(int)placementType;
-(pair<int, int>)p_transformBothIndexesByRemove:(int)arg1 opToIndex:(int)arg2 isHigherPriority:(BOOL)arg3 ;
-(id)initWithUnarchiver:(id)arg1 message:(const Operation*)arg2 ;
-(id)p_transformAdd:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)p_transformRemove:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)p_transformRearrange:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)p_transformPlacement:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)transformUpdateIdOperation:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)transformReplaceRangeOperation:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)transformUpdateRangeOperation:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(int)p_transformIndexByAdd:(int)arg1 isHigherPriority:(BOOL)arg2 isFromIndex:(BOOL)arg3 ;
-(pair<int, int>)p_transformBothIndexesByAdd:(int)arg1 opToIndex:(int)arg2 isHigherPriority:(BOOL)arg3 ;
-(id)transformIdPlacementBaseOperation:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)transformDynamicByAnyOperation:(id)arg1 byHigherPriority:(BOOL)arg2 ;
-(id)transformStaticByAnyOperation:(id)arg1 byHigherPriority:(BOOL)arg2 ;
-(id)ut_transformByTransformer:(id)arg1 ;
-(int)p_transformFromIndexByRearrange:(int)arg1 isHigherPriority:(BOOL)arg2 ;
-(int)p_transformToIndexByRearrange:(int)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 ;
-(BOOL)p_isFromToIndexEqual;
-(pair<int, int>)p_transformBothIndexesByRearrange:(int)arg1 opToIndex:(int)arg2 isHigherPriority:(BOOL)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)toIndex;
-(TSKCOIdAddress *)address;
@end

