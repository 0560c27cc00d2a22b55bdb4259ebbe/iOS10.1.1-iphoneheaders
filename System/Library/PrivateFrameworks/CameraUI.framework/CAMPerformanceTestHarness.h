/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface CAMPerformanceTestHarness : NSObject {

	NSString* _testName;
	NSMutableArray* _modeChangeListeners;
	/*^block*/id _testCleanupBlock;

}

@property (nonatomic,copy) id testCleanupBlock;              //@synthesize testCleanupBlock=_testCleanupBlock - In the implementation block
-(void)didChangeToMode:(long long)arg1 device:(long long)arg2 ;
-(void)setTestCleanupBlock:(id)arg1 ;
-(void)runConfiguredTest;
-(id)initWithTestName:(id)arg1 ;
-(void)_registerChangeBlock:(/*^block*/id)arg1 forMode:(long long)arg2 devicePosition:(long long)arg3 ;
-(void)_finishAndCleanupConfiguredTest;
-(id)testCleanupBlock;
@end

