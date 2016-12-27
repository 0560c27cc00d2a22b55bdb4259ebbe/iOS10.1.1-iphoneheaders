/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMQueryVideoDimensionsCommand : CAMCaptureCommand {

	/*^block*/id __completionBlock;

}

@property (setter=_setCompletionBlock:,nonatomic,copy) id _completionBlock;              //@synthesize _completionBlock=__completionBlock - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_completionBlock;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_setCompletionBlock:(/*^block*/id)arg1 ;
-(void)executeWithContext:(id)arg1 ;
@end

