/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSArray, NSString;

@interface CheckDownloadQueueOperation : ISOperation {

	long long _numberOfAvailableDownloads;
	long long _downloadQueueType;
	NSArray* _items;
	NSString* _storeCorrelationID;

}

@property (readonly) long long downloadQueueType;                       //@synthesize downloadQueueType=_downloadQueueType - In the implementation block
@property (readonly) long long numberOfAvailableDownloads;              //@synthesize numberOfAvailableDownloads=_numberOfAvailableDownloads - In the implementation block
@property (nonatomic,readonly) NSArray * items;                         //@synthesize items=_items - In the implementation block
@property (readonly) NSString * storeCorrelationID;                     //@synthesize storeCorrelationID=_storeCorrelationID - In the implementation block
-(void)_runPendingCancelDownloadOperations;
-(id)_newDownloadQueueOperation;
-(id)initWithDownloadQueueType:(long long)arg1 ;
-(long long)numberOfAvailableDownloads;
-(long long)downloadQueueType;
-(NSString *)storeCorrelationID;
-(id)init;
-(NSArray *)items;
-(void)run;
-(void)_setItems:(id)arg1 ;
@end
