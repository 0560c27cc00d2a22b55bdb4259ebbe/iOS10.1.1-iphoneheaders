/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCommonCore/IMUbiquitousDataProvider.h>

@protocol AEAnnotationProviderDelegate;
@class NSMutableSet;

@interface AEAnnotationProvider : IMUbiquitousDataProvider {

	NSMutableSet* _acknowledgedMismatchingAssetIDs;
	id<AEAnnotationProviderDelegate> _delegate;

}

@property (nonatomic,retain) NSMutableSet * acknowledgedMismatchingAssetIDs;              //@synthesize acknowledgedMismatchingAssetIDs=_acknowledgedMismatchingAssetIDs - In the implementation block
@property (assign,nonatomic) id<AEAnnotationProviderDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
+(id)managedObjectModelName;
+(id)managedObjectModelBundle;
+(id)cacheKeyForService:(id)arg1 ;
+(id)ubiquityPeerIDOverride;
+(id)storeName;
+(id)sharedInstance;
-(id)initWithUbiquityEnabled:(BOOL)arg1 ;
-(void)migrateFromPersistentStoreCoordinator:(id)arg1 toPersistentStoreCoordinator:(id)arg2 ;
-(void)migrateFromPersistentStoreCoordinator:(id)arg1 toPersistentStoreCoordinator:(id)arg2 withPredicate:(id)arg3 ;
-(NSMutableSet *)acknowledgedMismatchingAssetIDs;
-(id)cachedMaxModificationTimeIntervalSince1970ForService:(id)arg1 ;
-(id)cachedMaxModificationDateForService:(id)arg1 ;
-(void)cacheMaxModificationDate:(id)arg1 forService:(id)arg2 ;
-(id)currentMaxModificationDateInManagedObjectContext:(id)arg1 ;
-(id)newManagedObjectContextWithConcurrencyType:(unsigned long long)arg1 ;
-(BOOL)iCloudEnabledInUserDefaults;
-(id)refreshAnnotations:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)deleteAnnotation:(id)arg1 ;
-(BOOL)exportAnnotationsMatchingPredicate:(id)arg1 toURL:(id)arg2 withType:(int)arg3 error:(id*)arg4 ;
-(BOOL)acknowledgeMergingAnnotationsWithAssetVersionMismatch:(id)arg1 assetID:(id)arg2 ;
-(id)cachedMaxModificationDate;
-(void)cacheMaxModificationDate:(id)arg1 ;
-(id)currentMaxModificationDate;
-(void)upgradeAnnotationsIfNeeded;
-(void)setAcknowledgedMismatchingAssetIDs:(NSMutableSet *)arg1 ;
-(id)init;
-(void)setDelegate:(id<AEAnnotationProviderDelegate>)arg1 ;
-(id<AEAnnotationProviderDelegate>)delegate;
-(id)newManagedObjectContext;
@end

