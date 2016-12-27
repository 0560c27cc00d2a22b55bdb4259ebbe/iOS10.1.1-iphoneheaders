/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class NSMutableDictionary, NSNumberFormatter;

@interface IKFormatting : NSObject {

	NSMutableDictionary* _dateFormatters;
	os_unfair_lock_s _dateFormattersLock;
	NSMutableDictionary* _numberFormatters;
	os_unfair_lock_s _numberFormattersLock;
	NSNumberFormatter* _durationFormatter;
	NSNumberFormatter* _durationPaddedFormatter;

}
+(id)sharedInstance;
+(id)isoDateFormatter;
+(id)rfc1123DateFormatter;
-(id)init;
-(id)formatDate:(id)arg1 format:(id)arg2 ;
-(id)formatDuration:(id)arg1 ;
-(id)formatNumber:(id)arg1 style:(id)arg2 postiveFormat:(id)arg3 negativeFormat:(id)arg4 ;
@end

