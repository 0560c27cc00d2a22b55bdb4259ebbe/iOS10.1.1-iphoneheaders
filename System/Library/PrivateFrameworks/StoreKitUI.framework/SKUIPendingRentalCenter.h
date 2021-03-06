/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface SKUIPendingRentalCenter : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _mutableRentals;
	BOOL _userLoggedIn;
	BOOL _loadingRentals;

}
+(id)_sharedDateFormatter;
-(id)init;
-(void)dealloc;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(id)rentalInformationForMediaItem:(id)arg1 ;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
-(void)_loadPendingRentals;
-(void)_fetchFromRentalBag;
-(void)_processFetchedDownloads:(id)arg1 ;
@end

