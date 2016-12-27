/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ButtonResolver/ButtonResolver-Structs.h>
@class NSMutableDictionary;

@interface BRStateData : NSObject {

	BOOL _enabled;
	unsigned long long _state;
	NSMutableDictionary* _speedConfigs;
	NSMutableDictionary* _speedSlots;

}

@property (assign,nonatomic) unsigned long long state;                      //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                  //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * speedConfigs;              //@synthesize speedConfigs=_speedConfigs - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * speedSlots;                //@synthesize speedSlots=_speedSlots - In the implementation block
@property (nonatomic,readonly) id propertyList; 
-(BOOL)enabled;
-(void)dealloc;
-(id)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)propertyList;
-(NSMutableDictionary *)speedConfigs;
-(NSMutableDictionary *)speedSlots;
-(id)initWithStateData:(id)arg1 ;
-(id)initWithState:(unsigned long long)arg1 enabled:(BOOL)arg2 ;
-(void)setSpeedConfigs:(NSMutableDictionary *)arg1 ;
-(void)setSpeedSlots:(NSMutableDictionary *)arg1 ;
@end

