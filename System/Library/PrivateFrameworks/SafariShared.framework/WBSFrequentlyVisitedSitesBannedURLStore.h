/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject, NSMutableDictionary;

@interface WBSFrequentlyVisitedSitesBannedURLStore : NSObject {

	NSURL* _storeURL;
	NSObject*<OS_dispatch_queue> _storeQueue;
	NSMutableDictionary* _bannedURLStringsToEntriesMap;

}
-(void)dealloc;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)_historyWasCleared:(id)arg1 ;
-(id)_bannedURLStringsToEntriesMap;
-(void)_writeOutBannedURLStringsAsynchronously;
-(void)removeAllURLStrings;
-(void)removeURLStrings:(id)arg1 ;
-(id)initWithStoreURL:(id)arg1 history:(id)arg2 ;
-(BOOL)containsURLString:(id)arg1 ;
-(void)addURLString:(id)arg1 ;
@end

