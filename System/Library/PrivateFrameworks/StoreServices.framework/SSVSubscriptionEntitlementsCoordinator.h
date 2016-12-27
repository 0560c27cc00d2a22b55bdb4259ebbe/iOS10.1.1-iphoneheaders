/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSVSubscriptionEntitlements, SSXPCConnection, NSObject;

@interface SSVSubscriptionEntitlementsCoordinator : NSObject {

	SSVSubscriptionEntitlements* _cachedEntitlements;
	SSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)sharedCoordinator;
-(id)_cachedSubscriptionEntitlements;
-(id)_loadSubscriptionEntitlementsIgnoreCaches:(BOOL)arg1 error:(id*)arg2 ;
-(void)_setCachedSubscriptionEntitlements:(id)arg1 ;
-(void)getSubscriptionEntitlements:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_connection;
-(void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)arg1 entitlementsBlock:(/*^block*/id)arg2 ;
@end

