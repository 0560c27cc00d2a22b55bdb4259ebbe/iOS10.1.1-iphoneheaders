/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SBSUICarDisplayNowPlayingHostInterface.h>
#import <libobjc.A.dylib/SBSUICarDisplayNowPlayingInterface.h>

@protocol SBStarkNowPlayingServiceDelegate;
@interface SBStarkNowPlayingService : _UIRemoteViewController <SBSUICarDisplayNowPlayingHostInterface, SBSUICarDisplayNowPlayingInterface> {

	id<SBStarkNowPlayingServiceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBStarkNowPlayingServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)setDelegate:(id<SBStarkNowPlayingServiceDelegate>)arg1 ;
-(id<SBStarkNowPlayingServiceDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)switchToState:(id)arg1 ;
@end

