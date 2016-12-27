/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/WBSURLCompletionDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, WBSURLCompletionDatabase, NSString;

@interface WBSURLCompletionHistorySnapshot : NSObject <WBSURLCompletionDataSource> {

	NSObject*<OS_dispatch_queue> _completionDatabaseQueue;
	WBSURLCompletionDatabase* _completionDatabase;
	unique_ptr<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem> > >, std::__1::default_delete<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem> > > > >* _items;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithItems:(unique_ptr<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem> > >, std::__1::default_delete<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem> > > > >*)arg1 ;
-(void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2 ;
-(void)enumerateMatchDataForTypedStringHint:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)_matchSnapshotForCompletionMatch:(id)arg1 ;
@end

