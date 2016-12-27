/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableSet, NSMutableDictionary, NSDictionary;

@interface IDSAppleIDNotification : NSObject {

	NSString* _appleID;
	NSString* _deviceName;
	NSString* _deviceModel;
	NSMutableSet* _aliases;
	NSMutableSet* _sessions;
	NSMutableSet* _serviceTypes;
	NSMutableDictionary* _sessionToBlockMap;

}

@property (nonatomic,retain) NSString * appleID;                            //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                         //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * deviceModel;                        //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,retain) NSMutableSet * aliases;                        //@synthesize aliases=_aliases - In the implementation block
@property (nonatomic,retain) NSMutableSet * sessions;                       //@synthesize sessions=_sessions - In the implementation block
@property (nonatomic,retain) NSMutableSet * serviceTypes;                   //@synthesize serviceTypes=_serviceTypes - In the implementation block
@property (nonatomic,retain) NSDictionary * sessionToBlockMap;              //@synthesize sessionToBlockMap=_sessionToBlockMap - In the implementation block
-(void)addServiceType:(id)arg1 ;
-(void)addCompletionBlock:(/*^block*/id)arg1 forSession:(id)arg2 ;
-(NSDictionary *)sessionToBlockMap;
-(void)setSessionToBlockMap:(NSDictionary *)arg1 ;
-(void)setSessions:(NSMutableSet *)arg1 ;
-(id)init;
-(NSMutableSet *)aliases;
-(void)addAlias:(id)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
-(NSString *)appleID;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)addSession:(id)arg1 ;
-(NSString *)deviceName;
-(void)setAliases:(NSMutableSet *)arg1 ;
-(NSMutableSet *)serviceTypes;
-(void)setServiceTypes:(NSMutableSet *)arg1 ;
-(NSMutableSet *)sessions;
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSString *)deviceModel;
@end

