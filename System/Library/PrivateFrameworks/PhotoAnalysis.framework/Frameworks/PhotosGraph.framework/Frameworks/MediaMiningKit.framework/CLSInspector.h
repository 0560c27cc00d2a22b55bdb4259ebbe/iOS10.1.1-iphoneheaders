/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PIPipeline, NSMutableArray, NSArray, NSMutableDictionary;

@interface CLSInspector : NSObject {

	PIPipeline* _pipeline;
	NSMutableArray* _performingInvestigations;
	NSArray* _profileClasses;
	NSMutableDictionary* _profileClassesByIdentifier;
	NSArray* _informantClasses;
	NSMutableDictionary* _informantClassesByIdentifier;
	NSMutableDictionary* _informantClassesByFamilyIdentifier;

}
+(void)invalidateSharedPersistentCaches;
+(void)invalidateSharedTransientCaches;
+(id)sharedInspector;
+(void)invalidateAllSharedCaches;
+(void)requestLocationsForRegions:(id)arg1 cacheTestObject:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
+(void)invalidateLocationCache;
+(void)cacheLocationsForRegions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)waitUntilFinished;
-(id)init;
-(Class)informantClassForIdentifier:(id)arg1 ;
-(id)informantClassesForFamilyIdentifier:(id)arg1 ;
-(BOOL)performInvestigation:(id)arg1 withPriority:(unsigned long long)arg2 andOptions:(unsigned long long)arg3 ;
-(Class)profileClassForIdentifier:(id)arg1 ;
-(id)informantClassesForAnyIdentifier:(id)arg1 ;
-(id)informantIdentifiersForAnyIdentifier:(id)arg1 ;
-(id)informantIdentifierForHash:(unsigned long long)arg1 ;
-(id)profileIdentifierForHash:(unsigned long long)arg1 ;
-(id)performingInvestigations;
-(BOOL)performInvestigation:(id)arg1 ;
-(BOOL)performInvestigation:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)cancelAllInvestigations;
@end

