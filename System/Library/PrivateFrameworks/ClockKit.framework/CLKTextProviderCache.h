/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ClockKit/ClockKit-Structs.h>
@class NSMutableDictionary;

@interface CLKTextProviderCache : NSObject {

	NSMutableDictionary* _cachesByStyle;

}
-(id)attributedStringAndSize:(CGSize*)arg1 forMaxWidth:(double)arg2 withStyle:(id)arg3 generator:(/*^block*/id)arg4 ;
-(id)attributedStringForIndex:(unsigned long long)arg1 withStyle:(id)arg2 generator:(/*^block*/id)arg3 ;
-(id)_cacheForStyle:(id)arg1 ;
@end

