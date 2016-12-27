/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSCopying;
@class HMCharacteristic;

@interface HMCharacteristicEvent : HMEvent <NSSecureCoding> {

	id<NSCopying> _triggerValue;
	HMCharacteristic* _characteristic;

}

@property (nonatomic,copy) id<NSCopying> triggerValue;                       //@synthesize triggerValue=_triggerValue - In the implementation block
@property (nonatomic,retain) HMCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createWithDictionary:(id)arg1 home:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCharacteristic:(id)arg1 triggerValue:(id)arg2 allowWithoutNotification:(BOOL)arg3 ;
-(void)_updateTriggerValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateTriggerValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMCharacteristic *)characteristic;
-(id)_serializeForAdd;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(id<NSCopying>)triggerValue;
-(void)setTriggerValue:(id<NSCopying>)arg1 ;
-(id)initWithCharacteristic:(id)arg1 triggerValue:(id)arg2 ;
-(void)setCharacteristic:(HMCharacteristic *)arg1 ;
@end
