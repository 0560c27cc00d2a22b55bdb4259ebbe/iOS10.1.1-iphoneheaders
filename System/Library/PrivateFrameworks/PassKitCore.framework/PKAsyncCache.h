/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSCache, NSMapTable, NSObject, NSMutableDictionary;

@interface PKAsyncCache : NSObject {

	NSCache* _itemByKey;
	NSMapTable* _weakItemByKey;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _deliveryBlocksByKey;

}
-(id)init;
-(id)initWithCache:(id)arg1 ;
-(void)_queue_executeDeliveryBlocksForKey:(id)arg1 withItem:(id)arg2 ;
-(void)_executeRetrievalBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)retrieveItemForKey:(id)arg1 retrievalBlock:(/*^block*/id)arg2 deliveryBlock:(/*^block*/id)arg3 ;
@end

