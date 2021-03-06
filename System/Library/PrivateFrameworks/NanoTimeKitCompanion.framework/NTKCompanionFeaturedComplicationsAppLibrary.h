/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NTKCompanionAppLibraryObserver.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSMutableArray, NTKCompanionAppLibrary, NSObject, NSString;

@interface NTKCompanionFeaturedComplicationsAppLibrary : NSObject <NTKCompanionAppLibraryObserver> {

	NSHashTable* _changeObservers;
	NSMutableArray* _topGalleryFeaturedComplicationApps;
	NSMutableArray* _allGalleryFeaturedComplicationApps;
	NTKCompanionAppLibrary* _appLibrary;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _observerCallbackQueue;

}

@property (nonatomic,retain) NSHashTable * changeObservers;                                    //@synthesize changeObservers=_changeObservers - In the implementation block
@property (nonatomic,retain) NSMutableArray * topGalleryFeaturedComplicationApps;              //@synthesize topGalleryFeaturedComplicationApps=_topGalleryFeaturedComplicationApps - In the implementation block
@property (nonatomic,retain) NSMutableArray * allGalleryFeaturedComplicationApps;              //@synthesize allGalleryFeaturedComplicationApps=_allGalleryFeaturedComplicationApps - In the implementation block
@property (nonatomic,retain) NTKCompanionAppLibrary * appLibrary;                              //@synthesize appLibrary=_appLibrary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                       //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> observerCallbackQueue;               //@synthesize observerCallbackQueue=_observerCallbackQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAppLibrary;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)appLibrary:(id)arg1 didAddApp:(id)arg2 ;
-(void)appLibrary:(id)arg1 didUpdateApp:(id)arg2 ;
-(void)appLibrary:(id)arg1 didRemoveApp:(id)arg2 ;
-(void)appLibrary:(id)arg1 didUpdateAppIcon:(id)arg2 ;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setObserverCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setChangeObservers:(NSHashTable *)arg1 ;
-(void)_notifyAppUpdated:(id)arg1 ;
-(void)_notifyAppIconUpdated:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)_notifyAppRemoved:(id)arg1 ;
-(void)_notifyAppAdded:(id)arg1 ;
-(NSHashTable *)changeObservers;
-(NSObject*<OS_dispatch_queue>)observerCallbackQueue;
-(void)_updateAllGalleryFeaturedComplicationApps;
-(id)_thirdPartyAppsWithComplicationBundle;
-(NSMutableArray *)topGalleryFeaturedComplicationApps;
-(NSMutableArray *)allGalleryFeaturedComplicationApps;
-(void)setTopGalleryFeaturedComplicationApps:(NSMutableArray *)arg1 ;
-(void)setAllGalleryFeaturedComplicationApps:(NSMutableArray *)arg1 ;
-(NTKCompanionAppLibrary *)appLibrary;
-(void)setAppLibrary:(NTKCompanionAppLibrary *)arg1 ;
@end

