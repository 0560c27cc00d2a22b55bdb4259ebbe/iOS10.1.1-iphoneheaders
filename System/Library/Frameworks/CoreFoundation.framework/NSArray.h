/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/HFPrettyDescription.h>
#import <libobjc.A.dylib/FCOrderedCollectionAdditions.h>
#import <libobjc.A.dylib/CKDParsedObject.h>
#import <libobjc.A.dylib/PQLBindable.h>
#import <libobjc.A.dylib/CSCoderEncoder.h>
#import <libobjc.A.dylib/CKRecordValue.h>
#import <libobjc.A.dylib/INIntentResolutionResultDataProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSString, IMMessage, IMMessageItem, AXEventPathInfoRepresentation, NSDictionary;

@interface NSArray : NSObject <HFPrettyDescription, FCOrderedCollectionAdditions, CKDParsedObject, PQLBindable, CSCoderEncoder, CKRecordValue, INIntentResolutionResultDataProviding, NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long prevailingLocalSecretType; 
@property (nonatomic,readonly) BOOL isQueryResultSetInvalidated; 
@property (nonatomic,readonly) IMMessage * lastMessage; 
@property (nonatomic,readonly) IMMessage * lastFinishedMessage; 
@property (nonatomic,readonly) IMMessage * lastIncomingMessage; 
@property (nonatomic,readonly) IMMessage * lastIncomingFinishedMessage; 
@property (nonatomic,readonly) IMMessageItem * __imLastMessageItem; 
@property (nonatomic,readonly) NSArray * mf_tail; 
@property (nonatomic,readonly) AXEventPathInfoRepresentation * firstPath; 
@property (nonatomic,readonly) NSDictionary * bw_builtInMicRouteDictionary; 
@property (readonly) unsigned long long count; 
+(id)arrayTableWithColumnsFromDictionary:(id)arg1 ;
+(id)arrayTableWithLength:(unsigned long long)arg1 ;
+(id)arrayTableWithKeys:(id)arg1 andLength:(unsigned long long)arg2 ;
+(id)arrayWithObject:(id)arg1 repeated:(unsigned long long)arg2 ;
+(id)rangeFrom:(id)arg1 to:(id)arg2 ;
+(id)rangeFrom:(id)arg1 toInclusive:(id)arg2 ;
+(id)rangeFrom:(id)arg1 to:(id)arg2 stride:(id)arg3 ;
+(id)fc_array:(/*^block*/id)arg1 ;
+(id)fc_arrayByAddingObjectsFromArray:(id)arg1 toArray:(id)arg2 ;
+(id)fc_arrayByAddingObjectsFromArray:(id)arg1 toArray:(id)arg2 inRelativeOrder:(unsigned long long)arg3 ;
+(id)fc_generatedArrayWithCount:(unsigned long long)arg1 generator:(/*^block*/id)arg2 ;
+(void)fc_walkArray:(id)arg1 andArray:(id)arg2 withBlock:(/*^block*/id)arg3 ;
+(id)_gkArrayWithIndexSet:(id)arg1 ;
+(id)fm_arrayByRepeatingWithCount:(unsigned long long)arg1 generatorBlock:(/*^block*/id)arg2 ;
+(id)fm_arrayWithSafeObject:(id)arg1 ;
+(id)safari_arrayWithPropertyListData:(id)arg1 options:(unsigned long long)arg2 ;
+(id)PDFKitFieldTypeArray;
+(id)PDFKitHighlightingModeArray;
+(id)PDFKitSubtypeArray;
+(id)PDFKitAppearanceDictionaryArray;
+(id)PDFKitBorderStyleArray;
+(id)arrayOfSetsBySplitting:(id)arg1 batchSize:(unsigned long long)arg2 ;
+(id)_arrayWithIntArg:(int)arg1 additionalArgs:(char*)arg2 ;
+(id)cdvArrayWithIntegers:(int)arg1 ;
+(id)na_arrayByRepeatingWithCount:(unsigned long long)arg1 generatorBlock:(/*^block*/id)arg2 ;
+(id)na_arrayWithSafeObject:(id)arg1 ;
+(id)axArrayWithPossiblyNilArrays:(unsigned long long)arg1 ;
+(id)axArrayByIgnoringNilElementsWithCount:(unsigned long long)arg1 ;
+(id)bw_selectedInputsArrayForBuiltInMicRouteDictionary:(id)arg1 dataSource:(id)arg2 polarPattern:(unsigned)arg3 ;
+(id)arrayWithValues:(id)arg1 inBlock:(/*^block*/id)arg2 ;
+(id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2 ;
+(id)arrayWithContentsOfFile:(id)arg1 ;
+(id)arrayWithContentsOfURL:(id)arg1 ;
+(id)newArrayWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
+(id)arrayWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
+(id)arrayWithArray:(id)arg1 range:(NSRange)arg2 ;
+(id)arrayWithArray:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)arrayWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
+(id)arrayWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
+(id)arrayWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)arrayWithOrderedSet:(id)arg1 ;
+(id)arrayWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)arrayWithSet:(id)arg1 ;
+(id)arrayWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
+(id)array;
+(id)arrayWithArray:(id)arg1 ;
+(id)arrayWithObject:(id)arg1 ;
+(id)arrayWithObjects:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)objectOrNilAtIndex:(long long)arg1 ;
-(id)getTableColumn:(id)arg1 ;
-(void)setTableColumnWithColumnsFromDictionary:(id)arg1 ;
-(void)setTableColumn:(id)arg1 withValues:(id)arg2 ;
-(double)reduceEnumerateDouble:(/*^block*/id)arg1 withInitialValue:(double)arg2 ;
-(id)mapAtIndices:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)reduceEnumerate:(/*^block*/id)arg1 withInitialValue:(id)arg2 ;
-(id)mapEnumerate:(/*^block*/id)arg1 ;
-(id)objectsInRangeFromIndex:(unsigned long long)arg1 withLength:(unsigned long long)arg2 ;
-(id)mapDouble:(/*^block*/id)arg1 ;
-(id)flatMap;
-(double)reduceDouble:(/*^block*/id)arg1 withInitialValue:(double)arg2 ;
-(id)reduce:(/*^block*/id)arg1 withInitialValue:(id)arg2 ;
-(id)dictionaryOfResultsFromBlock:(/*^block*/id)arg1 ;
-(BOOL)anyPassPredicate:(/*^block*/id)arg1 ;
-(BOOL)nonePassPredicate:(/*^block*/id)arg1 ;
-(id)map:(/*^block*/id)arg1 ;
-(id)filter:(/*^block*/id)arg1 ;
-(id)reverse;
-(id)indexSet;
-(BOOL)containsString:(id)arg1 ;
-(id)hf_prettyDescription;
-(BOOL)_maps_containsSearchResultEqualToResult:(id)arg1 forPurpose:(long long)arg2 ;
-(id)assetForIdentifier:(id)arg1 ;
-(id)map:(/*^block*/id)arg1 ;
-(void)ACSportsListView_enumerateObjectPairsUsingBlock:(/*^block*/id)arg1 ;
-(id)afui_arrayByMappingWithBlock:(/*^block*/id)arg1 ;
-(id)npkComprehension:(/*^block*/id)arg1 ;
-(id)npkFindFirstObjectMatchingCondition:(/*^block*/id)arg1 ;
-(id)npkSafeObjectAtIndex:(unsigned long long)arg1 ;
-(id)pk_arrayByApplyingBlock:(/*^block*/id)arg1 ;
-(id)pk_shuffledArray;
-(id)pk_arrayByRemovingObjectsInArray:(id)arg1 ;
-(id)pk_arrayByRemovingObject:(id)arg1 ;
-(id)pk_objectsPassingTest:(/*^block*/id)arg1 ;
-(BOOL)pk_containsObjectPassingTest:(/*^block*/id)arg1 ;
-(id)_maps_indexesOfObjectsCorrespondingToIdentifiableObjects:(id)arg1 ;
-(unsigned long long)_maps_indexOfObjectCorrespondingToIdentifiableObject:(id)arg1 ;
-(id)_maps_arrayWithObjectsConformingToProtocols:(id)arg1 ;
-(id)shortDescription;
-(id)secureDescriptionWithBlacklistKeys:(id)arg1 ;
-(id)describeElements:(/*^block*/id)arg1 ;
-(id)secureDescriptionWithIndent:(id)arg1 newLine:(BOOL)arg2 blacklistedKeys:(id)arg3 ;
-(id)fc_dictionaryWithKeyBlock:(/*^block*/id)arg1 valueBlock:(/*^block*/id)arg2 ;
-(id)fc_arrayByTransformingWithBlock:(/*^block*/id)arg1 ;
-(id)fc_arrayOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)fc_subarrayWithMaxCount:(unsigned long long)arg1 ;
-(id)fc_setByTransformingWithBlock:(/*^block*/id)arg1 ;
-(id)fc_dictionaryWithKeySelector:(SEL)arg1 ;
-(id)fc_arrayByRemovingObject:(id)arg1 ;
-(id)fc_arrayByRemovingObjectsInArray:(id)arg1 ;
-(id)fc_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)fc_arrayByReplacingObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)fc_arrayByReversingObjects;
-(id)fc_dictionaryWithKeyBlock:(/*^block*/id)arg1 ;
-(unsigned long long)fc_countOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(NSRange)fc_expandIndex:(unsigned long long)arg1 toIncludeAdjacentObjectsPassingTest:(/*^block*/id)arg2 ;
-(unsigned long long)fc_indexOfFirstObjectWithValue:(id)arg1 forKey:(id)arg2 ;
-(id)fc_firstObjectWithValue:(id)arg1 forKey:(id)arg2 ;
-(id)fc_subarrayFromIndex:(unsigned long long)arg1 inclusive:(BOOL)arg2 ;
-(id)fc_arrayByRemovingObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)fc_onlyObject;
-(BOOL)fc_containsObjectPassingTest:(/*^block*/id)arg1 ;
-(id)fc_subarrayUpToIndex:(unsigned long long)arg1 inclusive:(BOOL)arg2 ;
-(void)fc_subarrayWithCount:(unsigned long long)arg1 result:(/*^block*/id)arg2 ;
-(void)fc_enumerateSideBySideWithArray:(id)arg1 reverse:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(void)fc_enumerateObjectsFromIndex:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)fc_safeSubarrayWithCountFromFront:(unsigned long long)arg1 ;
-(id)fc_safeSubarrayWithCountFromBack:(unsigned long long)arg1 ;
-(id)fc_subarrayFromCount:(unsigned long long)arg1 ;
-(id)fc_subarrayUpToCountInclusive:(unsigned long long)arg1 ;
-(id)fc_subarrayToIndex:(unsigned long long)arg1 withMaxCount:(unsigned long long)arg2 range:(NSRange*)arg3 ;
-(id)fc_subarrayFromIndex:(unsigned long long)arg1 withMaxCount:(unsigned long long)arg2 range:(NSRange*)arg3 ;
-(void)fc_enumerateObjectsPairwiseUsingBlock:(/*^block*/id)arg1 ;
-(void)fc_enumerateObjectsInReverse:(BOOL)arg1 usingSkipAheadBlock:(/*^block*/id)arg2 ;
-(BOOL)fc_isSortedUsingComparator:(/*^block*/id)arg1 ;
-(id)fc_diffAgainstSortedOrderedCollection:(id)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)fc_randomlyMergeWithArray:(id)arg1 ;
-(id)fc_dictionaryWithKeySelector:(SEL)arg1 valueSelector:(SEL)arg2 ;
-(id)fc_dictionaryWithValueBlock:(/*^block*/id)arg1 ;
-(id)fc_dictionaryOfSortedArraysWithKeyBlock:(/*^block*/id)arg1 ;
-(id)fc_firstObjectFromIndex:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)fc_randomObject;
-(BOOL)fc_containsObjectsAtFront:(id)arg1 ;
-(BOOL)fc_containsObjectsAtBack:(id)arg1 ;
-(BOOL)fc_containsObjectsWithValue:(id)arg1 forKey:(id)arg2 ;
-(id)fc_orderedSetByTransformingWithBlock:(/*^block*/id)arg1 ;
-(id)fc_arrayByFlattening;
-(id)fc_arrayByRemovingObjectIdenticalTo:(id)arg1 ;
-(id)fc_arrayByReplacingObjectIdenticalTo:(id)arg1 withObject:(id)arg2 ;
-(id)fc_arrayByRemovingObjectsInRange:(NSRange)arg1 ;
-(id)fc_arrayByRemovingObjectsAtIndexes:(id)arg1 ;
-(id)fc_arrayByReplacingObjectsInRange:(NSRange)arg1 withObject:(id)arg2 ;
-(id)fc_arraysByExcisingRange:(NSRange)arg1 ;
-(id)fc_arraysByPartitioningOnObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)fc_indexesOfObjectsIdenticalTo:(id)arg1 ;
-(id)fc_arrayByCollectingObjectsWithBlock:(/*^block*/id)arg1 ;
-(id)fc_arrayByAddingNonContainedObjectsFromArray:(id)arg1 ;
-(id)fc_subarrayInOrder:(unsigned long long)arg1 relativeToIndex:(unsigned long long)arg2 inclusive:(BOOL)arg3 ;
-(id)fc_subarrayInOrder:(unsigned long long)arg1 relativeToIndex:(unsigned long long)arg2 withMaxCount:(unsigned long long)arg3 range:(NSRange*)arg4 ;
-(id)fc_arrayByMergingAdjacentObjectsWithMergePolicy:(/*^block*/id)arg1 mergeBlock:(/*^block*/id)arg2 ;
-(id)fc_subarrayWithPercentFromBeginning:(double)arg1 ;
-(id)fc_subarrayWithPercentToEnd:(double)arg1 ;
-(void)fc_visitSubarraysWithMaxCount:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)fc_reduceArrayWithInitial:(id)arg1 block:(/*^block*/id)arg2 ;
-(double)fc_reduceArrayWithDouble:(double)arg1 block:(/*^block*/id)arg2 ;
-(unsigned long long)fc_uniqueCount;
-(void)fc_splitArrayWithTest:(/*^block*/id)arg1 result:(/*^block*/id)arg2 ;
-(void)fc_enumerateIslandsOfCommonValuesForKeyBlock:(/*^block*/id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)fc_sortedArrayStartingWithElementsSatisfying:(/*^block*/id)arg1 sortedBy:(/*^block*/id)arg2 ;
-(id)allObjectsWithClass:(Class)arg1 ;
-(BOOL)containsObjectIdenticalTo:(id)arg1 ;
-(id)_gkNonGuestPlayersFromPlayers;
-(id)_gkGuestPlayersFromPlayers;
-(id)_gkInternalsFromPlayers;
-(id)_gkIncompletePlayersFromPlayerIDs;
-(id)_gkPlayersFromInternals;
-(void)_gkValidatePlayersForReturnFromAPI;
-(id)_gkPlayersIDsFromPlayers;
-(id)_gkDescriptionWithChildren:(int)arg1 ;
-(id)_gkOrderedSet;
-(id)_gkMapDictionaryWithKeyPath:(id)arg1 valueKeyPath:(id)arg2 ;
-(id)_gkMapConcurrentlyWithBlock:(/*^block*/id)arg1 ;
-(id)_gkSubarraysByKeyWithBlock:(/*^block*/id)arg1 ;
-(id)_gkMapDictionaryWithKeyPath:(id)arg1 ;
-(id)_gkDistinctValuesForKeyPath:(id)arg1 ;
-(id)_gkFirstObject;
-(id)_gkFoldWithInitialValue:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)_gkMapWithBlock:(/*^block*/id)arg1 ;
-(id)_gkValuesForKeyPath:(id)arg1 ;
-(id)_gkFilterWithBlock:(/*^block*/id)arg1 ;
-(id)shuffledArrayWithRandomSource:(id)arg1 ;
-(id)shuffledArray;
-(unsigned long long)prevailingLocalSecretType;
-(id)CKSortedForUpload;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(id)mpu_arrayByRemovingFirstObject;
-(id)mpu_arrayByRemovingLastObject;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)SCNMutableDeepCopy;
-(id)fm_arrayByFlattening;
-(void)fm_each:(/*^block*/id)arg1 ;
-(id)fm_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)fm_arrayWithResultsOfBlock:(/*^block*/id)arg1 ;
-(id)fm_map:(/*^block*/id)arg1 ;
-(id)fm_filter:(/*^block*/id)arg1 ;
-(BOOL)fm_any:(/*^block*/id)arg1 ;
-(BOOL)fm_all:(/*^block*/id)arg1 ;
-(id)fm_dictionaryWithKeyGenerator:(/*^block*/id)arg1 ;
-(id)hk_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)hk_averageUsingEvaluationBlock:(/*^block*/id)arg1 ;
-(id)hk_map:(/*^block*/id)arg1 ;
-(id)CNFRegArrayPassingTests:(id)arg1 ;
-(id)CNFRegArrayPassingTest:(/*^block*/id)arg1 ;
-(id)componentsJoinedIntoListWithMaxItems:(int)arg1 ;
-(id)__ck_proxyWithBundleIdentifier:(id)arg1 ;
-(BOOL)ck_containsObjectIdenticalTo:(id)arg1 ;
-(id)composeRecipientAddresses;
-(id)composeRecipientHandles;
-(id)composeRecipientNormalizedAddresses;
-(id)__ck_indexesOfPartsOfMessage:(id)arg1 ;
-(unsigned long long)__ck_indexOfTransfer:(id)arg1 ;
-(unsigned long long)__ck_indexOfChatItemWithGUID:(id)arg1 ;
-(unsigned long long)__ck_indexOfParentChatItemWithMesssageGUID:(id)arg1 associatedMessageRange:(NSRange)arg2 ;
-(unsigned long long)__ck_indexOfMediaObject:(id)arg1 ;
-(void)__ck_unloadSizesAtIndexes:(id)arg1 ;
-(void)__ck_unloadTranscriptTextAtIndexes:(id)arg1 ;
-(id)__ck_indexesOfUnplayedAudioMessages;
-(id)__ck_IMChatItemsAtIndexes:(id)arg1 ;
-(id)__ck_messageForChatItemAtIndex:(unsigned long long)arg1 ;
-(id)__ck_indexesOfPartsOfNonAttachmentMessages:(id)arg1 ;
-(id)__ck_indexesOfPartsOfMessages:(id)arg1 ;
-(id)__ck_chatItemWithGUID:(id)arg1 ;
-(id)__ck_parentChatItemWithMesssageGUID:(id)arg1 associatedMessageRange:(NSRange)arg2 ;
-(id)__ck_indexSetForIndexPathItemsInSection:(long long)arg1 ;
-(id)__ck_indexSetForIndexPathRowsInSection:(long long)arg1 ;
-(id)__ck_commaJoinedValueForKey:(id)arg1 ;
-(id)__ck_shuffledArray;
-(id)pu_localizedComposedStringThatFitsWidth:(double)arg1 withMeasuringLabel:(id)arg2 ;
-(id)pu_localizedComposedStringWithCount:(unsigned long long)arg1 ;
-(void)pu_enumerateObjectsFromIndex:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)safari_translateToArrayOfParsecModelsOfClass:(Class)arg1 ;
-(id)safari_filterObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)safari_numberAtIndex:(unsigned long long)arg1 ;
-(id)safari_mapObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)safari_dictionaryAtIndex:(unsigned long long)arg1 ;
-(id)safari_arrayAtIndex:(unsigned long long)arg1 ;
-(id)safari_stringAtIndex:(unsigned long long)arg1 ;
-(id)safari_mapAndFilterObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)safari_mapAndFilterObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)safari_reduceObjectsWithInitialValue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)safari_reduceObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)safari_maximumUsingComparator:(/*^block*/id)arg1 ;
-(id)safari_minimumUsingComparator:(/*^block*/id)arg1 ;
-(id)safari_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)objectsPassingTest:(/*^block*/id)arg1 ;
-(id)firstObjectPassingTest:(/*^block*/id)arg1 ;
-(unsigned long long)countObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)objectsPassingTest:(/*^block*/id)arg1 ;
-(id)firstObjectPassingTest:(/*^block*/id)arg1 ;
-(unsigned long long)countObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)mf_commaSeparatedRecipientListWithWidth:(double)arg1 forFont:(id)arg2 usingSelector:(SEL)arg3 ;
-(unsigned long long)mf_indexOfRecipientWithEmailAddress:(id)arg1 ;
-(id)mf_commaSeparatedRecipientListWithWidth:(double)arg1 forFont:(id)arg2 ;
-(void)_mapkit_orientableAnnotationViewsFixed:(id*)arg1 notFixed:(id*)arg2 ;
-(id)_mapkit_arrayByRemovingObject:(id)arg1 ;
-(unsigned long long)_mapkit_indexForObject:(id)arg1 usingSortFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(id)_mapkit_componentsJoinedInCommaDelimitedList;
-(id)_mapkit_joinedAddressComponents;
-(unsigned long long)mf_indexOfMailboxDictionaryWithName:(id)arg1 ;
-(void)mf_enumerateByStoreUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isQueryResultSetInvalidated;
-(BOOL)MPIsEmpty;
-(id)arrayByMergingWithArray:(id)arg1 ;
-(id)subarraysOfSize:(unsigned long long)arg1 ;
-(BOOL)b_boolAtIndex:(unsigned long long)arg1 ;
-(BOOL)bl_boolAtIndex:(unsigned long long)arg1 defaultValue:(BOOL)arg2 ;
-(long long)bl_intAtIndex:(unsigned long long)arg1 ;
-(long long)bl_intAtIndex:(unsigned long long)arg1 defaultValue:(long long)arg2 ;
-(float)bl_floatAtIndex:(unsigned long long)arg1 ;
-(float)bl_floatAtIndex:(unsigned long long)arg1 defaultValue:(float)arg2 ;
-(double)bl_doubleAtIndex:(unsigned long long)arg1 ;
-(double)bl_doubleAtIndex:(unsigned long long)arg1 defaultValue:(double)arg2 ;
-(CGRect)bl_rectAtIndex:(unsigned long long)arg1 ;
-(CGRect)bl_rectAtIndex:(unsigned long long)arg1 defaultValue:(CGRect)arg2 ;
-(id)bl_objectAtIndex:(unsigned long long)arg1 defaultValue:(id)arg2 ;
-(id)bl_objectOrNullAtIndex:(unsigned long long)arg1 ;
-(id)bl_objectAtIndexNoThrow:(long long)arg1 ;
-(id)bl_secondObject;
-(id)bl_nextToLastObject;
-(BOOL)bl_containsObjectIdenticalTo:(id)arg1 ;
-(id)bl_firstObjectWithStringValue:(id)arg1 forKey:(id)arg2 ;
-(id)objectsPassingTest:(/*^block*/id)arg1 ;
-(id)objectPassingTest:(/*^block*/id)arg1 ;
-(BOOL)containsObjectPassingTest:(/*^block*/id)arg1 ;
-(id)objectsOfClass:(Class)arg1 ;
-(id)arrayByGroupingIntoArraysWithMaxCount:(unsigned long long)arg1 ;
-(id)_navigation_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)CalMutableRecursiveCopy;
-(id)_CalArrayOfValueForKeys:(id)arg1 ;
-(id)_CalStringForArrayOfValues:(id)arg1 ;
-(id)_CalArrayOfValueForKeyPaths:(id)arg1 ;
-(id)allObjectsWithClass:(Class)arg1 ;
-(BOOL)CalContainsObjectIdenticalTo:(id)arg1 ;
-(id)CalStringValueForKeys:(id)arg1 ;
-(id)CalStringValueForKeyPaths:(id)arg1 ;
-(id)CalStringValueForKeys:(id)arg1 keyPaths:(id)arg2 ;
-(id)filteredArrayUsingTest:(/*^block*/id)arg1 ;
-(void)__enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)__itemForChatItemAtIndex:(unsigned long long)arg1 ;
-(id)__imItems;
-(id)messageForChatItemAtIndex:(unsigned long long)arg1 ;
-(IMMessageItem *)__imLastMessageItem;
-(IMMessage *)lastFinishedMessage;
-(IMMessage *)lastMessage;
-(IMMessage *)lastIncomingMessage;
-(IMMessage *)lastIncomingFinishedMessage;
-(void)enumerateMessagesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)messages;
-(id)indexesOfPartsOfMessage:(id)arg1 ;
-(id)indexesOfPartsOfMessageItem:(id)arg1 ;
-(void)encodeWithCSCoder:(id)arg1 ;
-(unsigned long long)cr_binaryInsertionIndexOfObject:(id)arg1 usingComparator:(/*^block*/id)arg2 match:(BOOL*)arg3 ;
-(id)cr_map:(/*^block*/id)arg1 ;
-(id)cr_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)cr_insertionSortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(NSArray *)mf_tail;
-(id)mf_foldLeftWithStart:(id)arg1 reduce:(/*^block*/id)arg2 ;
-(BOOL)mf_all:(/*^block*/id)arg1 ;
-(id)mf_uniquifyWithComparator:(/*^block*/id)arg1 ;
-(id)mf_reduce:(/*^block*/id)arg1 ;
-(id)mf_filter:(/*^block*/id)arg1 ;
-(id)mf_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)mf_map:(/*^block*/id)arg1 ;
-(id)mf_flatten;
-(id)mf_flatMap:(/*^block*/id)arg1 ;
-(BOOL)mf_any:(/*^block*/id)arg1 ;
-(unsigned long long)mf_countObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)mf_mapSelector:(SEL)arg1 ;
-(id)mf_groupBy:(/*^block*/id)arg1 ;
-(id)mf_partition:(/*^block*/id)arg1 ;
-(id)mf_subarraysOfSize:(unsigned long long)arg1 ;
-(id)mf_dictionaryWithMessagesSortedByStore;
-(unsigned long long)mf_indexWhereObjectWouldBeInserted:(id)arg1 usingSortFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(id)mf_objectEquivalentTo:(id)arg1 usingSortFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(unsigned long long)mf_indexOfObject:(id)arg1 usingComparator:(/*^block*/id)arg2 ;
-(unsigned long long)mf_indexWhereObjectWouldBeInserted:(id)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)mf_objectEquivalentTo:(id)arg1 usingComparator:(/*^block*/id)arg2 ;
-(unsigned long long)mf_indexOfObject:(id)arg1 usingSortFunction:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(id)mf_indicesOfStringsWithPrefix:(id)arg1 ;
-(id)mf_objectsPassingTest:(/*^block*/id)arg1 ;
-(void)mf_enumerateObjectsInBatchesOfSize:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)mf_uncommentedAddressList;
-(id)na_arrayWithResultsOfBlock:(/*^block*/id)arg1 ;
-(BOOL)na_all:(/*^block*/id)arg1 ;
-(id)na_dictionaryWithKeyGenerator:(/*^block*/id)arg1 ;
-(BOOL)na_any:(/*^block*/id)arg1 ;
-(id)na_map:(/*^block*/id)arg1 ;
-(id)na_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)na_filter:(/*^block*/id)arg1 ;
-(id)na_arrayByFlattening;
-(void)na_each:(/*^block*/id)arg1 ;
-(BOOL)ICSContainsArray:(id)arg1 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)_ICSParametersAppendingToString:(id)arg1 ;
-(void)_ICSStringsForPropertyValuesWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)setProgram:(id)arg1 withOtherSidePrograms:(id)arg2 selected:(BOOL)arg3 ;
-(id)programThatMatchesProgram:(id)arg1 ;
-(BOOL)vcp_hasLocalMovie:(BOOL)arg1 ;
-(id)vcp_thumbnailResource;
-(id)vcp_avAsset:(BOOL)arg1 ;
-(id)vcp_localPhotoResourcesSorted:(BOOL)arg1 ;
-(BOOL)vcp_hasLocalPhoto:(BOOL)arg1 ;
-(BOOL)vcp_isOriginalLocal;
-(id)vcp_originalResource;
-(id)vcp_resourceWithType:(unsigned long long)arg1 ;
-(id)vcp_localMovieResourcesSorted:(BOOL)arg1 ;
-(id)vcp_exif:(BOOL)arg1 ;
-(id)_pl_map:(/*^block*/id)arg1 ;
-(id)_pl_indexBy:(/*^block*/id)arg1 ;
-(id)_pl_flatMap:(/*^block*/id)arg1 ;
-(id)_pl_filter:(/*^block*/id)arg1 ;
-(id)_pl_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)_pl_groupBy:(/*^block*/id)arg1 ;
-(id)pl_shortDescription;
-(unsigned long long)pl_countOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(unsigned long long)pl_indexOfFirstObjectInRange:(NSRange)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)pl_indexOfLastObjectInRange:(NSRange)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)pl_arrayOfUniqueObjectsNotInOrderedSet:(id)arg1 ;
-(unsigned long long)pl_indexOfLastObjectPassingTest:(/*^block*/id)arg1 ;
-(unsigned long long)pl_indexOfFirstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)MSDSPAssetCollectionWithMasterFileHash:(id)arg1 ;
-(id)MSMutableDeepCopyWithZone:(NSZone*)arg1 ;
-(id)MSDeepCopyWithZone:(NSZone*)arg1 ;
-(id)MSMutableDeepCopy;
-(id)MSDeepCopy;
-(id)cplDeepCopy;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(id)initWithCPLArchiver:(id)arg1 ;
-(id)CKComponentsAndSubcomponentsJoinedByString:(id)arg1 ;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(id)specifierForID:(id)arg1 ;
-(unsigned long long)indexOfSpecifierWithID:(id)arg1 ;
-(id)arrayByPerformingSpecifierUpdatesUsingBlock:(/*^block*/id)arg1 ;
-(id)_FTFilteredArrayForAPS;
-(id)_IDsFromURIs;
-(id)_URIsFromIDs;
-(id)_cn_joinWithBlock:(/*^block*/id)arg1 ;
-(id)_cn_reduce:(/*^block*/id)arg1 initialValue:(id)arg2 ;
-(id)_cn_tail;
-(id)_cn_take:(unsigned long long)arg1 ;
-(void)_cn_zip:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_cn_each:(/*^block*/id)arg1 untilCancelled:(id)arg2 ;
-(void)_cn_each_reverse:(/*^block*/id)arg1 ;
-(id)_cn_join:(id)arg1 ;
-(id)_cn_partition:(/*^block*/id)arg1 ;
-(unsigned long long)_cn_indexOfFirstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)_cn_distinctObjects;
-(id)_cn_flatMap:(/*^block*/id)arg1 ;
-(id)_cn_reduce:(/*^block*/id)arg1 ;
-(id)_cn_skip:(unsigned long long)arg1 ;
-(id)_cn_skipLast:(unsigned long long)arg1 ;
-(id)_cn_sortedArrayUsingAuxiliarySortOrder:(id)arg1 transform:(/*^block*/id)arg2 ;
-(id)_cn_zip:(id)arg1 ;
-(id)_cn_safeSortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(BOOL)_cn_isNonEmpty;
-(id)_cn_indicesForObjects:(id)arg1 ;
-(id)_cn_groupBy:(/*^block*/id)arg1 ;
-(BOOL)_cn_isIdenticalToArray:(id)arg1 ;
-(BOOL)_cn_any:(/*^block*/id)arg1 ;
-(id)_cn_map:(/*^block*/id)arg1 ;
-(id)_cn_filter:(/*^block*/id)arg1 ;
-(BOOL)_cn_all:(/*^block*/id)arg1 ;
-(void)_cn_each:(/*^block*/id)arg1 ;
-(id)_cn_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)_cn_indexBy:(/*^block*/id)arg1 ;
-(id)_cn_flatten;
-(void)differencesFromArray:(id)arg1 removedIndexes:(id*)arg2 insertedIndexes:(id*)arg3 ;
-(void)differencesFromArray:(id)arg1 usingComparator:(/*^block*/id)arg2 removedIndexes:(id*)arg3 insertedIndexes:(id*)arg4 ;
-(id)__IMStripPotentialTokenURIs;
-(id)__imDeepCopy;
-(BOOL)containsObject:(id)arg1 matchingComparison:(SEL)arg2 ;
-(void)__imForEach:(/*^block*/id)arg1 ;
-(BOOL)containsObjectIdenticalTo:(id)arg1 ;
-(id)__imSetFromArray;
-(BOOL)__imIsMutable;
-(BOOL)_hasSameMembers:(id)arg1 ;
-(id)__imArrayByApplyingBlock:(/*^block*/id)arg1 ;
-(id)_copyForEnumerating;
-(id)__imFirstObject;
-(id)__imArrayByFilteringWithBlock:(/*^block*/id)arg1 ;
-(id)__imArrayByApplyingBlock:(/*^block*/id)arg1 filter:(/*^block*/id)arg2 ;
-(long long)indexOfObject:(id)arg1 matchingComparison:(SEL)arg2 ;
-(id)parsec_mapObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)parsec_mapAndFilterObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)parsec_mapAndFilterObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)parsec_numberAtIndex:(unsigned long long)arg1 ;
-(id)parsec_filterObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)sf_asCardSections:(id)arg1 ;
-(id)axUniqueArrayWithPredicate:(/*^block*/id)arg1 ;
-(BOOL)axIsEqualToOrderedArray:(id)arg1 withPredicate:(/*^block*/id)arg2 ;
-(id)axMapObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)axFilterObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)axSafeObjectAtIndex:(unsigned long long)arg1 ;
-(AXEventPathInfoRepresentation *)firstPath;
-(id)af_arrayByMappingWithBlock:(/*^block*/id)arg1 ;
-(id)_scrambledKeywordsAndAddToSet:(id)arg1 ;
-(id)_nextKeywordUsingCursors:(CFDictionaryRef)arg1 ;
-(id)resolutionResultDataForIntent:(id)arg1 intentSlotDescription:(id)arg2 ;
-(id)_escapedComponentsJoinedByString:(id)arg1 forLocale:(id)arg2 ;
-(id)_ui_onlyObject;
-(id)_ui_firstObject;
-(id)_filteredArrayOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)ui_arrayByRemovingLastObjectEqualTo:(id)arg1 ;
-(id)_initWithObjectsFromArray:(id)arg1 range:(NSRange)arg2 ;
-(void)_makeObjectsPerformSelector:(SEL)arg1 object:(id)arg2 range:(NSRange)arg3 ;
-(id)_nextToLastObject;
-(CGSize)_legacy_drawComponentsJoinedByString:(id)arg1 atPoint:(CGPoint*)arg2 forWidth:(double)arg3 withFont:(id)arg4 lineBreakMode:(long long)arg5 ;
-(void)cl_json_serializeValue:(value_ostream*)arg1 ;
-(NSDictionary *)bw_builtInMicRouteDictionary;
-(id)pickableRouteWithUID:(id)arg1 ;
-(id)_web_lowercaseStrings;
-(id)_geo_bestLocalizedString;
-(id)_geo_bestLocalizedStringValue;
-(void)cl_json_serializeValue:(value_ostream*)arg1 ;
-(BOOL)MCSCWriteToFile:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)MCSCWriteToFile:(id)arg1 atomically:(BOOL)arg2 mode:(unsigned short)arg3 error:(id*)arg4 ;
-(BOOL)MCSCWriteToURL:(id)arg1 atomically:(BOOL)arg2 mode:(unsigned short)arg3 error:(id*)arg4 ;
-(BOOL)MCSCWriteToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(BOOL)MCSCWriteToURL:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLType;
-(id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator*)arg4 ;
-(id)CA_addValue:(id)arg1 multipliedBy:(int)arg2 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(id)_arrayByFilteringCandidatesForNonExtendedView;
-(void)bs_each:(/*^block*/id)arg1 ;
-(BOOL)bs_containsObjectPassingTest:(/*^block*/id)arg1 ;
-(id)bs_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)bs_firstObjectOfClass:(Class)arg1 ;
-(id)bs_differenceWithArray:(id)arg1 ;
-(void)bs_enumerateObjectsOfClass:(Class)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)bs_firstObjectOfClassNamed:(id)arg1 ;
-(id)bs_objectsOfClass:(Class)arg1 ;
-(id)bs_reverse;
-(id)bs_flattenedDifferenceWithArray:(id)arg1 ;
-(id)bs_map:(/*^block*/id)arg1 ;
-(id)bs_flatten;
-(id)bs_mapNoNulls:(/*^block*/id)arg1 ;
-(id)bs_filter:(/*^block*/id)arg1 ;
-(id)bs_first:(unsigned long long)arg1 ;
-(id)un_nonEmptyCopy;
-(id)un_safeArrayContainingClass:(Class)arg1 ;
-(id)un_filter:(/*^block*/id)arg1 ;
-(id)un_map:(/*^block*/id)arg1 ;
-(void)un_each:(/*^block*/id)arg1 ;
-(id)un_safeArrayContainingClasses:(id)arg1 ;
-(id)_sa_mappedArrayWithBlock:(/*^block*/id)arg1 ;
-(id)cutFirstObject;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)filteredArrayUsingPredicate:(id)arg1 ;
-(id)sortedArrayUsingDescriptors:(id)arg1 ;
-(id)stringsByAppendingPathComponent:(id)arg1 ;
-(id)pathsMatchingExtensions:(id)arg1 ;
-(void)addObserver:(id)arg1 toObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void*)arg5 ;
-(void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2 ;
-(void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 ;
-(BOOL)_validateValue:(inout id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id*)arg4 ;
-(id)_sumForKeyPath:(id)arg1 ;
-(id)_unionOfArraysForKeyPath:(id)arg1 ;
-(id)_unionOfObjectsForKeyPath:(id)arg1 ;
-(id)_avgForKeyPath:(id)arg1 ;
-(id)_countForKeyPath:(id)arg1 ;
-(id)_maxForKeyPath:(id)arg1 ;
-(id)_minForKeyPath:(id)arg1 ;
-(id)_unionOfSetsForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfArraysForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfObjectsForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfSetsForKeyPath:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 hint:(id)arg3 ;
-(id)_stringToWrite;
-(id)sortedArrayHint;
-(id)sortedArrayUsingSelector:(SEL)arg1 hint:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)objectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)sortedArrayFromRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
-(BOOL)containsObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned long long)countForObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObject:(id)arg1 ;
-(id)indexesOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(id)indexesOfObjectIdenticalTo:(id)arg1 ;
-(id)objectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)objectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)reversedArray;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(id)arrayByExcludingToObjectsInArray:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(BOOL)containsObject:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned long long)_cfTypeID;
-(id)objectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS25*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(id)firstObject;
-(id)lastObject;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(id)componentsJoinedByString:(id)arg1 ;
-(id)arrayByAddingObjectsFromArray:(id)arg1 ;
-(id)sortedArrayUsingSelector:(SEL)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)initWithObjects:(id)arg1 ;
-(id)reverseObjectEnumerator;
-(id)allObjects;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 ;
-(id)objectEnumerator;
-(unsigned long long)indexOfObjectPassingTest:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)indexesOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)objectsPassingTest:(/*^block*/id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)arrayByAddingObject:(id)arg1 ;
-(BOOL)isEqualToArray:(id)arg1 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 inSortedRange:(NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(/*^block*/id)arg4 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)sortedArrayUsingFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(id)initWithArray:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)arrayByExcludingObjectsInArray:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(unsigned long long)countForObject:(id)arg1 ;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)initWithSet:(id)arg1 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)firstObjectCommonWithArray:(id)arg1 ;
-(BOOL)isNSArray__;
-(unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)initWithOrderedSet:(id)arg1 ;
-(BOOL)containsObjectIdenticalTo:(id)arg1 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)arrayByApplyingSelector:(SEL)arg1 ;
-(id)objectPassingTest:(/*^block*/id)arg1 ;
-(id)initWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)getObjects:(id*)arg1 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
@end

