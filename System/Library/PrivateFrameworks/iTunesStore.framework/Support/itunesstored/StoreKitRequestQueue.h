/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/RequestQueue.h>
#import <libobjc.A.dylib/ISSingleton.h>

@class NSString;

@interface StoreKitRequestQueue : RequestQueue <ISSingleton>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(void)requestProductsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)addOperation:(id)arg1 forMessage:(id)arg2 connection:(id)arg3 replyBlock:(/*^block*/id)arg4 ;
-(void)addOperation:(id)arg1 forClient:(id)arg2 withMessageBlock:(/*^block*/id)arg3 ;
-(id)init;
@end

