/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol SBSHardwareButtonEventConsuming;
@class SBSHardwareButtonService, NSString;

@interface _SBSHardwareButtonEventConsumerInfo : NSObject <BSInvalidatable> {

	BOOL _valid;
	SBSHardwareButtonService* _service;
	id<SBSHardwareButtonEventConsuming> _consumer;
	unsigned long long _eventMask;
	long long _eventPriority;

}

@property (assign,getter=isValid,nonatomic) BOOL valid;                                 //@synthesize valid=_valid - In the implementation block
@property (assign,nonatomic,__weak) SBSHardwareButtonService * service;                 //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) id<SBSHardwareButtonEventConsuming> consumer;              //@synthesize consumer=_consumer - In the implementation block
@property (assign,nonatomic) unsigned long long eventMask;                              //@synthesize eventMask=_eventMask - In the implementation block
@property (assign,nonatomic) long long eventPriority;                                   //@synthesize eventPriority=_eventPriority - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)infoWithConsumer:(id)arg1 ;
-(long long)eventPriority;
-(void)setEventPriority:(long long)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(BOOL)isValid;
-(unsigned long long)eventMask;
-(void)setEventMask:(unsigned long long)arg1 ;
-(void)setConsumer:(id<SBSHardwareButtonEventConsuming>)arg1 ;
-(id<SBSHardwareButtonEventConsuming>)consumer;
-(void)setValid:(BOOL)arg1 ;
-(void)setService:(SBSHardwareButtonService *)arg1 ;
-(SBSHardwareButtonService *)service;
@end

