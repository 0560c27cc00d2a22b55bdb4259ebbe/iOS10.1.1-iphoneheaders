/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TimeSync-Structs.h>
#import <TimeSync/TSClock.h>

@interface TSKernelClock : TSClock {

	unsigned _service;
	unsigned _connection;
	IONotificationPortRef _notificationPort;

}

@property (nonatomic,readonly) unsigned service; 
@property (nonatomic,readonly) unsigned connection; 
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
+(id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1 ;
+(id)availableKernelClockIdentifiers;
-(void)dealloc;
-(unsigned)connection;
-(int)lockState;
-(unsigned)service;
-(id)initWithClockIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 withFlags:(unsigned*)arg2 ;
-(unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 withFlags:(unsigned*)arg2 ;
-(BOOL)convertFromMachAbsoluteTime:(unsigned long long*)arg1 toDomainTime:(unsigned long long*)arg2 withCount:(unsigned)arg3 ;
-(BOOL)convertFromDomainTime:(unsigned long long*)arg1 toMachAbsoluteTime:(unsigned long long*)arg2 withCount:(unsigned)arg3 ;
-(BOOL)getRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 machAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 withError:(id*)arg5 ;
-(double)hostRateRatio;
-(id)clockName;
-(BOOL)registerAsyncCallback;
-(void)_handleNotification:(unsigned)arg1 withArg1:(unsigned long long)arg2 andArg2:(unsigned long long)arg3 ;
-(BOOL)deregisterAsyncDCLCallback;
@end

