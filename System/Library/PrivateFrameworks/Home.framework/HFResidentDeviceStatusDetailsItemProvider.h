/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@class NSMutableSet;

@interface HFResidentDeviceStatusDetailsItemProvider : HFItemProvider {

	NSMutableSet* _residentDeviceItems;

}

@property (nonatomic,retain) NSMutableSet * residentDeviceItems;              //@synthesize residentDeviceItems=_residentDeviceItems - In the implementation block
-(id)items;
-(id)initWithHome:(id)arg1 ;
-(void)setResidentDeviceItems:(NSMutableSet *)arg1 ;
-(NSMutableSet *)residentDeviceItems;
-(id)reloadItems;
-(id)invalidationReasons;
@end

