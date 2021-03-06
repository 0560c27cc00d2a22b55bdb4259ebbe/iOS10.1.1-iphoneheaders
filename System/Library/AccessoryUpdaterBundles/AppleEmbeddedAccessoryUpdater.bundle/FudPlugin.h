/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessoryUpdaterBundles/AppleEmbeddedAccessoryUpdater.bundle/AppleEmbeddedAccessoryUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FudPlugin <NSObject,NSCoding>
@optional
+(BOOL)getEarlyBootList:(id)arg1 delegate:(id)arg2;
-(BOOL)shouldUpdateBeSilent:(id)arg1;

@required
-(void)finishWithOptions:(id)arg1;
-(void)findFirmwareWithOptions:(id)arg1 remote:(BOOL)arg2;
-(void)bootstrapWithOptions:(id)arg1;
-(void)prepareFirmwareWithOptions:(id)arg1;
-(void)applyFirmwareWithOptions:(id)arg1;
-(void)downloadFirmwareWithOptions:(id)arg1;
-(id)initWithDeviceClass:(id)arg1 delegate:(id)arg2 info:(id*)arg3 options:(id)arg4;
-(void)setDelegate:(id)arg1;

@end

