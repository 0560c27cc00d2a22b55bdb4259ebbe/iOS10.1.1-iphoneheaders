/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CoreRCHIDEvent : NSObject <NSSecureCoding, NSCopying> {

	IOHIDEventRef _event;
	IOHIDEventRef _3rdPartyChildEvent;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IOHIDEventRef)event;
-(BOOL)isRepeat;
-(id)initWithIOHIDEvent:(IOHIDEventRef)arg1 ;
-(id)initWithCommand:(unsigned long long)arg1 pressed:(BOOL)arg2 timestamp:(unsigned long long)arg3 ;
-(id)initKeyboardEventWithUsagePage:(unsigned)arg1 usageID:(unsigned)arg2 pressed:(BOOL)arg3 timestamp:(unsigned long long)arg4 ;
-(void)getCommand:(unsigned long long*)arg1 pressed:(BOOL*)arg2 ;
-(id)initWithCommand:(unsigned long long)arg1 pressed:(BOOL)arg2 ;
-(BOOL)isEqualToRCHIDEvent:(id)arg1 ;
-(BOOL)getCECUserControl:(CECUserControl*)arg1 pressed:(BOOL*)arg2 ;
-(id)initWithCECUserControl:(CECUserControl)arg1 pressed:(BOOL)arg2 ;
-(id)initWithCECDeckControlMode:(unsigned char)arg1 pressed:(BOOL)arg2 ;
-(id)initWithCECPlayMode:(unsigned char)arg1 pressed:(BOOL)arg2 ;
@end

