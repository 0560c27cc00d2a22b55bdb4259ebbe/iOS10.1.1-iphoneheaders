/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UAAdvertisableItem.h>

@interface UADebugAdvertisableItem : UAAdvertisableItem {

	unsigned long long _debugType;

}

@property (assign) unsigned long long debugType;              //@synthesize debugType=_debugType - In the implementation block
-(void)setDebugType:(unsigned long long)arg1 ;
-(unsigned long long)debugType;
-(id)initWithType:(unsigned long long)arg1 manager:(id)arg2 ;
-(id)advertisingBytes;
@end

