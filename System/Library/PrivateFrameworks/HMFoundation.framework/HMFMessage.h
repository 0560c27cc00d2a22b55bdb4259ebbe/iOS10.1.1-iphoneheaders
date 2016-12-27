/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class HMFMessageInternal, NSUUID, HMFMessageDestination, NSDictionary, NSString, HMFMessageTransport;

@interface HMFMessage : NSObject <NSCopying, NSMutableCopying> {

	BOOL _remoteSource;
	BOOL _internalMessage;
	BOOL _entitledMessage;
	BOOL _locationAuthorizedMessage;
	HMFMessageInternal* _internal;

}

@property (nonatomic,copy) NSUUID * identifier; 
@property (nonatomic,retain) HMFMessageDestination * destination; 
@property (nonatomic,copy) NSDictionary * messagePayload; 
@property (nonatomic,copy) id responseHandler; 
@property (getter=isInternalMessage,nonatomic,readonly) BOOL internalMessage;                                  //@synthesize internalMessage=_internalMessage - In the implementation block
@property (getter=isEntitledMessage,nonatomic,readonly) BOOL entitledMessage;                                  //@synthesize entitledMessage=_entitledMessage - In the implementation block
@property (getter=isLocationAuthorizedMessage,nonatomic,readonly) BOOL locationAuthorizedMessage;              //@synthesize locationAuthorizedMessage=_locationAuthorizedMessage - In the implementation block
@property (nonatomic,readonly) HMFMessageInternal * internal;                                                  //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,__weak,readonly) HMFMessageTransport * transport; 
@property (getter=isRemoteSource,nonatomic,readonly) BOOL remoteSource;                                        //@synthesize remoteSource=_remoteSource - In the implementation block
+(id)shortDescription;
+(id)messageWithName:(id)arg1 messagePayload:(id)arg2 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 ;
+(id)entitledMessageWithName:(id)arg1 messagePayload:(id)arg2 ;
+(id)messageWithMessage:(id)arg1 messagePayload:(id)arg2 ;
+(id)messageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 remoteSource:(BOOL)arg4 ;
+(id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
+(id)entitledMessageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 ;
+(id)messageWithName:(id)arg1 messagePayload:(id)arg2 transport:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
+(id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 ;
+(id)messageWithMessage:(id)arg1 messagePayload:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
+(id)internalMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3 ;
+(id)locationAuthorizedMessageWithName:(id)arg1 messagePayload:(id)arg2 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
+(id)messageWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4 ;
+(id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 remoteSource:(BOOL)arg4 responseHandler:(/*^block*/id)arg5 ;
-(id)init;
-(id)description;
-(id)debugDescription;
-(NSString *)name;
-(NSUUID *)identifier;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(HMFMessageDestination *)destination;
-(void)setDestination:(HMFMessageDestination *)arg1 ;
-(id)shortDescription;
-(id)dictionaryForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)locationForKey:(id)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(id)dateForKey:(id)arg1 ;
-(HMFMessageInternal *)internal;
-(id)numberForKey:(id)arg1 ;
-(id)uuidForKey:(id)arg1 ;
-(NSDictionary *)messagePayload;
-(BOOL)isRemoteSource;
-(BOOL)isRemoteSource;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(BOOL)boolForKey:(id)arg1 keyPresent:(BOOL*)arg2 ;
-(id)predicateForKey:(id)arg1 ;
-(id)arrayOfDateComponentsForKey:(id)arg1 ;
-(id)timeZoneForKey:(id)arg1 ;
-(id)dateComponentsForKey:(id)arg1 ;
-(HMFMessageTransport *)transport;
-(void)setMessagePayload:(NSDictionary *)arg1 ;
-(id)uuidFromRemoteMessageForKey:(id)arg1 ;
-(BOOL)isInternalMessage;
-(BOOL)isInternalMessage;
-(BOOL)isEntitledMessage;
-(BOOL)isEntitledMessage;
-(BOOL)isLocationAuthorizedMessage;
-(BOOL)isLocationAuthorizedMessage;
-(id)errorForKey:(id)arg1 ;
-(id)initWithName:(id)arg1 destination:(id)arg2 payload:(id)arg3 ;
-(id)dataForKey:(id)arg1 ;
-(void)setInternalMessage:(BOOL)arg1 ;
-(void)setEntitledMessage:(BOOL)arg1 ;
-(void)setLocationAuthorizedMessage:(BOOL)arg1 ;
-(void)__initWithInternalMessage:(id)arg1 ;
-(id)initWithInternalMessage:(id)arg1 ;
-(id)initWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4 responseHandler:(/*^block*/id)arg5 remoteSource:(BOOL)arg6 internalMessage:(BOOL)arg7 entitledMessage:(BOOL)arg8 locationAuthorizedMessage:(BOOL)arg9 ;
-(id)nullForKey:(id)arg1 ;
-(id)calendarForKey:(id)arg1 ;
@end

