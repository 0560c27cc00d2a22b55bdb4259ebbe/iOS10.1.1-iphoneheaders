/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>

@protocol HMFNetServiceBrowserDelegate, OS_dispatch_queue;
@class NSHashTable, NSString, NSObject, NSNetServiceBrowser, NSArray;

@interface HMFNetServiceBrowser : NSObject <NSNetServiceBrowserDelegate> {

	NSHashTable* _cachedNetServices;
	BOOL _shouldCache;
	BOOL _browsing;
	id<HMFNetServiceBrowserDelegate> _delegate;
	NSString* _domain;
	NSString* _serviceType;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSNetServiceBrowser* _internal;
	/*^block*/id _browseBlock;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) NSNetServiceBrowser * internal;                          //@synthesize internal=_internal - In the implementation block
@property (assign,getter=isBrowsing,nonatomic) BOOL browsing;                           //@synthesize browsing=_browsing - In the implementation block
@property (nonatomic,copy) id browseBlock;                                              //@synthesize browseBlock=_browseBlock - In the implementation block
@property (__weak) id<HMFNetServiceBrowserDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * domain;                                  //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceType;                             //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) BOOL shouldCache;                                          //@synthesize shouldCache=_shouldCache - In the implementation block
@property (nonatomic,copy,readonly) NSArray * cachedNetServices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
-(id)init;
-(void)setDelegate:(id<HMFNetServiceBrowserDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<HMFNetServiceBrowserDelegate>)delegate;
-(NSString *)domain;
-(BOOL)shouldCache;
-(id)shortDescription;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSString *)serviceType;
-(void)netServiceBrowserWillSearch:(id)arg1 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveDomain:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)setBrowsing:(BOOL)arg1 ;
-(BOOL)isBrowsing;
-(NSNetServiceBrowser *)internal;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithDomain:(id)arg1 serviceType:(id)arg2 ;
-(NSArray *)cachedNetServices;
-(void)startBrowsingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopBrowsing;
-(void)setBrowseBlock:(id)arg1 ;
-(void)_stopBrowsingWithError:(id)arg1 ;
-(void)notifyDelegateBrowserStoppedWithError:(id)arg1 ;
-(id)browseBlock;
-(void)addNetServiceToCache:(id)arg1 ;
-(void)notifyDelegateOfAddedService:(id)arg1 ;
-(void)removeNetServiceFromCache:(id)arg1 ;
-(void)notifyDelegateOfRemovedService:(id)arg1 ;
-(void)setShouldCache:(BOOL)arg1 ;
@end

