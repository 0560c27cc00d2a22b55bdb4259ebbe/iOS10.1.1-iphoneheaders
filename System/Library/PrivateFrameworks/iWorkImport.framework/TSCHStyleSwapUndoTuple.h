/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCHStyleSwapSupporting;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSSStyle, NSUUID, TSPObject, TSSPropertySet, TSCHStyleOwnerReference, TSCHStyleSemanticTag, TSSPropertyMap;

@interface TSCHStyleSwapUndoTuple : NSObject {

	TSSStyle* mOldValue;
	TSSStyle* mNewValue;
	int mSwapType;
	int mIndex;
	NSUUID* mRefLineUUID;
	TSPObject*<TSCHStyleSwapSupporting> mStyleSwapSupporting;
	TSSPropertySet* mMutatedProperties;

}

@property (nonatomic,retain,readonly) TSPObject*<TSCHStyleSwapSupporting> styleSwapSupporting; 
@property (readonly) TSSStyle * beforeValue; 
@property (readonly) TSSStyle * afterValue; 
@property (readonly) int swapType; 
@property (readonly) unsigned long long index; 
@property (readonly) TSSPropertySet * mutatedProperties; 
@property (readonly) NSUUID * refLineUUID; 
@property (readonly) TSCHStyleOwnerReference * styleOwnerReference; 
@property (readonly) TSCHStyleSemanticTag * semanticTag; 
@property (readonly) TSSPropertyMap * forwardDelta; 
@property (readonly) TSSPropertyMap * reverseDelta; 
+(id)migratedSwapTuplesForSwapTuples:(id)arg1 documentRoot:(id)arg2 ;
+(BOOL)hasSwapTuplesRequiringConversion:(id)arg1 ;
+(id)convertedSwapTuplesForSwapTuples:(id)arg1 chartInfo:(id)arg2 ;
-(void)saveToArchive:(StyleSwapUndoTupleArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const StyleSwapUndoTupleArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithChartInfo:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 ;
-(TSCHStyleSemanticTag *)semanticTag;
-(id)migratedSwapTupleForDocumentRoot:(id)arg1 ;
-(TSPObject*<TSCHStyleSwapSupporting>)styleSwapSupporting;
-(id)convertedSwapTupleForChartInfo:(id)arg1 ;
-(id)p_initWithPersistentStyleSwapSupporting:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 refLineUUID:(id)arg6 ;
-(id)initWithChartInfo:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 refLineUUID:(id)arg6 ;
-(int)swapType;
-(TSSStyle *)afterValue;
-(TSSStyle *)beforeValue;
-(NSUUID *)refLineUUID;
-(id)p_deltaFrom:(id)arg1 to:(id)arg2 ;
-(id)migratedStyleForStyle:(id)arg1 documentRoot:(id)arg2 ;
-(id)initWithChartStylePreset:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 ;
-(id)initFromSOSWithSwapType:(int)arg1 index:(unsigned long long)arg2 oldValue:(id)arg3 newValue:(id)arg4 refLineUUID:(id)arg5 ;
-(BOOL)isSwappingSameStyleObject:(id)arg1 ;
-(BOOL)isSwappingSameStyleValues:(id)arg1 ;
-(id)p_nonequalPropertiesFromMap:(id)arg1 toMap:(id)arg2 ;
-(TSSPropertySet *)mutatedProperties;
-(BOOL)canApplyTupleToStyleSwapSupporting:(id)arg1 ;
-(TSCHStyleOwnerReference *)styleOwnerReference;
-(TSSPropertyMap *)forwardDelta;
-(TSSPropertyMap *)reverseDelta;
-(id)inverse;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)index;
@end
