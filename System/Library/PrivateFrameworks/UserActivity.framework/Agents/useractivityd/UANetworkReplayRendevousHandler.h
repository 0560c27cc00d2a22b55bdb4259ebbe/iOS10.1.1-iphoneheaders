/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UACornerActionManagerHandler.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>
#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>

@class NSString, NSNetServiceBrowser, NSNetService;

@interface UANetworkReplayRendevousHandler : UACornerActionManagerHandler <NSNetServiceDelegate, NSNetServiceBrowserDelegate> {

	NSString* name;
	NSNetServiceBrowser* _browserLookup;
	NSString* _type;
	NSString* _domain;
	NSNetService* _listeningService;

}

@property (retain) NSNetServiceBrowser * browserLookup;              //@synthesize browserLookup=_browserLookup - In the implementation block
@property (copy) NSString * name; 
@property (copy) NSString * type;                                    //@synthesize type=_type - In the implementation block
@property (copy) NSString * domain;                                  //@synthesize domain=_domain - In the implementation block
@property (retain) NSNetService * listeningService;                  //@synthesize listeningService=_listeningService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNetServiceBrowser *)browserLookup;
-(void)setBrowserLookup:(NSNetServiceBrowser *)arg1 ;
-(BOOL)scanForPeersOfType:(id)arg1 domain:(id)arg2 ;
-(NSNetService *)listeningService;
-(void)setListeningService:(NSNetService *)arg1 ;
-(BOOL)listenForIncomingConnections:(id)arg1 port:(int)arg2 type:(id)arg3 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(BOOL)suspend;
-(NSString *)domain;
-(BOOL)resume;
-(id)initWithManager:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceWillPublish:(id)arg1 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netServiceWillResolve:(id)arg1 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3 ;
-(id)statusString;
-(void)setDomain:(NSString *)arg1 ;
@end

