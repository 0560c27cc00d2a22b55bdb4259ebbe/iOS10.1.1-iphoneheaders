/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHObject.h>

@class NSDate, NSString;

@interface PHCollection : PHObject {

	BOOL _customSortAscending;
	int _customSortKey;
	unsigned long long _estimatedPhotosCount;
	unsigned long long _estimatedVideosCount;
	NSDate* _creationDate;
	NSString* _localizedSubtitle;

}

@property (nonatomic,readonly) BOOL customSortAscending;                             //@synthesize customSortAscending=_customSortAscending - In the implementation block
@property (nonatomic,readonly) int customSortKey;                                    //@synthesize customSortKey=_customSortKey - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedPhotosCount;              //@synthesize estimatedPhotosCount=_estimatedPhotosCount - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedVideosCount;              //@synthesize estimatedVideosCount=_estimatedVideosCount - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSString * localizedSubtitle;                         //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (nonatomic,readonly) BOOL canContainAssets; 
@property (nonatomic,readonly) BOOL canContainCollections; 
@property (nonatomic,readonly) NSString * localizedTitle; 
+(id)managedEntityName;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2 ;
+(id)entityKeyForPropertyKey:(id)arg1 ;
+(id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(BOOL)managedObjectSupportsTrashedState;
+(id)fetchTopLevelUserCollectionsWithOptions:(id)arg1 ;
+(id)fetchType;
+(id)fetchCollectionsInCollectionList:(id)arg1 options:(id)arg2 ;
+(id)fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
-(id)description;
-(NSString *)localizedTitle;
-(NSString *)localizedSubtitle;
-(BOOL)customSortAscending;
-(int)customSortKey;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(unsigned long long)estimatedPhotosCount;
-(unsigned long long)estimatedVideosCount;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(NSDate *)creationDate;
-(BOOL)canContainCollections;
-(BOOL)canContainAssets;
-(unsigned long long)collectionFixedOrderPriority;
-(BOOL)collectionHasFixedOrder;
@end

