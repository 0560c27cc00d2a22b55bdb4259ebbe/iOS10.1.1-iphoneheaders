/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationRegistrationContainer.h>

@interface _CFXNotificationNameRegistration : _CFXNotificationRegistrationContainer {

	CFStringRef _name;

}

@property (readonly) CFStringRef name;              //@synthesize name=_name - In the implementation block
+(const SCD_Struct_CF1*)keyCallbacks;
+(Class)childClass;
-(void)find:(void*)arg1 observer:(void*)arg2 matching:(SCD_Struct_CF10*)arg3 ;
-(void)match:(void*)arg1 observer:(void*)arg2 matching:(SCD_Struct_CF10*)arg3 ;
-(id)initWithName:(CFStringRef)arg1 options:(unsigned long long)arg2 parent:(id)arg3 ;
-(id)acquireObject:(void*)arg1 ;
-(void)dealloc;
-(CFStringRef)name;
-(void*)key;
-(BOOL)enumerate:(/*^block*/id)arg1 ;
@end

