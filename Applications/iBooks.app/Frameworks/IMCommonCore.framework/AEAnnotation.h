/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCommonCore/IMCommonCore-Structs.h>
#import <CoreData/NSManagedObject.h>
#import <IMCommonCore/AEAnnotation.h>
@class NSString, NSDate, NSData;


@protocol AEAnnotation <NSObject>
@property (nonatomic,readonly) int annotationType; 
@property (nonatomic,retain,readonly) NSString * annotationLocation; 
@property (nonatomic,retain,readonly) NSString * annotationNote; 
@property (nonatomic,retain,readonly) NSString * annotationRepresentativeText; 
@property (nonatomic,retain,readonly) NSString * annotationSelectedText; 
@property (nonatomic,retain,readonly) NSString * annotationUuid; 
@property (nonatomic,retain,readonly) NSDate * annotationCreationDate; 
@property (nonatomic,retain,readonly) NSDate * annotationModificationDate; 
@property (nonatomic,readonly) int annotationStyle; 
@property (nonatomic,readonly) BOOL annotationIsUnderline; 
@property (nonatomic,retain,readonly) NSData * annotationUserData; 
@property (getter=isAnnotationDeleted,nonatomic,readonly) BOOL annotationDeleted; 
@property (nonatomic,retain,readonly) NSString * chapterTitle; 
@property (nonatomic,retain,readonly) NSString * physicalPageNumber; 
@property (nonatomic,readonly) NSRange annotationSelectedTextRange; 
@property (nonatomic,readonly) BOOL annotationHasNote; 
@property (nonatomic,readonly) float readingProgressHighWaterMark; 
@property (nonatomic,readonly) float readingProgress; 
@optional
-(BOOL)annotationIsUnderline;
-(float)readingProgressHighWaterMark;
-(NSData *)annotationUserData;
-(BOOL)isAnnotationDeleted;
-(NSString *)chapterTitle;
-(NSString *)physicalPageNumber;
-(NSRange)annotationSelectedTextRange;
-(BOOL)annotationHasNote;
-(float)readingProgress;

@required
-(NSString *)annotationNote;
-(NSString *)annotationLocation;
-(NSString *)annotationRepresentativeText;
-(NSString *)annotationSelectedText;
-(NSString *)annotationUuid;
-(NSDate *)annotationCreationDate;
-(NSDate *)annotationModificationDate;
-(int)annotationStyle;
-(int)annotationType;

@end


@class NSString, NSDate, NSData, NSNumber, AEAnnotationManagedObjectContext;

@interface AEAnnotation : NSManagedObject <AEAnnotation>

@property (nonatomic,retain) NSString * annotationAssetID; 
@property (nonatomic,retain) NSString * annotationCreatorIdentifier; 
@property (nonatomic,retain) NSString * annotationUuid; 
@property (assign,nonatomic) int annotationStyle; 
@property (assign,nonatomic) int annotationType; 
@property (nonatomic,retain) NSString * annotationLocation; 
@property (nonatomic,retain) NSString * annotationNote; 
@property (nonatomic,readonly) BOOL annotationHasNote; 
@property (nonatomic,retain) NSString * annotationRepresentativeText; 
@property (nonatomic,retain) NSString * annotationSelectedText; 
@property (nonatomic,retain) NSDate * annotationCreationDate; 
@property (nonatomic,retain) NSDate * annotationModificationDate; 
@property (assign,getter=isAnnotationDeleted,nonatomic) BOOL annotationDeleted; 
@property (assign,nonatomic) BOOL annotationIsUnderline; 
@property (nonatomic,retain) NSNumber * plLocationRangeStart; 
@property (nonatomic,retain) NSNumber * plLocationRangeEnd; 
@property (nonatomic,retain) NSNumber * plAbsolutePhysicalLocation; 
@property (nonatomic,retain) NSString * plStorageUUID; 
@property (nonatomic,retain) NSData * plUserData; 
@property (nonatomic,retain) NSString * physicalPageNumber; 
@property (nonatomic,retain) NSString * annotationVersion; 
@property (nonatomic,retain) NSString * assetVersion; 
@property (nonatomic,retain) NSString * attachments; 
@property (nonatomic,retain) NSString * chapterTitle; 
@property (nonatomic,retain) NSDate * userModificationDate; 
@property (assign,nonatomic) NSRange annotationSelectedTextRange; 
@property (assign,nonatomic) float readingProgressHighWaterMark; 
@property (assign,nonatomic) float readingProgress; 
@property (assign,nonatomic) BOOL spineIndexUpdated; 
@property (nonatomic,retain) NSString * futureProofing1; 
@property (nonatomic,retain) NSString * futureProofing2; 
@property (nonatomic,retain) NSString * futureProofing3; 
@property (nonatomic,retain) NSString * futureProofing4; 
@property (nonatomic,retain) NSString * futureProofing5; 
@property (nonatomic,retain) NSString * futureProofing6; 
@property (nonatomic,retain) NSString * futureProofing7; 
@property (nonatomic,retain) NSString * futureProofing8; 
@property (nonatomic,retain) NSString * futureProofing9; 
@property (nonatomic,retain) NSString * futureProofing10; 
@property (nonatomic,retain) NSString * futureProofing11; 
@property (nonatomic,retain) NSString * futureProofing12; 
@property (nonatomic,readonly) AEAnnotationManagedObjectContext * managedObjectContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSData * annotationUserData; 
+(id)userAnnotationTypeValues;
+(id)predicateForAnnotationWithUUID:(id)arg1 assetID:(id)arg2 ;
+(id)annotationsForPredicate:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)predicateForAnnotationsWithAssetID:(id)arg1 includingDeleted:(BOOL)arg2 ;
+(id)predicateForAnnotationsWithAssetIDInList:(id)arg1 includingDeleted:(BOOL)arg2 ;
+(id)predicateForAnnotationsWithUUIDInList:(id)arg1 assetID:(id)arg2 ;
+(id)predicateForGlobalAnnotationWithAssetID:(id)arg1 ;
+(id)maxModificationDateColumnName;
+(id)maxExpressionDescriptionForProperty:(id)arg1 expressionName:(id)arg2 ;
+(id)maxModificationDateExpressionDescription;
+(id)dictionaryResultsForAssetsWithPredicate:(id)arg1 properties:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)predicateForAllAnnotationsIncludingDeleted:(BOOL)arg1 ;
+(id)predicateForUserAnnotationsWithAssetID:(id)arg1 includingDeleted:(BOOL)arg2 ;
+(id)predicateForUserAnnotationsWithAssetIDInList:(id)arg1 includingDeleted:(BOOL)arg2 ;
+(id)predicateForPageBookmarksWithAssetID:(id)arg1 ;
+(id)predicateForRangeAnnotationsWithAssetID:(id)arg1 ;
+(id)predicateForAnnotationsWithLocation:(id)arg1 includingDeleted:(BOOL)arg2 ;
+(id)predicateForAnnotationsWithUserModificationDate;
+(id)predicateForGlobalAnnotationsMissingReadingProgressHighWaterMark;
+(id)annotationWithUUID:(id)arg1 assetID:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)annotationsForAssetID:(id)arg1 includingDeleted:(BOOL)arg2 inManagedObjectContext:(id)arg3 ;
+(id)annotationsWithAssetIDInList:(id)arg1 includingDeleted:(BOOL)arg2 inManagedObjectContext:(id)arg3 ;
+(id)annotationsWithUUIDInList:(id)arg1 assetID:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)globalAnnotationForAssetID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)maxUserModificationDateExpressionDescription;
+(id)maxModificationDateForAssetsWithPredicate:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)maxAnnotationVersionForAssetsWithPredicate:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)maxModificationDateForAllAnnotationsInManagedObjectContext:(id)arg1 ;
+(id)insertAnnotationWithAssetID:(id)arg1 creatorIdentifier:(id)arg2 annotationUuid:(id)arg3 intoManagedObjectContext:(id)arg4 ;
+(id)optimizedSelectedTextForSerialization:(id)arg1 ;
+(id)optimizedRepresentativeTextForSerialization:(id)arg1 selectedText:(id)arg2 ;
+(id)globalAnnotationTypeValues;
+(id)annotatedAttributedStringForAnnotation:(id)arg1 withPossibleLength:(unsigned long long)arg2 ;
+(BOOL)isSelectedTextRepeatedInRepresentativeTextForAnnotation:(id)arg1 ;
+(id)clauseForSelectedTextForAnnotation:(id)arg1 inSentence:(id)arg2 possibleLength:(unsigned long long)arg3 highlightedRange:(NSRange*)arg4 ;
+(id)wordsForSelectedTextForAnnotation:(id)arg1 inSentence:(id)arg2 possibleLength:(unsigned long long)arg3 highlightedRange:(NSRange*)arg4 ;
+(id)lettersForSelectedTextForAnnotation:(id)arg1 inSentence:(id)arg2 possibleLength:(unsigned long long)arg3 highlightedRange:(NSRange*)arg4 ;
+(id)annotatedAttributedStringWithString:(id)arg1 annotationStyle:(int)arg2 range:(NSRange)arg3 ;
+(id)contextAwareSelectedTextFromAnnotation:(id)arg1 ;
+(id)lastModificationFromDictionaryRepresentation:(id)arg1 ;
+(id)annotationCreatorIdentifierFromDictionaryRepresentation:(id)arg1 ;
+(id)annotationAssetIDFromDictionaryRepresentation:(id)arg1 ;
+(BOOL)isValidForDeserialization:(id)arg1 ;
+(int)annotationTypeFromDictionaryRepresentation:(id)arg1 ;
+(id)annotationUuidFromDictionaryRepresentation:(id)arg1 ;
+(BOOL)mergeAnnotation:(id)arg1 withServerAnnotation:(id)arg2 moc:(id)arg3 ;
+(id)requiredKeysForDictionaryRepresentation;
+(id)dateKeysForDictionaryRepresentation;
+(id)optionalKeysForDictionaryRepresentation;
+(id)dictionaryResultsForAnnotationsWithPredicate:(id)arg1 properties:(id)arg2 propertyNamesMap:(id)arg3 inManagedObjectContext:(id)arg4 ;
+(id)_dictionaryRepresentationForAnnotationsMatchingPredicate:(id)arg1 map:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(BOOL)isBKBookmarkCreatorIdentifier:(id)arg1 ;
+(id)deletedFlagFromDictionaryRepresentation:(id)arg1 ;
+(id)bookmarkTypeFromAnnotationType:(int)arg1 ;
+(id)bookmarkColorFromAnnotationStyle:(int)arg1 ;
+(int)annotationStyleFromBookmarkColor:(id)arg1 ;
+(int)annotationTypeFromBookmarkType:(id)arg1 ;
+(BOOL)mergeServerAnnotations:(id)arg1 forAssetID:(id)arg2 intoMoc:(id)arg3 ;
+(id)dictionaryRepresentationsForAnnotations:(id)arg1 ;
+(id)modernDictionaryRepresentationForAnnotationsMatchingPredicate:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)compatibleDictionaryRepresentationForAnnotationsMatchingPredicate:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)aeAnnotationDictionaryRepresentationsForAnnotations:(id)arg1 ;
+(id)fetchRequest;
-(void)setUserModificationDate:(NSDate *)arg1 ;
-(BOOL)annotationIsUnderline;
-(void)updateAllModificationDates;
-(BOOL)annotationDeleted;
-(void)updateSystemModificationDate;
-(NSString *)annotationVersion;
-(void)setAnnotationVersion:(NSString *)arg1 ;
-(void)setReadingProgress:(float)arg1 ;
-(BOOL)hasReadingProgressHighWaterMark;
-(float)readingProgressHighWaterMark;
-(void)setReadingProgressHighWaterMark:(float)arg1 ;
-(BOOL)isAnnotationDeleted;
-(NSString *)chapterTitle;
-(NSString *)physicalPageNumber;
-(NSRange)annotationSelectedTextRange;
-(BOOL)annotationHasNote;
-(float)readingProgress;
-(void)updateUserModificationDate;
-(void)setAnnotationStyle:(int)arg1 ;
-(void)setAnnotationType:(int)arg1 ;
-(void)setAnnotationCreationDate:(NSDate *)arg1 ;
-(void)setAnnotationDeleted:(BOOL)arg1 ;
-(void)setAnnotationIsUnderline:(BOOL)arg1 ;
-(void)setAnnotationLocation:(NSString *)arg1 ;
-(void)setAnnotationNote:(NSString *)arg1 ;
-(void)setAnnotationRepresentativeText:(NSString *)arg1 ;
-(void)setAnnotationSelectedText:(NSString *)arg1 ;
-(void)setPlLocationRangeStart:(NSNumber *)arg1 ;
-(void)setPlLocationRangeEnd:(NSNumber *)arg1 ;
-(void)setPlAbsolutePhysicalLocation:(NSNumber *)arg1 ;
-(void)setPlStorageUUID:(NSString *)arg1 ;
-(void)setPlUserData:(NSData *)arg1 ;
-(void)setPhysicalPageNumber:(NSString *)arg1 ;
-(void)setChapterTitle:(NSString *)arg1 ;
-(NSDate *)userModificationDate;
-(void)setAnnotationSelectedTextRange:(NSRange)arg1 ;
-(BOOL)spineIndexUpdated;
-(void)setSpineIndexUpdated:(BOOL)arg1 ;
-(void)setFutureProofing1:(NSString *)arg1 ;
-(void)setFutureProofing2:(NSString *)arg1 ;
-(void)setFutureProofing3:(NSString *)arg1 ;
-(void)setFutureProofing4:(NSString *)arg1 ;
-(void)setFutureProofing5:(NSString *)arg1 ;
-(void)setFutureProofing6:(NSString *)arg1 ;
-(void)setFutureProofing7:(NSString *)arg1 ;
-(void)setFutureProofing8:(NSString *)arg1 ;
-(void)setFutureProofing9:(NSString *)arg1 ;
-(void)setFutureProofing10:(NSString *)arg1 ;
-(void)setFutureProofing11:(NSString *)arg1 ;
-(void)setFutureProofing12:(NSString *)arg1 ;
-(BOOL)bumpAnnotationVersionToMinimumVersion:(id)arg1 ;
-(BOOL)updateReadingProgressAndBumpHighWaterMarkToProgress:(float)arg1 ;
-(BOOL)hasReadingProgress;
-(id)annotatedAttributedString;
-(void)deserializeFromDictionary:(id)arg1 trustedSource:(BOOL)arg2 ;
-(id)doesSerializeAs_iBooks;
-(id)aeAnnotationDictionaryRepresentation;
-(BOOL)isValidForSerialization;
-(void)iBooks_deserializeFromDictionary:(id)arg1 trustedSource:(BOOL)arg2 ;
-(void)aeAnnotationDeserializeFromDictionary:(id)arg1 trustedSource:(BOOL)arg2 ;
-(id)validateAnnotationUuid;
-(id)bkBookmarkDeserializeLocationDataFromDictionary:(id)arg1 trustedSource:(BOOL)arg2 ;
-(BOOL)usesLegacySerializationMethod;
-(id)iBooks_dictionaryRepresentation;
-(id)dictionaryRepresentation;
-(NSString *)attachments;
-(void)setAttachments:(NSString *)arg1 ;
-(AEAnnotationManagedObjectContext *)managedObjectContext;
-(void)awakeFromInsert;
-(int)annotationStyle;
-(void)setAssetVersion:(NSString *)arg1 ;
-(NSString *)assetVersion;
-(int)annotationType;
@end

