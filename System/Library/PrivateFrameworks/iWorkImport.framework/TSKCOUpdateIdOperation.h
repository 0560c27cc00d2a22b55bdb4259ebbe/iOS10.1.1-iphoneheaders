/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCOUpdateOperation.h>
#import <iWorkImport/TSKCOIdOperation.h>
#import <iWorkImport/TSKCOUpdateIdOperationSubset.h>
#import <iWorkImport/TSKCOTransforming.h>

@class TSKCOIdAddress;

@interface TSKCOUpdateIdOperation : TSKCOUpdateOperation <TSKCOIdOperation, TSKCOUpdateIdOperationSubset, TSKCOTransforming> {

	TSKCOIdAddress* mAddress;

}

@property (nonatomic,readonly) TSKCOIdAddress * address; 
+(id)operationWithIdAddress:(id)arg1 propertyName:(id)arg2 ;
-(void)saveToArchiver:(id)arg1 message:(Operation*)arg2 ;
-(id)operationWithNewNoop:(BOOL)arg1 ;
-(id)initWithUnarchiver:(id)arg1 message:(const Operation*)arg2 ;
-(id)transformUpdateIdOperation:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)transformReplaceRangeOperation:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)transformUpdateRangeOperation:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)transformIdPlacementBaseOperation:(id)arg1 isHigherPriority:(BOOL)arg2 ;
-(id)transformDynamicByAnyOperation:(id)arg1 byHigherPriority:(BOOL)arg2 ;
-(id)transformStaticByAnyOperation:(id)arg1 byHigherPriority:(BOOL)arg2 ;
-(id)ut_transformByTransformer:(id)arg1 ;
-(id)initWithIdAddress:(id)arg1 propertyName:(id)arg2 ;
-(id)initWithIdAddress:(id)arg1 propertyName:(id)arg2 noop:(BOOL)arg3 ;
-(id)toUpdateIdOperation;
-(id)fromUpdateIdOperation:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(TSKCOIdAddress *)address;
@end

