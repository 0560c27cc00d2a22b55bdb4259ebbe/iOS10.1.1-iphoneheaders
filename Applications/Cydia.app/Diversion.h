/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Cydia/Cydia-Structs.h>
@interface Diversion : NSObject {

	RegEx* pattern_;
	MenesObjectHandle<NSString, 0> key_;
	MenesObjectHandle<NSString, 0> format_;

}
+(id)divertURL:(id)arg1 ;
-(id)divert:(id)arg1 ;
-(id)initWithFrom:(id)arg1 to:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)key;
@end

