/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSLock;

@interface ISClient : NSObject {

	NSString* _appleClientVersions;
	NSString* _appleClientApplication;
	NSString* _identifier;
	NSString* _partnerHeader;
	NSString* _userAgent;
	NSDictionary* _clientProvidedHeaders;
	NSLock* _lock;

}

@property (nonatomic,retain) NSLock * lock;                         //@synthesize lock=_lock - In the implementation block
@property (copy) NSString * appleClientApplication;                 //@synthesize appleClientApplication=_appleClientApplication - In the implementation block
@property (copy) NSString * userAgent;                              //@synthesize userAgent=_userAgent - In the implementation block
@property (readonly) NSString * appleClientVersions;                //@synthesize appleClientVersions=_appleClientVersions - In the implementation block
@property (copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * partnerHeader;                          //@synthesize partnerHeader=_partnerHeader - In the implementation block
@property (copy) NSDictionary * clientProvidedHeaders;              //@synthesize clientProvidedHeaders=_clientProvidedHeaders - In the implementation block
+(id)currentClient;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSLock *)lock;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)appleClientApplication;
-(NSString *)appleClientVersions;
-(void)setPartnerHeader:(NSString *)arg1 ;
-(void)_softwareMapInvalidatedNotification:(id)arg1 ;
-(id)_appleClientVersions;
-(void)setClientProvidedHeaders:(NSDictionary *)arg1 ;
-(id)localStoreFrontID;
-(NSString *)partnerHeader;
-(void)setAppleClientApplication:(NSString *)arg1 ;
-(NSDictionary *)clientProvidedHeaders;
-(void)setLock:(NSLock *)arg1 ;
@end

