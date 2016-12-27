/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@interface IDSStunCandidate : NSObject {

	BOOL _active;
	unsigned long long _type;
	unsigned long long _priority;
	long long _transport;
	int _index;
	sockaddr_storage _address;
	sockaddr_storage _external;
	unsigned long long _radioAccessTechnology;
	unsigned _mtu;

}

@property (assign,nonatomic) BOOL active;                                           //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                         //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) long long transport;                                 //@synthesize transport=_transport - In the implementation block
@property (nonatomic,readonly) int index;                                           //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) const sockaddr* address; 
@property (assign,nonatomic) sockaddr* external; 
@property (assign,nonatomic) unsigned long long radioAccessTechnology;              //@synthesize radioAccessTechnology=_radioAccessTechnology - In the implementation block
@property (assign,nonatomic) unsigned mtu;                                          //@synthesize mtu=_mtu - In the implementation block
+(id)candidateWithType:(unsigned long long)arg1 transport:(long long)arg2 radioAccessTechnology:(unsigned long long)arg3 mtu:(unsigned)arg4 index:(int)arg5 address:(sockaddr*)arg6 external:(sockaddr*)arg7 ;
-(void)setExternal:(sockaddr*)arg1 ;
-(BOOL)isCellularStunCandidate;
-(void)updateTransport:(long long)arg1 ;
-(void)setRadioAccessTechnology:(unsigned long long)arg1 ;
-(void)setMtu:(unsigned)arg1 ;
-(BOOL)isCompatibleWithStunCandidate:(id)arg1 ;
-(BOOL)hasNATIPv4Address;
-(BOOL)hasNATIPv4External;
-(BOOL)isLinkLocalStunCandidate;
-(BOOL)isRelayStunCandidate;
-(id)initWithType:(unsigned long long)arg1 transport:(long long)arg2 radioAccessTechnology:(unsigned long long)arg3 mtu:(unsigned)arg4 index:(int)arg5 address:(sockaddr*)arg6 external:(sockaddr*)arg7 ;
-(BOOL)isServerReflexiveStunCandidate;
-(unsigned long long)radioAccessTechnology;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)priority;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(int)index;
-(sockaddr*)external;
-(const sockaddr*)address;
-(long long)transport;
-(unsigned)mtu;
@end

