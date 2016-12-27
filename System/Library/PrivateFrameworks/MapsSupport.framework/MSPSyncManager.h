/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SYServiceDelegate.h>
#import <libobjc.A.dylib/SYSessionDelegate.h>

@protocol OS_dispatch_queue;
@class SYService, NSObject, NSMutableArray, NSMutableDictionary, NSString;

@interface MSPSyncManager : NSObject <SYServiceDelegate, SYSessionDelegate> {

	SYService* _service;
	NSObject*<OS_dispatch_queue> _saveQueue;
	NSMutableArray* _bookmarks;
	NSMutableDictionary* _bookmarksMap;
	NSMutableArray* _bookmarksForDisplay;
	NSMutableArray* _pins;
	NSMutableDictionary* _pinsMap;
	NSMutableArray* _history;
	NSMutableDictionary* _historyMap;
	BOOL _resetSyncRequested;
	NSMutableArray* _pendingSyncItems;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_bookmarkIsDisplayable:(id)arg1 ;
-(id)init;
-(void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)completedSync;
-(BOOL)service:(id)arg1 startSession:(id)arg2 error:(id*)arg3 ;
-(void)serviceDidPairDevice:(id)arg1 ;
-(void)setNeedsFullSync;
-(long long)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)syncSession:(id)arg1 didEndWithError:(id)arg2 ;
-(BOOL)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2 ;
-(void)_notifyObservers;
-(void)setDroppedPin:(id)arg1 ;
-(void)_resumeSyncService;
-(void)_setHasChangesAvailable;
-(void)_applyAddItem:(id)arg1 ;
-(void)_applyUpdateItem:(id)arg1 ;
-(void)_applyDeleteItem:(id)arg1 ;
-(void)_findDisplayableBookmarks;
-(void)_updateFromDisk;
-(id)_wrapBookmark:(id)arg1 changeType:(long long)arg2 ;
-(id)_wrapPin:(id)arg1 changeType:(long long)arg2 ;
-(id)_wrapHistoryItem:(id)arg1 changeType:(long long)arg2 ;
-(void)_addBookmark:(id)arg1 ;
-(void)_addPin:(id)arg1 ;
-(void)_addHistoryItem:(id)arg1 ;
-(void)_updateBookmark:(id)arg1 ;
-(void)_updatePin:(id)arg1 ;
-(void)_updateHistoryItem:(id)arg1 ;
-(void)_removeBookmark:(id)arg1 ;
-(void)_removePin:(id)arg1 ;
-(void)_removeHistoryItem:(id)arg1 ;
-(id)displayableBookmarks;
-(id)pins;
-(void)updateHistoryItem:(id)arg1 ;
-(void)notifyObservers;
-(id)readBookmarks;
-(id)readPins;
-(id)readHistory;
-(void)writeBookmarks:(id)arg1 ;
-(void)writePins:(id)arg1 ;
-(void)writeHistory:(id)arg1 ;
-(void)completedPreparingSync;
-(id)bookmarks;
-(id)history;
@end

