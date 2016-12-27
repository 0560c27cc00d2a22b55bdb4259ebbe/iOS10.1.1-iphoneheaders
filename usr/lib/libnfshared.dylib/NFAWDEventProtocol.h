/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:40:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NFAWDEventProtocol <NSObject>
@optional
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;
-(unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
-(void)updateExceptionUUID:(id)arg1;
-(unsigned long long)updateVASTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
-(unsigned long long)updateCardIngestionSessionStateChangeInfoWithPreviousState:(unsigned long long)arg1;
-(unsigned long long)updateExpressFelicaStateInfoWithPreviousState:(unsigned long long)arg1;

@end

