/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CAMFormattingManager : NSObject {

	BOOL _wantsCustomKerning;
	BOOL _supportsVerticalText;

}

@property (nonatomic,readonly) BOOL wantsCustomKerning;                //@synthesize wantsCustomKerning=_wantsCustomKerning - In the implementation block
@property (nonatomic,readonly) BOOL supportsVerticalText;              //@synthesize supportsVerticalText=_supportsVerticalText - In the implementation block
+(id)sharedManager;
-(id)init;
-(BOOL)wantsCustomKerning;
-(void)_commonCAMFormattingManagerInitialization;
-(BOOL)supportsVerticalText;
@end

