/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ABLE/ABLEMockCDAttributeProtocol.h>

@class CDDevice, CDAttribute;

@interface ABLEMockCDAttributeWithDevice : NSObject <ABLEMockCDAttributeProtocol> {

	CDDevice* _device;
	CDAttribute* _attribute;

}

@property (readonly) CDDevice * device;                    //@synthesize device=_device - In the implementation block
@property (readonly) CDAttribute * attribute;              //@synthesize attribute=_attribute - In the implementation block
-(id)initWithDevice:(id)arg1 attribute:(id)arg2 ;
-(id)repeatedStatistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3 ;
-(id)statistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3 ;
-(CDDevice *)device;
-(CDAttribute *)attribute;
@end

